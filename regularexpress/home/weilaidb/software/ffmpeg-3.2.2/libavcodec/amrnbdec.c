#define AMR_BLOCK_SIZE              160
#define AMR_SAMPLE_BOUND        32768.0
#define AMR_SAMPLE_SCALE  (2.0 / 32768.0)
#define PRED_FAC_MODE_12k2             0.65
#define LSF_R_FAC          (8000.0 / 32768.0)
#define MIN_LSF_SPACING    (50.0488 / 8000.0)
#define PITCH_LAG_MIN_MODE_12k2          18
#define MIN_ENERGY -14.0
#define SHARP_MAX 0.79449462890625
#define AMR_TILT_RESPONSE   22
#define AMR_TILT_GAMMA_T   0.8
#define AMR_AGC_ALPHA      0.9
typedef struct AMRContext  AMRContext;
weighted_vector_sumd
amrnb_decode_init
unpack_bitstream
interpolate_lsf
lsf2lsp_for_mode12k2
lsf2lsp_5
lsf2lsp_3
decode_pitch_lag_1_6
decode_pitch_vector
decode_10bit_pulse
decode_8_pulses_31bits
decode_fixed_sparse
pitch_sharpening
fixed_gain_smooth
decode_gains
apply_ir_filter
*anti_sparseness
synthesis
update_state
tilt_factor
postfilter
amrnb_decode_frame
AVCodec ff_amrnb_decoder = ;
