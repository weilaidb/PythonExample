#define CMDUTILS_H
#undef main
extern const char program_name[];
extern const int program_birth_year;
extern AVCodecContext *avcodec_opts[AVMEDIA_TYPE_NB];
extern AVFormatContext *avformat_opts;
extern AVDictionary *sws_dict;
extern AVDictionary *swr_opts;
extern AVDictionary *format_opts, *codec_opts, *resample_opts;
extern int hide_banner;
void register_exit(void (*cb)(int ret));
void exit_program(int ret) av_noreturn;
void init_dynload(void);
void init_opts(void);
void uninit_opts(void);
void log_callback_help(void* ptr, int level, const char* fmt, va_list vl);
int opt_cpuflags(void *optctx, const char *opt, const char *arg);
int opt_default(void *optctx, const char *opt, const char *arg);
int opt_loglevel(void *optctx, const char *opt, const char *arg);
int opt_report(const char *opt);
int opt_max_alloc(void *optctx, const char *opt, const char *arg);
int opt_codec_debug(void *optctx, const char *opt, const char *arg);
#if CONFIG_OPENCL
int opt_opencl(void *optctx, const char *opt, const char *arg);
int opt_opencl_bench(void *optctx, const char *opt, const char *arg);
int opt_timelimit(void *optctx, const char *opt, const char *arg);
double parse_number_or_die(const char *context, const char *numstr, int type,
double min, double max);
int64_t parse_time_or_die(const char *context, const char *timestr,
int is_duration);
typedef struct SpecifierOpt  SpecifierOpt;
typedef struct OptionDef  OptionDef;
void show_help_options(const OptionDef *options, const char *msg, int req_flags,
int rej_flags, int alt_flags);
void show_help_children(const AVClass *class, int flags);
void show_help_default(const char *opt, const char *arg);
int show_help(void *optctx, const char *opt, const char *arg);
void parse_options(void *optctx, int argc, char **argv, const OptionDef *options,
void (* parse_arg_function)(void *optctx, const char*));
int parse_option(void *optctx, const char *opt, const char *arg,
const OptionDef *options);
typedef struct Option  Option;
typedef struct OptionGroupDef  OptionGroupDef;
typedef struct OptionGroup  OptionGroup;
typedef struct OptionGroupList  OptionGroupList;
typedef struct OptionParseContext  OptionParseContext;
int parse_optgroup(void *optctx, OptionGroup *g);
int split_commandline(OptionParseContext *octx, int argc, char *argv[],
const OptionDef *options,
const OptionGroupDef *groups, int nb_groups);
void uninit_parse_context(OptionParseContext *octx);
void parse_loglevel(int argc, char **argv, const OptionDef *options);
int locate_option(int argc, char **argv, const OptionDef *options,
const char *optname);
int check_stream_specifier(AVFormatContext *s, AVStream *st, const char *spec);
AVDictionary *filter_codec_opts(AVDictionary *opts, enum AVCodecID codec_id,
AVFormatContext *s, AVStream *st, AVCodec *codec);
AVDictionary **setup_find_stream_info_opts(AVFormatContext *s,
AVDictionary *codec_opts);
void print_error(const char *filename, int err);
void show_banner(int argc, char **argv, const OptionDef *options);
int show_version(void *optctx, const char *opt, const char *arg);
int show_buildconf(void *optctx, const char *opt, const char *arg);
int show_license(void *optctx, const char *opt, const char *arg);
int show_formats(void *optctx, const char *opt, const char *arg);
int show_devices(void *optctx, const char *opt, const char *arg);
#if CONFIG_AVDEVICE
int show_sinks(void *optctx, const char *opt, const char *arg);
int show_sources(void *optctx, const char *opt, const char *arg);
int show_codecs(void *optctx, const char *opt, const char *arg);
int show_decoders(void *optctx, const char *opt, const char *arg);
int show_encoders(void *optctx, const char *opt, const char *arg);
int show_filters(void *optctx, const char *opt, const char *arg);
int show_bsfs(void *optctx, const char *opt, const char *arg);
int show_protocols(void *optctx, const char *opt, const char *arg);
int show_pix_fmts(void *optctx, const char *opt, const char *arg);
int show_layouts(void *optctx, const char *opt, const char *arg);
int show_sample_fmts(void *optctx, const char *opt, const char *arg);
int show_colors(void *optctx, const char *opt, const char *arg);
int read_yesno(void);
FILE *get_preset_file(char *filename, size_t filename_size,
const char *preset_name, int is_path, const char *codec_name);
void *grow_array(void *array, int elem_size, int *size, int new_size);
#define media_type_string av_get_media_type_string
#define GROW_ARRAY(array, nb_elems)\
array = grow_array(array, sizeof(*array), &nb_elems, nb_elems + 1)
#define GET_PIX_FMT_NAME(pix_fmt)\
const char *name = av_get_pix_fmt_name(pix_fmt);
#define GET_SAMPLE_FMT_NAME(sample_fmt)\
const char *name = av_get_sample_fmt_name(sample_fmt)
#define GET_SAMPLE_RATE_NAME(rate)\
char name[16];\
snprintf(name, sizeof(name), "%d", rate);
#define GET_CH_LAYOUT_NAME(ch_layout)\
char name[16];\
snprintf(name, sizeof(name), "0x%"PRIx64, ch_layout);
#define GET_CH_LAYOUT_DESC(ch_layout)\
char name[128];\
av_get_channel_layout_string(name, sizeof(name), 0, ch_layout);
double get_rotation(AVStream *st);
