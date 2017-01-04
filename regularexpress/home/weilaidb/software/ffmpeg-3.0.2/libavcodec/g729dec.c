#define LSFQ_MIN                   40
#define LSFQ_MAX                   25681
#define LSFQ_DIFF_MIN              321
#define INTERPOL_LEN              11
#define SHARP_MIN                  3277
#define SHARP_MAX                  13017
#define MR_ENERGY 1018156
#define DECISION_NOISE        0
#define DECISION_INTERMEDIATE 1
#define DECISION_VOICE        2
typedef enum  G729Formats;
typedef struct  G729FormatDescription;
typedef struct   G729Context;
static const G729FormatDescription format_g729_8k = ;
static const G729FormatDescription format_g729d_6k4 = ;
static inline uint16_t g729_prng(uint16_t value)
static void lsf_decode(int16_t* lsfq, int16_t* past_quantizer_outputs[MA_NP + 1],
int16_t ma_predictor,
int16_t vq_1st, int16_t vq_2nd_low, int16_t vq_2nd_high)
static void lsf_restore_from_previous(int16_t* lsfq,
int16_t* past_quantizer_outputs[MA_NP + 1],
int ma_predictor_prev)
static void g729d_get_new_exc(
int16_t* out,
const int16_t* in,
const int16_t* fc_cur,
int dstate,
int gain_code,
int subframe_size)
static int g729d_onset_decision(int past_onset, const int16_t* past_gain_code)
static int16_t g729d_voice_decision(int onset, int prev_voice_decision, const int16_t* past_gain_pitch)
static int32_t scalarproduct_int16_c(const int16_t * v1, const int16_t * v2, int order)
static av_cold int decoder_init(AVCodecContext * avctx)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame_ptr,
AVPacket *avpkt)
AVCodec ff_g729_decoder = ;
