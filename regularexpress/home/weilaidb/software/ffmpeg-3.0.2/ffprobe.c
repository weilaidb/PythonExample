const char program_name[] = "ffprobe";
const int program_birth_year = 2007;
static int do_bitexact = 0;
static int do_count_frames = 0;
static int do_count_packets = 0;
static int do_read_frames  = 0;
static int do_read_packets = 0;
static int do_show_chapters = 0;
static int do_show_error   = 0;
static int do_show_format  = 0;
static int do_show_frames  = 0;
static int do_show_packets = 0;
static int do_show_programs = 0;
static int do_show_streams = 0;
static int do_show_stream_disposition = 0;
static int do_show_data    = 0;
static int do_show_program_version  = 0;
static int do_show_library_versions = 0;
static int do_show_pixel_formats = 0;
static int do_show_pixel_format_flags = 0;
static int do_show_pixel_format_components = 0;
static int do_show_chapter_tags = 0;
static int do_show_format_tags = 0;
static int do_show_frame_tags = 0;
static int do_show_program_tags = 0;
static int do_show_stream_tags = 0;
static int do_show_packet_tags = 0;
static int show_value_unit              = 0;
static int use_value_prefix             = 0;
static int use_byte_value_binary_prefix = 0;
static int use_value_sexagesimal_format = 0;
static int show_private_data            = 1;
static char *print_format;
static char *stream_specifier;
static char *show_data_hash;
typedef struct ReadInterval  ReadInterval;
static ReadInterval *read_intervals;
static int read_intervals_nb = 0;
#define SECTION_MAX_NB_CHILDREN 10
struct section ;
typedef enum  SectionID;
static struct section sections[] = ;
static const OptionDef *options;
static const char *input_filename;
static AVInputFormat *iformat = NULL;
static struct AVHashContext *hash;
static const struct  si_prefixes[] = ;
static const char unit_second_str[]         = "s"    ;
static const char unit_hertz_str[]          = "Hz"   ;
static const char unit_byte_str[]           = "byte" ;
static const char unit_bit_per_second_str[] = "bit/s";
static int nb_streams;
static uint64_t *nb_streams_packets;
static uint64_t *nb_streams_frames;
static int *selected_streams;
static void ffprobe_cleanup(int ret)
struct unit_value ;
static char *value_string(char *buf, int buf_size, struct unit_value uv)
typedef struct WriterContext WriterContext;
#define WRITER_FLAG_DISPLAY_OPTIONAL_FIELDS 1
#define WRITER_FLAG_PUT_PACKETS_AND_FRAMES_IN_SAME_CHAPTER 2
typedef enum  StringValidation;
typedef struct Writer  Writer;
#define SECTION_MAX_NB_LEVELS 10
struct WriterContext ;
static const char *writer_get_name(void *p)
#define OFFSET(x) offsetof(WriterContext, x)
static const AVOption writer_options[] = ;
static void *writer_child_next(void *obj, void *prev)
static const AVClass writer_class = ;
static void writer_close(WriterContext **wctx)
static void bprint_bytes(AVBPrint *bp, const uint8_t *ubuf, size_t ubuf_size)
static int writer_open(WriterContext **wctx, const Writer *writer, const char *args,
const struct section *sections, int nb_sections)
static inline void writer_print_section_header(WriterContext *wctx,
int section_id)
static inline void writer_print_section_footer(WriterContext *wctx)
static inline void writer_print_integer(WriterContext *wctx,
const char *key, long long int val)
static inline int validate_string(WriterContext *wctx, char **dstp, const char *src)
#define PRINT_STRING_OPT      1
#define PRINT_STRING_VALIDATE 2
static inline int writer_print_string(WriterContext *wctx,
const char *key, const char *val, int flags)
static inline void writer_print_rational(WriterContext *wctx,
const char *key, AVRational q, char sep)
static void writer_print_time(WriterContext *wctx, const char *key,
int64_t ts, const AVRational *time_base, int is_duration)
static void writer_print_ts(WriterContext *wctx, const char *key, int64_t ts, int is_duration)
static void writer_print_data(WriterContext *wctx, const char *name,
uint8_t *data, int size)
static void writer_print_data_hash(WriterContext *wctx, const char *name,
uint8_t *data, int size)
static void writer_print_integers(WriterContext *wctx, const char *name,
uint8_t *data, int size, const char *format,
int columns, int bytes, int offset_add)
#define MAX_REGISTERED_WRITERS_NB 64
static const Writer *registered_writers[MAX_REGISTERED_WRITERS_NB + 1];
static int writer_register(const Writer *writer)
static const Writer *writer_get_by_name(const char *name)
#define DEFINE_WRITER_CLASS(name)                   \
static const char *name##_get_name(void *ctx)       \
\
static const AVClass name##_class =
typedef struct DefaultContext  DefaultContext;
#undef OFFSET
#define OFFSET(x) offsetof(DefaultContext, x)
static const AVOption default_options[] = ;
DEFINE_WRITER_CLASS(default);
static inline char *upcase_string(char *dst, size_t dst_size, const char *src)
static void default_print_section_header(WriterContext *wctx)
static void default_print_section_footer(WriterContext *wctx)
static void default_print_str(WriterContext *wctx, const char *key, const char *value)
static void default_print_int(WriterContext *wctx, const char *key, long long int value)
static const Writer default_writer = ;
static const char *c_escape_str(AVBPrint *dst, const char *src, const char sep, void *log_ctx)
static const char *csv_escape_str(AVBPrint *dst, const char *src, const char sep, void *log_ctx)
static const char *none_escape_str(AVBPrint *dst, const char *src, const char sep, void *log_ctx)
typedef struct CompactContext  CompactContext;
#undef OFFSET
#define OFFSET(x) offsetof(CompactContext, x)
static const AVOption compact_options[]= ;
DEFINE_WRITER_CLASS(compact);
static av_cold int compact_init(WriterContext *wctx)
static void compact_print_section_header(WriterContext *wctx)
static void compact_print_section_footer(WriterContext *wctx)
static void compact_print_str(WriterContext *wctx, const char *key, const char *value)
static void compact_print_int(WriterContext *wctx, const char *key, long long int value)
static const Writer compact_writer = ;
#undef OFFSET
#define OFFSET(x) offsetof(CompactContext, x)
static const AVOption csv_options[] = ;
DEFINE_WRITER_CLASS(csv);
static const Writer csv_writer = ;
typedef struct FlatContext  FlatContext;
#undef OFFSET
#define OFFSET(x) offsetof(FlatContext, x)
static const AVOption flat_options[]= ;
DEFINE_WRITER_CLASS(flat);
static av_cold int flat_init(WriterContext *wctx)
static const char *flat_escape_key_str(AVBPrint *dst, const char *src, const char sep)
static const char *flat_escape_value_str(AVBPrint *dst, const char *src)
static void flat_print_section_header(WriterContext *wctx)
static void flat_print_int(WriterContext *wctx, const char *key, long long int value)
static void flat_print_str(WriterContext *wctx, const char *key, const char *value)
static const Writer flat_writer = ;
typedef struct INIContext  INIContext;
#undef OFFSET
#define OFFSET(x) offsetof(INIContext, x)
static const AVOption ini_options[] = ;
DEFINE_WRITER_CLASS(ini);
static char *ini_escape_str(AVBPrint *dst, const char *src)
static void ini_print_section_header(WriterContext *wctx)
static void ini_print_str(WriterContext *wctx, const char *key, const char *value)
static void ini_print_int(WriterContext *wctx, const char *key, long long int value)
static const Writer ini_writer = ;
typedef struct JSONContext  JSONContext;
#undef OFFSET
#define OFFSET(x) offsetof(JSONContext, x)
static const AVOption json_options[]= ;
DEFINE_WRITER_CLASS(json);
static av_cold int json_init(WriterContext *wctx)
static const char *json_escape_str(AVBPrint *dst, const char *src, void *log_ctx)
#define JSON_INDENT() printf("%*c", json->indent_level * 4, ' ')
static void json_print_section_header(WriterContext *wctx)
{
JSONContext *json = wctx->priv;
AVBPrint buf;
const struct section *section = wctx->section[wctx->level];
const struct section *parent_section = wctx->level ?
wctx->section[wctx->level-1] : NULL;
if (wctx->level && wctx->nb_item[wctx->level-1])
printf(",\n");
if (section->flags & SECTION_FLAG_IS_WRAPPER)
static inline void json_print_item_str(WriterContext *wctx,
const char *key, const char *value)
static void json_print_str(WriterContext *wctx, const char *key, const char *value)
static void json_print_int(WriterContext *wctx, const char *key, long long int value)
static const Writer json_writer = ;
typedef struct XMLContext  XMLContext;
#undef OFFSET
#define OFFSET(x) offsetof(XMLContext, x)
static const AVOption xml_options[] = ;
DEFINE_WRITER_CLASS(xml);
static av_cold int xml_init(WriterContext *wctx)
static const char *xml_escape_str(AVBPrint *dst, const char *src, void *log_ctx)
#define XML_INDENT() printf("%*c", xml->indent_level * 4, ' ')
static void xml_print_section_header(WriterContext *wctx)
static void xml_print_section_footer(WriterContext *wctx)
static void xml_print_str(WriterContext *wctx, const char *key, const char *value)
static void xml_print_int(WriterContext *wctx, const char *key, long long int value)
static Writer xml_writer = ;
static void writer_register_all(void)
#define print_fmt(k, f, ...) do  while (0)
#define print_int(k, v)         writer_print_integer(w, k, v)
#define print_q(k, v, s)        writer_print_rational(w, k, v, s)
#define print_str(k, v)         writer_print_string(w, k, v, 0)
#define print_str_opt(k, v)     writer_print_string(w, k, v, PRINT_STRING_OPT)
#define print_str_validate(k, v) writer_print_string(w, k, v, PRINT_STRING_VALIDATE)
#define print_time(k, v, tb)    writer_print_time(w, k, v, tb, 0)
#define print_ts(k, v)          writer_print_ts(w, k, v, 0)
#define print_duration_time(k, v, tb) writer_print_time(w, k, v, tb, 1)
#define print_duration_ts(k, v)       writer_print_ts(w, k, v, 1)
#define print_val(k, v, u) do  while (0)
#define print_section_header(s) writer_print_section_header(w, s)
#define print_section_footer(s) writer_print_section_footer(w, s)
#define REALLOCZ_ARRAY_STREAM(ptr, cur_n, new_n)                        \
static inline int show_tags(WriterContext *w, AVDictionary *tags, int section_id)
static void show_packet(WriterContext *w, AVFormatContext *fmt_ctx, AVPacket *pkt, int packet_idx)
static void show_subtitle(WriterContext *w, AVSubtitle *sub, AVStream *stream,
AVFormatContext *fmt_ctx)
static void show_frame(WriterContext *w, AVFrame *frame, AVStream *stream,
AVFormatContext *fmt_ctx)
static av_always_inline int process_frame(WriterContext *w,
AVFormatContext *fmt_ctx,
AVFrame *frame, AVPacket *pkt)
static void log_read_interval(const ReadInterval *interval, void *log_ctx, int log_level)
static int read_interval_packets(WriterContext *w, AVFormatContext *fmt_ctx,
const ReadInterval *interval, int64_t *cur_ts)
static int read_packets(WriterContext *w, AVFormatContext *fmt_ctx)
static int show_stream(WriterContext *w, AVFormatContext *fmt_ctx, int stream_idx, int in_program)
static int show_streams(WriterContext *w, AVFormatContext *fmt_ctx)
static int show_program(WriterContext *w, AVFormatContext *fmt_ctx, AVProgram *program)
static int show_programs(WriterContext *w, AVFormatContext *fmt_ctx)
static int show_chapters(WriterContext *w, AVFormatContext *fmt_ctx)
static int show_format(WriterContext *w, AVFormatContext *fmt_ctx)
static void show_error(WriterContext *w, int err)
static int open_input_file(AVFormatContext **fmt_ctx_ptr, const char *filename)
static void close_input_file(AVFormatContext **ctx_ptr)
static int probe_file(WriterContext *wctx, const char *filename)
static void show_usage(void)
static void ffprobe_show_program_version(WriterContext *w)
#define SHOW_LIB_VERSION(libname, LIBNAME)                              \
do  while (0)
static void ffprobe_show_library_versions(WriterContext *w)
#define PRINT_PIX_FMT_FLAG(flagname, name)                                \
do  while (0)
static void ffprobe_show_pixel_formats(WriterContext *w)
static int opt_format(void *optctx, const char *opt, const char *arg)
static inline void mark_section_show_entries(SectionID section_id,
int show_all_entries, AVDictionary *entries)
static int match_section(const char *section_name,
int show_all_entries, AVDictionary *entries)
static int opt_show_entries(void *optctx, const char *opt, const char *arg)
static int opt_show_format_entry(void *optctx, const char *opt, const char *arg)
static void opt_input_file(void *optctx, const char *arg)
static int opt_input_file_i(void *optctx, const char *opt, const char *arg)
void show_help_default(const char *opt, const char *arg)
static int parse_read_interval(const char *interval_spec,
ReadInterval *interval)
static int parse_read_intervals(const char *intervals_spec)
static int opt_read_intervals(void *optctx, const char *opt, const char *arg)
static int opt_pretty(void *optctx, const char *opt, const char *arg)
static void print_section(SectionID id, int level)
static int opt_sections(void *optctx, const char *opt, const char *arg)
static int opt_show_versions(const char *opt, const char *arg)
#define DEFINE_OPT_SHOW_SECTION(section, target_section_id)             \
static int opt_show_##section(const char *opt, const char *arg)     \
DEFINE_OPT_SHOW_SECTION(chapters,         CHAPTERS)
DEFINE_OPT_SHOW_SECTION(error,            ERROR)
DEFINE_OPT_SHOW_SECTION(format,           FORMAT)
DEFINE_OPT_SHOW_SECTION(frames,           FRAMES)
DEFINE_OPT_SHOW_SECTION(library_versions, LIBRARY_VERSIONS)
DEFINE_OPT_SHOW_SECTION(packets,          PACKETS)
DEFINE_OPT_SHOW_SECTION(pixel_formats,    PIXEL_FORMATS)
DEFINE_OPT_SHOW_SECTION(program_version,  PROGRAM_VERSION)
DEFINE_OPT_SHOW_SECTION(streams,          STREAMS)
DEFINE_OPT_SHOW_SECTION(programs,         PROGRAMS)
static const OptionDef real_options[] = ;
static inline int check_section_show_entries(int section_id)
#define SET_DO_SHOW(id, varname) do  while (0)
int main(int argc, char **argv)
