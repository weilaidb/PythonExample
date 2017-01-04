#define KNOWN(l) (!FF_LAYOUT2COUNT(l))
#define MERGE_REF(ret, a, fmts, type, fail)                                \
do  while (0)
#define MERGE_FORMATS(ret, a, b, fmts, nb, type, fail)                          \
do  while (0)
AVFilterFormats *ff_merge_formats(AVFilterFormats *a, AVFilterFormats *b,
enum AVMediaType type)
AVFilterFormats *ff_merge_samplerates(AVFilterFormats *a,
AVFilterFormats *b)
AVFilterChannelLayouts *ff_merge_channel_layouts(AVFilterChannelLayouts *a,
AVFilterChannelLayouts *b)
int ff_fmt_is_in(int fmt, const int *fmts)
#define MAKE_FORMAT_LIST(type, field, count_field)                      \
type *formats;                                                      \
int count = 0;                                                      \
if (fmts)                                                           \
for (count = 0; fmts[count] != -1; count++)                     \
;                                                           \
formats = av_mallocz(sizeof(*formats));                             \
if (!formats)                                                       \
return NULL;                                                    \
formats->count_field = count;                                       \
if (count)
AVFilterFormats *ff_make_format_list(const int *fmts)
AVFilterChannelLayouts *ff_make_formatu64_list(const uint64_t *fmts)
AVFilterChannelLayouts *avfilter_make_format64_list(const int64_t *fmts)
#define ADD_FORMAT(f, fmt, unref_fn, type, list, nb)        \
do  while (0)
int ff_add_format(AVFilterFormats **avff, int64_t fmt)
int ff_add_channel_layout(AVFilterChannelLayouts **l, uint64_t channel_layout)
AVFilterFormats *ff_all_formats(enum AVMediaType type)
const int64_t avfilter_all_channel_layouts[] = ;
AVFilterFormats *ff_planar_sample_fmts(void)
AVFilterFormats *ff_all_samplerates(void)
AVFilterChannelLayouts *ff_all_channel_layouts(void)
AVFilterChannelLayouts *ff_all_channel_counts(void)
#define FORMATS_REF(f, ref, unref_fn)                                           \
void *tmp;                                                                  \
\
if (!f || !ref)                                                             \
return AVERROR(ENOMEM);                                                 \
\
tmp = av_realloc_array(f->refs, sizeof(*f->refs), f->refcount + 1);         \
if (!tmp)                                                                            \
f->refs = tmp;                                                              \
f->refs[f->refcount++] = ref;                                               \
*ref = f;                                                                   \
return 0
int ff_channel_layouts_ref(AVFilterChannelLayouts *f, AVFilterChannelLayouts **ref)
int ff_formats_ref(AVFilterFormats *f, AVFilterFormats **ref)
#define FIND_REF_INDEX(ref, idx)            \
do  while (0)
#define FORMATS_UNREF(ref, list)                                   \
do  while (0)
void ff_formats_unref(AVFilterFormats **ref)
void ff_channel_layouts_unref(AVFilterChannelLayouts **ref)
#define FORMATS_CHANGEREF(oldref, newref)       \
do  while (0)
void ff_channel_layouts_changeref(AVFilterChannelLayouts **oldref,
AVFilterChannelLayouts **newref)
void ff_formats_changeref(AVFilterFormats **oldref, AVFilterFormats **newref)
#define SET_COMMON_FORMATS(ctx, fmts, in_fmts, out_fmts, ref_fn, unref_fn, list) \
int count = 0, i;                                               \
\
if (!fmts)                                                      \
return AVERROR(ENOMEM);                                     \
\
for (i = 0; i < ctx->nb_inputs; i++)                                                                \
for (i = 0; i < ctx->nb_outputs; i++)                                                                \
\
if (!count)                                                                \
\
return 0;
int ff_set_common_channel_layouts(AVFilterContext *ctx,
AVFilterChannelLayouts *layouts)
int ff_set_common_samplerates(AVFilterContext *ctx,
AVFilterFormats *samplerates)
int ff_set_common_formats(AVFilterContext *ctx, AVFilterFormats *formats)
static int default_query_formats_common(AVFilterContext *ctx,
AVFilterChannelLayouts *(layouts)(void))
int ff_default_query_formats(AVFilterContext *ctx)
int ff_query_formats_all(AVFilterContext *ctx)
int ff_parse_pixel_format(enum AVPixelFormat *ret, const char *arg, void *log_ctx)
int ff_parse_sample_format(int *ret, const char *arg, void *log_ctx)
int ff_parse_time_base(AVRational *ret, const char *arg, void *log_ctx)
int ff_parse_sample_rate(int *ret, const char *arg, void *log_ctx)
int ff_parse_channel_layout(int64_t *ret, int *nret, const char *arg,
void *log_ctx)
#undef printf
int main(void)
