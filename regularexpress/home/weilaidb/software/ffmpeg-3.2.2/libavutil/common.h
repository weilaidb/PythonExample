#define AVUTIL_COMMON_H
#if defined(__cplusplus) && !defined(__STDC_CONSTANT_MACROS) && !defined(UINT64_C)
#error missing -D__STDC_CONSTANT_MACROS / #define __STDC_CONSTANT_MACROS
#if AV_HAVE_BIGENDIAN
#   define AV_NE(be, le) (be)
#   define AV_NE(be, le) (le)
#define RSHIFT(a,b) ((a) > 0 ? ((a) + ((1<<(b))>>1))>>(b) : ((a) + ((1<<(b))>>1)-1)>>(b))
#define ROUNDED_DIV(a,b) (((a)>0 ? (a) + ((b)>>1) : (a) - ((b)>>1))/(b))
#define AV_CEIL_RSHIFT(a,b) (!av_builtin_constant_p(b) ? -((-(a)) >> (b)) \
: ((a) + (1<<(b)) - 1) >> (b))
#define FF_CEIL_RSHIFT AV_CEIL_RSHIFT
#define FFUDIV(a,b) (((a)>0 ?(a):(a)-(b)+1) / (b))
#define FFUMOD(a,b) ((a)-(b)*FFUDIV(a,b))
#define FFABS(a) ((a) >= 0 ? (a) : (-(a)))
#define FFSIGN(a) ((a) > 0 ? 1 : -1)
#define FFNABS(a) ((a) <= 0 ? (a) : (-(a)))
#define FFDIFFSIGN(x,y) (((x)>(y)) - ((x)<(y)))
#define FFMAX(a,b) ((a) > (b) ? (a) : (b))
#define FFMAX3(a,b,c) FFMAX(FFMAX(a,b),c)
#define FFMIN(a,b) ((a) > (b) ? (b) : (a))
#define FFMIN3(a,b,c) FFMIN(FFMIN(a,b),c)
#define FFSWAP(type,a,b) dowhile(0)
#define FF_ARRAY_ELEMS(a) (sizeof(a) / sizeof((a)[0]))
#   include "config.h"
#   include "intmath.h"
av_const int av_log2(unsigned v);
av_const int av_log2_16bit(unsigned v);
static av_always_inline av_const int av_clip_c(int a, int amin, int amax)
static av_always_inline av_const int64_t av_clip64_c(int64_t a, int64_t amin, int64_t amax)
static av_always_inline av_const uint8_t av_clip_uint8_c(int a)
static av_always_inline av_const int8_t av_clip_int8_c(int a)
static av_always_inline av_const uint16_t av_clip_uint16_c(int a)
static av_always_inline av_const int16_t av_clip_int16_c(int a)
static av_always_inline av_const int32_t av_clipl_int32_c(int64_t a)
static av_always_inline av_const int av_clip_intp2_c(int a, int p)
static av_always_inline av_const unsigned av_clip_uintp2_c(int a, int p)
static av_always_inline av_const unsigned av_mod_uintp2_c(unsigned a, unsigned p)
static av_always_inline int av_sat_add32_c(int a, int b)
static av_always_inline int av_sat_dadd32_c(int a, int b)
static av_always_inline av_const float av_clipf_c(float a, float amin, float amax)
static av_always_inline av_const double av_clipd_c(double a, double amin, double amax)
static av_always_inline av_const int av_ceil_log2_c(int x)
static av_always_inline av_const int av_popcount_c(uint32_t x)
static av_always_inline av_const int av_popcount64_c(uint64_t x)
static av_always_inline av_const int av_parity_c(uint32_t v)
#define MKTAG(a,b,c,d) ((a) | ((b) << 8) | ((c) << 16) | ((unsigned)(d) << 24))
#define MKBETAG(a,b,c,d) ((d) | ((c) << 8) | ((b) << 16) | ((unsigned)(a) << 24))
#define GET_UTF8(val, GET_BYTE, ERROR)\
val= (GET_BYTE);\
#define GET_UTF16(val, GET_16BIT, ERROR)\
val = GET_16BIT;\
\
#define PUT_UTF8(val, tmp, PUT_BYTE)\
#define PUT_UTF16(val, tmp, PUT_16BIT)\
\
#    include "internal.h"
#   define av_ceil_log2     av_ceil_log2_c
#   define av_clip          av_clip_c
#   define av_clip64        av_clip64_c
#   define av_clip_uint8    av_clip_uint8_c
#   define av_clip_int8     av_clip_int8_c
#   define av_clip_uint16   av_clip_uint16_c
#   define av_clip_int16    av_clip_int16_c
#   define av_clipl_int32   av_clipl_int32_c
#   define av_clip_intp2    av_clip_intp2_c
#   define av_clip_uintp2   av_clip_uintp2_c
#   define av_mod_uintp2    av_mod_uintp2_c
#   define av_sat_add32     av_sat_add32_c
#   define av_sat_dadd32    av_sat_dadd32_c
#   define av_clipf         av_clipf_c
#   define av_clipd         av_clipd_c
#   define av_popcount      av_popcount_c
#   define av_popcount64    av_popcount64_c
#   define av_parity        av_parity_c
