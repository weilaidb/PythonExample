typedef struct XbinContext  XbinContext;
static av_cold int decode_init(AVCodecContext *avctx)
#define DEFAULT_BG_COLOR 0
av_unused static void hscroll(AVCodecContext *avctx)
#define FONT_WIDTH 8
static void draw_char(AVCodecContext *avctx, int c, int a)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
#if CONFIG_BINTEXT_DECODER
AVCodec ff_bintext_decoder = ;
#if CONFIG_XBIN_DECODER
AVCodec ff_xbin_decoder = ;
#if CONFIG_IDF_DECODER
AVCodec ff_idf_decoder = ;
