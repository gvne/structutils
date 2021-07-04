#ifndef BSTRUCT_TUPLE_H_
#define BSTRUCT_TUPLE_H_

#include <tuple>
#include <bitset>

namespace bstruct {

// -----------------------
template <std::size_t Size, typename T>
struct Element {
  static const std::size_t size = Size;
  using Type = T;
};
// -----------------------

// -----------------------
// -- Get the sum of the size of elements at given indexes
template <typename TupleType, typename IndexSequence>
struct ElementsSizeSum {};

template <typename TupleType, std::size_t FirstIndex, std::size_t... OtherIndexes>
struct ElementsSizeSum<TupleType, std::index_sequence<FirstIndex, OtherIndexes...>> {
  static constexpr std::size_t value = \
    std::tuple_element<FirstIndex, TupleType>::type::size + \
    ElementsSizeSum<TupleType, std::index_sequence<OtherIndexes...>>::value;
};

template <typename TupleType, std::size_t LastIndex>
struct ElementsSizeSum<TupleType, std::index_sequence<LastIndex>> {
  static constexpr std::size_t value = std::tuple_element<LastIndex, TupleType>::type::size;
};

template <typename TupleType>
struct ElementsSizeSum<TupleType, std::index_sequence<>> {
  static constexpr std::size_t value = 0;
};
// -----------------------

// -----------------------
// -- get the first index of the desired element
template<std::size_t ElementIndex, typename... E>
struct ElementBitIndex {
  static constexpr auto value = ElementsSizeSum<
        std::tuple<E...>,
        decltype(std::make_index_sequence<ElementIndex>())
      >::value;
};
// -----------------------

template <typename... E>
class Tuple {
 public:
  using TupleType = std::tuple<E...>;
  static constexpr std::size_t element_count = std::tuple_size<TupleType>::value;
  static constexpr std::size_t  content_size = \
    ElementsSizeSum<TupleType, decltype(std::make_index_sequence<element_count>())>::value;
  static_assert(content_size % 8 == 0, "We can't unpack structures that aren't encoded on a round number of bytes");

  template <std::size_t Index>
  using TypeAt = typename std::tuple_element<Index, TupleType>::type::Type;

  explicit Tuple(unsigned long long value) : bitset_(value) {}

  unsigned long long value() const { return bitset_.to_ullong(); }
  void set_value(unsigned long long value) { bitset_ = value; }

  template<std::size_t Index>
  void Set(TypeAt<Index> value) {
    using Element = typename std::tuple_element<Index, TupleType>::type;
    std::bitset<Element::size> bits(value);
    auto first_bit_index = ElementBitIndex<Index, E...>::value;
    for (auto bit_index = 0; bit_index < Element::size; bit_index++) {
      Set(bitset_, bit_index + first_bit_index, bits, bit_index);
    }
  }

  template<std::size_t Index>
  TypeAt<Index> Get() const {
    using Element = typename std::tuple_element<Index, TupleType>::type;
    std::bitset<Element::size> bits(0);
    auto first_bit_index = ElementBitIndex<Index, E...>::value;
    for (auto bit_index = 0; bit_index < Element::size; bit_index++) {
      Set(bits, bit_index, bitset_, bit_index + first_bit_index);
    }
    return bits.to_ullong();
  }

 private:
  template<std::size_t dst_size, std::size_t src_size>
  static void Set(std::bitset<dst_size>& dst, std::size_t dst_index,
           const std::bitset<src_size>& src, std::size_t src_index) {
    // the bits are inverted. First bit is the least significant one is on the left: last in array
    dst[dst_size - dst_index - 1] = src[src_size - src_index - 1];
  }

  std::bitset<content_size> bitset_;
};

}  // namespace bstruct

#endif  // BSTRUCT_TUPLE_H_
