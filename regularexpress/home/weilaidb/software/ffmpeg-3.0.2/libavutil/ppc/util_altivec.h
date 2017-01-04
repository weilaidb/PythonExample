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
#define vcprm(a,b,c,d) (const vec_u8)
#define SWP_W2S0 0x02,0x03,0x00,0x01
#define SWP_W2S1 0x06,0x07,0x04,0x05
#define SWP_W2S2 0x0a,0x0b,0x08,0x09
#define SWP_W2S3 0x0e,0x0f,0x0c,0x0d
#define SWP_W2Ss0 0x12,0x13,0x10,0x11
#define SWP_W2Ss1 0x16,0x17,0x14,0x15
#define SWP_W2Ss2 0x1a,0x1b,0x18,0x19
#define SWP_W2Ss3 0x1e,0x1f,0x1c,0x1d
#define vcswapi2s(a,b,c,d) (const vector unsigned char)
#define vcswapc() \
(const vector unsigned char)
#define TRANSPOSE8(a,b,c,d,e,f,g,h) \
do  while (0)
#if HAVE_BIGENDIAN
#define VEC_LD(offset,b)                                   \
vec_perm(vec_ld(offset, b), vec_ld((offset)+15, b), vec_lvsl(offset, b))
#define VEC_LD(offset,b)                                   \
vec_vsx_ld(offset, b)
#if HAVE_BIGENDIAN
static inline vec_u8 unaligned_load(int offset, const uint8_t *src)
static inline vec_u8 load_with_perm_vec(int offset, const uint8_t *src, vec_u8 perm_vec)
#define unaligned_load(a,b) VEC_LD(a,b)
#define load_with_perm_vec(a,b,c) VEC_LD(a,b)
#define vec_unaligned_load(b)  VEC_LD(0, b)
#if HAVE_BIGENDIAN
#define VEC_MERGEH(a, b) vec_mergeh(a, b)
#define VEC_MERGEL(a, b) vec_mergel(a, b)
#define VEC_MERGEH(a, b) vec_mergeh(b, a)
#define VEC_MERGEL(a, b) vec_mergel(b, a)
#if HAVE_BIGENDIAN
#define VEC_ST(a,b,c) vec_st(a,b,c)
#define VEC_ST(a,b,c) vec_vsx_st(a,b,c)
#if HAVE_BIGENDIAN
#define VEC_SPLAT16(a,b) vec_splat((vec_s16)(a), b)
#define VEC_SPLAT16(a,b) vec_splat((vec_s16)(vec_perm(a, a, vcswapi2s(0,1,2,3))), b)
#if HAVE_BIGENDIAN
#define VEC_SLD16(a,b,c) vec_sld(a, b, c)
#define VEC_SLD16(a,b,c) vec_sld(b, a, c)
#if HAVE_VSX
#if HAVE_BIGENDIAN
#define vsx_ld_u8_s16(off, p)                               \
((vec_s16)vec_mergeh((vec_u8)vec_splat_u8(0),           \
(vec_u8)vec_vsx_ld((off), (p))))
#define vsx_ld_u8_s16(off, p)                               \
((vec_s16)vec_mergeh((vec_u8)vec_vsx_ld((off), (p)),    \
(vec_u8)vec_splat_u8(0)))
