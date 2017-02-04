#define FF_BUFQUEUE_SIZE 302
typedef struct cqueue  cqueue;
typedef struct DynamicAudioNormalizerContext  DynamicAudioNormalizerContext;
OFFSET offsetof(DynamicAudioNormalizerContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption dynaudnorm_options[] = ;
AVFILTER_DEFINE_CLASS(dynaudnorm);
init
query_formats
frame_size
precalculate_fade_factors
*cqueue_create
cqueue_free
cqueue_size
cqueue_empty
cqueue_enqueue
cqueue_peek
cqueue_dequeue
cqueue_pop
init_gaussian_filter
uninit
config_input
fade
pow2
bound
find_peak_magnitude
compute_frame_rms
get_max_local_gain
minimum_filter
gaussian_filter
update_gain_history
update_value
perform_dc_correction
setup_compress_thresh
compute_frame_std_dev
perform_compression
analyze_frame
amplify_frame
filter_frame
flush_buffer
request_frame
static const AVFilterPad avfilter_af_dynaudnorm_inputs[] = ;
static const AVFilterPad avfilter_af_dynaudnorm_outputs[] = ;
AVFilter ff_af_dynaudnorm = ;
