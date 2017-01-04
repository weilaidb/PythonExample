#if HAVE_ALTIVEC
#define STEP8(s0, s1, s2, s3, s4, s5, s6, s7, vec_rnd) \
do while(0)
#define SHIFT_HOR8(s0, s1, s2, s3, s4, s5, s6, s7) \
do while(0)
#define SHIFT_VERT8(s0, s1, s2, s3, s4, s5, s6, s7) \
do while(0)
#define STEP4(s0, s1, s2, s3, vec_rnd) \
do while (0)
#define SHIFT_HOR4(s0, s1, s2, s3) \
s0 = vec_sra(s0, vec_3); \
s1 = vec_sra(s1, vec_3); \
s2 = vec_sra(s2, vec_3); \
s3 = vec_sra(s3, vec_3);
#define SHIFT_VERT4(s0, s1, s2, s3) \
s0 = vec_sra(s0, vec_7); \
s1 = vec_sra(s1, vec_7); \
s2 = vec_sra(s2, vec_7); \
s3 = vec_sra(s3, vec_7);
static void vc1_inv_trans_8x8_altivec(int16_t block[64])
static void vc1_inv_trans_8x4_altivec(uint8_t *dest, int stride, int16_t *block)
#define PUT_OP_U8_ALTIVEC(d, s, dst) d = s
#define AVG_OP_U8_ALTIVEC(d, s, dst) d = vec_avg(dst, s)
#define OP_U8_ALTIVEC                          PUT_OP_U8_ALTIVEC
#define PREFIX_no_rnd_vc1_chroma_mc8_altivec   put_no_rnd_vc1_chroma_mc8_altivec
#undef OP_U8_ALTIVEC
#undef PREFIX_no_rnd_vc1_chroma_mc8_altivec
#define OP_U8_ALTIVEC                          AVG_OP_U8_ALTIVEC
#define PREFIX_no_rnd_vc1_chroma_mc8_altivec   avg_no_rnd_vc1_chroma_mc8_altivec
#undef OP_U8_ALTIVEC
#undef PREFIX_no_rnd_vc1_chroma_mc8_altivec
av_cold void ff_vc1dsp_init_ppc(VC1DSPContext *dsp)
