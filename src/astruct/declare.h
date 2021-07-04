#ifndef ASTRUCT_DECLARE_H_
#define ASTRUCT_DECLARE_H_

#define ASTRUCT_FIRST_OF_PAIR(first, second) first
#define ASTRUCT_SECOND_OF_PAIR(first, second) second

#define ASTRUCT_DECLARE(index, type_and_name) \
  ASTRUCT_FIRST_OF_PAIR type_and_name & ASTRUCT_SECOND_OF_PAIR type_and_name = Get<index>();

#define ASTRUCT_TYPE(type_and_name) ASTRUCT_FIRST_OF_PAIR type_and_name

#endif  // ASTRUCT_DECLARE_H_
