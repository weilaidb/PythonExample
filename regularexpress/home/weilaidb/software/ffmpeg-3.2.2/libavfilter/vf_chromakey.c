typedef struct ChromakeyContext  ChromakeyContext;
do_chromakey_pixel
get_pixel_uv
do_chromakey_slice
filter_frame
FIXNUM lrint((x) * (1 << 10))
RGB_TO_U (((- FIXNUM(0.16874) * rgb[0] - FIXNUM(0.33126) * rgb[1] + FIXNUM(0.50000) * rgb[2] + (1 << 9) - 1) >> 10) + 128)
RGB_TO_V (((  FIXNUM(0.50000) * rgb[0] - FIXNUM(0.41869) * rgb[1] - FIXNUM(0.08131) * rgb[2] + (1 << 9) - 1) >> 10) + 128)
initialize_chromakey
query_formats
config_input
static const AVFilterPad chromakey_inputs[] = ;
static const AVFilterPad chromakey_outputs[] = ;
OFFSET offsetof(ChromakeyContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption chromakey_options[] = ,
,
,
,
};
AVFILTER_DEFINE_CLASS(chromakey);
AVFilter ff_vf_chromakey = ;
