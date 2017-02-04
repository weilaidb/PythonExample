#define VP9_DCT_CONST_BITS   14
ROUND_POWER_OF_TWO  (((value) + (1 << ((n) - 1))) >> (n))
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
VP9_DOTP_CONST_PAIR  \
VP9_DOT_ADD_SUB_SRARI_PCK              \
VP9_DOT_SHIFT_RIGHT_PCK_H          \
(  )
VP9_ADST8         \
VP9_MADD_SHORT                        \
VP9_MADD_BF                               \
VP9_SET_COSPI_PAIR   \
(  )
VP9_ADDBLK_ST8x4_UB  \
VP9_IDCT4x4       \
VP9_IADST4x4      \
TRANSPOSE4X8_SH_SH  \
vp9_idct4x4_1_add_msa
vp9_idct4x4_colcol_addblk_msa
vp9_iadst4x4_colcol_addblk_msa
vp9_iadst_idct_4x4_add_msa
vp9_idct_iadst_4x4_add_msa
VP9_SET_CONST_PAIR     \
(  )
VP9_MADD                                  \
VP9_IDCT8x8_1D         \
VP9_IADST8x8_1D      \
vp9_idct8x8_1_add_msa
vp9_idct8x8_12_colcol_addblk_msa
vp9_idct8x8_colcol_addblk_msa
vp9_iadst8x8_colcol_addblk_msa
vp9_iadst_idct_8x8_add_msa
vp9_idct_iadst_8x8_add_msa
VP9_IADST8x16_1D                  \
vp9_idct16_1d_columns_addblk_msa
vp9_idct16_1d_columns_msa
vp9_idct16x16_1_add_msa
vp9_idct16x16_10_colcol_addblk_msa
vp9_idct16x16_colcol_addblk_msa
vp9_iadst16_1d_columns_msa
vp9_iadst16_1d_columns_addblk_msa
vp9_iadst16x16_colcol_addblk_msa
vp9_iadst_idct_16x16_add_msa
vp9_idct_iadst_16x16_add_msa
vp9_idct_butterfly_transpose_store
vp9_idct8x32_column_even_process_store
vp9_idct8x32_column_odd_process_store
vp9_idct8x32_column_butterfly_addblk
vp9_idct8x32_1d_columns_addblk_msa
vp9_idct8x32_1d_columns_msa
vp9_idct32x32_1_add_msa
vp9_idct32x32_34_colcol_addblk_msa
vp9_idct32x32_colcol_addblk_msa
ff_idct_idct_4x4_add_msa
ff_idct_idct_8x8_add_msa
ff_idct_idct_16x16_add_msa
ff_idct_idct_32x32_add_msa
ff_iadst_iadst_4x4_add_msa
ff_iadst_iadst_8x8_add_msa
ff_iadst_iadst_16x16_add_msa
ff_idct_iadst_4x4_add_msa
ff_idct_iadst_8x8_add_msa
ff_idct_iadst_16x16_add_msa
ff_iadst_idct_4x4_add_msa
ff_iadst_idct_8x8_add_msa
ff_iadst_idct_16x16_add_msa
