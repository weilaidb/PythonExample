#define AVCODEC_MATHOPS_H
#define MAX_NEG_CROP 1024
extern const uint32_t ff_inverse[257];
extern const uint8_t ff_sqrt_tab[256];
extern const uint8_t ff_crop_tab[256 + 2 * MAX_NEG_CROP];
extern const uint8_t ff_zigzag_direct[64];
extern const uint8_t ff_zigzag_scan[16+1];
#if   ARCH_ARM
#   include
#elif ARCH_AVR32
#   include
#elif ARCH_MIPS
#   include
#elif ARCH_PPC
#   include
#elif ARCH_X86
#   include
MUL64 ((int64_t)(a) * (int64_t)(b))
MULL (MUL64(a, b) >> (s))
MULH
UMULH
MAC64 ((d) += MUL64(a, b))
MLS64 ((d) -= MUL64(a, b))
MAC16 rt += (ra) * (rb)
MUL16 ((ra) * (rb))
MLS16 ((rt) -= (ra) * (rb))
#define mid_pred mid_pred
mid_pred
#define median4 median4
median4
sign_extend
zero_extend
COPY3_IF_LT\
if ((y) < (x))
MASK_ABS do  while (0)
NEG_SSR32 ((( int32_t)(a))>>(32-(s)))
NEG_USR32 (((uint32_t)(a))>>(32-(s)))
#if HAVE_BIGENDIAN
# ifndef PACK_2U8
PACK_2U8     (((a) <<  8) | (b))
# endif
# ifndef PACK_4U8
PACK_4U8 (((a) << 24) | ((b) << 16) | ((c) << 8) | (d))
# endif
# ifndef PACK_2U16
PACK_2U16    (((a) << 16) | (b))
# endif
# ifndef PACK_2U8
PACK_2U8     (((b) <<  8) | (a))
# endif
# ifndef PACK_4U2
PACK_4U8 (((d) << 24) | ((c) << 16) | ((b) << 8) | (a))
# endif
# ifndef PACK_2U16
PACK_2U16    (((b) << 16) | (a))
# endif
PACK_2S8     PACK_2U8((a)&255, (b)&255)
PACK_4S8 PACK_4U8((a)&255, (b)&255, (c)&255, (d)&255)
PACK_2S16    PACK_2U16((a)&0xffff, (b)&0xffff)
FASTDIV ((uint32_t)((((uint64_t)a) * ff_inverse[b]) >> 32))
#define ff_sqrt ff_sqrt
ff_sqrt
ff_sqrf
ff_u8_to_s8
