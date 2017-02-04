typedef struct SilkFrame  SilkFrame;
struct SilkContext ;
static const uint16_t silk_model_stereo_s1[] = ;
static const uint16_t silk_model_stereo_s2[] = ;
static const uint16_t silk_model_stereo_s3[] = ;
static const uint16_t silk_model_mid_only[] = ;
static const uint16_t silk_model_frame_type_inactive[] = ;
static const uint16_t silk_model_frame_type_active[] = ;
static const uint16_t silk_model_gain_highbits[3][9] = ;
static const uint16_t silk_model_gain_lowbits[] = ;
static const uint16_t silk_model_gain_delta[] = ;
static const uint16_t silk_model_lsf_s1[2][2][33] = ;
static const uint16_t silk_model_lsf_s2[32][10] = ;
static const uint16_t silk_model_lsf_s2_ext[] = ;
static const uint16_t silk_model_lsf_interpolation_offset[] = ;
static const uint16_t silk_model_pitch_highbits[] = ;
static const uint16_t silk_model_pitch_lowbits_nb[]= ;
static const uint16_t silk_model_pitch_lowbits_mb[]= ;
static const uint16_t silk_model_pitch_lowbits_wb[]= ;
static const uint16_t silk_model_pitch_delta[] = ;
static const uint16_t silk_model_pitch_contour_nb10ms[] = ;
static const uint16_t silk_model_pitch_contour_nb20ms[] = ;
static const uint16_t silk_model_pitch_contour_mbwb10ms[] = ;
static const uint16_t silk_model_pitch_contour_mbwb20ms[] = ;
static const uint16_t silk_model_ltp_filter[] = ;
static const uint16_t silk_model_ltp_filter0_sel[] = ;
static const uint16_t silk_model_ltp_filter1_sel[] = ;
static const uint16_t silk_model_ltp_filter2_sel[] = ;
static const uint16_t silk_model_ltp_scale_index[] = ;
static const uint16_t silk_model_lcg_seed[] = ;
static const uint16_t silk_model_exc_rate[2][10] = ;
static const uint16_t silk_model_pulse_count[11][19] = ;
static const uint16_t silk_model_pulse_location[4][168] = ;
static const uint16_t silk_model_excitation_lsb[] = ;
static const uint16_t silk_model_excitation_sign[3][2][7][3] = ;
static const int16_t silk_stereo_weights[] = ;
static const uint8_t silk_lsf_s2_model_sel_nbmb[32][10] = ;
static const uint8_t silk_lsf_s2_model_sel_wb[32][16] = ;
static const uint8_t silk_lsf_pred_weights_nbmb[2][9] = ;
static const uint8_t silk_lsf_pred_weights_wb[2][15] = ;
static const uint8_t silk_lsf_weight_sel_nbmb[32][9] = ;
static const uint8_t silk_lsf_weight_sel_wb[32][15] = ;
static const uint8_t silk_lsf_codebook_nbmb[32][10] = ;
static const uint8_t silk_lsf_codebook_wb[32][16] = ;
static const uint16_t silk_lsf_min_spacing_nbmb[] = ;
static const uint16_t silk_lsf_min_spacing_wb[] = ;
static const uint8_t silk_lsf_ordering_nbmb[] = ;
static const uint8_t silk_lsf_ordering_wb[] = ;
static const int16_t silk_cosine[] = ;
static const uint16_t silk_pitch_scale[]   = ;
static const uint16_t silk_pitch_min_lag[] = ;
static const uint16_t silk_pitch_max_lag[] = ;
static const int8_t silk_pitch_offset_nb10ms[3][2] = ;
static const int8_t silk_pitch_offset_nb20ms[11][4] = ;
static const int8_t silk_pitch_offset_mbwb10ms[12][2] = ;
static const int8_t silk_pitch_offset_mbwb20ms[34][4] = ;
static const int8_t silk_ltp_filter0_taps[8][5] = ;
static const int8_t silk_ltp_filter1_taps[16][5] = ;
static const int8_t silk_ltp_filter2_taps[32][5] = ;
static const uint16_t silk_ltp_scale_factor[] = ;
static const uint8_t silk_shell_blocks[3][2] = ;
static const uint8_t silk_quant_offset[2][2] = ;
static const int silk_stereo_interp_len[3] = ;
silk_stabilize_lsf
silk_is_lpc_stable
silk_lsp2poly
silk_lsf2lpc
silk_decode_lpc
silk_count_children
silk_decode_excitation
#define SILK_MAX_LAG  (288 + LTP_ORDER / 2)
#define LTP_ORDER 5
silk_decode_frame
silk_unmix_ms
silk_flush_frame
ff_silk_decode_superframe
ff_silk_free
ff_silk_flush
ff_silk_init
