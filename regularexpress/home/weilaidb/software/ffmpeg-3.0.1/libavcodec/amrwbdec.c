#define AMR_USE_16BIT_TABLES
typedef struct AMRWBContext  AMRWBContext;
static av_cold int amrwb_decode_init(AVCodecContext *avctx)
static int decode_mime_header(AMRWBContext *ctx, const uint8_t *buf)
static void decode_isf_indices_36b(uint16_t *ind, float *isf_q)
static void decode_isf_indices_46b(uint16_t *ind, float *isf_q)
static void isf_add_mean_and_past(float *isf_q, float *isf_past)
static void interpolate_isp(double isp_q[4][LP_ORDER], const double *isp4_past)
static void decode_pitch_lag_high(int *lag_int, int *lag_frac, int pitch_index,
uint8_t *base_lag_int, int subframe)
static void decode_pitch_lag_low(int *lag_int, int *lag_frac, int pitch_index,
uint8_t *base_lag_int, int subframe, enum Mode mode)
static void decode_pitch_vector(AMRWBContext *ctx,
const AMRWBSubFrame *amr_subframe,
const int subframe)
#define BIT_STR(x,lsb,len) av_mod_uintp2((x) >> (lsb), (len))
#define BIT_POS(x, p) (((x) >> (p)) & 1)
static inline void decode_1p_track(int *out, int code, int m, int off)
static inline void decode_2p_track(int *out, int code, int m, int off)
static void decode_3p_track(int *out, int code, int m, int off)
static void decode_4p_track(int *out, int code, int m, int off)
static void decode_5p_track(int *out, int code, int m, int off)
static void decode_6p_track(int *out, int code, int m, int off)
static void decode_fixed_vector(float *fixed_vector, const uint16_t *pulse_hi,
const uint16_t *pulse_lo, const enum Mode mode)
static void decode_gains(const uint8_t vq_gain, const enum Mode mode,
float *fixed_gain_factor, float *pitch_gain)
static void pitch_sharpening(AMRWBContext *ctx, float *fixed_vector)
static float voice_factor(float *p_vector, float p_gain,
float *f_vector, float f_gain,
CELPMContext *ctx)
static float *anti_sparseness(AMRWBContext *ctx,
float *fixed_vector, float *buf)
static float stability_factor(const float *isf, const float *isf_past)
static float noise_enhancer(float fixed_gain, float *prev_tr_gain,
float voice_fac,  float stab_fac)
static void pitch_enhancer(float *fixed_vector, float voice_fac)
static void synthesis(AMRWBContext *ctx, float *lpc, float *excitation,
float fixed_gain, const float *fixed_vector,
float *samples)
static void de_emphasis(float *out, float *in, float m, float mem[1])
static void upsample_5_4(float *out, const float *in, int o_size, CELPMContext *ctx)
static float find_hb_gain(AMRWBContext *ctx, const float *synth,
uint16_t hb_idx, uint8_t vad)
static void scaled_hb_excitation(AMRWBContext *ctx, float *hb_exc,
const float *synth_exc, float hb_gain)
static float auto_correlation(float *diff_isf, float mean, int lag)
static void extrapolate_isf(float isf[LP_ORDER_16k])
static void lpc_weighting(float *out, const float *lpc, float gamma, int size)
static void hb_synthesis(AMRWBContext *ctx, int subframe, float *samples,
const float *exc, const float *isf, const float *isf_past)
static void hb_fir_filter(float *out, const float fir_coef[HB_FIR_SIZE + 1],
float mem[HB_FIR_SIZE], const float *in)
static void update_sub_state(AMRWBContext *ctx)
static int amrwb_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_amrwb_decoder = ;
