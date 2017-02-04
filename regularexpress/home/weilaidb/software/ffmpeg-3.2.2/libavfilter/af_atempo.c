typedef struct  AudioFragment;
typedef enum  FilterState;
typedef struct  ATempoContext;
OFFSET offsetof(ATempoContext, x)
static const AVOption atempo_options[] = ;
AVFILTER_DEFINE_CLASS(atempo);
*yae_curr_frag
*yae_prev_frag
yae_clear
yae_release_buffers
RE_MALLOC_OR_FAIL                    \
do  while (0)
yae_reset
yae_set_tempo
yae_init_xdat                          \
do  while (0)
yae_downmix
yae_load_data
yae_load_frag
yae_advance_to_next_frag
yae_xcorr_via_rdft
yae_align
yae_adjust_position
yae_blend                                          \
do  while (0)
yae_overlap_add
yae_apply
yae_flush
init
uninit
query_formats
config_props
push_samples
filter_frame
request_frame
process_command
static const AVFilterPad atempo_inputs[] = ;
static const AVFilterPad atempo_outputs[] = ;
AVFilter ff_af_atempo = ;
