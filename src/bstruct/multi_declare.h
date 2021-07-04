#ifndef BSTRUCT_MULTI_DECLARE_H_
#define BSTRUCT_MULTI_DECLARE_H_

#include "bstruct/declare.h"

#define BSTRUCT_ELEMENT_1(size_type_and_name) BSTRUCT_ELEMENT(size_type_and_name)
#define BSTRUCT_GETSET_1(index, size_type_and_name) BSTRUCT_GETSET(index, size_type_and_name)

// Note: In case 100 values isn't enough, the following lines were generated with python:
// for i in range(1, 100):
//   print("#define BSTRUCT_ELEMENT_{}(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_{}(__VA_ARGS__)".format(i+1, i))
//   print("#define BSTRUCT_GETSET_{}(index, size_type_and_name, ...) \\".format(i+1))
//   print("\tBSTRUCT_GETSET(index, size_type_and_name) \\")
//   print("\tBSTRUCT_GETSET_{}(index + 1, __VA_ARGS__)".format(i))

#define BSTRUCT_ELEMENT_2(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_1(__VA_ARGS__)
#define BSTRUCT_GETSET_2(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_1(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_3(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_2(__VA_ARGS__)
#define BSTRUCT_GETSET_3(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_2(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_4(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_3(__VA_ARGS__)
#define BSTRUCT_GETSET_4(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_3(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_5(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_4(__VA_ARGS__)
#define BSTRUCT_GETSET_5(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_4(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_6(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_5(__VA_ARGS__)
#define BSTRUCT_GETSET_6(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_5(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_7(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_6(__VA_ARGS__)
#define BSTRUCT_GETSET_7(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_6(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_8(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_7(__VA_ARGS__)
#define BSTRUCT_GETSET_8(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_7(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_9(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_8(__VA_ARGS__)
#define BSTRUCT_GETSET_9(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_8(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_10(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_9(__VA_ARGS__)
#define BSTRUCT_GETSET_10(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_9(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_11(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_10(__VA_ARGS__)
#define BSTRUCT_GETSET_11(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_10(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_12(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_11(__VA_ARGS__)
#define BSTRUCT_GETSET_12(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_11(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_13(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_12(__VA_ARGS__)
#define BSTRUCT_GETSET_13(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_12(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_14(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_13(__VA_ARGS__)
#define BSTRUCT_GETSET_14(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_13(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_15(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_14(__VA_ARGS__)
#define BSTRUCT_GETSET_15(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_14(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_16(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_15(__VA_ARGS__)
#define BSTRUCT_GETSET_16(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_15(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_17(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_16(__VA_ARGS__)
#define BSTRUCT_GETSET_17(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_16(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_18(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_17(__VA_ARGS__)
#define BSTRUCT_GETSET_18(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_17(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_19(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_18(__VA_ARGS__)
#define BSTRUCT_GETSET_19(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_18(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_20(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_19(__VA_ARGS__)
#define BSTRUCT_GETSET_20(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_19(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_21(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_20(__VA_ARGS__)
#define BSTRUCT_GETSET_21(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_20(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_22(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_21(__VA_ARGS__)
#define BSTRUCT_GETSET_22(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_21(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_23(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_22(__VA_ARGS__)
#define BSTRUCT_GETSET_23(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_22(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_24(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_23(__VA_ARGS__)
#define BSTRUCT_GETSET_24(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_23(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_25(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_24(__VA_ARGS__)
#define BSTRUCT_GETSET_25(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_24(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_26(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_25(__VA_ARGS__)
#define BSTRUCT_GETSET_26(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_25(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_27(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_26(__VA_ARGS__)
#define BSTRUCT_GETSET_27(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_26(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_28(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_27(__VA_ARGS__)
#define BSTRUCT_GETSET_28(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_27(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_29(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_28(__VA_ARGS__)
#define BSTRUCT_GETSET_29(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_28(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_30(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_29(__VA_ARGS__)
#define BSTRUCT_GETSET_30(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_29(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_31(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_30(__VA_ARGS__)
#define BSTRUCT_GETSET_31(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_30(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_32(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_31(__VA_ARGS__)
#define BSTRUCT_GETSET_32(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_31(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_33(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_32(__VA_ARGS__)
#define BSTRUCT_GETSET_33(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_32(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_34(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_33(__VA_ARGS__)
#define BSTRUCT_GETSET_34(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_33(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_35(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_34(__VA_ARGS__)
#define BSTRUCT_GETSET_35(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_34(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_36(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_35(__VA_ARGS__)
#define BSTRUCT_GETSET_36(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_35(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_37(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_36(__VA_ARGS__)
#define BSTRUCT_GETSET_37(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_36(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_38(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_37(__VA_ARGS__)
#define BSTRUCT_GETSET_38(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_37(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_39(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_38(__VA_ARGS__)
#define BSTRUCT_GETSET_39(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_38(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_40(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_39(__VA_ARGS__)
#define BSTRUCT_GETSET_40(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_39(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_41(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_40(__VA_ARGS__)
#define BSTRUCT_GETSET_41(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_40(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_42(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_41(__VA_ARGS__)
#define BSTRUCT_GETSET_42(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_41(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_43(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_42(__VA_ARGS__)
#define BSTRUCT_GETSET_43(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_42(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_44(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_43(__VA_ARGS__)
#define BSTRUCT_GETSET_44(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_43(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_45(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_44(__VA_ARGS__)
#define BSTRUCT_GETSET_45(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_44(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_46(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_45(__VA_ARGS__)
#define BSTRUCT_GETSET_46(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_45(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_47(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_46(__VA_ARGS__)
#define BSTRUCT_GETSET_47(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_46(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_48(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_47(__VA_ARGS__)
#define BSTRUCT_GETSET_48(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_47(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_49(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_48(__VA_ARGS__)
#define BSTRUCT_GETSET_49(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_48(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_50(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_49(__VA_ARGS__)
#define BSTRUCT_GETSET_50(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_49(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_51(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_50(__VA_ARGS__)
#define BSTRUCT_GETSET_51(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_50(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_52(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_51(__VA_ARGS__)
#define BSTRUCT_GETSET_52(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_51(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_53(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_52(__VA_ARGS__)
#define BSTRUCT_GETSET_53(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_52(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_54(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_53(__VA_ARGS__)
#define BSTRUCT_GETSET_54(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_53(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_55(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_54(__VA_ARGS__)
#define BSTRUCT_GETSET_55(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_54(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_56(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_55(__VA_ARGS__)
#define BSTRUCT_GETSET_56(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_55(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_57(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_56(__VA_ARGS__)
#define BSTRUCT_GETSET_57(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_56(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_58(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_57(__VA_ARGS__)
#define BSTRUCT_GETSET_58(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_57(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_59(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_58(__VA_ARGS__)
#define BSTRUCT_GETSET_59(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_58(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_60(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_59(__VA_ARGS__)
#define BSTRUCT_GETSET_60(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_59(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_61(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_60(__VA_ARGS__)
#define BSTRUCT_GETSET_61(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_60(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_62(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_61(__VA_ARGS__)
#define BSTRUCT_GETSET_62(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_61(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_63(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_62(__VA_ARGS__)
#define BSTRUCT_GETSET_63(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_62(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_64(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_63(__VA_ARGS__)
#define BSTRUCT_GETSET_64(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_63(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_65(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_64(__VA_ARGS__)
#define BSTRUCT_GETSET_65(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_64(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_66(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_65(__VA_ARGS__)
#define BSTRUCT_GETSET_66(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_65(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_67(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_66(__VA_ARGS__)
#define BSTRUCT_GETSET_67(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_66(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_68(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_67(__VA_ARGS__)
#define BSTRUCT_GETSET_68(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_67(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_69(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_68(__VA_ARGS__)
#define BSTRUCT_GETSET_69(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_68(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_70(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_69(__VA_ARGS__)
#define BSTRUCT_GETSET_70(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_69(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_71(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_70(__VA_ARGS__)
#define BSTRUCT_GETSET_71(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_70(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_72(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_71(__VA_ARGS__)
#define BSTRUCT_GETSET_72(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_71(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_73(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_72(__VA_ARGS__)
#define BSTRUCT_GETSET_73(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_72(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_74(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_73(__VA_ARGS__)
#define BSTRUCT_GETSET_74(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_73(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_75(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_74(__VA_ARGS__)
#define BSTRUCT_GETSET_75(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_74(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_76(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_75(__VA_ARGS__)
#define BSTRUCT_GETSET_76(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_75(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_77(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_76(__VA_ARGS__)
#define BSTRUCT_GETSET_77(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_76(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_78(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_77(__VA_ARGS__)
#define BSTRUCT_GETSET_78(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_77(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_79(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_78(__VA_ARGS__)
#define BSTRUCT_GETSET_79(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_78(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_80(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_79(__VA_ARGS__)
#define BSTRUCT_GETSET_80(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_79(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_81(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_80(__VA_ARGS__)
#define BSTRUCT_GETSET_81(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_80(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_82(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_81(__VA_ARGS__)
#define BSTRUCT_GETSET_82(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_81(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_83(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_82(__VA_ARGS__)
#define BSTRUCT_GETSET_83(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_82(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_84(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_83(__VA_ARGS__)
#define BSTRUCT_GETSET_84(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_83(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_85(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_84(__VA_ARGS__)
#define BSTRUCT_GETSET_85(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_84(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_86(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_85(__VA_ARGS__)
#define BSTRUCT_GETSET_86(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_85(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_87(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_86(__VA_ARGS__)
#define BSTRUCT_GETSET_87(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_86(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_88(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_87(__VA_ARGS__)
#define BSTRUCT_GETSET_88(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_87(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_89(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_88(__VA_ARGS__)
#define BSTRUCT_GETSET_89(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_88(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_90(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_89(__VA_ARGS__)
#define BSTRUCT_GETSET_90(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_89(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_91(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_90(__VA_ARGS__)
#define BSTRUCT_GETSET_91(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_90(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_92(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_91(__VA_ARGS__)
#define BSTRUCT_GETSET_92(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_91(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_93(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_92(__VA_ARGS__)
#define BSTRUCT_GETSET_93(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_92(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_94(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_93(__VA_ARGS__)
#define BSTRUCT_GETSET_94(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_93(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_95(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_94(__VA_ARGS__)
#define BSTRUCT_GETSET_95(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_94(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_96(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_95(__VA_ARGS__)
#define BSTRUCT_GETSET_96(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_95(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_97(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_96(__VA_ARGS__)
#define BSTRUCT_GETSET_97(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_96(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_98(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_97(__VA_ARGS__)
#define BSTRUCT_GETSET_98(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_97(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_99(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_98(__VA_ARGS__)
#define BSTRUCT_GETSET_99(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_98(index + 1, __VA_ARGS__)
#define BSTRUCT_ELEMENT_100(size_type_and_name, ...) BSTRUCT_ELEMENT(size_type_and_name), BSTRUCT_ELEMENT_99(__VA_ARGS__)
#define BSTRUCT_GETSET_100(index, size_type_and_name, ...) \
	BSTRUCT_GETSET(index, size_type_and_name) \
	BSTRUCT_GETSET_99(index + 1, __VA_ARGS__)

#endif // BSTRUCT_MULTI_DECLARE_H_
