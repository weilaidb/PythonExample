#define FIX_1_082 17734
#define FIX_1_847 30274
#define FIX_1_414 23170
#define FIX_2_613 21407
#define IDCTMUL(a, b) ((a) * (b) >> 16)
static inline void idct_row(int16_t *blk)
static inline void idct_col(int16_t *blk)
static void hq_idct_put(uint8_t *dst, int stride, int16_t *block)
av_cold void ff_hqdsp_init(HQDSPContext *c)
