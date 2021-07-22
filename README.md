# StructUtils

## Note

This package relies heavily on variadics macros. For Microsoft Visual Studio we
rely on an update available in MSVC2019 >= 16.5. See (this)[https://docs.microsoft.com/en-us/cpp/preprocessor/preprocessor-experimental-overview?view=msvc-160]
for more.

## ASTRUCT: aligned structure

### Usage:

```c++
#include "astruct/astruct.h"

ASTRUCT(MyAlignedStructure
  (float, my_fist_element),
  (int, my_second_element)
);

...
MyAlignedStructure s;
s.my_first_element = 0;

...
memcpy(acontainer, s.data(), s.size());
```

### Motivation:

As describe [on that stackoverflow question](https://stackoverflow.com/questions/119123/why-isnt-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member)
a `struct` size can be larger than the sum of its members. In most cases, this is not a problem but on some occasion an
aligned structure is what you need.  
I experienced such a case when dealing with proprietary protocol over the serial interface.


## BSTRUCT: Bit structure

### Usage:

```c++
#include "bstruct/bstruct.h"

BSTRUCT(MyBitStructure
  (3, uint8_t, my_fist_element),  // unsigned value encoded on 3bits
  (1, bool, my_second_element),      // boolean value encoded on 1bits
  (4, int8_t, my_third_element)   // signed value encoded on 4 bits
);

...
MyBitStructure s;
s.set_my_first_element(0);
s.my_first_element();
```

### Motivation:

Most often, low level systems encode values in binary format. The most common case being the encoding of boolean values
over a single bit.  
Decoding such a structure can be very painful in C++. The BSTRUCT aims at making the conversion easier.
