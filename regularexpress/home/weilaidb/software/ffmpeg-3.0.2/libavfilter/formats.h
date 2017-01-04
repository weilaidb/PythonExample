#define AVFILTER_FORMATS_H
struct AVFilterFormats ;
typedef struct AVFilterChannelLayouts  AVFilterChannelLayouts;
#define FF_COUNT2LAYOUT(c) (0x8000000000000000ULL | (c))
#define FF_LAYOUT2COUNT(l) (((l) & 0x8000000000000000ULL) ? \
(int)((l) & 0x7FFFFFFF) : 0)
AVFilterChannelLayouts *ff_merge_channel_layouts(AVFilterChannelLayouts *a,
AVFilterChannelLayouts *b);
AVFilterFormats *ff_merge_samplerates(AVFilterFormats *a,
AVFilterFormats *b);
av_warn_unused_result
AVFilterChannelLayouts *ff_all_channel_layouts(void);
av_warn_unused_result
AVFilterFormats *ff_all_samplerates(void);
av_warn_unused_result
AVFilterChannelLayouts *ff_all_channel_counts(void);
av_warn_unused_result
AVFilterChannelLayouts *avfilter_make_format64_list(const int64_t *fmts);
av_warn_unused_result
AVFilterChannelLayouts *ff_make_formatu64_list(const uint64_t *fmts);
av_warn_unused_result
int ff_set_common_channel_layouts(AVFilterContext *ctx,
AVFilterChannelLayouts *layouts);
av_warn_unused_result
int ff_set_common_samplerates(AVFilterContext *ctx,
AVFilterFormats *samplerates);
av_warn_unused_result
int ff_set_common_formats(AVFilterContext *ctx, AVFilterFormats *formats);
av_warn_unused_result
int ff_add_channel_layout(AVFilterChannelLayouts **l, uint64_t channel_layout);
av_warn_unused_result
int ff_channel_layouts_ref(AVFilterChannelLayouts *f,
AVFilterChannelLayouts **ref);
void ff_channel_layouts_unref(AVFilterChannelLayouts **ref);
void ff_channel_layouts_changeref(AVFilterChannelLayouts **oldref,
AVFilterChannelLayouts **newref);
av_warn_unused_result
int ff_default_query_formats(AVFilterContext *ctx);
av_warn_unused_result
int ff_query_formats_all(AVFilterContext *ctx);
av_warn_unused_result
AVFilterFormats *ff_make_format_list(const int *fmts);
av_warn_unused_result
int ff_add_format(AVFilterFormats **avff, int64_t fmt);
av_warn_unused_result
AVFilterFormats *ff_all_formats(enum AVMediaType type);
av_warn_unused_result
AVFilterFormats *ff_planar_sample_fmts(void);
AVFilterFormats *ff_merge_formats(AVFilterFormats *a, AVFilterFormats *b,
enum AVMediaType type);
av_warn_unused_result
int ff_formats_ref(AVFilterFormats *formats, AVFilterFormats **ref);
void ff_formats_unref(AVFilterFormats **ref);
void ff_formats_changeref(AVFilterFormats **oldref, AVFilterFormats **newref);
