#define FF_BUFQUEUE_SIZE 302
typedef struct cqueue  cqueue;
typedef struct DynamicAudioNormalizerContext  DynamicAudioNormalizerContext;
#define OFFSET(x) offsetof(DynamicAudioNormalizerContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption dynaudnorm_options[] = ;
AVFILTER_DEFINE_CLASS(dynaudnorm);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static inline int frame_size(int sample_rate, int frame_len_msec)
static void precalculate_fade_factors(double *fade_factors[2], int frame_len)
static cqueue *cqueue_create(int size)
static void cqueue_free(cqueue *q)
static int cqueue_size(cqueue *q)
static int cqueue_empty(cqueue *q)
static int cqueue_enqueue(cqueue *q, double element)
static double cqueue_peek(cqueue *q, int index)
static int cqueue_dequeue(cqueue *q, double *element)
static int cqueue_pop(cqueue *q)
static void init_gaussian_filter(DynamicAudioNormalizerContext *s)
static av_cold void uninit(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static inline double fade(double prev, double next, int pos,
double *fade_factors[2])
static inline double pow2(const double value)
static inline double bound(const double threshold, const double val)
static double find_peak_magnitude(AVFrame *frame, int channel)
static double compute_frame_rms(AVFrame *frame, int channel)
static double get_max_local_gain(DynamicAudioNormalizerContext *s, AVFrame *frame,
int channel)
static double minimum_filter(cqueue *q)
static double gaussian_filter(DynamicAudioNormalizerContext *s, cqueue *q)
static void update_gain_history(DynamicAudioNormalizerContext *s, int channel,
double current_gain_factor)
static inline double update_value(double new, double old, double aggressiveness)
static void perform_dc_correction(DynamicAudioNormalizerContext *s, AVFrame *frame)
static double setup_compress_thresh(double threshold)
static double compute_frame_std_dev(DynamicAudioNormalizerContext *s,
AVFrame *frame, int channel)
static void perform_compression(DynamicAudioNormalizerContext *s, AVFrame *frame)
static void analyze_frame(DynamicAudioNormalizerContext *s, AVFrame *frame)
static void amplify_frame(DynamicAudioNormalizerContext *s, AVFrame *frame)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int flush_buffer(DynamicAudioNormalizerContext *s, AVFilterLink *inlink,
AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad avfilter_af_dynaudnorm_inputs[] = ;
static const AVFilterPad avfilter_af_dynaudnorm_outputs[] = ;
AVFilter ff_af_dynaudnorm = ;
