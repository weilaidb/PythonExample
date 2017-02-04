#if CONFIG_NETWORK
#if HAVE_SYS_RESOURCE_H
init_report;
AVDictionary *sws_dict;
AVDictionary *swr_opts;
AVDictionary *format_opts, *codec_opts, *resample_opts;
static FILE *report_file;
static int report_file_level = AV_LOG_DEBUG;
int hide_banner = 0;
init_opts
uninit_opts
log_callback_help
log_callback_report
init_dynload
static void (*program_exit)(int ret);
register_exit(int ret))
exit_program
parse_number_or_die
parse_time_or_die
show_help_options
show_help_children
*find_option
defined
static char** win32_argv_utf8 = NULL;
static int win32_argc = 0;
prepare_app_arguments
prepare_app_arguments
write_option
parse_option
parse_options(void *, const char*))
parse_optgroup
locate_option
dump_argument
check_options
parse_loglevel
*opt_find
#define FLAGS (o->type == AV_OPT_TYPE_FLAGS && (arg[0]=='-' || arg[0]=='+')) ? AV_DICT_APPEND : 0
opt_default
match_group_separator
finish_group
add_opt
init_parse_context
uninit_parse_context
split_commandline
opt_cpuflags
opt_loglevel
expand_filename_template
init_report
opt_report
opt_max_alloc
opt_timelimit
print_error
static int warned_cfg = 0;
#define INDENT        1
#define SHOW_VERSION  2
#define SHOW_CONFIG   4
#define SHOW_COPYRIGHT 8
PRINT_LIB_INFO                  \
if (CONFIG_##LIBNAME)                                                                    \
print_all_libs_info
print_program_info
print_buildconf
show_banner
show_version
show_buildconf
show_license
is_device
show_formats_devices
show_formats
show_devices
PRINT_CODEC_SUPPORTED \
if (codec->field)                                                                         \
print_codec
get_media_type_char
*next_codec_for_id
compare_codec_desc
get_codecs_sorted
print_codecs_for_id
show_codecs
print_codecs
show_decoders
show_encoders
show_bsfs
show_protocols
show_filters
show_colors
show_pix_fmts
show_layouts
show_sample_fmts
show_help_codec
show_help_demuxer
show_help_muxer
#if CONFIG_AVFILTER
show_help_filter
show_help
read_yesno
*get_preset_file
check_stream_specifier
*filter_codec_opts
**setup_find_stream_info_opts
*grow_array
get_rotation
#if CONFIG_AVDEVICE
print_device_sources
print_device_sinks
show_sinks_sources_parse_arg
show_sources
show_sinks
