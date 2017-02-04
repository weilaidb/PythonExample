copy_width8_msa
copy_width12_msa
copy_16multx8mult_msa
copy_width16_msa
copy_width24_msa
copy_width32_msa
copy_width48_msa
copy_width64_msa
static const uint8_t mc_filt_mask_arr[16 * 3] = ;
FILT_8TAP_DPADD_S_H         \
(  )
HORIZ_8TAP_4WID_4VECS_FILT                              \
HORIZ_8TAP_8WID_4VECS_FILT                    \
FILT_4TAP_DPADD_S_H           \
(  )
HORIZ_4TAP_4WID_4VECS_FILT                         \
HORIZ_4TAP_8WID_4VECS_FILT                    \
common_hz_8t_4x4_msa
common_hz_8t_4x8_msa
common_hz_8t_4x16_msa
common_hz_8t_4w_msa
common_hz_8t_8x4_msa
common_hz_8t_8x8mult_msa
common_hz_8t_8w_msa
common_hz_8t_12w_msa
common_hz_8t_16w_msa
common_hz_8t_24w_msa
common_hz_8t_32w_msa
common_hz_8t_48w_msa
common_hz_8t_64w_msa
common_vt_8t_4w_msa
common_vt_8t_8w_msa
common_vt_8t_12w_msa
common_vt_8t_16w_msa
common_vt_8t_16w_mult_msa
common_vt_8t_24w_msa
common_vt_8t_32w_msa
common_vt_8t_48w_msa
common_vt_8t_64w_msa
hevc_hv_uni_8t_4w_msa
hevc_hv_uni_8t_8multx2mult_msa
hevc_hv_uni_8t_8w_msa
hevc_hv_uni_8t_12w_msa
hevc_hv_uni_8t_16w_msa
hevc_hv_uni_8t_24w_msa
hevc_hv_uni_8t_32w_msa
hevc_hv_uni_8t_48w_msa
hevc_hv_uni_8t_64w_msa
common_hz_4t_4x2_msa
common_hz_4t_4x4_msa
common_hz_4t_4x8_msa
common_hz_4t_4x16_msa
common_hz_4t_4w_msa
common_hz_4t_6w_msa
common_hz_4t_8x2mult_msa
common_hz_4t_8x4mult_msa
common_hz_4t_8w_msa
common_hz_4t_12w_msa
common_hz_4t_16w_msa
common_hz_4t_24w_msa
common_hz_4t_32w_msa
common_vt_4t_4x2_msa
common_vt_4t_4x4multiple_msa
common_vt_4t_4w_msa
common_vt_4t_6w_msa
common_vt_4t_8x2_msa
common_vt_4t_8x6_msa
common_vt_4t_8x4mult_msa
common_vt_4t_8w_msa
common_vt_4t_12w_msa
common_vt_4t_16w_msa
common_vt_4t_24w_msa
common_vt_4t_32w_mult_msa
common_vt_4t_32w_msa
hevc_hv_uni_4t_4x2_msa
hevc_hv_uni_4t_4x4_msa
hevc_hv_uni_4t_4multx8mult_msa
hevc_hv_uni_4t_4w_msa
hevc_hv_uni_4t_6w_msa
hevc_hv_uni_4t_8x2_msa
hevc_hv_uni_4t_8x6_msa
hevc_hv_uni_4t_8w_mult_msa
hevc_hv_uni_4t_8w_msa
hevc_hv_uni_4t_12w_msa
hevc_hv_uni_4t_16w_msa
hevc_hv_uni_4t_24w_msa
hevc_hv_uni_4t_32w_msa
UNI_MC_COPY                                                 \
void ff_hevc_put_hevc_uni_pel_pixels##WIDTH##_8_msa(uint8_t *dst,          \
ptrdiff_t dst_stride,  \
uint8_t *src,          \
ptrdiff_t src_stride,  \
int height,            \
intptr_t mx,           \
intptr_t my,           \
int width)             \
UNI_MC_COPY(8);
UNI_MC_COPY(12);
UNI_MC_COPY(16);
UNI_MC_COPY(24);
UNI_MC_COPY(32);
UNI_MC_COPY(48);
UNI_MC_COPY(64);
#undef UNI_MC_COPY
UNI_MC                           \
void ff_hevc_put_hevc_uni_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,           \
ptrdiff_t             \
dst_stride,           \
uint8_t *src,         \
ptrdiff_t             \
src_stride,           \
int height,           \
intptr_t mx,          \
intptr_t my,          \
int width)            \
UNI_MC(qpel, h, 4, 8, hz, mx);
UNI_MC(qpel, h, 8, 8, hz, mx);
UNI_MC(qpel, h, 12, 8, hz, mx);
UNI_MC(qpel, h, 16, 8, hz, mx);
UNI_MC(qpel, h, 24, 8, hz, mx);
UNI_MC(qpel, h, 32, 8, hz, mx);
UNI_MC(qpel, h, 48, 8, hz, mx);
UNI_MC(qpel, h, 64, 8, hz, mx);
UNI_MC(qpel, v, 4, 8, vt, my);
UNI_MC(qpel, v, 8, 8, vt, my);
UNI_MC(qpel, v, 12, 8, vt, my);
UNI_MC(qpel, v, 16, 8, vt, my);
UNI_MC(qpel, v, 24, 8, vt, my);
UNI_MC(qpel, v, 32, 8, vt, my);
UNI_MC(qpel, v, 48, 8, vt, my);
UNI_MC(qpel, v, 64, 8, vt, my);
UNI_MC(epel, h, 4, 4, hz, mx);
UNI_MC(epel, h, 6, 4, hz, mx);
UNI_MC(epel, h, 8, 4, hz, mx);
UNI_MC(epel, h, 12, 4, hz, mx);
UNI_MC(epel, h, 16, 4, hz, mx);
UNI_MC(epel, h, 24, 4, hz, mx);
UNI_MC(epel, h, 32, 4, hz, mx);
UNI_MC(epel, v, 4, 4, vt, my);
UNI_MC(epel, v, 6, 4, vt, my);
UNI_MC(epel, v, 8, 4, vt, my);
UNI_MC(epel, v, 12, 4, vt, my);
UNI_MC(epel, v, 16, 4, vt, my);
UNI_MC(epel, v, 24, 4, vt, my);
UNI_MC(epel, v, 32, 4, vt, my);
#undef UNI_MC
UNI_MC_HV                           \
void ff_hevc_put_hevc_uni_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,    \
ptrdiff_t      \
dst_stride,    \
uint8_t *src,  \
ptrdiff_t      \
src_stride,    \
int height,    \
intptr_t mx,   \
intptr_t my,   \
int width)     \
UNI_MC_HV(qpel, hv, 4, 8, hv);
UNI_MC_HV(qpel, hv, 8, 8, hv);
UNI_MC_HV(qpel, hv, 12, 8, hv);
UNI_MC_HV(qpel, hv, 16, 8, hv);
UNI_MC_HV(qpel, hv, 24, 8, hv);
UNI_MC_HV(qpel, hv, 32, 8, hv);
UNI_MC_HV(qpel, hv, 48, 8, hv);
UNI_MC_HV(qpel, hv, 64, 8, hv);
UNI_MC_HV(epel, hv, 4, 4, hv);
UNI_MC_HV(epel, hv, 6, 4, hv);
UNI_MC_HV(epel, hv, 8, 4, hv);
UNI_MC_HV(epel, hv, 12, 4, hv);
UNI_MC_HV(epel, hv, 16, 4, hv);
UNI_MC_HV(epel, hv, 24, 4, hv);
UNI_MC_HV(epel, hv, 32, 4, hv);
#undef UNI_MC_HV
