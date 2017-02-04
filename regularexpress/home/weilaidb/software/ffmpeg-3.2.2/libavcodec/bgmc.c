#define FREQ_BITS  14
#define VALUE_BITS 18
#define TOP_VALUE  ((1 << VALUE_BITS) - 1)
#define FIRST_QTR  (TOP_VALUE / 4 + 1)
#define HALF       (2 * FIRST_QTR)
#define THIRD_QTR  (3 * FIRST_QTR)
#define LUT_BITS   (FREQ_BITS - 8)
#define LUT_SIZE   (1 << LUT_BITS)
#define LUT_BUFF   4
static const uint16_t cf_tables_1[3][129] = ;
static const uint16_t cf_tables_2[8][193] = ;
static const uint16_t cf_tables_3[5][257] = ;
static const uint16_t *const cf_table[16] = ;
bgmc_lut_fillp
*bgmc_lut_getp
ff_bgmc_init
ff_bgmc_end
ff_bgmc_decode_init
ff_bgmc_decode_end
ff_bgmc_decode
