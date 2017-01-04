static const TwinVQModeTab mode_08_08 = ;
static const TwinVQModeTab mode_11_08 = ;
static const TwinVQModeTab mode_11_10 = ;
static const TwinVQModeTab mode_16_16 = ;
static const TwinVQModeTab mode_22_20 = ;
static const TwinVQModeTab mode_22_24 = ;
static const TwinVQModeTab mode_22_32 = ;
static const TwinVQModeTab mode_44_40 = ;
static const TwinVQModeTab mode_44_48 = ;
static int very_broken_op(int a, int b)
static void add_peak(int period, int width, const float *shape,
float ppc_gain, float *speech, int len)
static void decode_ppc(TwinVQContext *tctx, int period_coef, int g_coef,
const float *shape, float *speech)
static void dec_bark_env(TwinVQContext *tctx, const uint8_t *in, int use_hist,
int ch, float *out, float gain,
enum TwinVQFrameType ftype)
static void read_cb_data(TwinVQContext *tctx, GetBitContext *gb,
uint8_t *dst, enum TwinVQFrameType ftype)
static int twinvq_read_bitstream(AVCodecContext *avctx, TwinVQContext *tctx,
const uint8_t *buf, int buf_size)
static av_cold int twinvq_decode_init(AVCodecContext *avctx)
AVCodec ff_twinvq_decoder = ;
