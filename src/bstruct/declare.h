#ifndef BSTRUCT_DECLARE_H_
#define BSTRUCT_DECLARE_H_

#define BSTRUCT_FIRST_OF_TUPLE(first, second, third) first
#define BSTRUCT_SECOND_OF_TUPLE(first, second, third) second
#define BSTRUCT_THIRD_OF_TUPLE(first, second, third) third

#define BSTRUCT_ELEMENT(size_type_and_name) \
  bstruct::Element<BSTRUCT_FIRST_OF_TUPLE size_type_and_name, BSTRUCT_SECOND_OF_TUPLE size_type_and_name>

#define BSTRUCT_GETSET_UNPACKED_(index, type, name) \
  void set_##name(type value) { Base:: template Set<index>(value); } \
  type name() const { return Base::template Get<index>(); }
#define BSTRUCT_GETSET_UNPACKED(...) BSTRUCT_GETSET_UNPACKED_(__VA_ARGS__)
#define BSTRUCT_GETSET(index, size_type_and_name) \
  BSTRUCT_GETSET_UNPACKED(index, BSTRUCT_SECOND_OF_TUPLE size_type_and_name, BSTRUCT_THIRD_OF_TUPLE size_type_and_name)

#endif  // BSTRUCT_DECLARE_H_
