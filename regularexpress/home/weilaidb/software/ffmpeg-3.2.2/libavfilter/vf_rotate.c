static const char * const var_names[] = ;
enum var_name ;
typedef struct RotContext  RotContext;
typedef struct ThreadData  ThreadData;
OFFSET offsetof(RotContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption rotate_options[] = ,
, CHAR_MIN, CHAR_MAX, .flags=FLAGS },
, CHAR_MIN, CHAR_MAX, .flags=FLAGS },
, CHAR_MIN, CHAR_MAX, .flags=FLAGS },
, CHAR_MIN, CHAR_MAX, .flags=FLAGS },
, CHAR_MIN, CHAR_MAX, .flags=FLAGS },
, CHAR_MIN, CHAR_MAX, .flags=FLAGS },
, CHAR_MIN, CHAR_MAX, .flags=FLAGS },
,
};
AVFILTER_DEFINE_CLASS(rotate);
init
uninit
query_formats
get_rotated_w
get_rotated_h
static double (* const func1[])(void *, double) = ;
static const char * const func1_names[] = ;
#define FIXP (1<<16)
#define FIXP2 (1<<20)
#define INT_PI 3294199
int_sin
*interpolate_bilinear8
*interpolate_bilinear16
config_props
copy_elem
simple_rotate_internal
simple_rotate
TS2T ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts)*av_q2d(tb))
filter_slice
filter_frame
process_command
static const AVFilterPad rotate_inputs[] = ;
static const AVFilterPad rotate_outputs[] = ;
AVFilter ff_vf_rotate = ;
