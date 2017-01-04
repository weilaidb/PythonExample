void ff_gradfun_filter_line_mmxext(intptr_t x, uint8_t *dst, const uint8_t *src,
const uint16_t *dc, int thresh,
const uint16_t *dithers);
void ff_gradfun_filter_line_ssse3(intptr_t x, uint8_t *dst, const uint8_t *src,
const uint16_t *dc, int thresh,
const uint16_t *dithers);
void ff_gradfun_blur_line_movdqa_sse2(intptr_t x, uint16_t *buf,
const uint16_t *buf1, uint16_t *dc,
const uint8_t *src1, const uint8_t *src2);
void ff_gradfun_blur_line_movdqu_sse2(intptr_t x, uint16_t *buf,
const uint16_t *buf1, uint16_t *dc,
const uint8_t *src1, const uint8_t *src2);
#if HAVE_YASM
static void gradfun_filter_line_mmxext(uint8_t *dst, const uint8_t *src,
const uint16_t *dc,
int width, int thresh,
const uint16_t *dithers)
static void gradfun_filter_line_ssse3(uint8_t *dst, const uint8_t *src, const uint16_t *dc,
int width, int thresh,
const uint16_t *dithers)
static void gradfun_blur_line_sse2(uint16_t *dc, uint16_t *buf, const uint16_t *buf1,
const uint8_t *src, int src_linesize, int width)
av_cold void ff_gradfun_init_x86(GradFunContext *gf)
