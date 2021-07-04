#ifndef ASTRUCT_MULTI_DECLARE_H_
#define ASTRUCT_MULTI_DECLARE_H_

#include "astruct/declare.h"

#define ASTRUCT_DECLARE_1(index, type_and_name) ASTRUCT_DECLARE(index, type_and_name)
#define ASTRUCT_TYPE_1(type_and_name) ASTRUCT_TYPE(type_and_name)

// Note: In case 100 values isn't enough, the following lines were generated with python:
// for i in range(2, 100):
//   print("#define ASTRUCT_DECLARE_{}(index, type_and_name, ...) \\".format(i))
//   print("  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_{}(index + 1, __VA_ARGS__)".format(i-1))
//   print("#define ASTRUCT_TYPE_{}(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_{}(__VA_ARGS__)".format(i, i-1))

#define ASTRUCT_DECLARE_2(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_1(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_2(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_1(__VA_ARGS__)
#define ASTRUCT_DECLARE_3(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_2(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_3(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_2(__VA_ARGS__)
#define ASTRUCT_DECLARE_4(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_3(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_4(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_3(__VA_ARGS__)
#define ASTRUCT_DECLARE_5(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_4(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_5(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_4(__VA_ARGS__)
#define ASTRUCT_DECLARE_6(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_5(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_6(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_5(__VA_ARGS__)
#define ASTRUCT_DECLARE_7(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_6(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_7(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_6(__VA_ARGS__)
#define ASTRUCT_DECLARE_8(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_7(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_8(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_7(__VA_ARGS__)
#define ASTRUCT_DECLARE_9(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_8(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_9(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_8(__VA_ARGS__)
#define ASTRUCT_DECLARE_10(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_9(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_10(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_9(__VA_ARGS__)
#define ASTRUCT_DECLARE_11(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_10(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_11(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_10(__VA_ARGS__)
#define ASTRUCT_DECLARE_12(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_11(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_12(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_11(__VA_ARGS__)
#define ASTRUCT_DECLARE_13(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_12(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_13(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_12(__VA_ARGS__)
#define ASTRUCT_DECLARE_14(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_13(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_14(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_13(__VA_ARGS__)
#define ASTRUCT_DECLARE_15(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_14(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_15(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_14(__VA_ARGS__)
#define ASTRUCT_DECLARE_16(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_15(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_16(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_15(__VA_ARGS__)
#define ASTRUCT_DECLARE_17(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_16(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_17(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_16(__VA_ARGS__)
#define ASTRUCT_DECLARE_18(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_17(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_18(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_17(__VA_ARGS__)
#define ASTRUCT_DECLARE_19(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_18(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_19(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_18(__VA_ARGS__)
#define ASTRUCT_DECLARE_20(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_19(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_20(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_19(__VA_ARGS__)
#define ASTRUCT_DECLARE_21(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_20(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_21(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_20(__VA_ARGS__)
#define ASTRUCT_DECLARE_22(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_21(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_22(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_21(__VA_ARGS__)
#define ASTRUCT_DECLARE_23(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_22(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_23(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_22(__VA_ARGS__)
#define ASTRUCT_DECLARE_24(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_23(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_24(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_23(__VA_ARGS__)
#define ASTRUCT_DECLARE_25(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_24(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_25(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_24(__VA_ARGS__)
#define ASTRUCT_DECLARE_26(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_25(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_26(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_25(__VA_ARGS__)
#define ASTRUCT_DECLARE_27(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_26(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_27(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_26(__VA_ARGS__)
#define ASTRUCT_DECLARE_28(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_27(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_28(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_27(__VA_ARGS__)
#define ASTRUCT_DECLARE_29(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_28(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_29(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_28(__VA_ARGS__)
#define ASTRUCT_DECLARE_30(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_29(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_30(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_29(__VA_ARGS__)
#define ASTRUCT_DECLARE_31(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_30(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_31(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_30(__VA_ARGS__)
#define ASTRUCT_DECLARE_32(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_31(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_32(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_31(__VA_ARGS__)
#define ASTRUCT_DECLARE_33(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_32(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_33(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_32(__VA_ARGS__)
#define ASTRUCT_DECLARE_34(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_33(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_34(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_33(__VA_ARGS__)
#define ASTRUCT_DECLARE_35(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_34(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_35(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_34(__VA_ARGS__)
#define ASTRUCT_DECLARE_36(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_35(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_36(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_35(__VA_ARGS__)
#define ASTRUCT_DECLARE_37(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_36(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_37(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_36(__VA_ARGS__)
#define ASTRUCT_DECLARE_38(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_37(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_38(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_37(__VA_ARGS__)
#define ASTRUCT_DECLARE_39(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_38(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_39(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_38(__VA_ARGS__)
#define ASTRUCT_DECLARE_40(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_39(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_40(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_39(__VA_ARGS__)
#define ASTRUCT_DECLARE_41(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_40(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_41(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_40(__VA_ARGS__)
#define ASTRUCT_DECLARE_42(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_41(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_42(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_41(__VA_ARGS__)
#define ASTRUCT_DECLARE_43(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_42(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_43(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_42(__VA_ARGS__)
#define ASTRUCT_DECLARE_44(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_43(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_44(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_43(__VA_ARGS__)
#define ASTRUCT_DECLARE_45(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_44(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_45(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_44(__VA_ARGS__)
#define ASTRUCT_DECLARE_46(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_45(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_46(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_45(__VA_ARGS__)
#define ASTRUCT_DECLARE_47(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_46(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_47(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_46(__VA_ARGS__)
#define ASTRUCT_DECLARE_48(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_47(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_48(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_47(__VA_ARGS__)
#define ASTRUCT_DECLARE_49(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_48(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_49(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_48(__VA_ARGS__)
#define ASTRUCT_DECLARE_50(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_49(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_50(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_49(__VA_ARGS__)
#define ASTRUCT_DECLARE_51(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_50(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_51(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_50(__VA_ARGS__)
#define ASTRUCT_DECLARE_52(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_51(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_52(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_51(__VA_ARGS__)
#define ASTRUCT_DECLARE_53(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_52(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_53(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_52(__VA_ARGS__)
#define ASTRUCT_DECLARE_54(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_53(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_54(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_53(__VA_ARGS__)
#define ASTRUCT_DECLARE_55(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_54(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_55(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_54(__VA_ARGS__)
#define ASTRUCT_DECLARE_56(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_55(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_56(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_55(__VA_ARGS__)
#define ASTRUCT_DECLARE_57(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_56(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_57(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_56(__VA_ARGS__)
#define ASTRUCT_DECLARE_58(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_57(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_58(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_57(__VA_ARGS__)
#define ASTRUCT_DECLARE_59(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_58(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_59(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_58(__VA_ARGS__)
#define ASTRUCT_DECLARE_60(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_59(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_60(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_59(__VA_ARGS__)
#define ASTRUCT_DECLARE_61(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_60(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_61(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_60(__VA_ARGS__)
#define ASTRUCT_DECLARE_62(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_61(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_62(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_61(__VA_ARGS__)
#define ASTRUCT_DECLARE_63(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_62(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_63(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_62(__VA_ARGS__)
#define ASTRUCT_DECLARE_64(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_63(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_64(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_63(__VA_ARGS__)
#define ASTRUCT_DECLARE_65(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_64(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_65(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_64(__VA_ARGS__)
#define ASTRUCT_DECLARE_66(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_65(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_66(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_65(__VA_ARGS__)
#define ASTRUCT_DECLARE_67(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_66(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_67(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_66(__VA_ARGS__)
#define ASTRUCT_DECLARE_68(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_67(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_68(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_67(__VA_ARGS__)
#define ASTRUCT_DECLARE_69(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_68(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_69(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_68(__VA_ARGS__)
#define ASTRUCT_DECLARE_70(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_69(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_70(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_69(__VA_ARGS__)
#define ASTRUCT_DECLARE_71(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_70(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_71(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_70(__VA_ARGS__)
#define ASTRUCT_DECLARE_72(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_71(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_72(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_71(__VA_ARGS__)
#define ASTRUCT_DECLARE_73(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_72(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_73(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_72(__VA_ARGS__)
#define ASTRUCT_DECLARE_74(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_73(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_74(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_73(__VA_ARGS__)
#define ASTRUCT_DECLARE_75(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_74(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_75(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_74(__VA_ARGS__)
#define ASTRUCT_DECLARE_76(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_75(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_76(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_75(__VA_ARGS__)
#define ASTRUCT_DECLARE_77(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_76(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_77(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_76(__VA_ARGS__)
#define ASTRUCT_DECLARE_78(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_77(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_78(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_77(__VA_ARGS__)
#define ASTRUCT_DECLARE_79(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_78(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_79(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_78(__VA_ARGS__)
#define ASTRUCT_DECLARE_80(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_79(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_80(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_79(__VA_ARGS__)
#define ASTRUCT_DECLARE_81(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_80(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_81(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_80(__VA_ARGS__)
#define ASTRUCT_DECLARE_82(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_81(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_82(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_81(__VA_ARGS__)
#define ASTRUCT_DECLARE_83(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_82(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_83(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_82(__VA_ARGS__)
#define ASTRUCT_DECLARE_84(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_83(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_84(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_83(__VA_ARGS__)
#define ASTRUCT_DECLARE_85(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_84(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_85(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_84(__VA_ARGS__)
#define ASTRUCT_DECLARE_86(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_85(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_86(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_85(__VA_ARGS__)
#define ASTRUCT_DECLARE_87(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_86(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_87(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_86(__VA_ARGS__)
#define ASTRUCT_DECLARE_88(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_87(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_88(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_87(__VA_ARGS__)
#define ASTRUCT_DECLARE_89(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_88(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_89(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_88(__VA_ARGS__)
#define ASTRUCT_DECLARE_90(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_89(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_90(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_89(__VA_ARGS__)
#define ASTRUCT_DECLARE_91(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_90(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_91(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_90(__VA_ARGS__)
#define ASTRUCT_DECLARE_92(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_91(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_92(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_91(__VA_ARGS__)
#define ASTRUCT_DECLARE_93(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_92(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_93(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_92(__VA_ARGS__)
#define ASTRUCT_DECLARE_94(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_93(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_94(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_93(__VA_ARGS__)
#define ASTRUCT_DECLARE_95(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_94(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_95(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_94(__VA_ARGS__)
#define ASTRUCT_DECLARE_96(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_95(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_96(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_95(__VA_ARGS__)
#define ASTRUCT_DECLARE_97(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_96(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_97(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_96(__VA_ARGS__)
#define ASTRUCT_DECLARE_98(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_97(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_98(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_97(__VA_ARGS__)
#define ASTRUCT_DECLARE_99(index, type_and_name, ...) \
  ASTRUCT_DECLARE(index, type_and_name) ASTRUCT_DECLARE_98(index + 1, __VA_ARGS__)
#define ASTRUCT_TYPE_99(type_and_name, ...) ASTRUCT_TYPE(type_and_name), ASTRUCT_TYPE_98(__VA_ARGS__)

#endif  // ASTRUCT_MULTI_DECLARE_H_
