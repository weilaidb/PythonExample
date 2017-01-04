FF_DISABLE_DEPRECATION_WARNINGS
FF_ENABLE_DEPRECATION_WARNINGS
static const char* context_to_name(void* ptr)
static void *codec_child_next(void *obj, void *prev)
static const AVClass *codec_child_class_next(const AVClass *prev)
static AVClassCategory get_category(void *ptr)
static const AVClass av_codec_context_class = ;
static int init_context_defaults(AVCodecContext *s, const AVCodec *codec)
#if FF_API_GET_CONTEXT_DEFAULTS
int avcodec_get_context_defaults3(AVCodecContext *s, const AVCodec *codec)
AVCodecContext *avcodec_alloc_context3(const AVCodec *codec)
void avcodec_free_context(AVCodecContext **pavctx)
#if FF_API_COPY_CONTEXT
int avcodec_copy_context(AVCodecContext *dest, const AVCodecContext *src)
const AVClass *avcodec_get_class(void)
#define FOFFSET(x) offsetof(AVFrame,x)
static const AVOption frame_options[]=;
static const AVClass av_frame_class = ;
const AVClass *avcodec_get_frame_class(void)
#define SROFFSET(x) offsetof(AVSubtitleRect,x)
static const AVOption subtitle_rect_options[]=;
static const AVClass av_subtitle_rect_class = ;
const AVClass *avcodec_get_subtitle_rect_class(void)
static int dummy_init(AVCodecContext *ctx)
static int dummy_close(AVCodecContext *ctx)
static int dummy_encode(AVCodecContext *ctx, AVPacket *pkt, const AVFrame *frame, int *got_packet)
typedef struct Dummy12Context  Dummy12Context;
typedef struct Dummy3Context  Dummy3Context;
#define OFFSET(x) offsetof(Dummy12Context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption dummy_options[] = ;
static const AVClass dummy_v1_class = ;
static const AVClass dummy_v2_class = ;
static AVCodec dummy_v1_encoder = ;
static AVCodec dummy_v2_encoder = ;
static AVCodec dummy_v3_encoder = ;
static AVCodec dummy_v4_encoder = ;
static void test_copy_print_codec(const AVCodecContext *ctx)
static void test_copy(const AVCodec *c1, const AVCodec *c2)
int main(void)
