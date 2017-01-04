static const enum AVPixelFormat *get_compliance_unofficial_pix_fmts(enum AVCodecID codec_id, const enum AVPixelFormat default_formats[])
enum AVPixelFormat choose_pixel_fmt(AVStream *st, AVCodecContext *enc_ctx, AVCodec *codec, enum AVPixelFormat target)
void choose_sample_fmt(AVStream *st, AVCodec *codec)
static char *choose_pix_fmts(OutputStream *ost)
#define DEF_CHOOSE_FORMAT(type, var, supported_list, none, get_name)           \
static char *choose_ ## var ## s(OutputStream *ost)                            \
DEF_CHOOSE_FORMAT(enum AVSampleFormat, sample_fmt, sample_fmts,
AV_SAMPLE_FMT_NONE, GET_SAMPLE_FMT_NAME)
DEF_CHOOSE_FORMAT(int, sample_rate, supported_samplerates, 0,
GET_SAMPLE_RATE_NAME)
DEF_CHOOSE_FORMAT(uint64_t, channel_layout, channel_layouts, 0,
GET_CH_LAYOUT_NAME)
FilterGraph *init_simple_filtergraph(InputStream *ist, OutputStream *ost)
static void init_input_filter(FilterGraph *fg, AVFilterInOut *in)
int init_complex_filtergraph(FilterGraph *fg)
static int insert_trim(int64_t start_time, int64_t duration,
AVFilterContext **last_filter, int *pad_idx,
const char *filter_name)
static int insert_filter(AVFilterContext **last_filter, int *pad_idx,
const char *filter_name, const char *args)
static int configure_output_video_filter(FilterGraph *fg, OutputFilter *ofilter, AVFilterInOut *out)
static int configure_output_audio_filter(FilterGraph *fg, OutputFilter *ofilter, AVFilterInOut *out)
#define DESCRIBE_FILTER_LINK(f, inout, in)                         \
int configure_output_filter(FilterGraph *fg, OutputFilter *ofilter, AVFilterInOut *out)
static int sub2video_prepare(InputStream *ist)
static int configure_input_video_filter(FilterGraph *fg, InputFilter *ifilter,
AVFilterInOut *in)
static int configure_input_audio_filter(FilterGraph *fg, InputFilter *ifilter,
AVFilterInOut *in)
static int configure_input_filter(FilterGraph *fg, InputFilter *ifilter,
AVFilterInOut *in)
int configure_filtergraph(FilterGraph *fg)
int ist_in_filtergraph(FilterGraph *fg, InputStream *ist)
