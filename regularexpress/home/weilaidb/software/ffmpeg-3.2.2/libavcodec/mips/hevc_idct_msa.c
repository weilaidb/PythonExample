static const int16_t gt8x8_cnst[16] = ;
static const int16_t gt16x16_cnst[64] = ;
static const int16_t gt32x32_cnst0[256] = ;
static const int16_t gt32x32_cnst1[64] = ;
static const int16_t gt32x32_cnst2[16] = ;
static const int16_t gt32x32_cnst3[16] = ;
#define HEVC_IDCT4x4_COL(in_r0, in_l0, in_r1, in_l1,          \
sum0, sum1, sum2, sum3, shift)       \
#define HEVC_IDCT8x8_COL(in0, in1, in2, in3, in4, in5, in6, in7, shift)  \
#define HEVC_IDCT16x16_COL(src0_r, src1_r, src2_r, src3_r,                \
src4_r, src5_r, src6_r, src7_r,                \
src0_l, src1_l, src2_l, src3_l,                \
src4_l, src5_l, src6_l, src7_l, shift)         \
#define HEVC_EVEN16_CALC(input, sum0_r, sum0_l, load_idx, store_idx)  \
#define HEVC_IDCT_LUMA4x4_COL(in_r0, in_l0, in_r1, in_l1,     \
res0, res1, res2, res3, shift)  \
static void hevc_idct_4x4_msa(int16_t *coeffs)
static void hevc_idct_8x8_msa(int16_t *coeffs)
static void hevc_idct_16x16_msa(int16_t *coeffs)
static void hevc_idct_8x32_column_msa(int16_t *coeffs, uint8_t buf_pitch,
uint8_t round)
static void hevc_idct_transpose_32x8_to_8x32(int16_t *coeffs, int16_t *tmp_buf)
static void hevc_idct_transpose_8x32_to_32x8(int16_t *tmp_buf, int16_t *coeffs)
static void hevc_idct_32x32_msa(int16_t *coeffs)
static void hevc_idct_dc_4x4_msa(int16_t *coeffs)
static void hevc_idct_dc_8x8_msa(int16_t *coeffs)
static void hevc_idct_dc_16x16_msa(int16_t *coeffs)
static void hevc_idct_dc_32x32_msa(int16_t *coeffs)
static void hevc_addblk_4x4_msa(int16_t *coeffs, uint8_t *dst, int32_t stride)
static void hevc_addblk_8x8_msa(int16_t *coeffs, uint8_t *dst, int32_t stride)
static void hevc_addblk_16x16_msa(int16_t *coeffs, uint8_t *dst, int32_t stride)
static void hevc_addblk_32x32_msa(int16_t *coeffs, uint8_t *dst, int32_t stride)
static void hevc_idct_luma_4x4_msa(int16_t *coeffs)
void ff_hevc_idct_4x4_msa(int16_t *coeffs, int col_limit)
void ff_hevc_idct_8x8_msa(int16_t *coeffs, int col_limit)
void ff_hevc_idct_16x16_msa(int16_t *coeffs, int col_limit)
void ff_hevc_idct_32x32_msa(int16_t *coeffs, int col_limit)
void ff_hevc_addblk_4x4_msa(uint8_t *dst, int16_t *coeffs, ptrdiff_t stride)
void ff_hevc_addblk_8x8_msa(uint8_t *dst, int16_t *coeffs, ptrdiff_t stride)
void ff_hevc_addblk_16x16_msa(uint8_t *dst, int16_t *coeffs, ptrdiff_t stride)
void ff_hevc_addblk_32x32_msa(uint8_t *dst, int16_t *coeffs, ptrdiff_t stride)
void ff_hevc_idct_dc_4x4_msa(int16_t *coeffs)
void ff_hevc_idct_dc_8x8_msa(int16_t *coeffs)
void ff_hevc_idct_dc_16x16_msa(int16_t *coeffs)
void ff_hevc_idct_dc_32x32_msa(int16_t *coeffs)
void ff_hevc_idct_luma_4x4_msa(int16_t *coeffs)
