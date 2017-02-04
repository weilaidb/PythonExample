#define LUMA 0
#define CB 1
#define CR 2
static const uint8_t tctable[54] = ;
static const uint8_t betatable[52] = ;
chroma_tc
get_qPy_pred
ff_hevc_set_qPy
get_qPy
copy_CTB
copy_pixel
copy_vert
copy_CTB_to_hv
restore_tqb_pixels
CTB ((tab)[(y) * s->ps.sps->ctb_width + (x)])
sao_filter_CTB
get_pcm
TC_CALC                                                 \
tctable[av_clip((qp) + DEFAULT_INTRA_TC_OFFSET * ((bs) - 1) +       \
(tc_offset >> 1 << 1),                              \
0, MAX_QP + DEFAULT_INTRA_TC_OFFSET)]
deblocking_filter_CTB
boundary_strength
ff_hevc_deblocking_boundary_strengths
#undef LUMA
#undef CB
#undef CR
ff_hevc_hls_filter
ff_hevc_hls_filters
