static const uint8_t mc_filt_mask_arr[16 * 3] = ;
static const int8_t vp9_bilinear_filters_msa[15][2] = ;
FILT_8TAP_DPADD_S_H         \
(  )
HORIZ_8TAP_FILT              \
(  )
HORIZ_8TAP_4WID_4VECS_FILT                              \
HORIZ_8TAP_8WID_4VECS_FILT                    \
PCKEV_XORI128_AVG_ST_UB  \
PCKEV_AVG_ST_UB                  \
PCKEV_AVG_ST8x4_UB                                \
common_hz_8t_4x4_msa
common_hz_8t_4x8_msa
common_hz_8t_4x16_msa
common_hz_8t_4w_msa
common_hz_8t_8x4_msa
common_hz_8t_8x8mult_msa
common_hz_8t_8w_msa
common_hz_8t_16w_msa
common_hz_8t_32w_msa
common_hz_8t_64w_msa
common_vt_8t_4w_msa
common_vt_8t_8w_msa
common_vt_8t_16w_msa
common_vt_8t_16w_mult_msa
common_vt_8t_32w_msa
common_vt_8t_64w_msa
common_hv_8ht_8vt_4w_msa
common_hv_8ht_8vt_8w_msa
common_hv_8ht_8vt_16w_msa
common_hv_8ht_8vt_32w_msa
common_hv_8ht_8vt_64w_msa
common_hz_8t_and_aver_dst_4x4_msa
common_hz_8t_and_aver_dst_4x8_msa
common_hz_8t_and_aver_dst_4w_msa
common_hz_8t_and_aver_dst_8w_msa
common_hz_8t_and_aver_dst_16w_msa
common_hz_8t_and_aver_dst_32w_msa
common_hz_8t_and_aver_dst_64w_msa
common_vt_8t_and_aver_dst_4w_msa
common_vt_8t_and_aver_dst_8w_msa
common_vt_8t_and_aver_dst_16w_mult_msa
common_vt_8t_and_aver_dst_16w_msa
common_vt_8t_and_aver_dst_32w_msa
common_vt_8t_and_aver_dst_64w_msa
common_hv_8ht_8vt_and_aver_dst_4w_msa
common_hv_8ht_8vt_and_aver_dst_8w_msa
common_hv_8ht_8vt_and_aver_dst_16w_msa
common_hv_8ht_8vt_and_aver_dst_32w_msa
common_hv_8ht_8vt_and_aver_dst_64w_msa
common_hz_2t_4x4_msa
common_hz_2t_4x8_msa
ff_put_bilin_4h_msa
common_hz_2t_8x4_msa
common_hz_2t_8x8mult_msa
ff_put_bilin_8h_msa
ff_put_bilin_16h_msa
ff_put_bilin_32h_msa
ff_put_bilin_64h_msa
common_vt_2t_4x4_msa
common_vt_2t_4x8_msa
ff_put_bilin_4v_msa
common_vt_2t_8x4_msa
common_vt_2t_8x8mult_msa
ff_put_bilin_8v_msa
ff_put_bilin_16v_msa
ff_put_bilin_32v_msa
ff_put_bilin_64v_msa
common_hv_2ht_2vt_4x4_msa
common_hv_2ht_2vt_4x8_msa
ff_put_bilin_4hv_msa
common_hv_2ht_2vt_8x4_msa
common_hv_2ht_2vt_8x8mult_msa
ff_put_bilin_8hv_msa
ff_put_bilin_16hv_msa
ff_put_bilin_32hv_msa
ff_put_bilin_64hv_msa
common_hz_2t_and_aver_dst_4x4_msa
common_hz_2t_and_aver_dst_4x8_msa
ff_avg_bilin_4h_msa
common_hz_2t_and_aver_dst_8x4_msa
common_hz_2t_and_aver_dst_8x8mult_msa
ff_avg_bilin_8h_msa
ff_avg_bilin_16h_msa
ff_avg_bilin_32h_msa
ff_avg_bilin_64h_msa
common_vt_2t_and_aver_dst_4x4_msa
common_vt_2t_and_aver_dst_4x8_msa
ff_avg_bilin_4v_msa
common_vt_2t_and_aver_dst_8x4_msa
common_vt_2t_and_aver_dst_8x8mult_msa
ff_avg_bilin_8v_msa
ff_avg_bilin_16v_msa
ff_avg_bilin_32v_msa
ff_avg_bilin_64v_msa
common_hv_2ht_2vt_and_aver_dst_4x4_msa
common_hv_2ht_2vt_and_aver_dst_4x8_msa
ff_avg_bilin_4hv_msa
common_hv_2ht_2vt_and_aver_dst_8x4_msa
common_hv_2ht_2vt_and_aver_dst_8x8mult_msa
ff_avg_bilin_8hv_msa
ff_avg_bilin_16hv_msa
ff_avg_bilin_32hv_msa
ff_avg_bilin_64hv_msa
copy_width8_msa
copy_16multx8mult_msa
copy_width16_msa
copy_width32_msa
copy_width64_msa
avg_width4_msa
avg_width8_msa
avg_width16_msa
avg_width32_msa
avg_width64_msa
static const int8_t vp9_subpel_filters_msa[3][15][8] = ;
VP9_8TAP_MIPS_MSA_FUNC                           \
void ff_put_8tap_##type##_##SIZE##h_msa(uint8_t *dst, ptrdiff_t dststride,     \
const uint8_t *src,                    \
ptrdiff_t srcstride,                   \
int h, int mx, int my)                 \
\
\
void ff_put_8tap_##type##_##SIZE##v_msa(uint8_t *dst, ptrdiff_t dststride,     \
const uint8_t *src,                    \
ptrdiff_t srcstride,                   \
int h, int mx, int my)                 \
\
\
void ff_put_8tap_##type##_##SIZE##hv_msa(uint8_t *dst, ptrdiff_t dststride,    \
const uint8_t *src,                   \
ptrdiff_t srcstride,                  \
int h, int mx, int my)                \
\
\
void ff_avg_8tap_##type##_##SIZE##h_msa(uint8_t *dst, ptrdiff_t dststride,     \
const uint8_t *src,                    \
ptrdiff_t srcstride,                   \
int h, int mx, int my)                 \
\
\
void ff_avg_8tap_##type##_##SIZE##v_msa(uint8_t *dst, ptrdiff_t dststride,     \
const uint8_t *src,                    \
ptrdiff_t srcstride,                   \
int h, int mx, int my)                 \
\
\
void ff_avg_8tap_##type##_##SIZE##hv_msa(uint8_t *dst, ptrdiff_t dststride,    \
const uint8_t *src,                   \
ptrdiff_t srcstride,                  \
int h, int mx, int my)                \
VP9_COPY_AVG_MIPS_MSA_FUNC                           \
void ff_copy##SIZE##_msa(uint8_t *dst, ptrdiff_t dststride,        \
const uint8_t *src, ptrdiff_t srcstride,  \
int h, int mx, int my)                    \
\
\
void ff_avg##SIZE##_msa(uint8_t *dst, ptrdiff_t dststride,         \
const uint8_t *src, ptrdiff_t srcstride,   \
int h, int mx, int my)                     \
VP9_AVG_MIPS_MSA_FUNC                               \
void ff_avg##SIZE##_msa(uint8_t *dst, ptrdiff_t dststride,        \
const uint8_t *src, ptrdiff_t srcstride,  \
int h, int mx, int my)                    \
VP9_8TAP_MIPS_MSA_FUNC(64, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(32, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(16, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(8, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(4, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(64, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(32, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(16, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(8, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(4, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(64, smooth, FILTER_8TAP_SMOOTH);
VP9_8TAP_MIPS_MSA_FUNC(32, smooth, FILTER_8TAP_SMOOTH);
VP9_8TAP_MIPS_MSA_FUNC(16, smooth, FILTER_8TAP_SMOOTH);
VP9_8TAP_MIPS_MSA_FUNC(8, smooth, FILTER_8TAP_SMOOTH);
VP9_8TAP_MIPS_MSA_FUNC(4, smooth, FILTER_8TAP_SMOOTH);
VP9_COPY_AVG_MIPS_MSA_FUNC(64);
VP9_COPY_AVG_MIPS_MSA_FUNC(32);
VP9_COPY_AVG_MIPS_MSA_FUNC(16);
VP9_COPY_AVG_MIPS_MSA_FUNC(8);
VP9_AVG_MIPS_MSA_FUNC(4);
#undef VP9_8TAP_MIPS_MSA_FUNC
#undef VP9_COPY_AVG_MIPS_MSA_FUNC
#undef VP9_AVG_MIPS_MSA_FUNC
