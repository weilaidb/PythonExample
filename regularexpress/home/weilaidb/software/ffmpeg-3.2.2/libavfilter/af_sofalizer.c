#define TIME_DOMAIN      0
#define FREQUENCY_DOMAIN 1
typedef struct NCSofa  NCSofa;
typedef struct VirtualSpeaker  VirtualSpeaker;
typedef struct SOFAlizerContext  SOFAlizerContext;
static int close_sofa(struct NCSofa *sofa)
static int load_sofa(AVFilterContext *ctx, char *filename, int *samplingrate)
static int parse_channel_name(char **arg, int *rchannel)
static void parse_speaker_pos(AVFilterContext *ctx, int64_t in_channel_layout)
static int get_speaker_pos(AVFilterContext *ctx,
float *speaker_azim, float *speaker_elev)
static int max_delay(struct NCSofa *sofa)
static int find_m(SOFAlizerContext *s, int azim, int elev, float radius)
static int compensate_volume(AVFilterContext *ctx)
typedef struct ThreadData  ThreadData;
static int sofalizer_convolute(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int sofalizer_fast_convolute(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int query_formats(AVFilterContext *ctx)
static int load_data(AVFilterContext *ctx, int azim, int elev, float radius)
static av_cold int init(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static av_cold void uninit(AVFilterContext *ctx)
#define OFFSET(x) offsetof(SOFAlizerContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption sofalizer_options[] = ;
AVFILTER_DEFINE_CLASS(sofalizer);
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_af_sofalizer = ;
