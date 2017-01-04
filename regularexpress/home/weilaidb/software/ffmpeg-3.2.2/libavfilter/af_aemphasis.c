typedef struct BiquadCoeffs  BiquadCoeffs;
typedef struct BiquadD2  BiquadD2;
typedef struct RIAACurve  RIAACurve;
typedef struct AudioEmphasisContext  AudioEmphasisContext;
#define OFFSET(x) offsetof(AudioEmphasisContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aemphasis_options[] = ;
AVFILTER_DEFINE_CLASS(aemphasis);
static inline double biquad(BiquadD2 *bq, double in)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int query_formats(AVFilterContext *ctx)
static inline void set_highshelf_rbj(BiquadD2 *bq, double freq, double q, double peak, double sr)
static inline void set_lp_rbj(BiquadD2 *bq, double fc, double q, double sr, double gain)
static double freq_gain(BiquadCoeffs *c, double freq, double sr)
static int config_input(AVFilterLink *inlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad avfilter_af_aemphasis_inputs[] = ;
static const AVFilterPad avfilter_af_aemphasis_outputs[] = ;
AVFilter ff_af_aemphasis = ;
