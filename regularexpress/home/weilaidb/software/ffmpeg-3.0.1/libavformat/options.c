FF_DISABLE_DEPRECATION_WARNINGS
FF_ENABLE_DEPRECATION_WARNINGS
static const char* format_to_name(void* ptr)
static void *format_child_next(void *obj, void *prev)
static const AVClass *format_child_class_next(const AVClass *prev)
static AVClassCategory get_category(void *ptr)
static const AVClass av_format_context_class = ;
static int io_open_default(AVFormatContext *s, AVIOContext **pb,
const char *url, int flags, AVDictionary **options)
static void io_close_default(AVFormatContext *s, AVIOContext *pb)
static void avformat_get_context_defaults(AVFormatContext *s)
AVFormatContext *avformat_alloc_context(void)
enum AVDurationEstimationMethod av_fmt_ctx_get_duration_estimation_method(const AVFormatContext* ctx)
const AVClass *avformat_get_class(void)
