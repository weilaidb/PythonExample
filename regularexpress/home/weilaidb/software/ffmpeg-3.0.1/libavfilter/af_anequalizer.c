#define FILTER_ORDER 4
enum FilterType ;
typedef struct FoSection  FoSection;
typedef struct EqualizatorFilter  EqualizatorFilter;
typedef struct AudioNEqualizerContext  AudioNEqualizerContext;
#define OFFSET(x) offsetof(AudioNEqualizerContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_VIDEO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption anequalizer_options[] = ;
AVFILTER_DEFINE_CLASS(anequalizer);
static void draw_curves(AVFilterContext *ctx, AVFilterLink *inlink, AVFrame *out)
static int config_video(AVFilterLink *outlink)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static void butterworth_fo_section(FoSection *S, double beta,
double si, double g, double g0,
double D, double c0)
static void butterworth_bp_filter(EqualizatorFilter *f,
int N, double w0, double wb,
double G, double Gb, double G0)
static void chebyshev1_fo_section(FoSection *S, double a,
double c, double tetta_b,
double g0, double si, double b,
double D, double c0)
static void chebyshev1_bp_filter(EqualizatorFilter *f,
int N, double w0, double wb,
double G, double Gb, double G0)
static void chebyshev2_fo_section(FoSection *S, double a,
double c, double tetta_b,
double g, double si, double b,
double D, double c0)
static void chebyshev2_bp_filter(EqualizatorFilter *f,
int N, double w0, double wb,
double G, double Gb, double G0)
static double butterworth_compute_bw_gain_db(double gain)
static double chebyshev1_compute_bw_gain_db(double gain)
static double chebyshev2_compute_bw_gain_db(double gain)
static inline double hz_2_rad(double x, double fs)
static void equalizer(EqualizatorFilter *f, double sample_rate)
static int add_filter(AudioNEqualizerContext *s, AVFilterLink *inlink)
static int config_input(AVFilterLink *inlink)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static inline double section_process(FoSection *S, double in)
static double process_sample(FoSection *s1, double in)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static const AVFilterPad inputs[] = ;
AVFilter ff_af_anequalizer = ;
