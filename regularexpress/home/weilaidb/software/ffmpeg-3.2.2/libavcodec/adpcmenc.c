typedef struct TrellisPath  TrellisPath;
typedef struct TrellisNode  TrellisNode;
typedef struct ADPCMEncodeContext  ADPCMEncodeContext;
#define FREEZE_INTERVAL 128
static av_cold int adpcm_encode_close(AVCodecContext *avctx);
static av_cold int adpcm_encode_init(AVCodecContext *avctx)
static av_cold int adpcm_encode_close(AVCodecContext *avctx)
static inline uint8_t adpcm_ima_compress_sample(ADPCMChannelStatus *c,
int16_t sample)
static inline uint8_t adpcm_ima_qt_compress_sample(ADPCMChannelStatus *c,
int16_t sample)
static inline uint8_t adpcm_ms_compress_sample(ADPCMChannelStatus *c,
int16_t sample)
static inline uint8_t adpcm_yamaha_compress_sample(ADPCMChannelStatus *c,
int16_t sample)
static void adpcm_compress_trellis(AVCodecContext *avctx,
const int16_t *samples, uint8_t *dst,
ADPCMChannelStatus *c, int n, int stride)
static int adpcm_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static const enum AVSampleFormat sample_fmts[] = ;
static const enum AVSampleFormat sample_fmts_p[] = ;
#define ADPCM_ENCODER(id_, name_, sample_fmts_, long_name_) \
AVCodec ff_ ## name_ ## _encoder =
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_IMA_QT,  adpcm_ima_qt,  sample_fmts_p, "ADPCM IMA QuickTime");
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_IMA_WAV, adpcm_ima_wav, sample_fmts_p, "ADPCM IMA WAV");
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_MS,      adpcm_ms,      sample_fmts,   "ADPCM Microsoft");
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_SWF,     adpcm_swf,     sample_fmts,   "ADPCM Shockwave Flash");
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_YAMAHA,  adpcm_yamaha,  sample_fmts,   "ADPCM Yamaha");
