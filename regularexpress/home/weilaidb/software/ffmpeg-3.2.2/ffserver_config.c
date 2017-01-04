#define MAX_CHILD_ARGS 64
static int ffserver_save_avoption(const char *opt, const char *arg, int type,
FFServerConfig *config);
static void vreport_config_error(const char *filename, int line_num,
int log_level, int *errors, const char *fmt,
va_list vl);
static void report_config_error(const char *filename, int line_num,
int log_level, int *errors, const char *fmt,
...);
#define ERROR(...) report_config_error(config->filename, config->line_num,\
AV_LOG_ERROR, &config->errors, __VA_ARGS__)
#define WARNING(...) report_config_error(config->filename, config->line_num,\
AV_LOG_WARNING, &config->warnings, __VA_ARGS__)
static int resolve_host(struct in_addr *sin_addr, const char *hostname)
void ffserver_get_arg(char *buf, int buf_size, const char **pp)
void ffserver_parse_acl_row(FFServerStream *stream, FFServerStream* feed,
FFServerIPAddressACL *ext_acl,
const char *p, const char *filename, int line_num)
static void add_codec(FFServerStream *stream, AVCodecContext *av,
FFServerConfig *config)
static int ffserver_set_codec(AVCodecContext *ctx, const char *codec_name,
FFServerConfig *config)
static int ffserver_opt_preset(const char *arg, int type, FFServerConfig *config)
static AVOutputFormat *ffserver_guess_format(const char *short_name,
const char *filename,
const char *mime_type)
static void vreport_config_error(const char *filename, int line_num,
int log_level, int *errors, const char *fmt,
va_list vl)
static void report_config_error(const char *filename, int line_num,
int log_level, int *errors,
const char *fmt, ...)
static int ffserver_set_int_param(int *dest, const char *value, int factor,
int min, int max, FFServerConfig *config,
const char *error_msg, ...)
static int ffserver_set_float_param(float *dest, const char *value,
float factor, float min, float max,
FFServerConfig *config,
const char *error_msg, ...)
static int ffserver_save_avoption(const char *opt, const char *arg, int type,
FFServerConfig *config)
static int ffserver_save_avoption_int(const char *opt, int64_t arg,
int type, FFServerConfig *config)
static int ffserver_parse_config_global(FFServerConfig *config, const char *cmd,
const char **p)
static int ffserver_parse_config_feed(FFServerConfig *config, const char *cmd,
const char **p, FFServerStream **pfeed)
static int ffserver_parse_config_stream(FFServerConfig *config, const char *cmd,
const char **p,
FFServerStream **pstream)
static int ffserver_parse_config_redirect(FFServerConfig *config,
const char *cmd, const char **p,
FFServerStream **predirect)
int ffserver_parse_ffconfig(const char *filename, FFServerConfig *config)
#undef ERROR
#undef WARNING
void ffserver_free_child_args(void *argsp)
