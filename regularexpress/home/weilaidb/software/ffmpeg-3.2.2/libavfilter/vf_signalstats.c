enum FilterMode ;
typedef struct  SignalstatsContext;
typedef struct ThreadData  ThreadData;
typedef struct ThreadDataHueSatMetrics  ThreadDataHueSatMetrics;
OFFSET offsetof(SignalstatsContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption signalstats_options[] = ,
, .flags=FLAGS},
};
AVFILTER_DEFINE_CLASS(signalstats);
init
uninit
query_formats
*alloc_frame
config_props
burn_frame8
burn_frame16
filter8_brng
filter16_brng
filter_tout_outlier
filter8_tout
filter16_tout
#define VREP_START 4
filter8_vrep
filter16_vrep
static const struct  filters_def[] = ;
#define DEPTH 256
compute_sat_hue_metrics8
compute_sat_hue_metrics16
compute_bit_depth
filter_frame8
filter_frame16
filter_frame
static const AVFilterPad signalstats_inputs[] = ;
static const AVFilterPad signalstats_outputs[] = ;
AVFilter ff_vf_signalstats = ;
