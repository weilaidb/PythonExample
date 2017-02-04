static const char *const var_names[] = ;
enum var_name ;
typedef struct SelectContext  SelectContext;
OFFSET offsetof(SelectContext, x)
DEFINE_OPTIONS                            \
static const AVOption filt_name##_options[] = , \
, .flags=FLAGS }, \
, \
, \
\
}
request_frame;
init
#define INTERLACE_TYPE_P 0
#define INTERLACE_TYPE_T 1
#define INTERLACE_TYPE_B 2
config_input
get_scene_score
get_concatdec_select
D2TS  (isnan(d) ? AV_NOPTS_VALUE : (int64_t)(d))
TS2D ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts))
select_frame
filter_frame
request_frame
uninit
query_formats
DEFINE_OPTIONS;
AVFILTER_DEFINE_CLASS(aselect);
aselect_init
static const AVFilterPad avfilter_af_aselect_inputs[] = ;
AVFilter ff_af_aselect = ;
DEFINE_OPTIONS;
AVFILTER_DEFINE_CLASS(select);
select_init
static const AVFilterPad avfilter_vf_select_inputs[] = ;
AVFilter ff_vf_select = ;
