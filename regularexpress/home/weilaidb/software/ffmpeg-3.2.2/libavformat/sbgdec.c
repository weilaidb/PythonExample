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
static void *alloc_array_elem(void **array, size_t elsize,
int *size, int *max_size)
static int str_to_time(const char *str, int64_t *rtime)
static inline int is_space(char c)
static inline int scale_double(void *log, double d, double m, int *r)
static int lex_space(struct sbg_parser *p)
static int lex_char(struct sbg_parser *p, char c)
static int lex_double(struct sbg_parser *p, double *r)
static int lex_fixed(struct sbg_parser *p, const char *t, int l)
static int lex_line_end(struct sbg_parser *p)
static int lex_wsword(struct sbg_parser *p, struct sbg_string *rs)
static int lex_name(struct sbg_parser *p, struct sbg_string *rs)
static int lex_time(struct sbg_parser *p, int64_t *rt)
#define FORWARD_ERROR(c) \
do  while (0)
static int parse_immediate(struct sbg_parser *p)
static int parse_preprogrammed(struct sbg_parser *p)
static int parse_optarg(struct sbg_parser *p, char o, struct sbg_string *r)
static int parse_options(struct sbg_parser *p)
static int parse_timestamp(struct sbg_parser *p,
struct sbg_timestamp *rts, int64_t *rrel)
static int parse_fade(struct sbg_parser *p, struct sbg_fade *fr)
static int parse_time_sequence(struct sbg_parser *p, int inblock)
static int parse_wave_def(struct sbg_parser *p, int wavenum)
static int parse_block_def(struct sbg_parser *p,
struct sbg_script_definition *def)
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
static int parse_volume(struct sbg_parser *p, int *vol)
static int parse_synth_channel_sine(struct sbg_parser *p,
struct sbg_script_synth *synth)
static int parse_synth_channel_pink(struct sbg_parser *p,
struct sbg_script_synth *synth)
static int parse_synth_channel_bell(struct sbg_parser *p,
struct sbg_script_synth *synth)
static int parse_synth_channel_mix(struct sbg_parser *p,
struct sbg_script_synth *synth)
static int parse_synth_channel_spin(struct sbg_parser *p,
struct sbg_script_synth *synth)
static int parse_synth_channel(struct sbg_parser *p)
static int parse_synth_def(struct sbg_parser *p,
struct sbg_script_definition *def)
static int parse_named_def(struct sbg_parser *p)
{
char *cursor_save = p->cursor;
struct sbg_string name;
struct sbg_script_definition *def;
if (!lex_name(p, &name) || !lex_char(p, ':') || !lex_space(p))
if (name.e - name.s == 6 && !memcmp(name.s, "wave", 4) &&
name.s[4] >= '0' && name.s[4] <= '9' &&
name.s[5] >= '0' && name.s[5] <= '9')
def = alloc_array_elem((void **)&p->scs.def, sizeof(*def),
&p->scs.nb_def, &p->nb_def_max);
if (!def)
return AVERROR(ENOMEM);
def->name     = name.s;
def->name_len = name.e - name.s;
if (lex_char(p, '
static void free_script(struct sbg_script *s)
static int parse_script(void *log, char *script, int script_len,
struct sbg_script *rscript)
static int read_whole_file(AVIOContext *io, int max_size, char **rbuf)
static void expand_timestamps(void *log, struct sbg_script *s)
static int expand_tseq(void *log, struct sbg_script *s, int *nb_ev_max,
int64_t t0, struct sbg_script_tseq *tseq)
static int expand_script(void *log, struct sbg_script *s)
static int add_interval(struct ws_intervals *inter,
enum ws_interval_type type, uint32_t channels, int ref,
int64_t ts1, int32_t f1, int32_t a1,
int64_t ts2, int32_t f2, int32_t a2)
static int add_bell(struct ws_intervals *inter, struct sbg_script *s,
int64_t ts1, int64_t ts2, int32_t f, int32_t a)
static int generate_interval(void *log, struct sbg_script *s,
struct ws_intervals *inter,
int64_t ts1, int64_t ts2,
struct sbg_script_synth *s1,
struct sbg_script_synth *s2,
int transition)
static int generate_plateau(void *log, struct sbg_script *s,
struct ws_intervals *inter,
struct sbg_script_event *ev1)
static int generate_transition(void *log, struct sbg_script *s,
struct ws_intervals *inter,
struct sbg_script_event *ev1,
struct sbg_script_event *ev2)
static int generate_intervals(void *log, struct sbg_script *s, int sample_rate,
struct ws_intervals *inter)
static int encode_intervals(struct sbg_script *s, AVCodecParameters *par,
struct ws_intervals *inter)
static av_cold int sbg_read_probe(AVProbeData *p)
static av_cold int sbg_read_header(AVFormatContext *avf)
static int sbg_read_packet(AVFormatContext *avf, AVPacket *packet)
static int sbg_read_seek2(AVFormatContext *avf, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int sbg_read_seek(AVFormatContext *avf, int stream_index,
int64_t ts, int flags)
static const AVOption sbg_options[] = ;
static const AVClass sbg_demuxer_class = ;
AVInputFormat ff_sbg_demuxer = ;
