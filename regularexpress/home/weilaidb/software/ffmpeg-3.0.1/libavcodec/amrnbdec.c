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
static void weighted_vector_sumd(double *out, const double *in_a,
const double *in_b, double weight_coeff_a,
double weight_coeff_b, int length)
static av_cold int amrnb_decode_init(AVCodecContext *avctx)
static enum Mode unpack_bitstream(AMRContext *p, const uint8_t *buf,
int buf_size)
static void interpolate_lsf(ACELPVContext *ctx, float lsf_q[4][LP_FILTER_ORDER], float *lsf_new)
static void lsf2lsp_for_mode12k2(AMRContext *p, double lsp[LP_FILTER_ORDER],
const float lsf_no_r[LP_FILTER_ORDER],
const int16_t *lsf_quantizer[5],
const int quantizer_offset,
const int sign, const int update)
static void lsf2lsp_5(AMRContext *p)
static void lsf2lsp_3(AMRContext *p)
static void decode_pitch_lag_1_6(int *lag_int, int *lag_frac, int pitch_index,
const int prev_lag_int, const int subframe)
static void decode_pitch_vector(AMRContext *p,
const AMRNBSubframe *amr_subframe,
const int subframe)
static void decode_10bit_pulse(int code, int pulse_position[8],
int i1, int i2, int i3)
static void decode_8_pulses_31bits(const int16_t *fixed_index,
AMRFixed *fixed_sparse)
static void decode_fixed_sparse(AMRFixed *fixed_sparse, const uint16_t *pulses,
const enum Mode mode, const int subframe)
static void pitch_sharpening(AMRContext *p, int subframe, enum Mode mode,
AMRFixed *fixed_sparse)
static float fixed_gain_smooth(AMRContext *p , const float *lsf,
const float *lsf_avg, const enum Mode mode)
static void decode_gains(AMRContext *p, const AMRNBSubframe *amr_subframe,
const enum Mode mode, const int subframe,
float *fixed_gain_factor)
static void apply_ir_filter(float *out, const AMRFixed *in,
const float *filter)
static const float *anti_sparseness(AMRContext *p, AMRFixed *fixed_sparse,
const float *fixed_vector,
float fixed_gain, float *out)
static int synthesis(AMRContext *p, float *lpc,
float fixed_gain, const float *fixed_vector,
float *samples, uint8_t overflow)
static void update_state(AMRContext *p)
static float tilt_factor(AMRContext *p, float *lpc_n, float *lpc_d)
static void postfilter(AMRContext *p, float *lpc, float *buf_out)
static int amrnb_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_amrnb_decoder = ;
