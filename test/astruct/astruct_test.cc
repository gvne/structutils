#include <gtest/gtest.h>

#include <cstdint>
#include "structutils/arg_count.h"

#include "astruct/tuple.h"
#include "astruct/declare.h"
#include "astruct/multi_declare.h"
#include "astruct/astruct.h"

TEST(astruct, Tuple) {
  astruct::Tuple<int, float> t;

  ASSERT_EQ(t.size(), sizeof(int) + sizeof(float));

  t.Get<0>() = 10;
  t.Get<1>() = 7.869;
  int first;
  float second;

  size_t idx = 0;
  auto data = reinterpret_cast<char*>(t.data());
  memcpy(&first, data + idx, sizeof(int));
  idx += sizeof(int);
  memcpy(&second, data + idx, sizeof(float));
  idx += sizeof(int);

  ASSERT_EQ(first, 10);
  ASSERT_EQ(t.Get<0>(), first);

  ASSERT_FLOAT_EQ(second, 7.869);
  ASSERT_FLOAT_EQ(t.Get<1>(), second);
}

struct DeclarationTestStruct : astruct::Tuple<int, float> {
  ASTRUCT_DECLARE(0, (int, first));
  ASTRUCT_DECLARE(1, (float, second));
};

TEST(astruct, Declare) {
  DeclarationTestStruct s;
  s.first = 10;
  s.second = 7.869;

  ASSERT_EQ(s.Get<0>(), s.first);
  ASSERT_FLOAT_EQ(s.Get<1>(), s.second);
}

struct MultiDeclarationTestStruct : astruct::Tuple<int, float> {
  ASTRUCT_DECLARE_2(0,
    (int, first),
    (float, second)
  )
};

TEST(astruct, MultiDeclare) {
  MultiDeclarationTestStruct s;
  s.first = 10;
  s.second = 7.869;

  ASSERT_EQ(s.Get<0>(), s.first);
  ASSERT_FLOAT_EQ(s.Get<1>(), s.second);
}

TEST(astruct, ArgCount) {
  ASSERT_EQ(STRUCTUTILS_ARG_COUNT(a, b, c, d, e, f, g), 7);
}

ASTRUCT(AlignedStruct,
  (int, first),
  (float, second)
);

TEST(astruct, astruct) {
  AlignedStruct s;

  s.first = 10;
  s.second = 7.869;

  ASSERT_EQ(s.first, 10);
  ASSERT_FLOAT_EQ(s.second, 7.869);

  s.first = -785;
  ASSERT_EQ(s.first, -785);
  ASSERT_FLOAT_EQ(s.second, 7.869);

  s.second = -9968.11;
  ASSERT_EQ(s.first, -785);
  ASSERT_FLOAT_EQ(s.second, -9968.11);
}


#include "bstruct/bstruct.h"
ASTRUCT(RTPHeader,
  (uint16_t, flags),
  (uint16_t, sequence_number),
  (uint32_t, timestamp),
  (uint32_t, ssrc)
);

ASTRUCT(RTPExtensionHeader,
  (uint16_t, header_id),
  (uint16_t, header_length)
);

BSTRUCT(RTPFlags,
  (2, uint8_t, version),
  (1, bool, padding),
  (1, bool, extension),
  (4, uint8_t, csrc_count),
  (1, bool, marker),
  (7, uint8_t, payload_type)
);

TEST(astruct, array) {
  RTPHeader header;
  RTPExtensionHeader ext;
  RTPFlags flags;

  std::vector<uint32_t> csrc;
  std::vector<uint32_t> ext_data;

  // On reception
  {
    // p1.data(), p1.size() to initialize with received data
    // shift received data by header.size()
    flags.set_value(header.flags);
    // TODO: don't resize. use an array of fixed size instead and copy only available content
    csrc.resize(flags.csrc_count());
    // copy received data into csrc
    // shift received data by csrs size
    if (flags.extension()) {
      // copy received data into extension header
      // shift received data by extension header size
      // TODO: don't resize. use an array of fixed size instead and copy only available content
      ext_data.resize(ext.header_length);
      // copy received data into ext_data
      // shift received data by ext_data size
    }


  }






//  astruct::Tuple<
//      astruct::Value<int>,         // index 0 => int value
//      astruct::Value<uint16_t>,    // index 1 => uint16_t value that will be used as an array size
//      astruct::Value<float>,       // index 2 => float value
//      astruct::Array<uint8_t, 1>,  // an array with its size being the element at index 1
//      astruct::Value<bool>
//      > t;


}