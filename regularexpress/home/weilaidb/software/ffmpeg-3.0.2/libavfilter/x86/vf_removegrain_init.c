void ff_rg_fl_mode_1_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_10_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_11_12_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_13_14_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_19_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_20_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_21_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_22_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
#if ARCH_X86_64
void ff_rg_fl_mode_2_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_3_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_4_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_5_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_6_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_7_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_8_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_9_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_15_16_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_17_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_18_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_23_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
void ff_rg_fl_mode_24_sse2(uint8_t *dst, uint8_t *src, ptrdiff_t stride, int pixels);
av_cold void ff_removegrain_init_x86(RemoveGrainContext *rg)
