#define AVFILTER_FORMATS_H
struct AVFilterFormats ;
typedef struct AVFilterChannelLayouts  AVFilterChannelLayouts;
FF_COUNT2LAYOUT (0x8000000000000000ULL | (c))
FF_LAYOUT2COUNT (((l) & 0x8000000000000000ULL) ? \
(int)((l) & 0x7FFFFFFF) : 0)
*ff_merge_channel_layouts;
*ff_merge_samplerates;
av_warn_unused_result
*ff_all_channel_layouts;
av_warn_unused_result
*ff_all_samplerates;
av_warn_unused_result
*ff_all_channel_counts;
av_warn_unused_result
*avfilter_make_format64_list;
av_warn_unused_result
*ff_make_formatu64_list;
av_warn_unused_result
ff_set_common_channel_layouts;
av_warn_unused_result
ff_set_common_samplerates;
av_warn_unused_result
ff_set_common_formats;
av_warn_unused_result
ff_add_channel_layout;
av_warn_unused_result
ff_channel_layouts_ref;
ff_channel_layouts_unref;
ff_channel_layouts_changeref;
av_warn_unused_result
ff_default_query_formats;
av_warn_unused_result
ff_query_formats_all;
av_warn_unused_result
*ff_make_format_list;
av_warn_unused_result
ff_add_format;
av_warn_unused_result
*ff_all_formats;
av_warn_unused_result
*ff_planar_sample_fmts;
*ff_merge_formats;
av_warn_unused_result
ff_formats_ref;
ff_formats_unref;
ff_formats_changeref;
