#define RDFT_BITS_MIN 4
#define RDFT_BITS_MAX 16
enum WindowFunc ;
enum Scale ;
#define NB_GAIN_ENTRY_MAX 4096
typedef struct  GainEntry;
typedef struct  OverlapIndex;
typedef struct  FIREqualizerContext;
#define OFFSET(x) offsetof(FIREqualizerContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption firequalizer_options[] = ;
AVFILTER_DEFINE_CLASS(firequalizer);
static void common_uninit(FIREqualizerContext *s)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static void fast_convolute(FIREqualizerContext *s, const float *kernel_buf, float *conv_buf,
OverlapIndex *idx, float *data, int nsamples)
static void dump_fir(AVFilterContext *ctx, FILE *fp, int ch)
static double entry_func(void *p, double freq, double gain)
static int gain_entry_compare(const void *key, const void *memb)
static double gain_interpolate_func(void *p, double freq)
static double cubic_interpolate_func(void *p, double freq)
static const char *const var_names[] = ;
enum VarOffset ;
static int generate_kernel(AVFilterContext *ctx, const char *gain, const char *gain_entry)
#define SELECT_GAIN(s) (s->gain_cmd ? s->gain_cmd : s->gain)
#define SELECT_GAIN_ENTRY(s) (s->gain_entry_cmd ? s->gain_entry_cmd : s->gain_entry)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static const AVFilterPad firequalizer_inputs[] = ;
static const AVFilterPad firequalizer_outputs[] = ;
AVFilter ff_af_firequalizer = ;
