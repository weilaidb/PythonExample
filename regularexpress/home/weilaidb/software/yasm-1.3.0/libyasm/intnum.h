#define YASM_INTNUM_H
#define YASM_LIB_DECL
YASM_LIB_DECL
void yasm_intnum_initialize(void);
YASM_LIB_DECL
void yasm_intnum_cleanup(void);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_dec(char *str);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_bin(char *str);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_oct(char *str);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_hex(char *str);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_charconst_nasm(const char *str);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_charconst_tasm(const char *str);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_uint(unsigned long i);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_int(long i);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_leb128
(const unsigned char *ptr, int sign, unsigned long *size);
YASM_LIB_DECL yasm_intnum *yasm_intnum_create_sized
(unsigned char *ptr, int sign, size_t srcsize, int bigendian);
YASM_LIB_DECL yasm_intnum *yasm_intnum_copy(const yasm_intnum *intn);
YASM_LIB_DECL
void yasm_intnum_destroy( yasm_intnum *intn);
YASM_LIB_DECL
int yasm_intnum_calc(yasm_intnum *acc, yasm_expr_op op, yasm_intnum *operand);
YASM_LIB_DECL
int yasm_intnum_compare(const yasm_intnum *intn1, const yasm_intnum *intn2);
YASM_LIB_DECL
void yasm_intnum_zero(yasm_intnum *intn);
YASM_LIB_DECL
void yasm_intnum_set(yasm_intnum *intn, const yasm_intnum *val);
YASM_LIB_DECL
void yasm_intnum_set_uint(yasm_intnum *intn, unsigned long val);
YASM_LIB_DECL
void yasm_intnum_set_int(yasm_intnum *intn, long val);
YASM_LIB_DECL
int yasm_intnum_is_zero(const yasm_intnum *acc);
YASM_LIB_DECL
int yasm_intnum_is_pos1(const yasm_intnum *acc);
YASM_LIB_DECL
int yasm_intnum_is_neg1(const yasm_intnum *acc);
YASM_LIB_DECL
int yasm_intnum_sign(const yasm_intnum *acc);
YASM_LIB_DECL
unsigned long yasm_intnum_get_uint(const yasm_intnum *intn);
YASM_LIB_DECL
long yasm_intnum_get_int(const yasm_intnum *intn);
YASM_LIB_DECL
void yasm_intnum_get_sized(const yasm_intnum *intn, unsigned char *ptr,
size_t destsize, size_t valsize, int shift,
int bigendian, int warn);
YASM_LIB_DECL
int yasm_intnum_check_size(const yasm_intnum *intn, size_t size,
size_t rshift, int rangetype);
YASM_LIB_DECL
int yasm_intnum_in_range(const yasm_intnum *intn, long low, long high);
YASM_LIB_DECL
unsigned long yasm_intnum_get_leb128(const yasm_intnum *intn,
unsigned char *ptr, int sign);
YASM_LIB_DECL
unsigned long yasm_intnum_size_leb128(const yasm_intnum *intn, int sign);
YASM_LIB_DECL
unsigned long yasm_get_sleb128(long v, unsigned char *ptr);
YASM_LIB_DECL
unsigned long yasm_size_sleb128(long v);
YASM_LIB_DECL
unsigned long yasm_get_uleb128(unsigned long v, unsigned char *ptr);
YASM_LIB_DECL
unsigned long yasm_size_uleb128(unsigned long v);
YASM_LIB_DECL char *yasm_intnum_get_str(const yasm_intnum *intn);
YASM_LIB_DECL
void yasm_intnum_print(const yasm_intnum *intn, FILE *f);
