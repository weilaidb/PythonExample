#define SBG_SCALE (1 << 16)
#define DAY (24 * 60 * 60)
#define DAY_TS ((int64_t)DAY * AV_TIME_BASE)
struct sbg_demuxer ;
struct sbg_string ;
enum sbg_fade_type ;
struct sbg_fade ;
enum sbg_synth_type ;
struct sbg_timestamp ;
struct sbg_script_definition ;
struct sbg_script_synth ;
struct sbg_script_tseq ;
struct sbg_script_event ;
struct sbg_script ;
struct sbg_parser ;
enum ws_interval_type ;
struct ws_interval ;
struct ws_intervals ;
*alloc_array_elem
str_to_time
is_space
scale_double
lex_space
lex_char
lex_double
lex_fixed
lex_line_end
lex_wsword
lex_name
lex_time
FORWARD_ERROR \
do  while (0)
parse_immediate
parse_preprogrammed
parse_optarg
parse_options
parse_timestamp
parse_fade
parse_time_sequence
parse_wave_def
parse_block_def
'))
return AVERROR_INVALIDDATA;
lex_space(p);
if (!lex_line_end(p))
return AVERROR_INVALIDDATA;
def->type        = 'B';
def->elements    = tseq;
def->nb_elements = p->nb_block_tseq - tseq;
if (!def->nb_elements)
return AVERROR_INVALIDDATA;
return 1;
}
parse_volume
parse_synth_channel_sine
parse_synth_channel_pink
parse_synth_channel_bell
parse_synth_channel_mix
parse_synth_channel_spin
parse_synth_channel
parse_synth_def
parse_named_def
{
char *cursor_save = p->cursor;
struct sbg_string name;
struct sbg_script_definition *def;
if (!lex_name(p, &name) || !lex_char(p, ':') || !lex_space(p))
if (name.e - name.s == 6 && !memcmp(name.s, , 4) &&
name.s[4] >= '0' && name.s[4] <= '9' &&
name.s[5] >= '0' && name.s[5] <= '9')
def = alloc_array_elem((void **)&p->scs.def, sizeof(*def),
&p->scs.nb_def, &p->nb_def_max);
if (!def)
AVERROR;
def->name     = name.s;
def->name_len = name.e - name.s;
if (lex_char(p, '
free_script
parse_script
read_whole_file
expand_timestamps
expand_tseq
expand_script
add_interval
add_bell
generate_interval
generate_plateau
generate_transition
generate_intervals
encode_intervals
sbg_read_probe
sbg_read_header
sbg_read_packet
sbg_read_seek2
sbg_read_seek
static const AVOption sbg_options[] = ;
static const AVClass sbg_demuxer_class = ;
AVInputFormat ff_sbg_demuxer = ;
