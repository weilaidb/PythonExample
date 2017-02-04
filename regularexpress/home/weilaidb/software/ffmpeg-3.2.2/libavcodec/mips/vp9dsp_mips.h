#define AVCODEC_MIPS_VP9DSP_MIPS_H
VP9_8TAP_MIPS_MSA_FUNC                         \
void ff_put_8tap_##type##_##SIZE##h_msa(uint8_t *dst, ptrdiff_t dststride,   \
const uint8_t *src,                  \
ptrdiff_t srcstride,                 \
int h, int mx, int my);              \
\
void ff_put_8tap_##type##_##SIZE##v_msa(uint8_t *dst, ptrdiff_t dststride,   \
const uint8_t *src,                  \
ptrdiff_t srcstride,                 \
int h, int mx, int my);              \
\
void ff_put_8tap_##type##_##SIZE##hv_msa(uint8_t *dst, ptrdiff_t dststride,  \
const uint8_t *src,                 \
ptrdiff_t srcstride,                \
int h, int mx, int my);             \
\
void ff_avg_8tap_##type##_##SIZE##h_msa(uint8_t *dst, ptrdiff_t dststride,   \
const uint8_t *src,                  \
ptrdiff_t srcstride,                 \
int h, int mx, int my);              \
\
void ff_avg_8tap_##type##_##SIZE##v_msa(uint8_t *dst, ptrdiff_t dststride,   \
const uint8_t *src,                  \
ptrdiff_t srcstride,                 \
int h, int mx, int my);              \
\
void ff_avg_8tap_##type##_##SIZE##hv_msa(uint8_t *dst, ptrdiff_t dststride,  \
const uint8_t *src,                 \
ptrdiff_t srcstride,                \
int h, int mx, int my);
VP9_BILINEAR_MIPS_MSA_FUNC                                   \
void ff_put_bilin_##SIZE##h_msa(uint8_t *dst, ptrdiff_t dststride,         \
const uint8_t *src, ptrdiff_t srcstride,   \
int h, int mx, int my);                    \
\
void ff_put_bilin_##SIZE##v_msa(uint8_t *dst, ptrdiff_t dststride,         \
const uint8_t *src, ptrdiff_t srcstride,   \
int h, int mx, int my);                    \
\
void ff_put_bilin_##SIZE##hv_msa(uint8_t *dst, ptrdiff_t dststride,        \
const uint8_t *src, ptrdiff_t srcstride,  \
int h, int mx, int my);                   \
\
void ff_avg_bilin_##SIZE##h_msa(uint8_t *dst, ptrdiff_t dststride,         \
const uint8_t *src, ptrdiff_t srcstride,   \
int h, int mx, int my);                    \
\
void ff_avg_bilin_##SIZE##v_msa(uint8_t *dst, ptrdiff_t dststride,         \
const uint8_t *src, ptrdiff_t srcstride,   \
int h, int mx, int my);                    \
\
void ff_avg_bilin_##SIZE##hv_msa(uint8_t *dst, ptrdiff_t dststride,        \
const uint8_t *src, ptrdiff_t srcstride,  \
int h, int mx, int my);
VP9_COPY_AVG_MIPS_MSA_FUNC                           \
void ff_copy##SIZE##_msa(uint8_t *dst, ptrdiff_t dststride,        \
const uint8_t *src, ptrdiff_t srcstride,  \
int h, int mx, int my);                   \
\
void ff_avg##SIZE##_msa(uint8_t *dst, ptrdiff_t dststride,         \
const uint8_t *src, ptrdiff_t srcstride,   \
int h, int mx, int my);
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
VP9_BILINEAR_MIPS_MSA_FUNC(64);
VP9_BILINEAR_MIPS_MSA_FUNC(32);
VP9_BILINEAR_MIPS_MSA_FUNC(16);
VP9_BILINEAR_MIPS_MSA_FUNC(8);
VP9_BILINEAR_MIPS_MSA_FUNC(4);
VP9_COPY_AVG_MIPS_MSA_FUNC(64);
VP9_COPY_AVG_MIPS_MSA_FUNC(32);
VP9_COPY_AVG_MIPS_MSA_FUNC(16);
VP9_COPY_AVG_MIPS_MSA_FUNC(8);
VP9_COPY_AVG_MIPS_MSA_FUNC(4);
#undef VP9_8TAP_MIPS_MSA_FUNC
#undef VP9_BILINEAR_MIPS_MSA_FUNC
#undef VP9_COPY_AVG_MIPS_MSA_FUNC
ff_loop_filter_h_4_8_msa;
ff_loop_filter_h_8_8_msa;
ff_loop_filter_h_16_8_msa;
ff_loop_filter_v_4_8_msa;
ff_loop_filter_v_8_8_msa;
ff_loop_filter_v_16_8_msa;
ff_loop_filter_h_44_16_msa;
ff_loop_filter_h_88_16_msa;
ff_loop_filter_h_16_16_msa;
ff_loop_filter_v_44_16_msa;
ff_loop_filter_v_88_16_msa;
ff_loop_filter_v_16_16_msa;
ff_loop_filter_h_48_16_msa;
ff_loop_filter_h_84_16_msa;
ff_loop_filter_v_48_16_msa;
ff_loop_filter_v_84_16_msa;
ff_idct_idct_4x4_add_msa;
ff_idct_idct_8x8_add_msa;
ff_idct_idct_16x16_add_msa;
ff_idct_idct_32x32_add_msa;
ff_iadst_iadst_4x4_add_msa;
ff_iadst_iadst_8x8_add_msa;
ff_iadst_iadst_16x16_add_msa;
ff_iadst_idct_4x4_add_msa;
ff_iadst_idct_8x8_add_msa;
ff_iadst_idct_16x16_add_msa;
ff_idct_iadst_4x4_add_msa;
ff_idct_iadst_8x8_add_msa;
ff_idct_iadst_16x16_add_msa;
ff_iwht_iwht_4x4_add_msa;
ff_vert_16x16_msa;
ff_vert_32x32_msa;
ff_hor_16x16_msa;
ff_hor_32x32_msa;
ff_dc_4x4_msa;
ff_dc_8x8_msa;
ff_dc_16x16_msa;
ff_dc_32x32_msa;
ff_dc_left_4x4_msa;
ff_dc_left_8x8_msa;
ff_dc_left_16x16_msa;
ff_dc_left_32x32_msa;
ff_dc_top_4x4_msa;
ff_dc_top_8x8_msa;
ff_dc_top_16x16_msa;
ff_dc_top_32x32_msa;
ff_dc_128_16x16_msa;
ff_dc_128_32x32_msa;
ff_dc_127_16x16_msa;
ff_dc_127_32x32_msa;
ff_dc_129_16x16_msa;
ff_dc_129_32x32_msa;
ff_tm_4x4_msa;
ff_tm_8x8_msa;
ff_tm_16x16_msa;
ff_tm_32x32_msa;
