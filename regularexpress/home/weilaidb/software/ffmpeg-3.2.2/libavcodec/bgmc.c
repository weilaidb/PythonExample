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
static void bgmc_lut_fillp(uint8_t *lut, int *lut_status, int delta)
static uint8_t *bgmc_lut_getp(uint8_t *lut, int *lut_status, int delta)
av_cold int ff_bgmc_init(AVCodecContext *avctx,
uint8_t **cf_lut, int **cf_lut_status)
av_cold void ff_bgmc_end(uint8_t **cf_lut, int **cf_lut_status)
void ff_bgmc_decode_init(GetBitContext *gb, unsigned int *h,
unsigned int *l, unsigned int *v)
void ff_bgmc_decode_end(GetBitContext *gb)
void ff_bgmc_decode(GetBitContext *gb, unsigned int num, int32_t *dst,
int delta, unsigned int sx,
unsigned int *h, unsigned int *l, unsigned int *v,
uint8_t *cf_lut, int *cf_lut_status)
