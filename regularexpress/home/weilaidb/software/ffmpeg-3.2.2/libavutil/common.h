#define AVUTIL_COMMON_H
defined && !defined(__STDC_CONSTANT_MACROS) && !defined(UINT64_C)
#error missing -D__STDC_CONSTANT_MACROS / #define __STDC_CONSTANT_MACROS
#if AV_HAVE_BIGENDIAN
AV_NE (be)
AV_NE (le)
RSHIFT ((a) > 0 ? ((a) + ((1<<(b))>>1))>>(b) : ((a) + ((1<<(b))>>1)-1)>>(b))
ROUNDED_DIV (((a)>0 ? (a) + ((b)>>1) : (a) - ((b)>>1))/(b))
AV_CEIL_RSHIFT (!av_builtin_constant_p(b) ? -((-(a)) >> (b)) \
: ((a) + (1<<(b)) - 1) >> (b))
#define FF_CEIL_RSHIFT AV_CEIL_RSHIFT
FFUDIV (((a)>0 ?(a):(a)-(b)+1) / (b))
FFUMOD ((a)-(b)*FFUDIV(a,b))
FFABS ((a) >= 0 ? (a) : (-(a)))
FFSIGN ((a) > 0 ? 1 : -1)
FFNABS ((a) <= 0 ? (a) : (-(a)))
FFDIFFSIGN (((x)>(y)) - ((x)<(y)))
FFMAX ((a) > (b) ? (a) : (b))
FFMAX3 FFMAX(FFMAX(a,b),c)
FFMIN ((a) > (b) ? (b) : (a))
FFMIN3 FFMIN(FFMIN(a,b),c)
FFSWAP dowhile(0)
FF_ARRAY_ELEMS (sizeof(a) / sizeof((a)[0]))
#   include
#   include
av_log2;
av_log2_16bit;
av_clip_c
av_clip64_c
av_clip_uint8_c
av_clip_int8_c
av_clip_uint16_c
av_clip_int16_c
av_clipl_int32_c
av_clip_intp2_c
av_clip_uintp2_c
av_mod_uintp2_c
av_sat_add32_c
av_sat_dadd32_c
av_clipf_c
av_clipd_c
av_ceil_log2_c
av_popcount_c
av_popcount64_c
av_parity_c
MKTAG ((a) | ((b) << 8) | ((c) << 16) | ((unsigned)(d) << 24))
MKBETAG ((d) | ((c) << 8) | ((b) << 16) | ((unsigned)(a) << 24))
GET_UTF8\
val= (GET_BYTE);\
GET_UTF16\
val = GET_16BIT;\
\
PUT_UTF8\
PUT_UTF16\
\
#    include
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
