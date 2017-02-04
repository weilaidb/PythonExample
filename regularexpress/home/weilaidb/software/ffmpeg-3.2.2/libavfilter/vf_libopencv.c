#if HAVE_OPENCV2_CORE_CORE_C_H
fill_iplimage_from_frame
fill_frame_from_iplimage
query_formats
typedef struct OCVContext  OCVContext;
typedef struct SmoothContext  SmoothContext;
smooth_init
smooth_end_frame_filter
read_shape_from_file
parse_iplconvkernel
typedef struct DilateContext  DilateContext;
dilate_init
dilate_uninit
dilate_end_frame_filter
erode_end_frame_filter
typedef struct OCVFilterEntry  OCVFilterEntry;
static const OCVFilterEntry ocv_filter_entries[] = ;
init
uninit
filter_frame
OFFSET offsetof(OCVContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption ocv_options[] = ;
AVFILTER_DEFINE_CLASS(ocv);
static const AVFilterPad avfilter_vf_ocv_inputs[] = ;
static const AVFilterPad avfilter_vf_ocv_outputs[] = ;
AVFilter ff_vf_ocv = ;
