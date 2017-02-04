#define FF_BUFQUEUE_SIZE 256
typedef struct ATDecodeContext  ATDecodeContext;
ffat_get_format_id
ffat_update_ctx
read_descr
get_ilbc_mode
get_channel_label
remap_layout
get_aac_tag
ffat_init_encoder
ffat_encode_callback
ffat_encode
ffat_encode_flush
ffat_close_encoder
static const AVProfile aac_profiles[] = ;
#define AE AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
FFAT_ENC_CLASS \
static const AVClass ffat_##NAME##_enc_class = ;
FFAT_ENC \
FFAT_ENC_CLASS(NAME) \
AVCodec ff_##NAME##_at_encoder = ;
static const uint64_t aac_at_channel_layouts[] = ;
FFAT_ENC(aac,          AV_CODEC_ID_AAC,          aac_profiles, , .channel_layouts = aac_at_channel_layouts)
FFAT_ENC(alac,         AV_CODEC_ID_ALAC,         NULL, | AV_CODEC_CAP_VARIABLE_FRAME_SIZE | AV_CODEC_CAP_LOSSLESS)
FFAT_ENC(ilbc,         AV_CODEC_ID_ILBC,         NULL)
FFAT_ENC(pcm_alaw,     AV_CODEC_ID_PCM_ALAW,     NULL)
FFAT_ENC(pcm_mulaw,    AV_CODEC_ID_PCM_MULAW,    NULL)
