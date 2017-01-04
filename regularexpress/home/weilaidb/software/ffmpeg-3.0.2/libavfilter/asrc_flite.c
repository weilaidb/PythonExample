typedef struct  FliteContext;
#define OFFSET(x) offsetof(FliteContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption flite_options[] = ;
AVFILTER_DEFINE_CLASS(flite);
static volatile int flite_inited = 0;
#define DECLARE_REGISTER_VOICE_FN(name) \
cst_voice *register_cmu_us_## name(const char *); \
void     unregister_cmu_us_## name(cst_voice *);
DECLARE_REGISTER_VOICE_FN(awb);
DECLARE_REGISTER_VOICE_FN(kal);
DECLARE_REGISTER_VOICE_FN(kal16);
DECLARE_REGISTER_VOICE_FN(rms);
DECLARE_REGISTER_VOICE_FN(slt);
struct voice_entry  voice_entry;
#define MAKE_VOICE_STRUCTURE(voice_name)
static struct voice_entry voice_entries[] = ;
static void list_voices(void *log_ctx, const char *sep)
static int select_voice(struct voice_entry **entry_ret, const char *voice_name, void *log_ctx)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad flite_outputs[] = ;
AVFilter ff_asrc_flite = ;
