#define BITSTREAM_READER_LE
static void add_peak(float period, int width, const float *shape,
float ppc_gain, float *speech, int len)
static void decode_ppc(TwinVQContext *tctx, int period_coef, int g_coef,
const float *shape, float *speech)
static void dec_bark_env(TwinVQContext *tctx, const uint8_t *in, int use_hist,
int ch, float *out, float gain,
enum TwinVQFrameType ftype)
static void read_cb_data(TwinVQContext *tctx, GetBitContext *gb,
uint8_t *dst, enum TwinVQFrameType ftype)
static int metasound_read_bitstream(AVCodecContext *avctx, TwinVQContext *tctx,
const uint8_t *buf, int buf_size)
typedef struct MetasoundProps  MetasoundProps;
static const MetasoundProps codec_props[] = ;
static av_cold int metasound_decode_init(AVCodecContext *avctx)
AVCodec ff_metasound_decoder = ;
