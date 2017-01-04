typedef struct Float11  Float11;
static inline Float11* i2f(int i, Float11* f)
static inline int16_t mult(Float11* f1, Float11* f2)
static inline int sgn(int value)
typedef struct G726Tables  G726Tables;
typedef struct G726Context  G726Context;
static const int quant_tbl16[] =
;
static const int16_t iquant_tbl16[] =
;
static const int16_t W_tbl16[] =
;
static const uint8_t F_tbl16[] =
;
static const int quant_tbl24[] =
;
static const int16_t iquant_tbl24[] =
;
static const int16_t W_tbl24[] =
;
static const uint8_t F_tbl24[] =
;
static const int quant_tbl32[] =
;
static const int16_t iquant_tbl32[] =
;
static const int16_t W_tbl32[] =
;
static const uint8_t F_tbl32[] =
;
static const int quant_tbl40[] =
;
static const int16_t iquant_tbl40[] =
;
static const int16_t W_tbl40[] =
;
static const uint8_t F_tbl40[] =
;
static const G726Tables G726Tables_pool[] =
;
static inline uint8_t quant(G726Context* c, int d)
static inline int16_t inverse_quant(G726Context* c, int i)
static int16_t g726_decode(G726Context* c, int I)
static av_cold int g726_reset(G726Context *c)
#if CONFIG_ADPCM_G726_ENCODER
static int16_t g726_encode(G726Context* c, int16_t sig)
static av_cold int g726_encode_init(AVCodecContext *avctx)
static int g726_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
#define OFFSET(x) offsetof(G726Context, x)
#define AE AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass g726_class = ;
static const AVCodecDefault defaults[] = ;
AVCodec ff_adpcm_g726_encoder = ;
#if CONFIG_ADPCM_G726_DECODER || CONFIG_ADPCM_G726LE_DECODER
static av_cold int g726_decode_init(AVCodecContext *avctx)
static int g726_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static void g726_decode_flush(AVCodecContext *avctx)
#if CONFIG_ADPCM_G726_DECODER
AVCodec ff_adpcm_g726_decoder = ;
#if CONFIG_ADPCM_G726LE_DECODER
AVCodec ff_adpcm_g726le_decoder = ;
