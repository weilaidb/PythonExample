#if HAVE_ALTIVEC
#define REPT4(...)
static const vec_s8 h_subpel_filters_inner[7] =
;
static const vec_s8 h_subpel_filters_outer[3] =
;
#define LOAD_H_SUBPEL_FILTER(i) \
vec_s8 filter_inner  = h_subpel_filters_inner[i]; \
vec_s8 filter_outerh = h_subpel_filters_outer[(i)>>1]; \
vec_s8 filter_outerl = vec_sld(filter_outerh, filter_outerh, 2)
#if HAVE_BIGENDIAN
#define GET_PIXHL(offset)                   \
a = vec_ld((offset)-is6tap-1, src);     \
b = vec_ld((offset)-is6tap-1+15, src);  \
pixh  = vec_perm(a, b, permh##offset);  \
pixl  = vec_perm(a, b, perml##offset)
#define GET_OUTER(offset) outer = vec_perm(a, b, perm_6tap##offset)
#define GET_PIXHL(offset)                   \
a = vec_vsx_ld((offset)-is6tap-1, src); \
pixh  = vec_perm(a, a, perm_inner);     \
pixl  = vec_perm(a, a, vec_add(perm_inner, vec_splat_u8(4)))
#define GET_OUTER(offset) outer = vec_perm(a, a, perm_outer)
#define FILTER_H(dstv, off) \
GET_PIXHL(off);                            \
filth = vec_msum(filter_inner, pixh, c64); \
filtl = vec_msum(filter_inner, pixl, c64); \
\
if (is6tap)  \
if (w == 4) \
filtl = filth; \
dstv = vec_packs(filth, filtl); \
dstv = vec_sra(dstv, c7)
static av_always_inline
void put_vp8_epel_h_altivec_core(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int h, int mx, int w, int is6tap)
static const vec_u8 v_subpel_filters[7] =
;
#define LOAD_V_SUBPEL_FILTER(i) \
vec_u8 subpel_filter = v_subpel_filters[i]; \
vec_u8 f0 = vec_splat(subpel_filter, 0); \
vec_u8 f1 = vec_splat(subpel_filter, 1); \
vec_u8 f2 = vec_splat(subpel_filter, 2); \
vec_u8 f3 = vec_splat(subpel_filter, 3); \
vec_u8 f4 = vec_splat(subpel_filter, 4); \
vec_u8 f5 = vec_splat(subpel_filter, 5)
#define FILTER_V(dstv, vec_mul) \
s1f = (vec_s16)vec_mul(s1, f1); \
s2f = (vec_s16)vec_mul(s2, f2); \
s3f = (vec_s16)vec_mul(s3, f3); \
s4f = (vec_s16)vec_mul(s4, f4); \
s2f = vec_subs(s2f, s1f); \
s3f = vec_subs(s3f, s4f); \
if (is6tap)  \
dstv = vec_adds(s2f, s3f); \
dstv = vec_adds(dstv, c64); \
dstv = vec_sra(dstv, c7)
#if HAVE_BIGENDIAN
#define LOAD_HL(off, s, perm) load_with_perm_vec(off, s, perm)
#define LOAD_HL(off, s, perm) vec_mergeh(vec_vsx_ld(off,s), vec_vsx_ld(off+8,s))
static av_always_inline
void put_vp8_epel_v_altivec_core(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int h, int my, int w, int is6tap)
#define EPEL_FUNCS(WIDTH, TAPS) \
static av_noinline \
void put_vp8_epel ## WIDTH ## _h ## TAPS ## _altivec(uint8_t *dst, ptrdiff_t dst_stride, uint8_t *src, ptrdiff_t src_stride, int h, int mx, int my) \
\
\
static av_noinline \
void put_vp8_epel ## WIDTH ## _v ## TAPS ## _altivec(uint8_t *dst, ptrdiff_t dst_stride, uint8_t *src, ptrdiff_t src_stride, int h, int mx, int my) \
#define EPEL_HV(WIDTH, HTAPS, VTAPS) \
static void put_vp8_epel ## WIDTH ## _h ## HTAPS ## v ## VTAPS ## _altivec(uint8_t *dst, ptrdiff_t dstride, uint8_t *src, ptrdiff_t sstride, int h, int mx, int my) \
EPEL_FUNCS(16,6)
EPEL_FUNCS(8, 6)
EPEL_FUNCS(8, 4)
EPEL_FUNCS(4, 6)
EPEL_FUNCS(4, 4)
EPEL_HV(16, 6,6)
EPEL_HV(8,  6,6)
EPEL_HV(8,  4,6)
EPEL_HV(8,  6,4)
EPEL_HV(8,  4,4)
EPEL_HV(4,  6,6)
EPEL_HV(4,  4,6)
EPEL_HV(4,  6,4)
EPEL_HV(4,  4,4)
static void put_vp8_pixels16_altivec(uint8_t *dst, ptrdiff_t dstride, uint8_t *src, ptrdiff_t sstride, int h, int mx, int my)
av_cold void ff_vp78dsp_init_ppc(VP8DSPContext *c)
