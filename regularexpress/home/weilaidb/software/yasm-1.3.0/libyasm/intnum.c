#define BITVECT_NATIVE_SIZE     256
struct yasm_intnum ;
static wordptr conv_bv;
static wordptr result, spare, op1static, op2static;
static BitVector_from_Dec_static_data *from_dec_data;
void
yasm_intnum_initialize(void)
void
yasm_intnum_cleanup(void)
static void
intnum_frombv( yasm_intnum *intn, wordptr bv)
static wordptr
intnum_tobv( wordptr bv, const yasm_intnum *intn)
yasm_intnum *
yasm_intnum_create_dec(char *str)
yasm_intnum *
yasm_intnum_create_bin(char *str)
yasm_intnum *
yasm_intnum_create_oct(char *str)
yasm_intnum *
yasm_intnum_create_hex(char *str)
yasm_intnum *
yasm_intnum_create_charconst_nasm(const char *str)
yasm_intnum *
yasm_intnum_create_charconst_tasm(const char *str)
yasm_intnum *
yasm_intnum_create_uint(unsigned long i)
yasm_intnum *
yasm_intnum_create_int(long i)
yasm_intnum *
yasm_intnum_create_leb128(const unsigned char *ptr, int sign,
unsigned long *size)
yasm_intnum *
yasm_intnum_create_sized(unsigned char *ptr, int sign, size_t srcsize,
int bigendian)
yasm_intnum *
yasm_intnum_copy(const yasm_intnum *intn)
void
yasm_intnum_destroy(yasm_intnum *intn)
int
yasm_intnum_calc(yasm_intnum *acc, yasm_expr_op op, yasm_intnum *operand)
int
yasm_intnum_compare(const yasm_intnum *intn1, const yasm_intnum *intn2)
void
yasm_intnum_zero(yasm_intnum *intn)
void
yasm_intnum_set(yasm_intnum *intn, const yasm_intnum *val)
void
yasm_intnum_set_uint(yasm_intnum *intn, unsigned long val)
void
yasm_intnum_set_int(yasm_intnum *intn, long val)
int
yasm_intnum_is_zero(const yasm_intnum *intn)
int
yasm_intnum_is_pos1(const yasm_intnum *intn)
int
yasm_intnum_is_neg1(const yasm_intnum *intn)
int
yasm_intnum_sign(const yasm_intnum *intn)
unsigned long
yasm_intnum_get_uint(const yasm_intnum *intn)
long
yasm_intnum_get_int(const yasm_intnum *intn)
void
yasm_intnum_get_sized(const yasm_intnum *intn, unsigned char *ptr,
size_t destsize, size_t valsize, int shift,
int bigendian, int warn)
int
yasm_intnum_check_size(const yasm_intnum *intn, size_t size, size_t rshift,
int rangetype)
int
yasm_intnum_in_range(const yasm_intnum *intn, long low, long high)
static unsigned long
get_leb128(wordptr val, unsigned char *ptr, int sign)
static unsigned long
size_leb128(wordptr val, int sign)
unsigned long
yasm_intnum_get_leb128(const yasm_intnum *intn, unsigned char *ptr, int sign)
unsigned long
yasm_intnum_size_leb128(const yasm_intnum *intn, int sign)
unsigned long
yasm_get_sleb128(long v, unsigned char *ptr)
unsigned long
yasm_size_sleb128(long v)
unsigned long
yasm_get_uleb128(unsigned long v, unsigned char *ptr)
unsigned long
yasm_size_uleb128(unsigned long v)
char *
yasm_intnum_get_str(const yasm_intnum *intn)
void
yasm_intnum_print(const yasm_intnum *intn, FILE *f)
