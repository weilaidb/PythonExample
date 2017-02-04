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
register_exit(int ret));
exit_program av_noreturn;
init_dynload;
init_opts;
uninit_opts;
log_callback_help;
opt_cpuflags;
opt_default;
opt_loglevel;
opt_report;
opt_max_alloc;
opt_codec_debug;
#if CONFIG_OPENCL
opt_opencl;
opt_opencl_bench;
opt_timelimit;
parse_number_or_die;
parse_time_or_die;
typedef struct SpecifierOpt  SpecifierOpt;
typedef struct OptionDef  OptionDef;
show_help_options;
show_help_children;
show_help_default;
show_help;
parse_options(void *optctx, const char*));
parse_option;
typedef struct Option  Option;
typedef struct OptionGroupDef  OptionGroupDef;
typedef struct OptionGroup  OptionGroup;
typedef struct OptionGroupList  OptionGroupList;
typedef struct OptionParseContext  OptionParseContext;
parse_optgroup;
split_commandline;
uninit_parse_context;
parse_loglevel;
locate_option;
check_stream_specifier;
*filter_codec_opts;
**setup_find_stream_info_opts;
print_error;
show_banner;
show_version;
show_buildconf;
show_license;
show_formats;
show_devices;
#if CONFIG_AVDEVICE
show_sinks;
show_sources;
show_codecs;
show_decoders;
show_encoders;
show_filters;
show_bsfs;
show_protocols;
show_pix_fmts;
show_layouts;
show_sample_fmts;
show_colors;
read_yesno;
*get_preset_file;
*grow_array;
#define media_type_string av_get_media_type_string
GROW_ARRAY\
array = grow_array(array, sizeof(*array), &nb_elems, nb_elems + 1)
GET_PIX_FMT_NAME\
const char *name = av_get_pix_fmt_name(pix_fmt);
GET_SAMPLE_FMT_NAME\
const char *name = av_get_sample_fmt_name(sample_fmt)
GET_SAMPLE_RATE_NAME\
char name[16];\
snprintf(name, sizeof(name), , rate);
GET_CH_LAYOUT_NAME\
char name[16];\
snprintf(name, sizeof(name), PRIx64, ch_layout);
GET_CH_LAYOUT_DESC\
char name[128];\
av_get_channel_layout_string(name, sizeof(name), 0, ch_layout);
get_rotation;
