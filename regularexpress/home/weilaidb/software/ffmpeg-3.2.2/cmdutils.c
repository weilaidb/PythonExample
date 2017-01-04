#if CONFIG_NETWORK
#if HAVE_SYS_RESOURCE_H
static int init_report(const char *env);
AVDictionary *sws_dict;
AVDictionary *swr_opts;
AVDictionary *format_opts, *codec_opts, *resample_opts;
static FILE *report_file;
static int report_file_level = AV_LOG_DEBUG;
int hide_banner = 0;
void init_opts(void)
void uninit_opts(void)
void log_callback_help(void *ptr, int level, const char *fmt, va_list vl)
static void log_callback_report(void *ptr, int level, const char *fmt, va_list vl)
void init_dynload(void)
static void (*program_exit)(int ret);
void register_exit(void (*cb)(int ret))
void exit_program(int ret)
double parse_number_or_die(const char *context, const char *numstr, int type,
double min, double max)
int64_t parse_time_or_die(const char *context, const char *timestr,
int is_duration)
void show_help_options(const OptionDef *options, const char *msg, int req_flags,
int rej_flags, int alt_flags)
void show_help_children(const AVClass *class, int flags)
static const OptionDef *find_option(const OptionDef *po, const char *name)
#if HAVE_COMMANDLINETOARGVW && defined(_WIN32)
static char** win32_argv_utf8 = NULL;
static int win32_argc = 0;
static void prepare_app_arguments(int *argc_ptr, char ***argv_ptr)
static inline void prepare_app_arguments(int *argc_ptr, char ***argv_ptr)
static int write_option(void *optctx, const OptionDef *po, const char *opt,
const char *arg)
int parse_option(void *optctx, const char *opt, const char *arg,
const OptionDef *options)
void parse_options(void *optctx, int argc, char **argv, const OptionDef *options,
void (*parse_arg_function)(void *, const char*))
int parse_optgroup(void *optctx, OptionGroup *g)
int locate_option(int argc, char **argv, const OptionDef *options,
const char *optname)
static void dump_argument(const char *a)
static void check_options(const OptionDef *po)
void parse_loglevel(int argc, char **argv, const OptionDef *options)
static const AVOption *opt_find(void *obj, const char *name, const char *unit,
int opt_flags, int search_flags)
#define FLAGS (o->type == AV_OPT_TYPE_FLAGS && (arg[0]=='-' || arg[0]=='+')) ? AV_DICT_APPEND : 0
int opt_default(void *optctx, const char *opt, const char *arg)
static int match_group_separator(const OptionGroupDef *groups, int nb_groups,
const char *opt)
static void finish_group(OptionParseContext *octx, int group_idx,
const char *arg)
static void add_opt(OptionParseContext *octx, const OptionDef *opt,
const char *key, const char *val)
static void init_parse_context(OptionParseContext *octx,
const OptionGroupDef *groups, int nb_groups)
void uninit_parse_context(OptionParseContext *octx)
int split_commandline(OptionParseContext *octx, int argc, char *argv[],
const OptionDef *options,
const OptionGroupDef *groups, int nb_groups)
int opt_cpuflags(void *optctx, const char *opt, const char *arg)
int opt_loglevel(void *optctx, const char *opt, const char *arg)
static void expand_filename_template(AVBPrint *bp, const char *template,
struct tm *tm)
static int init_report(const char *env)
int opt_report(const char *opt)
int opt_max_alloc(void *optctx, const char *opt, const char *arg)
int opt_timelimit(void *optctx, const char *opt, const char *arg)
void print_error(const char *filename, int err)
static int warned_cfg = 0;
#define INDENT        1
#define SHOW_VERSION  2
#define SHOW_CONFIG   4
#define SHOW_COPYRIGHT 8
#define PRINT_LIB_INFO(libname, LIBNAME, flags, level)                  \
if (CONFIG_##LIBNAME)                                                                    \
static void print_all_libs_info(int flags, int level)
static void print_program_info(int flags, int level)
static void print_buildconf(int flags, int level)
void show_banner(int argc, char **argv, const OptionDef *options)
int show_version(void *optctx, const char *opt, const char *arg)
int show_buildconf(void *optctx, const char *opt, const char *arg)
int show_license(void *optctx, const char *opt, const char *arg)
static int is_device(const AVClass *avclass)
static int show_formats_devices(void *optctx, const char *opt, const char *arg, int device_only)
int show_formats(void *optctx, const char *opt, const char *arg)
int show_devices(void *optctx, const char *opt, const char *arg)
#define PRINT_CODEC_SUPPORTED(codec, field, type, list_name, term, get_name) \
if (codec->field)                                                                         \
static void print_codec(const AVCodec *c)
static char get_media_type_char(enum AVMediaType type)
static const AVCodec *next_codec_for_id(enum AVCodecID id, const AVCodec *prev,
int encoder)
static int compare_codec_desc(const void *a, const void *b)
static unsigned get_codecs_sorted(const AVCodecDescriptor ***rcodecs)
static void print_codecs_for_id(enum AVCodecID id, int encoder)
int show_codecs(void *optctx, const char *opt, const char *arg)
static void print_codecs(int encoder)
int show_decoders(void *optctx, const char *opt, const char *arg)
int show_encoders(void *optctx, const char *opt, const char *arg)
int show_bsfs(void *optctx, const char *opt, const char *arg)
int show_protocols(void *optctx, const char *opt, const char *arg)
int show_filters(void *optctx, const char *opt, const char *arg)
int show_colors(void *optctx, const char *opt, const char *arg)
int show_pix_fmts(void *optctx, const char *opt, const char *arg)
int show_layouts(void *optctx, const char *opt, const char *arg)
int show_sample_fmts(void *optctx, const char *opt, const char *arg)
static void show_help_codec(const char *name, int encoder)
static void show_help_demuxer(const char *name)
static void show_help_muxer(const char *name)
#if CONFIG_AVFILTER
static void show_help_filter(const char *name)
int show_help(void *optctx, const char *opt, const char *arg)
int read_yesno(void)
FILE *get_preset_file(char *filename, size_t filename_size,
const char *preset_name, int is_path,
const char *codec_name)
int check_stream_specifier(AVFormatContext *s, AVStream *st, const char *spec)
AVDictionary *filter_codec_opts(AVDictionary *opts, enum AVCodecID codec_id,
AVFormatContext *s, AVStream *st, AVCodec *codec)
AVDictionary **setup_find_stream_info_opts(AVFormatContext *s,
AVDictionary *codec_opts)
void *grow_array(void *array, int elem_size, int *size, int new_size)
double get_rotation(AVStream *st)
#if CONFIG_AVDEVICE
static int print_device_sources(AVInputFormat *fmt, AVDictionary *opts)
static int print_device_sinks(AVOutputFormat *fmt, AVDictionary *opts)
static int show_sinks_sources_parse_arg(const char *arg, char **dev, AVDictionary **opts)
int show_sources(void *optctx, const char *opt, const char *arg)
int show_sinks(void *optctx, const char *opt, const char *arg)
