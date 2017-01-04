typedef struct  TextContext;
#define OFFSET(x) offsetof(TextContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static int text_decode_frame(AVCodecContext *avctx, void *data,
int *got_sub_ptr, AVPacket *avpkt)
#define DECLARE_CLASS(decname) static const AVClass decname ## _decoder_class =
#if CONFIG_TEXT_DECODER
#define text_options options
DECLARE_CLASS(text);
AVCodec ff_text_decoder = ;
#if CONFIG_VPLAYER_DECODER || CONFIG_PJS_DECODER || CONFIG_SUBVIEWER1_DECODER || CONFIG_STL_DECODER
static int linebreak_init(AVCodecContext *avctx)
#if CONFIG_VPLAYER_DECODER
#define vplayer_options options
DECLARE_CLASS(vplayer);
AVCodec ff_vplayer_decoder = ;
#if CONFIG_STL_DECODER
#define stl_options options
DECLARE_CLASS(stl);
AVCodec ff_stl_decoder = ;
#if CONFIG_PJS_DECODER
#define pjs_options options
DECLARE_CLASS(pjs);
AVCodec ff_pjs_decoder = ;
#if CONFIG_SUBVIEWER1_DECODER
#define subviewer1_options options
DECLARE_CLASS(subviewer1);
AVCodec ff_subviewer1_decoder = ;
