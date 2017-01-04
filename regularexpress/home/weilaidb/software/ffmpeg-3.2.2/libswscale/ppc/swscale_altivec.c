#if HAVE_ALTIVEC
#define vzero vec_splat_s32(0)
#if HAVE_BIGENDIAN
#define  GET_LS(a,b,c,s)
#define  GET_LS(a,b,c,s)
#define yuv2planeX_8(d1, d2, l1, src, x, perm, filter) do  while (0)
#if HAVE_BIGENDIAN
#define LOAD_FILTER(vf,f)
#define LOAD_L1(ll1,s,p)
#define LOAD_FILTER(vf,f)
#define LOAD_L1(ll1,s,p)
static void yuv2planeX_16_altivec(const int16_t *filter, int filterSize,
const int16_t **src, uint8_t *dest,
const uint8_t *dither, int offset, int x)
static inline void yuv2planeX_u(const int16_t *filter, int filterSize,
const int16_t **src, uint8_t *dest, int dstW,
const uint8_t *dither, int offset, int x)
static void yuv2planeX_altivec(const int16_t *filter, int filterSize,
const int16_t **src, uint8_t *dest, int dstW,
const uint8_t *dither, int offset)
#if HAVE_BIGENDIAN
#define GET_VF4(a, vf, f)
#define FIRST_LOAD(sv, pos, s, per)
#define UPDATE_PTR(s0, d0, s1, d1)
#define LOAD_SRCV(pos, a, s, per, v0, v1, vf)
#define LOAD_SRCV8(pos, a, s, per, v0, v1, vf)
#define GET_VFD(a, b, f, vf0, vf1, per, vf, off)
#define GET_VF4(a, vf, f)
#define FIRST_LOAD(sv, pos, s, per)
#define UPDATE_PTR(s0, d0, s1, d1)
#define LOAD_SRCV(pos, a, s, per, v0, v1, vf)
#define LOAD_SRCV8(pos, a, s, per, v0, v1, vf) LOAD_SRCV(pos, a, s, per, v0, v1, vf)
#define GET_VFD(a, b, f, vf0, vf1, per, vf, off)
static void hScale_altivec_real(SwsContext *c, int16_t *dst, int dstW,
const uint8_t *src, const int16_t *filter,
const int32_t *filterPos, int filterSize)
av_cold void ff_sws_init_swscale_ppc(SwsContext *c)
