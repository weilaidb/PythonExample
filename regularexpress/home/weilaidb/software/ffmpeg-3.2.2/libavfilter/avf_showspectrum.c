enum DisplayMode  ;
enum DataMode     ;
enum DisplayScale ;
enum ColorMode    ;
enum SlideMode    ;
enum Orientation  ;
typedef struct  ShowSpectrumContext;
OFFSET offsetof(ShowSpectrumContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showspectrum_options[] = ,
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
,
,
,
};
AVFILTER_DEFINE_CLASS(showspectrum);
static const struct ColorTable  color_table[][8] = ;
uninit
query_formats
config_output
run_channel_fft
RE s->fft_data[ch][y].re
IM s->fft_data[ch][y].im
MAGNITUDE hypot(RE(y, ch), IM(y, ch))
PHASE atan2(IM(y, ch), RE(y, ch))
calc_channel_magnitudes
calc_channel_phases
acalc_magnitudes
scale_magnitudes
color_range
pick_color
clear_combine_buffer
plot_channel
plot_spectrum_column
#if CONFIG_SHOWSPECTRUM_FILTER
request_frame
filter_frame
static const AVFilterPad showspectrum_inputs[] = ;
static const AVFilterPad showspectrum_outputs[] = ;
AVFilter ff_avf_showspectrum = ;
#if CONFIG_SHOWSPECTRUMPIC_FILTER
static const AVOption showspectrumpic_options[] = ,
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
AVFILTER_DEFINE_CLASS(showspectrumpic);
drawtext
showspectrumpic_request_frame
showspectrumpic_filter_frame
static const AVFilterPad showspectrumpic_inputs[] = ;
static const AVFilterPad showspectrumpic_outputs[] = ;
AVFilter ff_avf_showspectrumpic = ;
