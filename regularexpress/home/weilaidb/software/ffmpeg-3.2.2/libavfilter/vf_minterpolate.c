#define ME_MODE_BIDIR 0
#define ME_MODE_BILAT 1
#define MC_MODE_OBMC 0
#define MC_MODE_AOBMC 1
#define SCD_METHOD_NONE 0
#define SCD_METHOD_FDIFF 1
#define NB_FRAMES 4
#define NB_PIXEL_MVS 32
#define NB_CLUSTERS 128
#define ALPHA_MAX 1024
#define CLUSTER_THRESHOLD 4
#define PX_WEIGHT_MAX 255
#define COST_PRED_SCALE 64
static const uint8_t obmc_linear32[1024] = ;
static const uint8_t obmc_linear16[256] = ;
static const uint8_t obmc_linear8[64] = ;
static const uint8_t obmc_linear4[16] = ;
static const uint8_t * const obmc_tab_linear[4]= ;
enum MIMode ;
typedef struct Cluster  Cluster;
typedef struct Block  Block;
typedef struct Pixel  Pixel;
typedef struct Frame  Frame;
typedef struct MIContext  MIContext;
OFFSET offsetof(MIContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
CONST
static const AVOption minterpolate_options[] = ,
,
CONST(),
CONST(),
CONST(),
,
CONST(),
CONST(),
,
CONST(),
CONST(),
,
CONST(),
CONST(),
CONST(),
CONST(),
CONST(),
CONST(),
CONST(),
CONST(),
CONST(),
,
,
,
,
CONST(),
CONST(),
,
};
AVFILTER_DEFINE_CLASS(minterpolate);
query_formats
get_sbad
get_sbad_ob
get_sad_ob
config_input
config_output
ADD_PRED\
while
search_mv
bilateral_me
var_size_bme
cluster_mvs
inject_frame
detect_scene_change
ADD_PIXELS\
while
bidirectional_obmc
set_frame_data
var_size_bmc
bilateral_obmc
interpolate
filter_frame
free_blocks
uninit
static const AVFilterPad minterpolate_inputs[] = ;
static const AVFilterPad minterpolate_outputs[] = ;
AVFilter ff_vf_minterpolate = ;
