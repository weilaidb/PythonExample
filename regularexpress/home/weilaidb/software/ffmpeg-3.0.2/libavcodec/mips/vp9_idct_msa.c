#define VP9_DCT_CONST_BITS   14
#define ROUND_POWER_OF_TWO(value, n)  (((value) + (1 << ((n) - 1))) >> (n))
static const int32_t cospi_1_64 = 16364;
static const int32_t cospi_2_64 = 16305;
static const int32_t cospi_3_64 = 16207;
static const int32_t cospi_4_64 = 16069;
static const int32_t cospi_5_64 = 15893;
static const int32_t cospi_6_64 = 15679;
static const int32_t cospi_7_64 = 15426;
static const int32_t cospi_8_64 = 15137;
static const int32_t cospi_9_64 = 14811;
static const int32_t cospi_10_64 = 14449;
static const int32_t cospi_11_64 = 14053;
static const int32_t cospi_12_64 = 13623;
static const int32_t cospi_13_64 = 13160;
static const int32_t cospi_14_64 = 12665;
static const int32_t cospi_15_64 = 12140;
static const int32_t cospi_16_64 = 11585;
static const int32_t cospi_17_64 = 11003;
static const int32_t cospi_18_64 = 10394;
static const int32_t cospi_19_64 = 9760;
static const int32_t cospi_20_64 = 9102;
static const int32_t cospi_21_64 = 8423;
static const int32_t cospi_22_64 = 7723;
static const int32_t cospi_23_64 = 7005;
static const int32_t cospi_24_64 = 6270;
static const int32_t cospi_25_64 = 5520;
static const int32_t cospi_26_64 = 4756;
static const int32_t cospi_27_64 = 3981;
static const int32_t cospi_28_64 = 3196;
static const int32_t cospi_29_64 = 2404;
static const int32_t cospi_30_64 = 1606;
static const int32_t cospi_31_64 = 804;
static const int32_t sinpi_1_9 = 5283;
static const int32_t sinpi_2_9 = 9929;
static const int32_t sinpi_3_9 = 13377;
static const int32_t sinpi_4_9 = 15212;
#define VP9_DOTP_CONST_PAIR(reg0, reg1, cnst0, cnst1, out0, out1)  \
#define VP9_DOT_ADD_SUB_SRARI_PCK(in0, in1, in2, in3, in4, in5, in6, in7,  \
dst0, dst1, dst2, dst3)              \
#define VP9_DOT_SHIFT_RIGHT_PCK_H(in0, in1, in2)          \
(  )
#define VP9_ADST8(in0, in1, in2, in3, in4, in5, in6, in7,                 \
out0, out1, out2, out3, out4, out5, out6, out7)         \
#define VP9_MADD_SHORT(m0, m1, c0, c1, res0, res1)                        \
#define VP9_MADD_BF(inp0, inp1, inp2, inp3, cst0, cst1, cst2, cst3,       \
out0, out1, out2, out3)                               \
#define VP9_SET_COSPI_PAIR(c0_h, c1_h)   \
(  )
#define VP9_ADDBLK_ST8x4_UB(dst, dst_stride, in0, in1, in2, in3)  \
#define VP9_IDCT4x4(in0, in1, in2, in3, out0, out1, out2, out3)       \
#define VP9_IADST4x4(in0, in1, in2, in3, out0, out1, out2, out3)      \
#define TRANSPOSE4X8_SH_SH(in0, in1, in2, in3, in4, in5, in6, in7,          \
out0, out1, out2, out3, out4, out5, out6, out7)  \
static void vp9_idct4x4_1_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_idct4x4_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_iadst4x4_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_iadst_idct_4x4_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride, int32_t eob)
static void vp9_idct_iadst_4x4_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride, int32_t eob)
#define VP9_SET_CONST_PAIR(mask_h, idx1_h, idx2_h)     \
(  )
#define VP9_MADD(inp0, inp1, inp2, inp3, cst0, cst1, cst2, cst3,          \
out0, out1, out2, out3)                                  \
#define VP9_IDCT8x8_1D(in0, in1, in2, in3, in4, in5, in6, in7,                 \
out0, out1, out2, out3, out4, out5, out6, out7)         \
#define VP9_IADST8x8_1D(in0, in1, in2, in3, in4, in5, in6, in7,              \
out0, out1, out2, out3, out4, out5, out6, out7)      \
static void vp9_idct8x8_1_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_idct8x8_12_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_idct8x8_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_iadst8x8_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_iadst_idct_8x8_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride, int32_t eob)
static void vp9_idct_iadst_8x8_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride, int32_t eob)
#define VP9_IADST8x16_1D(r0, r1, r2, r3, r4, r5, r6, r7, r8,          \
r9, r10, r11, r12, r13, r14, r15,            \
out0, out1, out2, out3, out4, out5,          \
out6, out7, out8, out9, out10, out11,        \
out12, out13, out14, out15)                  \
static void vp9_idct16_1d_columns_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_idct16_1d_columns_msa(int16_t *input, int16_t *output)
static void vp9_idct16x16_1_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_idct16x16_10_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_idct16x16_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_iadst16_1d_columns_msa(int16_t *input, int16_t *output)
static void vp9_iadst16_1d_columns_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_iadst16x16_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_iadst_idct_16x16_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride, int32_t eob)
static void vp9_idct_iadst_16x16_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride, int32_t eob)
static void vp9_idct_butterfly_transpose_store(int16_t *tmp_buf,
int16_t *tmp_eve_buf,
int16_t *tmp_odd_buf,
int16_t *dst)
static void vp9_idct8x32_column_even_process_store(int16_t *tmp_buf,
int16_t *tmp_eve_buf)
static void vp9_idct8x32_column_odd_process_store(int16_t *tmp_buf,
int16_t *tmp_odd_buf)
static void vp9_idct8x32_column_butterfly_addblk(int16_t *tmp_eve_buf,
int16_t *tmp_odd_buf,
uint8_t *dst,
int32_t dst_stride)
static void vp9_idct8x32_1d_columns_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_idct8x32_1d_columns_msa(int16_t *input, int16_t *output,
int16_t *tmp_buf)
static void vp9_idct32x32_1_add_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_idct32x32_34_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
static void vp9_idct32x32_colcol_addblk_msa(int16_t *input, uint8_t *dst,
int32_t dst_stride)
void ff_idct_idct_4x4_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_idct_idct_8x8_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_idct_idct_16x16_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_idct_idct_32x32_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_iadst_iadst_4x4_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_iadst_iadst_8x8_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_iadst_iadst_16x16_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_idct_iadst_4x4_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_idct_iadst_8x8_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_idct_iadst_16x16_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_iadst_idct_4x4_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_iadst_idct_8x8_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
void ff_iadst_idct_16x16_add_msa(uint8_t *dst, ptrdiff_t stride,
int16_t *block, int eob)
