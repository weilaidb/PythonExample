typedef struct ThreadData  ThreadData;
CHECK\
\
CHECK( 1) CHECK( 2) }} }} \
}\
\
if (!(mode&2))  \
\
if (spatial_pred > d + diff) \
spatial_pred = d + diff; \
else if (spatial_pred < d - diff) \
spatial_pred = d - diff; \
\
dst[0] = spatial_pred; \
\
dst++; \
cur++; \
prev++; \
next++; \
prev2++; \
next2++; \
}
filter_line_c
#define MAX_ALIGN 8
filter_edges
filter_line_c_16bit
filter_edges_16bit
filter_slice
filter
return_frame
checkstride
fixstride
filter_frame
request_frame
uninit
query_formats
config_props
OFFSET offsetof(YADIFContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
CONST
static const AVOption yadif_options[] = ;
AVFILTER_DEFINE_CLASS(yadif);
static const AVFilterPad avfilter_vf_yadif_inputs[] = ;
static const AVFilterPad avfilter_vf_yadif_outputs[] = ;
AVFilter ff_vf_yadif = ;
