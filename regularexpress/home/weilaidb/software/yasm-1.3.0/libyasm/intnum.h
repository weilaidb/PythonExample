#define YASM_INTNUM_H
#define YASM_LIB_DECL
YASM_LIB_DECL
yasm_intnum_initialize;
YASM_LIB_DECL
yasm_intnum_cleanup;
*yasm_intnum_create_dec;
*yasm_intnum_create_bin;
*yasm_intnum_create_oct;
*yasm_intnum_create_hex;
*yasm_intnum_create_charconst_nasm;
*yasm_intnum_create_charconst_tasm;
*yasm_intnum_create_uint;
*yasm_intnum_create_int;
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_leb128
(const unsigned char *ptr, int sign, unsigned long *size);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_sized
(unsigned char *ptr, int sign, size_t srcsize, int bigendian);
*yasm_intnum_copy;
YASM_LIB_DECL
yasm_intnum_destroy;
YASM_LIB_DECL
yasm_intnum_calc;
YASM_LIB_DECL
yasm_intnum_compare;
YASM_LIB_DECL
yasm_intnum_zero;
YASM_LIB_DECL
yasm_intnum_set;
YASM_LIB_DECL
yasm_intnum_set_uint;
YASM_LIB_DECL
yasm_intnum_set_int;
YASM_LIB_DECL
yasm_intnum_is_zero;
YASM_LIB_DECL
yasm_intnum_is_pos1;
YASM_LIB_DECL
yasm_intnum_is_neg1;
YASM_LIB_DECL
yasm_intnum_sign;
YASM_LIB_DECL
yasm_intnum_get_uint;
YASM_LIB_DECL
yasm_intnum_get_int;
YASM_LIB_DECL
yasm_intnum_get_sized;
YASM_LIB_DECL
yasm_intnum_check_size;
YASM_LIB_DECL
yasm_intnum_in_range;
YASM_LIB_DECL
yasm_intnum_get_leb128;
YASM_LIB_DECL
yasm_intnum_size_leb128;
YASM_LIB_DECL
yasm_get_sleb128;
YASM_LIB_DECL
yasm_size_sleb128;
YASM_LIB_DECL
yasm_get_uleb128;
YASM_LIB_DECL
yasm_size_uleb128;
*yasm_intnum_get_str;
YASM_LIB_DECL
yasm_intnum_print;
