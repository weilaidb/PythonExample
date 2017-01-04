struct yasm_floatnum ;
#define MANT_BITS       80
#define MANT_BYTES      10
#define MANT_SIGDIGITS  24
#define EXP_BIAS        0x7FFF
#define EXP_INF         0xFFFF
#define EXP_MAX         0xFFFE
#define EXP_MIN         1
#define EXP_ZERO        0
#define FLAG_ISZERO     1<<0
typedef struct POT_Entry_s  POT_Entry;
typedef struct POT_Entry_Source_s  POT_Entry_Source;
static POT_Entry *POT_TableN;
static POT_Entry_Source POT_TableN_Source[] = ;
static POT_Entry *POT_TableP;
static POT_Entry_Source POT_TableP_Source[] = ;
static void
POT_Table_Init_Entry( POT_Entry *e, POT_Entry_Source *s, int dec_exp)
void
yasm_floatnum_initialize(void)
void
yasm_floatnum_cleanup(void)
static void
floatnum_normalize(yasm_floatnum *flt)
static void
floatnum_mul(yasm_floatnum *acc, const yasm_floatnum *op)
yasm_floatnum *
yasm_floatnum_create(const char *str)
yasm_floatnum *
yasm_floatnum_copy(const yasm_floatnum *flt)
void
yasm_floatnum_destroy(yasm_floatnum *flt)
int
yasm_floatnum_calc(yasm_floatnum *acc, yasm_expr_op op, yasm_floatnum *operand)
int
yasm_floatnum_get_int(const yasm_floatnum *flt, unsigned long *ret_val)
static int
floatnum_get_common(const yasm_floatnum *flt, unsigned char *ptr,
N_int byte_size, N_int mant_bits, int implicit1,
N_int exp_bits)
int
yasm_floatnum_get_sized(const yasm_floatnum *flt, unsigned char *ptr,
size_t destsize, size_t valsize, size_t shift,
int bigendian, int warn)
int
yasm_floatnum_check_size( const yasm_floatnum *flt, size_t size)
void
yasm_floatnum_print(const yasm_floatnum *flt, FILE *f)
