#define OFFSET(x) offsetof(IDETContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption idet_options[] = ;
AVFILTER_DEFINE_CLASS(idet);
static const char *type2str(Type type)
#define PRECISION 1048576
static uint64_t uintpow(uint64_t b,unsigned int e)
static int av_dict_set_fxp(AVDictionary **pm, const char *key, uint64_t value, unsigned int digits,
int flags)
static const char *rep2str(RepeatedField repeated_field)
int ff_idet_filter_line_c(const uint8_t *a, const uint8_t *b, const uint8_t *c, int w)
int ff_idet_filter_line_c_16bit(const uint16_t *a, const uint16_t *b, const uint16_t *c, int w)
static void filter(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *link, AVFrame *picref)
static int request_frame(AVFilterLink *link)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static const AVFilterPad idet_inputs[] = ;
static const AVFilterPad idet_outputs[] = ;
AVFilter ff_vf_idet = ;
