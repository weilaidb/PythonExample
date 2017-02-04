ff_vc1_inv_trans_8x8_neon;
ff_vc1_inv_trans_4x8_neon;
ff_vc1_inv_trans_8x4_neon;
ff_vc1_inv_trans_4x4_neon;
ff_vc1_inv_trans_8x8_dc_neon;
ff_vc1_inv_trans_4x8_dc_neon;
ff_vc1_inv_trans_8x4_dc_neon;
ff_vc1_inv_trans_4x4_dc_neon;
ff_put_pixels8x8_neon;
DECL_PUT \
void ff_put_vc1_mspel_mc##X##Y##_neon(uint8_t *dst, const uint8_t *src, \
ptrdiff_t stride, int rnd); \
static void ff_put_vc1_mspel_mc##X##Y##_16_neon(uint8_t *dst, const uint8_t *src, \
ptrdiff_t stride, int rnd) \
DECL_PUT(1, 0)
DECL_PUT(2, 0)
DECL_PUT(3, 0)
DECL_PUT(0, 1)
DECL_PUT(0, 2)
DECL_PUT(0, 3)
DECL_PUT(1, 1)
DECL_PUT(1, 2)
DECL_PUT(1, 3)
DECL_PUT(2, 1)
DECL_PUT(2, 2)
DECL_PUT(2, 3)
DECL_PUT(3, 1)
DECL_PUT(3, 2)
DECL_PUT(3, 3)
ff_put_vc1_chroma_mc8_neon;
ff_avg_vc1_chroma_mc8_neon;
ff_put_vc1_chroma_mc4_neon;
ff_avg_vc1_chroma_mc4_neon;
FN_ASSIGN \
dsp->put_vc1_mspel_pixels_tab[0][X+4*Y] = ff_put_vc1_mspel_mc##X##Y##_16_neon; \
dsp->put_vc1_mspel_pixels_tab[1][X+4*Y] = ff_put_vc1_mspel_mc##X##Y##_neon
ff_vc1dsp_init_neon
