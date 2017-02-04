KNOWN (!FF_LAYOUT2COUNT(l))
MERGE_REF                                \
do  while (0)
MERGE_FORMATS                          \
do  while (0)
*ff_merge_formats
*ff_merge_samplerates
*ff_merge_channel_layouts
ff_fmt_is_in
MAKE_FORMAT_LIST                      \
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
*ff_make_format_list
*ff_make_formatu64_list
*avfilter_make_format64_list
ADD_FORMAT        \
do  while (0)
ff_add_format
ff_add_channel_layout
*ff_all_formats
const int64_t avfilter_all_channel_layouts[] = ;
*ff_planar_sample_fmts
*ff_all_samplerates
*ff_all_channel_layouts
*ff_all_channel_counts
FORMATS_REF                                           \
void *tmp;                                                                  \
\
if (!f || !ref)                                                             \
AVERROR;                                                 \
\
tmp = av_realloc_array(f->refs, sizeof(*f->refs), f->refcount + 1);         \
if (!tmp)                                                                            \
f->refs = tmp;                                                              \
f->refs[f->refcount++] = ref;                                               \
*ref = f;                                                                   \
return 0
ff_channel_layouts_ref
ff_formats_ref
FIND_REF_INDEX            \
do  while (0)
FORMATS_UNREF                                   \
do  while (0)
ff_formats_unref
ff_channel_layouts_unref
FORMATS_CHANGEREF       \
do  while (0)
ff_channel_layouts_changeref
ff_formats_changeref
SET_COMMON_FORMATS \
int count = 0, i;                                               \
\
if (!fmts)                                                      \
AVERROR;                                     \
\
for (i = 0; i < ctx->nb_inputs; i++)                                                                \
for (i = 0; i < ctx->nb_outputs; i++)                                                                \
\
if (!count)                                                                \
\
return 0;
ff_set_common_channel_layouts
ff_set_common_samplerates
ff_set_common_formats
default_query_formats_common(void))
ff_default_query_formats
ff_query_formats_all
ff_parse_pixel_format
ff_parse_sample_format
ff_parse_time_base
ff_parse_sample_rate
ff_parse_channel_layout
