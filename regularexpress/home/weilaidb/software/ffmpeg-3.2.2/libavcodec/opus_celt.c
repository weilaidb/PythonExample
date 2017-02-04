enum CeltSpread ;
typedef struct CeltFrame  CeltFrame;
struct CeltContext ;
static const uint16_t celt_model_tapset[] = ;
static const uint16_t celt_model_spread[] = ;
static const uint16_t celt_model_alloc_trim[] = ;
static const uint16_t celt_model_energy_small[] = ;
static const uint8_t celt_freq_bands[] = ;
static const uint8_t celt_freq_range[] = ;
static const uint8_t celt_log_freq_range[] = ;
static const int8_t celt_tf_select[4][2][2][2] = ;
static const float celt_mean_energy[] = ;
static const float celt_alpha_coef[] = ;
static const float celt_beta_coef[] = ;
static const uint8_t celt_coarse_energy_dist[4][2][42] = ;
static const uint8_t celt_static_alloc[11][21] = ;
static const uint8_t celt_static_caps[4][2][21] = ;
static const uint8_t celt_cache_bits[392] = ;
static const int16_t celt_cache_index[105] = ;
static const uint8_t celt_log2_frac[] = ;
static const uint8_t celt_bit_interleave[] = ;
static const uint8_t celt_bit_deinterleave[] = ;
static const uint8_t celt_hadamard_ordery[] = ;
static const uint16_t celt_qn_exp2[] = ;
static const uint32_t celt_pvq_u[1272] = ;
DECLARE_ALIGNED(32, static const float, celt_window)[120] = ;
const float ff_celt_window2[120] = ;
static const uint32_t * const celt_pvq_u_row[15] = ;
celt_cos
celt_log2tan
celt_rng
celt_decode_coarse_energy
celt_decode_fine_energy
celt_decode_final_energy
celt_decode_tf_changes
celt_decode_allocation
celt_bits2pulses
celt_pulses2bits
celt_normalize_residual
celt_exp_rotation1
celt_exp_rotation
celt_extract_collapse_mask
celt_renormalize_vector
celt_stereo_merge
celt_interleave_hadamard
celt_deinterleave_hadamard
celt_haar1
celt_compute_qn
celt_cwrsi
celt_decode_pulses
celt_alg_unquant
celt_decode_band
celt_denormalize
celt_postfilter_apply_transition
celt_postfilter_apply
celt_postfilter
parse_postfilter
process_anticollapse
celt_decode_bands
ff_celt_decode_frame
ff_celt_flush
ff_celt_free
ff_celt_init
