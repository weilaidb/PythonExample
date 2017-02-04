static const uint16_t coef_lf[2] = ;
static const uint16_t coef_hf[3] = ;
static const uint16_t coef_sp[2] = ;
typedef struct ThreadData  ThreadData;
FILTER_INTRA \
for (x = 0; x < w; x++)
FILTER1 \
for (x = 0; x < w; x++)
filter_intra
filter_line_c
filter_edge
filter_intra_16bit
filter_line_c_16bit
filter_edge_16bit
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
OFFSET offsetof(BWDIFContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
CONST
static const AVOption bwdif_options[] = ;
AVFILTER_DEFINE_CLASS(bwdif);
static const AVFilterPad avfilter_vf_bwdif_inputs[] = ;
static const AVFilterPad avfilter_vf_bwdif_outputs[] = ;
AVFilter ff_vf_bwdif = ;
