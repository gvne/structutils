#include <gtest/gtest.h>

#include "bstruct/tuple.h"
#include "bstruct/bstruct.h"

TEST(bstruct, tuple) {
  bstruct::Tuple<
    bstruct::Element<2, uint8_t>,
    bstruct::Element<1, bool>,
    bstruct::Element<1, bool>,
    bstruct::Element<4, uint8_t>,
    bstruct::Element<1, bool>,
    bstruct::Element<7, uint8_t>
  > s(0);

  s.Set<0>(2);
  s.Set<1>(true);
  s.Set<2>(false);
  s.Set<3>(2);
  s.Set<4>(true);
  s.Set<5>(0);

  // expected is
  // 2 => 10 | 1 => 1 | 0 => 0 | 2 => 0010 | 1 => 1 | 0 => 0000000
  // 1010001010000000 = 41600
  ASSERT_EQ(s.value(), 41600);

  s.Set<5>(11);
  // expected is
  // 2 => 10 | 1 => 1 | 0 => 0 | 2 => 0010 | 1 => 1 | 11 => 0001011
  // 1010001010001011 = 41611
  ASSERT_EQ(s.value(), 41611);

  bstruct::Tuple<
      bstruct::Element<2, uint8_t>,
      bstruct::Element<1, bool>,
      bstruct::Element<1, bool>,
      bstruct::Element<4, uint8_t>,
      bstruct::Element<1, bool>,
      bstruct::Element<7, uint8_t>
  > read_s(34991);

  // expected is
  // 10 0 0 1000 1 0101111
  // 10 => 2 | 0 => false | 0 => false | 1000 => 8 | 1 => true | 0101111 => 47
  ASSERT_EQ(read_s.Get<0>(), 2);
  ASSERT_EQ(read_s.Get<1>(), false);
  ASSERT_EQ(read_s.Get<2>(), false);
  ASSERT_EQ(read_s.Get<3>(), 8);
  ASSERT_EQ(read_s.Get<4>(), true);
  ASSERT_EQ(read_s.Get<5>(), 47);
}


// ------------------------
BSTRUCT(TestStruct,
    (2, uint8_t, version),
    (1, bool, padding),
    (1, bool, extension),
    (4, uint8_t, csrc_count),
    (1, bool, marker),
    (7, uint8_t, payload_type)
);

TEST(bstruct, bstruct) {
  TestStruct s(0);

  s.version();
  s.set_version(0);
}
