#define AVCODEC_MIPS_VP8DSP_MIPS_H
void ff_put_vp8_pixels4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int x, int y);
void ff_put_vp8_pixels8_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int x, int y);
void ff_put_vp8_pixels16_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int x, int y);
void ff_put_vp8_epel16_h4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel16_h6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel16_v4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel16_v6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel16_h4v4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel16_h6v4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel16_h4v6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel16_h6v6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel8_h4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel8_h6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel8_v4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel8_v6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel8_h4v4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel8_h6v4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel8_h4v6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel8_h6v6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel4_h4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel4_h6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel4_v4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel4_v6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel4_h4v4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel4_h6v4_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel4_h4v6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_epel4_h6v6_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_bilinear16_h_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_bilinear16_v_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_bilinear16_hv_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_bilinear8_h_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_bilinear8_v_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_bilinear8_hv_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_bilinear4_h_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_bilinear4_v_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_put_vp8_bilinear4_hv_msa(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int h, int mx, int my);
void ff_vp8_h_loop_filter16_inner_msa(uint8_t *dst, ptrdiff_t stride,
int32_t e, int32_t i, int32_t h);
void ff_vp8_v_loop_filter16_inner_msa(uint8_t *dst, ptrdiff_t stride,
int32_t e, int32_t i, int32_t h);
void ff_vp8_h_loop_filter8uv_inner_msa(uint8_t *dst_u, uint8_t *dst_v,
ptrdiff_t stride,
int flim_e, int flim_i, int hev_thresh);
void ff_vp8_v_loop_filter8uv_inner_msa(uint8_t *dst_u, uint8_t *dst_v,
ptrdiff_t stride,
int flim_e, int flim_i, int hev_thresh);
void ff_vp8_h_loop_filter16_msa(uint8_t *dst, ptrdiff_t stride,
int flim_e, int flim_i, int hev_thresh);
void ff_vp8_v_loop_filter16_msa(uint8_t *dst, ptrdiff_t stride,
int flim_e, int flim_i, int hev_thresh);
void ff_vp8_h_loop_filter8uv_msa(uint8_t *dst_u, uint8_t *dst_v,
ptrdiff_t stride,
int flim_e, int flim_i, int hev_thresh);
void ff_vp8_v_loop_filter8uv_msa(uint8_t *dst_u, uint8_t *dst_v,
ptrdiff_t stride,
int flim_e, int flim_i, int hev_thresh);
void ff_vp8_h_loop_filter_simple_msa(uint8_t *dst, ptrdiff_t stride, int flim);
void ff_vp8_v_loop_filter_simple_msa(uint8_t *dst, ptrdiff_t stride, int flim);
void ff_vp8_luma_dc_wht_msa(int16_t block[4][4][16], int16_t dc[16]);
void ff_vp8_idct_add_msa(uint8_t *dst, int16_t block[16], ptrdiff_t stride);
void ff_vp8_idct_dc_add_msa(uint8_t *dst, int16_t block[16], ptrdiff_t stride);
void ff_vp8_idct_dc_add4uv_msa(uint8_t *dst, int16_t block[4][16],
ptrdiff_t stride);
void ff_vp8_idct_dc_add4y_msa(uint8_t *dst, int16_t block[4][16],
ptrdiff_t stride);
