#define AVCODEC_MATHOPS_H
#define MAX_NEG_CROP 1024
extern const uint32_t ff_inverse[257];
extern const uint8_t ff_sqrt_tab[256];
extern const uint8_t ff_crop_tab[256 + 2 * MAX_NEG_CROP];
extern const uint8_t ff_zigzag_direct[64];
extern const uint8_t ff_zigzag_scan[16+1];
#if   ARCH_ARM
#   include "arm/mathops.h"
#elif ARCH_AVR32
#   include "avr32/mathops.h"
#elif ARCH_MIPS
#   include "mips/mathops.h"
#elif ARCH_PPC
#   include "ppc/mathops.h"
#elif ARCH_X86
#   include "x86/mathops.h"
#   define MUL64(a,b) ((int64_t)(a) * (int64_t)(b))
#   define MULL(a,b,s) (MUL64(a, b) >> (s))
static av_always_inline int MULH(int a, int b)
static av_always_inline unsigned UMULH(unsigned a, unsigned b)
#   define MAC64(d, a, b) ((d) += MUL64(a, b))
#   define MLS64(d, a, b) ((d) -= MUL64(a, b))
#   define MAC16(rt, ra, rb) rt += (ra) * (rb)
#   define MUL16(ra, rb) ((ra) * (rb))
#   define MLS16(rt, ra, rb) ((rt) -= (ra) * (rb))
#define mid_pred mid_pred
static inline av_const int mid_pred(int a, int b, int c)
#define median4 median4
static inline av_const int median4(int a, int b, int c, int d)
static inline av_const int sign_extend(int val, unsigned bits)
static inline av_const unsigned zero_extend(unsigned val, unsigned bits)
#define COPY3_IF_LT(x, y, a, b, c, d)\
if ((y) < (x))
#define MASK_ABS(mask, level) do  while (0)
#   define NEG_SSR32(a,s) ((( int32_t)(a))>>(32-(s)))
#   define NEG_USR32(a,s) (((uint32_t)(a))>>(32-(s)))
#if HAVE_BIGENDIAN
# ifndef PACK_2U8
#   define PACK_2U8(a,b)     (((a) <<  8) | (b))
# endif
# ifndef PACK_4U8
#   define PACK_4U8(a,b,c,d) (((a) << 24) | ((b) << 16) | ((c) << 8) | (d))
# endif
# ifndef PACK_2U16
#   define PACK_2U16(a,b)    (((a) << 16) | (b))
# endif
# ifndef PACK_2U8
#   define PACK_2U8(a,b)     (((b) <<  8) | (a))
# endif
# ifndef PACK_4U2
#   define PACK_4U8(a,b,c,d) (((d) << 24) | ((c) << 16) | ((b) << 8) | (a))
# endif
# ifndef PACK_2U16
#   define PACK_2U16(a,b)    (((b) << 16) | (a))
# endif
#   define PACK_2S8(a,b)     PACK_2U8((a)&255, (b)&255)
#   define PACK_4S8(a,b,c,d) PACK_4U8((a)&255, (b)&255, (c)&255, (d)&255)
#   define PACK_2S16(a,b)    PACK_2U16((a)&0xffff, (b)&0xffff)
#   define FASTDIV(a,b) ((uint32_t)((((uint64_t)a) * ff_inverse[b]) >> 32))
#define ff_sqrt ff_sqrt
static inline av_const unsigned int ff_sqrt(unsigned int a)
static inline av_const float ff_sqrf(float a)
static inline int8_t ff_u8_to_s8(uint8_t a)
