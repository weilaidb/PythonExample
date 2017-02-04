#define TIME_DOMAIN      0
#define FREQUENCY_DOMAIN 1
typedef struct NCSofa  NCSofa;
typedef struct VirtualSpeaker  VirtualSpeaker;
typedef struct SOFAlizerContext  SOFAlizerContext;
close_sofa
load_sofa
parse_channel_name
parse_speaker_pos
get_speaker_pos
max_delay
find_m
compensate_volume
typedef struct ThreadData  ThreadData;
sofalizer_convolute
sofalizer_fast_convolute
filter_frame
query_formats
load_data
init
config_input
uninit
OFFSET offsetof(SOFAlizerContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption sofalizer_options[] = ;
AVFILTER_DEFINE_CLASS(sofalizer);
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_af_sofalizer = ;
