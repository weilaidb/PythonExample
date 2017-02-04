#define kAudioFormatEnhancedAC3 'ec-3'
typedef struct ATDecodeContext  ATDecodeContext;
ffat_get_format_id
ffat_get_channel_id
ffat_compare_channel_descriptions
*ffat_convert_layout
ffat_update_ctx
put_descr
ffat_get_magic_cookie
ffat_usable_extradata
ffat_set_extradata
ffat_create_decoder
ffat_init_decoder
ffat_decode_callback
COPY_SAMPLES \
type *in_ptr = (type*)at->decoded_data; \
type *end_ptr = in_ptr + frame->nb_samples * avctx->channels; \
type *out_ptr = (type*)frame->data[0]; \
for (; in_ptr < end_ptr; in_ptr += avctx->channels, out_ptr += avctx->channels)
ffat_copy_samples
ffat_decode
ffat_decode_flush
ffat_close_decoder
FFAT_DEC_CLASS \
static const AVClass ffat_##NAME##_dec_class = ;
FFAT_DEC \
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
