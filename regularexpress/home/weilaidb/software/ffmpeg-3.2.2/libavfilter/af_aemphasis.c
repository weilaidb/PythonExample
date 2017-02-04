typedef struct BiquadCoeffs  BiquadCoeffs;
typedef struct BiquadD2  BiquadD2;
typedef struct RIAACurve  RIAACurve;
typedef struct AudioEmphasisContext  AudioEmphasisContext;
OFFSET offsetof(AudioEmphasisContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aemphasis_options[] = ;
AVFILTER_DEFINE_CLASS(aemphasis);
biquad
filter_frame
query_formats
set_highshelf_rbj
set_lp_rbj
freq_gain
config_input
uninit
static const AVFilterPad avfilter_af_aemphasis_inputs[] = ;
static const AVFilterPad avfilter_af_aemphasis_outputs[] = ;
AVFilter ff_af_aemphasis = ;
