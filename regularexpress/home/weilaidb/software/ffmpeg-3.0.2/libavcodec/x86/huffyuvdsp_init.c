void ff_add_bytes_mmx(uint8_t *dst, uint8_t *src, intptr_t w);
void ff_add_bytes_sse2(uint8_t *dst, uint8_t *src, intptr_t w);
void ff_add_hfyu_median_pred_mmxext(uint8_t *dst, const uint8_t *top,
const uint8_t *diff, intptr_t w,
int *left, int *left_top);
void ff_add_hfyu_median_pred_sse2(uint8_t *dst, const uint8_t *top,
const uint8_t *diff, intptr_t w,
int *left, int *left_top);
int  ff_add_hfyu_left_pred_ssse3(uint8_t *dst, const uint8_t *src,
intptr_t w, int left);
int  ff_add_hfyu_left_pred_sse4(uint8_t *dst, const uint8_t *src,
intptr_t w, int left);
void ff_add_hfyu_left_pred_bgr32_mmx(uint8_t *dst, const uint8_t *src,
intptr_t w, uint8_t *left);
void ff_add_hfyu_left_pred_bgr32_sse2(uint8_t *dst, const uint8_t *src,
intptr_t w, uint8_t *left);
#if HAVE_INLINE_ASM && HAVE_7REGS && ARCH_X86_32
static void add_hfyu_median_pred_cmov(uint8_t *dst, const uint8_t *top,
const uint8_t *diff, intptr_t w,
int *left, int *left_top)
av_cold void ff_huffyuvdsp_init_x86(HuffYUVDSPContext *c)
