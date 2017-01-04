typedef enum  qcelp_packet_rate;
typedef struct QCELPContext  QCELPContext;
static av_cold int qcelp_decode_init(AVCodecContext *avctx)
static int decode_lspf(QCELPContext *q, float *lspf)
static void decode_gain_and_index(QCELPContext *q, float *gain)
static int codebook_sanity_check_for_rate_quarter(const uint8_t *cbgain)
static void compute_svector(QCELPContext *q, const float *gain,
float *cdn_vector)
static void apply_gain_ctrl(float *v_out, const float *v_ref, const float *v_in)
static const float *do_pitchfilter(float memory[303], const float v_in[160],
const float gain[4], const uint8_t *lag,
const uint8_t pfrac[4])
static void apply_pitch_filters(QCELPContext *q, float *cdn_vector)
static void lspf2lpc(const float *lspf, float *lpc)
static void interpolate_lpc(QCELPContext *q, const float *curr_lspf,
float *lpc, const int subframe_num)
static qcelp_packet_rate buf_size2bitrate(const int buf_size)
static qcelp_packet_rate determine_bitrate(AVCodecContext *avctx,
const int buf_size,
const uint8_t **buf)
static void warn_insufficient_frame_quality(AVCodecContext *avctx,
const char *message)
static void postfilter(QCELPContext *q, float *samples, float *lpc)
static int qcelp_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_qcelp_decoder = ;
