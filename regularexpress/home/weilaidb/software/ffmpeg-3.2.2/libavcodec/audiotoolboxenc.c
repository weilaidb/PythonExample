#define FF_BUFQUEUE_SIZE 256
typedef struct ATDecodeContext  ATDecodeContext;
static UInt32 ffat_get_format_id(enum AVCodecID codec, int profile)
static void ffat_update_ctx(AVCodecContext *avctx)
static int read_descr(GetByteContext *gb, int *tag)
static int get_ilbc_mode(AVCodecContext *avctx)
static av_cold int get_channel_label(int channel)
static int remap_layout(AudioChannelLayout *layout, uint64_t in_layout, int count)
static int get_aac_tag(uint64_t in_layout)
static av_cold int ffat_init_encoder(AVCodecContext *avctx)
static OSStatus ffat_encode_callback(AudioConverterRef converter, UInt32 *nb_packets,
AudioBufferList *data,
AudioStreamPacketDescription **packets,
void *inctx)
static int ffat_encode(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static av_cold void ffat_encode_flush(AVCodecContext *avctx)
static av_cold int ffat_close_encoder(AVCodecContext *avctx)
static const AVProfile aac_profiles[] = ;
#define AE AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
#define FFAT_ENC_CLASS(NAME) \
static const AVClass ffat_##NAME##_enc_class = ;
#define FFAT_ENC(NAME, ID, PROFILES, ...) \
FFAT_ENC_CLASS(NAME) \
AVCodec ff_##NAME##_at_encoder = ;
static const uint64_t aac_at_channel_layouts[] = ;
FFAT_ENC(aac,          AV_CODEC_ID_AAC,          aac_profiles, , .channel_layouts = aac_at_channel_layouts)
FFAT_ENC(alac,         AV_CODEC_ID_ALAC,         NULL, | AV_CODEC_CAP_VARIABLE_FRAME_SIZE | AV_CODEC_CAP_LOSSLESS)
FFAT_ENC(ilbc,         AV_CODEC_ID_ILBC,         NULL)
FFAT_ENC(pcm_alaw,     AV_CODEC_ID_PCM_ALAW,     NULL)
FFAT_ENC(pcm_mulaw,    AV_CODEC_ID_PCM_MULAW,    NULL)
