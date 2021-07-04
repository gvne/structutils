#ifndef ASTRUCT_ASTRUCT_H_
#define ASTRUCT_ASTRUCT_H_

#include "structutils/arg_count.h"

#include "astruct/tuple.h"
#include "astruct/multi_declare.h"

#define ASTRUCT_TYPES__(N, ...) ASTRUCT_TYPE_##N(__VA_ARGS__)
#define ASTRUCT_TYPES_(...) ASTRUCT_TYPES__(__VA_ARGS__)
#define ASTRUCT_TYPES(...) ASTRUCT_TYPES_(STRUCTUTILS_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)

#define ASTRUCT_VARIABLES__(N, ...) ASTRUCT_DECLARE_##N(0, __VA_ARGS__)
#define ASTRUCT_VARIABLES_(...) ASTRUCT_VARIABLES__(__VA_ARGS__)
#define ASTRUCT_VARIABLES(...) ASTRUCT_VARIABLES_(STRUCTUTILS_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)

#define ASTRUCT(name, ...) \
  struct name : public astruct::Tuple<ASTRUCT_TYPES(__VA_ARGS__)> { ASTRUCT_VARIABLES(__VA_ARGS__) }

#endif  // ASTRUCT_ASTRUCT_H_
