typedef struct  FliteContext;
OFFSET offsetof(FliteContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption flite_options[] = ,
, CHAR_MIN, CHAR_MAX, FLAGS },
};
AVFILTER_DEFINE_CLASS(flite);
static volatile int flite_inited = 0;
DECLARE_REGISTER_VOICE_FN \
cst_voice *register_cmu_us_## name(const char *); \
void     unregister_cmu_us_## name(cst_voice *);
DECLARE_REGISTER_VOICE_FN(awb);
DECLARE_REGISTER_VOICE_FN(kal);
DECLARE_REGISTER_VOICE_FN(kal16);
DECLARE_REGISTER_VOICE_FN(rms);
DECLARE_REGISTER_VOICE_FN(slt);
struct voice_entry  voice_entry;
MAKE_VOICE_STRUCTURE
static struct voice_entry voice_entries[] = ;
list_voices
select_voice
init
uninit
query_formats
config_props
request_frame
static const AVFilterPad flite_outputs[] = ;
AVFilter ff_asrc_flite = ;
