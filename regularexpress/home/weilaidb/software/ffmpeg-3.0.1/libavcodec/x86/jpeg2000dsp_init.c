void ff_ict_float_sse(void *src0, void *src1, void *src2, int csize);
void ff_ict_float_avx(void *src0, void *src1, void *src2, int csize);
void ff_rct_int_sse2 (void *src0, void *src1, void *src2, int csize);
void ff_rct_int_avx2 (void *src0, void *src1, void *src2, int csize);
av_cold void ff_jpeg2000dsp_init_x86(Jpeg2000DSPContext *c)
