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
#define OFFSET(x) offsetof(MIContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define CONST(name, help, val, unit)
static const AVOption minterpolate_options[] = ;
AVFILTER_DEFINE_CLASS(minterpolate);
static int query_formats(AVFilterContext *ctx)
static uint64_t get_sbad(AVMotionEstContext *me_ctx, int x, int y, int x_mv, int y_mv)
static uint64_t get_sbad_ob(AVMotionEstContext *me_ctx, int x, int y, int x_mv, int y_mv)
static uint64_t get_sad_ob(AVMotionEstContext *me_ctx, int x, int y, int x_mv, int y_mv)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
#define ADD_PRED(preds, px, py)\
do  while(0)
static void search_mv(MIContext *mi_ctx, Block *blocks, int mb_x, int mb_y, int dir)
static void bilateral_me(MIContext *mi_ctx)
static int var_size_bme(MIContext *mi_ctx, Block *block, int x_mb, int y_mb, int n)
static int cluster_mvs(MIContext *mi_ctx)
static int inject_frame(AVFilterLink *inlink, AVFrame *avf_in)
static int detect_scene_change(MIContext *mi_ctx)
#define ADD_PIXELS(b_weight, mv_x, mv_y)\
do  while(0)
static void bidirectional_obmc(MIContext *mi_ctx, int alpha)
static void set_frame_data(MIContext *mi_ctx, int alpha, AVFrame *avf_out)
static void var_size_bmc(MIContext *mi_ctx, Block *block, int x_mb, int y_mb, int n, int alpha)
static void bilateral_obmc(MIContext *mi_ctx, Block *block, int mb_x, int mb_y, int alpha)
static void interpolate(AVFilterLink *inlink, AVFrame *avf_out)
static int filter_frame(AVFilterLink *inlink, AVFrame *avf_in)
static av_cold void free_blocks(Block *block, int sb)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad minterpolate_inputs[] = ;
static const AVFilterPad minterpolate_outputs[] = ;
AVFilter ff_vf_minterpolate = ;
