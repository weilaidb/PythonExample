typedef struct  AudioFragment;
typedef enum  FilterState;
typedef struct  ATempoContext;
#define OFFSET(x) offsetof(ATempoContext, x)
static const AVOption atempo_options[] = ;
AVFILTER_DEFINE_CLASS(atempo);
inline static AudioFragment *yae_curr_frag(ATempoContext *atempo)
inline static AudioFragment *yae_prev_frag(ATempoContext *atempo)
static void yae_clear(ATempoContext *atempo)
static void yae_release_buffers(ATempoContext *atempo)
#define RE_MALLOC_OR_FAIL(field, field_size)                    \
do  while (0)
static int yae_reset(ATempoContext *atempo,
enum AVSampleFormat format,
int sample_rate,
int channels)
static int yae_set_tempo(AVFilterContext *ctx, const char *arg_tempo)
#define yae_init_xdat(scalar_type, scalar_max)                          \
do  while (0)
static void yae_downmix(ATempoContext *atempo, AudioFragment *frag)
static int yae_load_data(ATempoContext *atempo,
const uint8_t **src_ref,
const uint8_t *src_end,
int64_t stop_here)
static int yae_load_frag(ATempoContext *atempo,
const uint8_t **src_ref,
const uint8_t *src_end)
static void yae_advance_to_next_frag(ATempoContext *atempo)
static void yae_xcorr_via_rdft(FFTSample *xcorr,
RDFTContext *complex_to_real,
const FFTComplex *xa,
const FFTComplex *xb,
const int window)
static int yae_align(AudioFragment *frag,
const AudioFragment *prev,
const int window,
const int delta_max,
const int drift,
FFTSample *correlation,
RDFTContext *complex_to_real)
static int yae_adjust_position(ATempoContext *atempo)
#define yae_blend(scalar_type)                                          \
do  while (0)
static int yae_overlap_add(ATempoContext *atempo,
uint8_t **dst_ref,
uint8_t *dst_end)
static void
yae_apply(ATempoContext *atempo,
const uint8_t **src_ref,
const uint8_t *src_end,
uint8_t **dst_ref,
uint8_t *dst_end)
static int yae_flush(ATempoContext *atempo,
uint8_t **dst_ref,
uint8_t *dst_end)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *inlink)
static int push_samples(ATempoContext *atempo,
AVFilterLink *outlink,
int n_out)
static int filter_frame(AVFilterLink *inlink, AVFrame *src_buffer)
static int request_frame(AVFilterLink *outlink)
static int process_command(AVFilterContext *ctx,
const char *cmd,
const char *arg,
char *res,
int res_len,
int flags)
static const AVFilterPad atempo_inputs[] = ;
static const AVFilterPad atempo_outputs[] = ;
AVFilter ff_af_atempo = ;
