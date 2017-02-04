typedef struct VagueDenoiserContext  VagueDenoiserContext;
OFFSET offsetof(VagueDenoiserContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption vaguedenoiser_options[] = ;
AVFILTER_DEFINE_CLASS(vaguedenoiser);
#define NPAD 10
static const float analysis_low[9] = ;
static const float analysis_high[7] = ;
static const float synthesis_low[7] = ;
static const float synthesis_high[9] = ;
query_formats
config_input
copy
copyv
copyh
symmetric_extension
transform_step
invert_step
hard_thresholding
soft_thresholding
qian_thresholding
filter
filter_frame
init
uninit
static const AVFilterPad vaguedenoiser_inputs[] = ;
static const AVFilterPad vaguedenoiser_outputs[] = ;
AVFilter ff_vf_vaguedenoiser = ;
