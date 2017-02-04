static const char *const var_names[] = ;
enum var_name ;
typedef struct FilterParam  FilterParam;
typedef struct BoxBlurContext  BoxBlurContext;
#define Y 0
#define U 1
#define V 2
#define A 3
init
uninit
query_formats
config_input
BLUR                                                   \
static inline void blur ## depth(type *dst, int dst_step, const type *src,  \
int src_step, int len, int radius)         \
BLUR(uint8_t,   8)
BLUR(uint16_t, 16)
#undef BLUR
blur
blur_power
hblur
vblur
filter_frame
OFFSET offsetof(BoxBlurContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption boxblur_options[] = ,
, .flags = FLAGS },
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
AVFILTER_DEFINE_CLASS(boxblur);
static const AVFilterPad avfilter_vf_boxblur_inputs[] = ;
static const AVFilterPad avfilter_vf_boxblur_outputs[] = ;
AVFilter ff_vf_boxblur = ;
