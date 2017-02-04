#define MV_P_FOR  (1<<0)
#define MV_B_FOR  (1<<1)
#define MV_B_BACK (1<<2)
#define MV_TYPE_FOR  (1<<0)
#define MV_TYPE_BACK (1<<1)
#define FRAME_TYPE_I (1<<0)
#define FRAME_TYPE_P (1<<1)
#define FRAME_TYPE_B (1<<2)
typedef struct  CodecViewContext;
OFFSET offsetof(CodecViewContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
CONST
static const AVOption codecview_options[] = ;
AVFILTER_DEFINE_CLASS(codecview);
query_formats
clip_line
draw_line
draw_arrow
filter_frame
config_input
static const AVFilterPad codecview_inputs[] = ;
static const AVFilterPad codecview_outputs[] = ;
AVFilter ff_vf_codecview = ;
