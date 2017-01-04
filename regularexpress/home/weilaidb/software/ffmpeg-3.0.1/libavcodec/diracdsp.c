#define FILTER(src, stride)                                     \
((21*((src)[ 0*stride] + (src)[1*stride])                   \
-7*((src)[-1*stride] + (src)[2*stride])                   \
+3*((src)[-2*stride] + (src)[3*stride])                   \
-1*((src)[-3*stride] + (src)[4*stride]) + 16) >> 5)
static void dirac_hpel_filter(uint8_t *dsth, uint8_t *dstv, uint8_t *dstc, const uint8_t *src,
int stride, int width, int height)
#define PIXOP_BILINEAR(PFX, OP, WIDTH)                                  \
static void ff_ ## PFX ## _dirac_pixels ## WIDTH ## _bilinear_c(uint8_t *dst, const uint8_t *src[5], int stride, int h) \
#define OP_PUT(dst, val) (dst) = (val)
#define OP_AVG(dst, val) (dst) = (((dst) + (val) + 1)>>1)
PIXOP_BILINEAR(put, OP_PUT, 8)
PIXOP_BILINEAR(put, OP_PUT, 16)
PIXOP_BILINEAR(put, OP_PUT, 32)
PIXOP_BILINEAR(avg, OP_AVG, 8)
PIXOP_BILINEAR(avg, OP_AVG, 16)
PIXOP_BILINEAR(avg, OP_AVG, 32)
#define op_scale1(x)  block[x] = av_clip_uint8( (block[x]*weight + (1<<(log2_denom-1))) >> log2_denom)
#define op_scale2(x)  dst[x] = av_clip_uint8( (src[x]*weights + dst[x]*weightd + (1<<(log2_denom-1))) >> log2_denom)
#define DIRAC_WEIGHT(W)                                                 \
static void weight_dirac_pixels ## W ## _c(uint8_t *block, int stride, int log2_denom, \
int weight, int h)                                                                    \
static void biweight_dirac_pixels ## W ## _c(uint8_t *dst, const uint8_t *src, int stride, int log2_denom, \
int weightd, int weights, int h)
DIRAC_WEIGHT(8)
DIRAC_WEIGHT(16)
DIRAC_WEIGHT(32)
#define ADD_OBMC(xblen)                                                 \
static void add_obmc ## xblen ## _c(uint16_t *dst, const uint8_t *src, int stride, \
const uint8_t *obmc_weight, int yblen) \
ADD_OBMC(8)
ADD_OBMC(16)
ADD_OBMC(32)
static void put_signed_rect_clamped_8bit_c(uint8_t *dst, int dst_stride, const uint8_t *_src, int src_stride, int width, int height)
#define PUT_SIGNED_RECT_CLAMPED(PX)                                                                     \
static void put_signed_rect_clamped_ ## PX ## bit_c(uint8_t *_dst, int dst_stride, const uint8_t *_src, \
int src_stride, int width, int height)                \
PUT_SIGNED_RECT_CLAMPED(10)
PUT_SIGNED_RECT_CLAMPED(12)
static void add_rect_clamped_c(uint8_t *dst, const uint16_t *src, int stride,
const int16_t *idwt, int idwt_stride,
int width, int height)
#define PIXFUNC(PFX, WIDTH)                                             \
c->PFX ## _dirac_pixels_tab[WIDTH>>4][0] = ff_ ## PFX ## _dirac_pixels ## WIDTH ## _c; \
c->PFX ## _dirac_pixels_tab[WIDTH>>4][1] = ff_ ## PFX ## _dirac_pixels ## WIDTH ## _l2_c; \
c->PFX ## _dirac_pixels_tab[WIDTH>>4][2] = ff_ ## PFX ## _dirac_pixels ## WIDTH ## _l4_c; \
c->PFX ## _dirac_pixels_tab[WIDTH>>4][3] = ff_ ## PFX ## _dirac_pixels ## WIDTH ## _bilinear_c
av_cold void ff_diracdsp_init(DiracDSPContext *c)
