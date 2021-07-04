#ifndef ASTRUCT_TUPLE_H_
#define ASTRUCT_TUPLE_H_

#include <cstdint>
#include <vector>

namespace astruct {
  // ---------------------------------
  template <typename... T>
  struct SizeSum {};

  template <typename T, typename... Other>
  struct SizeSum<T, Other...> {
    static const std::size_t value = sizeof(T) + SizeSum<Other...>::value;
  };

  template <typename T>
  struct SizeSum<T> {
    static const std::size_t value = sizeof(T);
  };
  // ---------------------------------

  // ---------------------------------
  template <std::size_t index, typename... T>
  struct Getter {};

  template <std::size_t index, typename T, typename... Other>
  struct Getter<index, T, Other...> {
    static auto Get(uint8_t* data) {
      return Getter<index - 1, Other...>::Get(data + sizeof(T));
    }
  };

  template <typename T, typename... Other>
  struct Getter<0, T, Other...> {
    static auto Get(uint8_t* data) {
      return reinterpret_cast<T*>(data);
    }
  };

  template <typename T>
  struct Getter<0, T> {
    static auto Get(uint8_t* data) {
      return reinterpret_cast<T*>(data);
    }
  };
  // ---------------------------------

  template <typename... T>
  class Tuple {
   public:
    struct Size {
      static constexpr std::size_t value = SizeSum<T...>::value;
    };
    Tuple() : data_(Tuple::Size::value) {}

    const uint8_t* data() const { return data_.data(); }
    uint8_t* data() { return data_.data(); }
    std::size_t size() const { return data_.size(); }

    template <std::size_t index>
    auto& Get() {
      return *Getter<index, T...>::Get(data_.data());
    }

   private:
    std::vector<uint8_t> data_;
  };
  // ---------------------------------

}  // namespace astruct

#endif  // ASTRUCT_TUPLE_H_
