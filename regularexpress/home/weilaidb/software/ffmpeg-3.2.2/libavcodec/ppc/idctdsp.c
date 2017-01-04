#if HAVE_ALTIVEC_H
#if HAVE_ALTIVEC
#define IDCT_HALF                                       \                                     \
t1 = vec_mradds(a1, vx7, vx1);                      \
t8 = vec_mradds(a1, vx1, vec_subs(zero, vx7));      \
t7 = vec_mradds(a2, vx5, vx3);                      \
t3 = vec_mradds(ma2, vx3, vx5);                     \
\                                     \
t5 = vec_adds(vx0, vx4);                            \
t0 = vec_subs(vx0, vx4);                            \
t2 = vec_mradds(a0, vx6, vx2);                      \
t4 = vec_mradds(a0, vx2, vec_subs(zero, vx6));      \
t6 = vec_adds(t8, t3);                              \
t3 = vec_subs(t8, t3);                              \
t8 = vec_subs(t1, t7);                              \
t1 = vec_adds(t1, t7);                              \
\                                     \
t7 = vec_adds(t5, t2);                              \
t2 = vec_subs(t5, t2);                              \
t5 = vec_adds(t0, t4);                              \
t0 = vec_subs(t0, t4);                              \
t4 = vec_subs(t8, t3);                              \
t3 = vec_adds(t8, t3);                              \
\                                     \
vy0 = vec_adds(t7, t1);                             \
vy7 = vec_subs(t7, t1);                             \
vy1 = vec_mradds(c4, t3, t5);                       \
vy6 = vec_mradds(mc4, t3, t5);                      \
vy2 = vec_mradds(c4, t4, t0);                       \
vy5 = vec_mradds(mc4, t4, t0);                      \
vy3 = vec_adds(t2, t6);                             \
vy4 = vec_subs(t2, t6)
#define IDCT                                                                \
vec_s16 vy0, vy1, vy2, vy3, vy4, vy5, vy6, vy7;                         \
vec_s16 t0, t1, t2, t3, t4, t5, t6, t7, t8;                             \
\
vec_s16 c4   = vec_splat(constants[0], 0);                              \
vec_s16 a0   = vec_splat(constants[0], 1);                              \
vec_s16 a1   = vec_splat(constants[0], 2);                              \
vec_s16 a2   = vec_splat(constants[0], 3);                              \
vec_s16 mc4  = vec_splat(constants[0], 4);                              \
vec_s16 ma2  = vec_splat(constants[0], 5);                              \
vec_s16 bias = (vec_s16) vec_splat((vec_s32) constants[0], 3);          \
\
vec_s16 zero  = vec_splat_s16(0);                                       \
vec_u16 shift = vec_splat_u16(4);                                       \
\
vec_s16 vx0 = vec_mradds(vec_sl(block[0], shift), constants[1], zero);  \
vec_s16 vx1 = vec_mradds(vec_sl(block[1], shift), constants[2], zero);  \
vec_s16 vx2 = vec_mradds(vec_sl(block[2], shift), constants[3], zero);  \
vec_s16 vx3 = vec_mradds(vec_sl(block[3], shift), constants[4], zero);  \
vec_s16 vx4 = vec_mradds(vec_sl(block[4], shift), constants[1], zero);  \
vec_s16 vx5 = vec_mradds(vec_sl(block[5], shift), constants[4], zero);  \
vec_s16 vx6 = vec_mradds(vec_sl(block[6], shift), constants[3], zero);  \
vec_s16 vx7 = vec_mradds(vec_sl(block[7], shift), constants[2], zero);  \
\
IDCT_HALF;                                                              \
\
vx0 = vec_mergeh(vy0, vy4);                                             \
vx1 = vec_mergel(vy0, vy4);                                             \
vx2 = vec_mergeh(vy1, vy5);                                             \
vx3 = vec_mergel(vy1, vy5);                                             \
vx4 = vec_mergeh(vy2, vy6);                                             \
vx5 = vec_mergel(vy2, vy6);                                             \
vx6 = vec_mergeh(vy3, vy7);                                             \
vx7 = vec_mergel(vy3, vy7);                                             \
\
vy0 = vec_mergeh(vx0, vx4);                                             \
vy1 = vec_mergel(vx0, vx4);                                             \
vy2 = vec_mergeh(vx1, vx5);                                             \
vy3 = vec_mergel(vx1, vx5);                                             \
vy4 = vec_mergeh(vx2, vx6);                                             \
vy5 = vec_mergel(vx2, vx6);                                             \
vy6 = vec_mergeh(vx3, vx7);                                             \
vy7 = vec_mergel(vx3, vx7);                                             \
\
vx0 = vec_adds(vec_mergeh(vy0, vy4), bias);                             \
vx1 = vec_mergel(vy0, vy4);                                             \
vx2 = vec_mergeh(vy1, vy5);                                             \
vx3 = vec_mergel(vy1, vy5);                                             \
vx4 = vec_mergeh(vy2, vy6);                                             \
vx5 = vec_mergel(vy2, vy6);                                             \
vx6 = vec_mergeh(vy3, vy7);                                             \
vx7 = vec_mergel(vy3, vy7);                                             \
\
IDCT_HALF;                                                              \
\
shift = vec_splat_u16(6);                                               \
vx0 = vec_sra(vy0, shift);                                              \
vx1 = vec_sra(vy1, shift);                                              \
vx2 = vec_sra(vy2, shift);                                              \
vx3 = vec_sra(vy3, shift);                                              \
vx4 = vec_sra(vy4, shift);                                              \
vx5 = vec_sra(vy5, shift);                                              \
vx6 = vec_sra(vy6, shift);                                              \
vx7 = vec_sra(vy7, shift)
static const vec_s16 constants[5] = ;
static void idct_altivec(int16_t *blk)
static void idct_put_altivec(uint8_t *dest, int stride, int16_t *blk)
static void idct_add_altivec(uint8_t *dest, int stride, int16_t *blk)
av_cold void ff_idctdsp_init_ppc(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)
