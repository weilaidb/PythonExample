#if HAVE_UNISTD_H
#define ASSERT_ALIGNED(ptr) av_assert2(!((uintptr_t)ptr&0x0000000F));
#if HAVE_BIGENDIAN
#define load_alignment(s, ali, pm2, pm1, pp0, pp1, pp2, pp3)
#define load_alignment(s, ali, pm2, pm1, pp0, pp1, pp2, pp3)
static void PREFIX_h264_qpel16_h_lowpass_altivec(uint8_t *dst,
const uint8_t *src,
int dstStride, int srcStride)
static void PREFIX_h264_qpel16_v_lowpass_altivec(uint8_t *dst,
const uint8_t *src,
int dstStride, int srcStride)
static void PREFIX_h264_qpel16_hv_lowpass_altivec(uint8_t *dst, int16_t *tmp,
const uint8_t *src,
int dstStride, int tmpStride,
int srcStride)
