static av_always_inline void mss2_blit_wmv9_template(uint8_t *dst,
int dst_stride,
int gray,
int use_mask,
int maskcolor,
const uint8_t *mask,
int mask_stride,
const uint8_t *srcy,
int srcy_stride,
const uint8_t *srcu,
const uint8_t *srcv,
int srcuv_stride,
int w, int h)
static void mss2_blit_wmv9_c(uint8_t *dst, int dst_stride,
const uint8_t *srcy, int srcy_stride,
const uint8_t *srcu, const uint8_t *srcv,
int srcuv_stride, int w, int h)
static void mss2_blit_wmv9_masked_c(uint8_t *dst, int dst_stride,
int maskcolor, const uint8_t *mask,
int mask_stride,
const uint8_t *srcy, int srcy_stride,
const uint8_t *srcu, const uint8_t *srcv,
int srcuv_stride, int w, int h)
static void mss2_gray_fill_masked_c(uint8_t *dst, int dst_stride,
int maskcolor, const uint8_t *mask,
int mask_stride, int w, int h)
static void upsample_plane_c(uint8_t *plane, int plane_stride, int w, int h)
av_cold void ff_mss2dsp_init(MSS2DSPContext* dsp)
