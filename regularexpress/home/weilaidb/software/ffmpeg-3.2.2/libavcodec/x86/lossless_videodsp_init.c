void ff_add_int16_mmx(uint16_t *dst, const uint16_t *src, unsigned mask, int w);
void ff_add_int16_sse2(uint16_t *dst, const uint16_t *src, unsigned mask, int w);
void ff_diff_int16_mmx (uint16_t *dst, const uint16_t *src1, const uint16_t *src2, unsigned mask, int w);
void ff_diff_int16_sse2(uint16_t *dst, const uint16_t *src1, const uint16_t *src2, unsigned mask, int w);
int ff_add_hfyu_left_pred_int16_ssse3(uint16_t *dst, const uint16_t *src, unsigned mask, int w, unsigned acc);
int ff_add_hfyu_left_pred_int16_sse4(uint16_t *dst, const uint16_t *src, unsigned mask, int w, unsigned acc);
void ff_add_hfyu_median_pred_int16_mmxext(uint16_t *dst, const uint16_t *top, const uint16_t *diff, unsigned mask, int w, int *left, int *left_top);
void ff_sub_hfyu_median_pred_int16_mmxext(uint16_t *dst, const uint16_t *src1, const uint16_t *src2, unsigned mask, int w, int *left, int *left_top);
void ff_llviddsp_init_x86(LLVidDSPContext *c, AVCodecContext *avctx)
