void ff_bswap32_buf_sse2(uint32_t *dst, const uint32_t *src, int w);
void ff_bswap32_buf_ssse3(uint32_t *dst, const uint32_t *src, int w);
av_cold void ff_bswapdsp_init_x86(BswapDSPContext *c)
