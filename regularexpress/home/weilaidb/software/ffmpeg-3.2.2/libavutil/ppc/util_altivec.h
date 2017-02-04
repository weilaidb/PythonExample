#define AVUTIL_PPC_UTIL_ALTIVEC_H
#if HAVE_ALTIVEC_H
#if HAVE_ALTIVEC
#define WORD_0 0x00,0x01,0x02,0x03
#define WORD_1 0x04,0x05,0x06,0x07
#define WORD_2 0x08,0x09,0x0a,0x0b
#define WORD_3 0x0c,0x0d,0x0e,0x0f
#define WORD_s0 0x10,0x11,0x12,0x13
#define WORD_s1 0x14,0x15,0x16,0x17
#define WORD_s2 0x18,0x19,0x1a,0x1b
#define WORD_s3 0x1c,0x1d,0x1e,0x1f
vcprm (const vec_u8)
#define SWP_W2S0 0x02,0x03,0x00,0x01
#define SWP_W2S1 0x06,0x07,0x04,0x05
#define SWP_W2S2 0x0a,0x0b,0x08,0x09
#define SWP_W2S3 0x0e,0x0f,0x0c,0x0d
#define SWP_W2Ss0 0x12,0x13,0x10,0x11
#define SWP_W2Ss1 0x16,0x17,0x14,0x15
#define SWP_W2Ss2 0x1a,0x1b,0x18,0x19
#define SWP_W2Ss3 0x1e,0x1f,0x1c,0x1d
vcswapi2s (const vector unsigned char)
vcswapc \
(const vector unsigned char)
TRANSPOSE8 \
do  while (0)
#if HAVE_BIGENDIAN
VEC_LD                                   \
vec_perm(vec_ld(offset, b), vec_ld((offset)+15, b), vec_lvsl(offset, b))
VEC_LD                                   \
vec_vsx_ld(offset, b)
#if HAVE_BIGENDIAN
unaligned_load
load_with_perm_vec
unaligned_load VEC_LD(a,b)
load_with_perm_vec VEC_LD(a,b)
vec_unaligned_load  VEC_LD(0, b)
#if HAVE_BIGENDIAN
VEC_MERGEH vec_mergeh(a, b)
VEC_MERGEL vec_mergel(a, b)
VEC_MERGEH vec_mergeh(b, a)
VEC_MERGEL vec_mergel(b, a)
#if HAVE_BIGENDIAN
VEC_ST vec_st(a,b,c)
VEC_ST vec_vsx_st(a,b,c)
#if HAVE_BIGENDIAN
VEC_SPLAT16 vec_splat((vec_s16)(a), b)
VEC_SPLAT16 vec_splat((vec_s16)(vec_perm(a, a, vcswapi2s(0,1,2,3))), b)
#if HAVE_BIGENDIAN
VEC_SLD16 vec_sld(a, b, c)
VEC_SLD16 vec_sld(b, a, c)
#if HAVE_VSX
#if HAVE_BIGENDIAN
vsx_ld_u8_s16                               \
((vec_s16)vec_mergeh((vec_u8)vec_splat_u8(0),           \
(vec_u8)vec_vsx_ld((off), (p))))
vsx_ld_u8_s16                               \
((vec_s16)vec_mergeh((vec_u8)vec_vsx_ld((off), (p)),    \
(vec_u8)vec_splat_u8(0)))
