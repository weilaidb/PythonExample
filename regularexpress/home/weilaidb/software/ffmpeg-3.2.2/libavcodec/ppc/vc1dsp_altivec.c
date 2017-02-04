#if HAVE_ALTIVEC
STEP8 \
while
SHIFT_HOR8 \
while
SHIFT_VERT8 \
while
STEP4 \
do while (0)
SHIFT_HOR4 \
s0 = vec_sra(s0, vec_3); \
s1 = vec_sra(s1, vec_3); \
s2 = vec_sra(s2, vec_3); \
s3 = vec_sra(s3, vec_3);
SHIFT_VERT4 \
s0 = vec_sra(s0, vec_7); \
s1 = vec_sra(s1, vec_7); \
s2 = vec_sra(s2, vec_7); \
s3 = vec_sra(s3, vec_7);
vc1_inv_trans_8x8_altivec
vc1_inv_trans_8x4_altivec
PUT_OP_U8_ALTIVEC d = s
AVG_OP_U8_ALTIVEC d = vec_avg(dst, s)
#define OP_U8_ALTIVEC                          PUT_OP_U8_ALTIVEC
#define PREFIX_no_rnd_vc1_chroma_mc8_altivec   put_no_rnd_vc1_chroma_mc8_altivec
#undef OP_U8_ALTIVEC
#undef PREFIX_no_rnd_vc1_chroma_mc8_altivec
#define OP_U8_ALTIVEC                          AVG_OP_U8_ALTIVEC
#define PREFIX_no_rnd_vc1_chroma_mc8_altivec   avg_no_rnd_vc1_chroma_mc8_altivec
#undef OP_U8_ALTIVEC
#undef PREFIX_no_rnd_vc1_chroma_mc8_altivec
ff_vc1dsp_init_ppc
