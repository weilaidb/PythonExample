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
POT_Table_Init_Entry
yasm_floatnum_initialize
yasm_floatnum_cleanup
floatnum_normalize
floatnum_mul
yasm_floatnum_create
yasm_floatnum_copy
yasm_floatnum_destroy
yasm_floatnum_calc
yasm_floatnum_get_int
floatnum_get_common
yasm_floatnum_get_sized
yasm_floatnum_check_size
yasm_floatnum_print
