#define SRT_STACK_SIZE 64
typedef struct  SRTContext;
__attribute__ ((__format__ (__printf__, 2, 3)))
static void srt_print(SRTContext *s, const char *str, ...)
static int srt_stack_push(SRTContext *s, const char c)
static char srt_stack_pop(SRTContext *s)
static int srt_stack_find(SRTContext *s, const char c)
static void srt_close_tag(SRTContext *s, char tag)
static void srt_stack_push_pop(SRTContext *s, const char c, int close)
static void srt_style_apply(SRTContext *s, const char *style)
static av_cold int srt_encode_init(AVCodecContext *avctx)
static void srt_text_cb(void *priv, const char *text, int len)
static void srt_new_line_cb(void *priv, int forced)
static void srt_style_cb(void *priv, char style, int close)
static void srt_color_cb(void *priv, unsigned int color, unsigned int color_id)
static void srt_font_name_cb(void *priv, const char *name)
static void srt_font_size_cb(void *priv, int size)
static void srt_alignment_cb(void *priv, int alignment)
static void srt_cancel_overrides_cb(void *priv, const char *style)
static void srt_move_cb(void *priv, int x1, int y1, int x2, int y2,
int t1, int t2)
static void srt_end_cb(void *priv)
static const ASSCodesCallbacks srt_callbacks = ;
static const ASSCodesCallbacks text_callbacks = ;
static int encode_frame(AVCodecContext *avctx,
unsigned char *buf, int bufsize, const AVSubtitle *sub,
const ASSCodesCallbacks *cb)
static int srt_encode_frame(AVCodecContext *avctx,
unsigned char *buf, int bufsize, const AVSubtitle *sub)
static int text_encode_frame(AVCodecContext *avctx,
unsigned char *buf, int bufsize, const AVSubtitle *sub)
static int srt_encode_close(AVCodecContext *avctx)
#if CONFIG_SRT_ENCODER
AVCodec ff_srt_encoder = ;
#if CONFIG_SUBRIP_ENCODER
AVCodec ff_subrip_encoder = ;
#if CONFIG_TEXT_ENCODER
AVCodec ff_text_encoder = ;
