static inline void idct_col(int16_t *blk, const uint8_t *quant)
static inline void idct_row(int16_t *blk)
static void hqx_idct_put(uint16_t *dst, ptrdiff_t stride,
int16_t *block, const uint8_t *quant)
av_cold void ff_hqxdsp_init(HQXDSPContext *c)
