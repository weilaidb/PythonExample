#define FREEZE_INTERVAL 128
#define MAX_FRAME_SIZE 32768
#define MIN_TRELLIS 0
#define MAX_TRELLIS 16
static av_cold int g722_encode_close(AVCodecContext *avctx)
static av_cold int g722_encode_init(AVCodecContext * avctx)
static const int16_t low_quant[33] = ;
static inline void filter_samples(G722Context *c, const int16_t *samples,
int *xlow, int *xhigh)
static inline int encode_high(const struct G722Band *state, int xhigh)
static inline int encode_low(const struct G722Band* state, int xlow)
static void g722_encode_trellis(G722Context *c, int trellis,
uint8_t *dst, int nb_samples,
const int16_t *samples)
static av_always_inline void encode_byte(G722Context *c, uint8_t *dst,
const int16_t *samples)
static void g722_encode_no_trellis(G722Context *c,
uint8_t *dst, int nb_samples,
const int16_t *samples)
static int g722_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_adpcm_g722_encoder = ;
