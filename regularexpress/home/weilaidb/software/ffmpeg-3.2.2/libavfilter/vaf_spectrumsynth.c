enum MagnitudeScale ;
enum SlideMode      ;
enum Orientation    ;
typedef struct SpectrumSynthContext  SpectrumSynthContext;
OFFSET offsetof(SpectrumSynthContext, x)
#define A AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption spectrumsynth_options[] = ;
AVFILTER_DEFINE_CLASS(spectrumsynth);
query_formats
config_output
request_frame
read16_fft_bin
read8_fft_bin
read_fft_data
synth_window
try_push_frame
try_push_frames
filter_frame_magnitude
filter_frame_phase
uninit
static const AVFilterPad spectrumsynth_inputs[] = ;
static const AVFilterPad spectrumsynth_outputs[] = ;
AVFilter ff_vaf_spectrumsynth = ;
