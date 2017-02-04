#define R 0
#define G 1
#define B 2
#define A 3
#define Y 0
#define U 1
#define V 2
#define FADE_IN  0
#define FADE_OUT 1
typedef struct FadeContext  FadeContext;
init
query_formats
const static enum AVPixelFormat studio_level_pix_fmts[] = ;
config_props
filter_rgb
filter_slice_rgb
filter_slice_luma
filter_slice_chroma
filter_slice_alpha
filter_frame
OFFSET offsetof(FadeContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption fade_options[] = ,
, CHAR_MIN, CHAR_MAX, FLAGS },
};
AVFILTER_DEFINE_CLASS(fade);
static const AVFilterPad avfilter_vf_fade_inputs[] = ;
static const AVFilterPad avfilter_vf_fade_outputs[] = ;
AVFilter ff_vf_fade = ;
