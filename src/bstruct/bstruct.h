#ifndef BSTRUCT_BSTRUCT_H_
#define BSTRUCT_BSTRUCT_H_

#include "bstruct/tuple.h"
#include "bstruct/multi_declare.h"
#include "structutils/arg_count.h"

#define BSTRUCT_ELEMENTS_HELPER(N, ...) BSTRUCT_ELEMENT_##N(__VA_ARGS__)
#define BSTRUCT_ELEMENTS_(...) BSTRUCT_ELEMENTS_HELPER(__VA_ARGS__)
// TODO: ARG_COUNT should be in a common package
#define BSTRUCT_ELEMENTS(...) BSTRUCT_ELEMENTS_(STRUCTUTILS_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)

#define BSTRUCT_GETSETS_HELPER(N, ...) BSTRUCT_GETSET_##N(0, __VA_ARGS__)
#define BSTRUCT_GETSETS_(...) BSTRUCT_GETSETS_HELPER(__VA_ARGS__)
#define BSTRUCT_GETSETS(...) BSTRUCT_GETSETS_(STRUCTUTILS_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)

#define BSTRUCT(name, ...) \
  class name : public bstruct::Tuple<BSTRUCT_ELEMENTS(__VA_ARGS__)> {  \
   public:                                                             \
    using Base = bstruct::Tuple<BSTRUCT_ELEMENTS(__VA_ARGS__)>;        \
    name() : Base(0) {}                                                \
    explicit name(unsigned long long value) : Base(value) {}           \
    BSTRUCT_GETSETS(__VA_ARGS__)                                       \
  }

#endif  // BSTRUCT_BSTRUCT_H_
