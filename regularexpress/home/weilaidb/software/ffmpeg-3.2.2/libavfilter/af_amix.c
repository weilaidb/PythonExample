#define INPUT_ON       1
#define INPUT_EOF      2
#define DURATION_LONGEST  0
#define DURATION_SHORTEST 1
#define DURATION_FIRST    2
typedef struct FrameInfo  FrameInfo;
typedef struct FrameList  FrameList;
frame_list_clear
frame_list_next_frame_size
frame_list_next_pts
frame_list_remove_samples
frame_list_add_frame
typedef struct MixContext  MixContext;
OFFSET offsetof(MixContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption amix_options[] = ;
AVFILTER_DEFINE_CLASS(amix);
calculate_scales
config_output
calc_active_inputs;
output_frame
request_samples
calc_active_inputs
request_frame
filter_frame
init
uninit
query_formats
static const AVFilterPad avfilter_af_amix_outputs[] = ;
AVFilter ff_af_amix = ;
