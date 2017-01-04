enum MagnitudeScale ;
enum SlideMode      ;
enum Orientation    ;
typedef struct SpectrumSynthContext  SpectrumSynthContext;
#define OFFSET(x) offsetof(SpectrumSynthContext, x)
#define A AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption spectrumsynth_options[] = ;
AVFILTER_DEFINE_CLASS(spectrumsynth);
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static void read16_fft_bin(SpectrumSynthContext *s,
int x, int y, int f, int ch)
static void read8_fft_bin(SpectrumSynthContext *s,
int x, int y, int f, int ch)
static void read_fft_data(AVFilterContext *ctx, int x, int h, int ch)
static void synth_window(AVFilterContext *ctx, int x)
static int try_push_frame(AVFilterContext *ctx, int x)
static int try_push_frames(AVFilterContext *ctx)
static int filter_frame_magnitude(AVFilterLink *inlink, AVFrame *magnitude)
static int filter_frame_phase(AVFilterLink *inlink, AVFrame *phase)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad spectrumsynth_inputs[] = ;
static const AVFilterPad spectrumsynth_outputs[] = ;
AVFilter ff_vaf_spectrumsynth = ;
