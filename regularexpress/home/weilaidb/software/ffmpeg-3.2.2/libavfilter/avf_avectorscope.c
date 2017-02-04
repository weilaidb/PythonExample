enum VectorScopeMode ;
enum VectorScopeDraw ;
enum VectorScopeScale ;
typedef struct AudioVectorScopeContext  AudioVectorScopeContext;
OFFSET offsetof(AudioVectorScopeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption avectorscope_options[] = ,
, 0, INT_MAX, FLAGS },
, 0, 0, FLAGS },
, 0, 0, FLAGS },
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
AVFILTER_DEFINE_CLASS(avectorscope);
draw_dot
draw_line
fade
query_formats
config_input
config_output
filter_frame
uninit
static const AVFilterPad audiovectorscope_inputs[] = ;
static const AVFilterPad audiovectorscope_outputs[] = ;
AVFilter ff_avf_avectorscope = ;
