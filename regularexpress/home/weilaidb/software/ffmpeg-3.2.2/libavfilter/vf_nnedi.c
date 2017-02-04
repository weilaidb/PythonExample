typedef struct FrameData  FrameData;
typedef struct NNEDIContext  NNEDIContext;
OFFSET offsetof(NNEDIContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption nnedi_options[] = ,
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
AVFILTER_DEFINE_CLASS(nnedi);
config_input
config_output
query_formats
copy_pad
elliott
dot_prod
dot_prods
compute_network0
compute_network0_i16
pixel2float48
byte2word48
process_line0
byte2word64
compute_network0new
evalfunc_0
extract_m8
extract_m8_i16
static const float exp_lo = -80.0f;
static const float exp_hi = +80.0f;
e2_m16
const float min_weight_sum = 1e-10f;
weighted_avg_elliott_mul5_m16
evalfunc_1
#define NUM_NSIZE 7
#define NUM_NNS 5
roundds
select_functions
modnpf
get_frame
filter_frame
request_frame
init
uninit
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_nnedi = ;
