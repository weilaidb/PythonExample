#define CABAC_MAX_BIN 31
av_unused static const int8_t num_bins_in_se[] = ;
static const int elem_offset[sizeof(num_bins_in_se)] = ;
#define CNU 154
static const uint8_t init_values[3][HEVC_CONTEXTS] = ;
static const uint8_t scan_1x1[1] = ;
static const uint8_t horiz_scan2x2_x[4] = ;
static const uint8_t horiz_scan2x2_y[4] = ;
static const uint8_t horiz_scan4x4_x[16] = ;
static const uint8_t horiz_scan4x4_y[16] = ;
static const uint8_t horiz_scan8x8_inv[8][8] = ;
static const uint8_t diag_scan2x2_x[4] = ;
static const uint8_t diag_scan2x2_y[4] = ;
static const uint8_t diag_scan2x2_inv[2][2] = ;
static const uint8_t diag_scan4x4_inv[4][4] = ;
static const uint8_t diag_scan8x8_inv[8][8] = ;
void ff_hevc_save_states(HEVCContext *s, int ctb_addr_ts)
static void load_states(HEVCContext *s)
static void cabac_reinit(HEVCLocalContext *lc)
static void cabac_init_decoder(HEVCContext *s)
static void cabac_init_state(HEVCContext *s)
void ff_hevc_cabac_init(HEVCContext *s, int ctb_addr_ts)
#define GET_CABAC(ctx) get_cabac(&s->HEVClc->cc, &s->HEVClc->cabac_state[ctx])
int ff_hevc_sao_merge_flag_decode(HEVCContext *s)
int ff_hevc_sao_type_idx_decode(HEVCContext *s)
int ff_hevc_sao_band_position_decode(HEVCContext *s)
int ff_hevc_sao_offset_abs_decode(HEVCContext *s)
int ff_hevc_sao_offset_sign_decode(HEVCContext *s)
int ff_hevc_sao_eo_class_decode(HEVCContext *s)
int ff_hevc_end_of_slice_flag_decode(HEVCContext *s)
int ff_hevc_cu_transquant_bypass_flag_decode(HEVCContext *s)
int ff_hevc_skip_flag_decode(HEVCContext *s, int x0, int y0, int x_cb, int y_cb)
int ff_hevc_cu_qp_delta_abs(HEVCContext *s)
int ff_hevc_cu_qp_delta_sign_flag(HEVCContext *s)
int ff_hevc_cu_chroma_qp_offset_flag(HEVCContext *s)
int ff_hevc_cu_chroma_qp_offset_idx(HEVCContext *s)
int ff_hevc_pred_mode_decode(HEVCContext *s)
int ff_hevc_split_coding_unit_flag_decode(HEVCContext *s, int ct_depth, int x0, int y0)
int ff_hevc_part_mode_decode(HEVCContext *s, int log2_cb_size)
int ff_hevc_pcm_flag_decode(HEVCContext *s)
int ff_hevc_prev_intra_luma_pred_flag_decode(HEVCContext *s)
int ff_hevc_mpm_idx_decode(HEVCContext *s)
int ff_hevc_rem_intra_luma_pred_mode_decode(HEVCContext *s)
int ff_hevc_intra_chroma_pred_mode_decode(HEVCContext *s)
int ff_hevc_merge_idx_decode(HEVCContext *s)
int ff_hevc_merge_flag_decode(HEVCContext *s)
int ff_hevc_inter_pred_idc_decode(HEVCContext *s, int nPbW, int nPbH)
int ff_hevc_ref_idx_lx_decode(HEVCContext *s, int num_ref_idx_lx)
int ff_hevc_mvp_lx_flag_decode(HEVCContext *s)
int ff_hevc_no_residual_syntax_flag_decode(HEVCContext *s)
static av_always_inline int abs_mvd_greater0_flag_decode(HEVCContext *s)
static av_always_inline int abs_mvd_greater1_flag_decode(HEVCContext *s)
static av_always_inline int mvd_decode(HEVCContext *s)
static av_always_inline int mvd_sign_flag_decode(HEVCContext *s)
int ff_hevc_split_transform_flag_decode(HEVCContext *s, int log2_trafo_size)
int ff_hevc_cbf_cb_cr_decode(HEVCContext *s, int trafo_depth)
int ff_hevc_cbf_luma_decode(HEVCContext *s, int trafo_depth)
static int hevc_transform_skip_flag_decode(HEVCContext *s, int c_idx)
static int explicit_rdpcm_flag_decode(HEVCContext *s, int c_idx)
static int explicit_rdpcm_dir_flag_decode(HEVCContext *s, int c_idx)
int ff_hevc_log2_res_scale_abs(HEVCContext *s, int idx)
int ff_hevc_res_scale_sign_flag(HEVCContext *s, int idx)
static av_always_inline void last_significant_coeff_xy_prefix_decode(HEVCContext *s, int c_idx,
int log2_size, int *last_scx_prefix, int *last_scy_prefix)
static av_always_inline int last_significant_coeff_suffix_decode(HEVCContext *s,
int last_significant_coeff_prefix)
static av_always_inline int significant_coeff_group_flag_decode(HEVCContext *s, int c_idx, int ctx_cg)
static av_always_inline int significant_coeff_flag_decode(HEVCContext *s, int x_c, int y_c,
int offset, const uint8_t *ctx_idx_map)
static av_always_inline int significant_coeff_flag_decode_0(HEVCContext *s, int c_idx, int offset)
static av_always_inline int coeff_abs_level_greater1_flag_decode(HEVCContext *s, int c_idx, int inc)
static av_always_inline int coeff_abs_level_greater2_flag_decode(HEVCContext *s, int c_idx, int inc)
static av_always_inline int coeff_abs_level_remaining_decode(HEVCContext *s, int rc_rice_param)
static av_always_inline int coeff_sign_flag_decode(HEVCContext *s, uint8_t nb)
void ff_hevc_hls_residual_coding(HEVCContext *s, int x0, int y0,
int log2_trafo_size, enum ScanType scan_idx,
int c_idx)
void ff_hevc_hls_mvd_coding(HEVCContext *s, int x0, int y0, int log2_cb_size)
