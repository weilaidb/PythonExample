#define RDFT_BITS_MIN 4
#define RDFT_BITS_MAX 16
enum WindowFunc ;
enum Scale ;
#define NB_GAIN_ENTRY_MAX 4096
typedef struct  GainEntry;
typedef struct  OverlapIndex;
typedef struct  FIREqualizerContext;
OFFSET offsetof(FIREqualizerContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption firequalizer_options[] = ,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
};
AVFILTER_DEFINE_CLASS(firequalizer);
common_uninit
uninit
query_formats
fast_convolute
dump_fir
entry_func
gain_entry_compare
gain_interpolate_func
cubic_interpolate_func
static const char *const var_names[] = ;
enum VarOffset ;
generate_kernel
SELECT_GAIN (s->gain_cmd ? s->gain_cmd : s->gain)
SELECT_GAIN_ENTRY (s->gain_entry_cmd ? s->gain_entry_cmd : s->gain_entry)
config_input
filter_frame
request_frame
process_command
static const AVFilterPad firequalizer_inputs[] = ;
static const AVFilterPad firequalizer_outputs[] = ;
AVFilter ff_af_firequalizer = ;
