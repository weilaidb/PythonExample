#define MAX_CHANNELS 63
#define PRE_B0  1.53512485958697
#define PRE_B1 -2.69169618940638
#define PRE_B2  1.19839281085285
#define PRE_A1 -1.69065929318241
#define PRE_A2  0.73248077421585
#define RLB_B0  1.0
#define RLB_B1 -2.0
#define RLB_B2  1.0
#define RLB_A1 -1.99004745483398
#define RLB_A2  0.99007225036621
#define ABS_THRES    -70
#define ABS_UP_THRES  10
#define HIST_GRAIN   100
#define HIST_SIZE  ((ABS_UP_THRES - ABS_THRES) * HIST_GRAIN + 1)
struct hist_entry ;
struct integrator ;
struct rect ;
typedef struct  EBUR128Context;
enum ;
OFFSET offsetof(EBUR128Context, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_VIDEO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption ebur128_options[] = ,
,
,
,
,
,
,
,
,
,
,
,
,
};
AVFILTER_DEFINE_CLASS(ebur128);
static const uint8_t graph_colors[] = ;
*get_graph_color
lu_to_y
#define FONT8   0
#define FONT16  1
static const uint8_t font_colors[] = ;
drawtext
drawline
config_video_output
config_audio_input
config_audio_output
ENERGY (ff_exp10(((loudness) + 0.691) / 10.))
log10)
log10)
*get_histogram
init
HIST_POS (int)(((power) - ABS_THRES) * HIST_GRAIN)
gate_update
filter_frame
query_formats
uninit
static const AVFilterPad ebur128_inputs[] = ;
AVFilter ff_af_ebur128 = ;
