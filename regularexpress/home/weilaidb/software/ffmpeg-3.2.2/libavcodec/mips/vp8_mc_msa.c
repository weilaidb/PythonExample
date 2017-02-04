static const uint8_t mc_filt_mask_arr[16 * 3] = ;
static const int8_t subpel_filters_msa[7][8] = ;
static const int8_t bilinear_filters_msa[7][2] = ;
HORIZ_6TAP_FILT                       \
(  )
HORIZ_6TAP_4WID_4VECS_FILT                         \
HORIZ_6TAP_8WID_4VECS_FILT                    \
FILT_4TAP_DPADD_S_H           \
(  )
HORIZ_4TAP_FILT    \
(  )
HORIZ_4TAP_4WID_4VECS_FILT                         \
HORIZ_4TAP_8WID_4VECS_FILT                    \
common_hz_6t_4x4_msa
common_hz_6t_4x8_msa
ff_put_vp8_epel4_h6_msa
ff_put_vp8_epel8_h6_msa
ff_put_vp8_epel16_h6_msa
ff_put_vp8_epel4_v6_msa
ff_put_vp8_epel8_v6_msa
ff_put_vp8_epel16_v6_msa
ff_put_vp8_epel4_h6v6_msa
ff_put_vp8_epel8_h6v6_msa
ff_put_vp8_epel16_h6v6_msa
common_hz_4t_4x4_msa
common_hz_4t_4x8_msa
common_hz_4t_4x16_msa
ff_put_vp8_epel4_h4_msa
ff_put_vp8_epel8_h4_msa
ff_put_vp8_epel16_h4_msa
ff_put_vp8_epel4_v4_msa
ff_put_vp8_epel8_v4_msa
ff_put_vp8_epel16_v4_msa
ff_put_vp8_epel4_h4v4_msa
ff_put_vp8_epel8_h4v4_msa
ff_put_vp8_epel16_h4v4_msa
ff_put_vp8_epel4_h6v4_msa
ff_put_vp8_epel8_h6v4_msa
ff_put_vp8_epel16_h6v4_msa
ff_put_vp8_epel4_h4v6_msa
ff_put_vp8_epel8_h4v6_msa
ff_put_vp8_epel16_h4v6_msa
common_hz_2t_4x4_msa
common_hz_2t_4x8_msa
ff_put_vp8_bilinear4_h_msa
common_hz_2t_8x4_msa
common_hz_2t_8x8mult_msa
ff_put_vp8_bilinear8_h_msa
ff_put_vp8_bilinear16_h_msa
common_vt_2t_4x4_msa
common_vt_2t_4x8_msa
ff_put_vp8_bilinear4_v_msa
common_vt_2t_8x4_msa
common_vt_2t_8x8mult_msa
ff_put_vp8_bilinear8_v_msa
ff_put_vp8_bilinear16_v_msa
common_hv_2ht_2vt_4x4_msa
common_hv_2ht_2vt_4x8_msa
ff_put_vp8_bilinear4_hv_msa
common_hv_2ht_2vt_8x4_msa
common_hv_2ht_2vt_8x8mult_msa
ff_put_vp8_bilinear8_hv_msa
ff_put_vp8_bilinear16_hv_msa
ff_put_vp8_pixels8_msa
copy_16multx8mult_msa
ff_put_vp8_pixels16_msa
