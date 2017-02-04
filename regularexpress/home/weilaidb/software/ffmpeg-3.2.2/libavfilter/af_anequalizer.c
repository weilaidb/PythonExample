#define FILTER_ORDER 4
enum FilterType ;
typedef struct FoSection  FoSection;
typedef struct EqualizatorFilter  EqualizatorFilter;
typedef struct AudioNEqualizerContext  AudioNEqualizerContext;
OFFSET offsetof(AudioNEqualizerContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_VIDEO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption anequalizer_options[] = ,
,
, 0, 0, V|F },
,
,
,
,
, 0, 0, V|F },
};
AVFILTER_DEFINE_CLASS(anequalizer);
draw_curves
config_video
init
query_formats
uninit
butterworth_fo_section
butterworth_bp_filter
chebyshev1_fo_section
chebyshev1_bp_filter
chebyshev2_fo_section
chebyshev2_bp_filter
butterworth_compute_bw_gain_db
chebyshev1_compute_bw_gain_db
chebyshev2_compute_bw_gain_db
hz_2_rad
equalizer
add_filter
config_input
process_command
section_process
process_sample
filter_frame
static const AVFilterPad inputs[] = ;
AVFilter ff_af_anequalizer = ;
