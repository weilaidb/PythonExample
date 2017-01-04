static const int cospi8sqrt2minus1 = 20091;
static const int sinpi8sqrt2 = 35468;
#define VP8_IDCT_1D_W(in0, in1, in2, in3, out0, out1, out2, out3)    \
void ff_vp8_idct_add_msa(uint8_t *dst, int16_t input[16], ptrdiff_t stride)
void ff_vp8_idct_dc_add_msa(uint8_t *dst, int16_t in_dc[16], ptrdiff_t stride)
void ff_vp8_luma_dc_wht_msa(int16_t block[4][4][16], int16_t input[16])
void ff_vp8_idct_dc_add4y_msa(uint8_t *dst, int16_t block[4][16],
ptrdiff_t stride)
void ff_vp8_idct_dc_add4uv_msa(uint8_t *dst, int16_t block[4][16],
ptrdiff_t stride)
