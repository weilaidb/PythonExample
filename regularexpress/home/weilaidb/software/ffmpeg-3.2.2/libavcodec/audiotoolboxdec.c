#define kAudioFormatEnhancedAC3 'ec-3'
typedef struct ATDecodeContext  ATDecodeContext;
static UInt32 ffat_get_format_id(enum AVCodecID codec, int profile)
static int ffat_get_channel_id(AudioChannelLabel label)
static int ffat_compare_channel_descriptions(const void* a, const void* b)
static AudioChannelLayout *ffat_convert_layout(AudioChannelLayout *layout, UInt32* size)
static int ffat_update_ctx(AVCodecContext *avctx)
static void put_descr(PutByteContext *pb, int tag, unsigned int size)
static uint8_t* ffat_get_magic_cookie(AVCodecContext *avctx, UInt32 *cookie_size)
static av_cold int ffat_usable_extradata(AVCodecContext *avctx)
static int ffat_set_extradata(AVCodecContext *avctx)
static av_cold int ffat_create_decoder(AVCodecContext *avctx, AVPacket *pkt)
static av_cold int ffat_init_decoder(AVCodecContext *avctx)
static OSStatus ffat_decode_callback(AudioConverterRef converter, UInt32 *nb_packets,
AudioBufferList *data,
AudioStreamPacketDescription **packets,
void *inctx)
#define COPY_SAMPLES(type) \
type *in_ptr = (type*)at->decoded_data; \
type *end_ptr = in_ptr + frame->nb_samples * avctx->channels; \
type *out_ptr = (type*)frame->data[0]; \
for (; in_ptr < end_ptr; in_ptr += avctx->channels, out_ptr += avctx->channels)
static void ffat_copy_samples(AVCodecContext *avctx, AVFrame *frame)
static int ffat_decode(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold void ffat_decode_flush(AVCodecContext *avctx)
static av_cold int ffat_close_decoder(AVCodecContext *avctx)
#define FFAT_DEC_CLASS(NAME) \
static const AVClass ffat_##NAME##_dec_class = ;
#define FFAT_DEC(NAME, ID) \
FFAT_DEC_CLASS(NAME) \
AVCodec ff_##NAME##_at_decoder = ;
FFAT_DEC(aac,          AV_CODEC_ID_AAC)
FFAT_DEC(ac3,          AV_CODEC_ID_AC3)
FFAT_DEC(adpcm_ima_qt, AV_CODEC_ID_ADPCM_IMA_QT)
FFAT_DEC(alac,         AV_CODEC_ID_ALAC)
FFAT_DEC(amr_nb,       AV_CODEC_ID_AMR_NB)
FFAT_DEC(eac3,         AV_CODEC_ID_EAC3)
FFAT_DEC(gsm_ms,       AV_CODEC_ID_GSM_MS)
FFAT_DEC(ilbc,         AV_CODEC_ID_ILBC)
FFAT_DEC(mp1,          AV_CODEC_ID_MP1)
FFAT_DEC(mp2,          AV_CODEC_ID_MP2)
FFAT_DEC(mp3,          AV_CODEC_ID_MP3)
FFAT_DEC(pcm_alaw,     AV_CODEC_ID_PCM_ALAW)
FFAT_DEC(pcm_mulaw,    AV_CODEC_ID_PCM_MULAW)
FFAT_DEC(qdmc,         AV_CODEC_ID_QDMC)
FFAT_DEC(qdm2,         AV_CODEC_ID_QDM2)
