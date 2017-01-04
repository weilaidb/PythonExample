#define WEBVTT_STACK_SIZE 64
typedef struct  WebVTTContext;
__attribute__ ((__format__ (__printf__, 2, 3)))
static void webvtt_print(WebVTTContext *s, const char *str, ...)
static int webvtt_stack_push(WebVTTContext *s, const char c)
static char webvtt_stack_pop(WebVTTContext *s)
static int webvtt_stack_find(WebVTTContext *s, const char c)
static void webvtt_close_tag(WebVTTContext *s, char tag)
static void webvtt_stack_push_pop(WebVTTContext *s, const char c, int close)
static void webvtt_style_apply(WebVTTContext *s, const char *style)
static void webvtt_text_cb(void *priv, const char *text, int len)
static void webvtt_new_line_cb(void *priv, int forced)
static void webvtt_style_cb(void *priv, char style, int close)
static void webvtt_cancel_overrides_cb(void *priv, const char *style)
static void webvtt_end_cb(void *priv)
static const ASSCodesCallbacks webvtt_callbacks = ;
static int webvtt_encode_frame(AVCodecContext *avctx,
unsigned char *buf, int bufsize, const AVSubtitle *sub)
static int webvtt_encode_close(AVCodecContext *avctx)
static av_cold int webvtt_encode_init(AVCodecContext *avctx)
AVCodec ff_webvtt_encoder = ;
