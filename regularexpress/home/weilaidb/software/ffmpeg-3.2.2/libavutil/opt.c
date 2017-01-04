const AVOption *av_opt_next(const void *obj, const AVOption *last)
static int read_number(const AVOption *o, const void *dst, double *num, int *den, int64_t *intnum)
static int write_number(void *obj, const AVOption *o, void *dst, double num, int den, int64_t intnum)
static int hexchar2int(char c)
static int set_string_binary(void *obj, const AVOption *o, const char *val, uint8_t **dst)
static int set_string(void *obj, const AVOption *o, const char *val, uint8_t **dst)
#define DEFAULT_NUMVAL(opt) ((opt->type == AV_OPT_TYPE_INT64 || \
opt->type == AV_OPT_TYPE_CONST || \
opt->type == AV_OPT_TYPE_FLAGS || \
opt->type == AV_OPT_TYPE_INT)     \
? opt->default_val.i64             \
: opt->default_val.dbl)
static int set_string_number(void *obj, void *target_obj, const AVOption *o, const char *val, void *dst)
static int set_string_image_size(void *obj, const AVOption *o, const char *val, int *dst)
static int set_string_video_rate(void *obj, const AVOption *o, const char *val, AVRational *dst)
static int set_string_color(void *obj, const AVOption *o, const char *val, uint8_t *dst)
static const char *get_bool_name(int val)
static int set_string_bool(void *obj, const AVOption *o, const char *val, int *dst)
static int set_string_fmt(void *obj, const AVOption *o, const char *val, uint8_t *dst,
int fmt_nb, int ((*get_fmt)(const char *)), const char *desc)
static int set_string_pixel_fmt(void *obj, const AVOption *o, const char *val, uint8_t *dst)
static int set_string_sample_fmt(void *obj, const AVOption *o, const char *val, uint8_t *dst)
int av_opt_set(void *obj, const char *name, const char *val, int search_flags)
#define OPT_EVAL_NUMBER(name, opttype, vartype)                         \
int av_opt_eval_ ## name(void *obj, const AVOption *o,                  \
const char *val, vartype *name ## _out)        \
OPT_EVAL_NUMBER(flags,  AV_OPT_TYPE_FLAGS,    int)
OPT_EVAL_NUMBER(int,    AV_OPT_TYPE_INT,      int)
OPT_EVAL_NUMBER(int64,  AV_OPT_TYPE_INT64,    int64_t)
OPT_EVAL_NUMBER(float,  AV_OPT_TYPE_FLOAT,    float)
OPT_EVAL_NUMBER(double, AV_OPT_TYPE_DOUBLE,   double)
OPT_EVAL_NUMBER(q,      AV_OPT_TYPE_RATIONAL, AVRational)
static int set_number(void *obj, const char *name, double num, int den, int64_t intnum,
int search_flags)
int av_opt_set_int(void *obj, const char *name, int64_t val, int search_flags)
int av_opt_set_double(void *obj, const char *name, double val, int search_flags)
int av_opt_set_q(void *obj, const char *name, AVRational val, int search_flags)
int av_opt_set_bin(void *obj, const char *name, const uint8_t *val, int len, int search_flags)
int av_opt_set_image_size(void *obj, const char *name, int w, int h, int search_flags)
int av_opt_set_video_rate(void *obj, const char *name, AVRational val, int search_flags)
static int set_format(void *obj, const char *name, int fmt, int search_flags,
enum AVOptionType type, const char *desc, int nb_fmts)
int av_opt_set_pixel_fmt(void *obj, const char *name, enum AVPixelFormat fmt, int search_flags)
int av_opt_set_sample_fmt(void *obj, const char *name, enum AVSampleFormat fmt, int search_flags)
int av_opt_set_channel_layout(void *obj, const char *name, int64_t cl, int search_flags)
int av_opt_set_dict_val(void *obj, const char *name, const AVDictionary *val,
int search_flags)
static void format_duration(char *buf, size_t size, int64_t d)
int av_opt_get(void *obj, const char *name, int search_flags, uint8_t **out_val)
static int get_number(void *obj, const char *name, const AVOption **o_out, double *num, int *den, int64_t *intnum,
int search_flags)
int av_opt_get_int(void *obj, const char *name, int search_flags, int64_t *out_val)
int av_opt_get_double(void *obj, const char *name, int search_flags, double *out_val)
int av_opt_get_q(void *obj, const char *name, int search_flags, AVRational *out_val)
int av_opt_get_image_size(void *obj, const char *name, int search_flags, int *w_out, int *h_out)
int av_opt_get_video_rate(void *obj, const char *name, int search_flags, AVRational *out_val)
static int get_format(void *obj, const char *name, int search_flags, int *out_fmt,
enum AVOptionType type, const char *desc)
int av_opt_get_pixel_fmt(void *obj, const char *name, int search_flags, enum AVPixelFormat *out_fmt)
int av_opt_get_sample_fmt(void *obj, const char *name, int search_flags, enum AVSampleFormat *out_fmt)
int av_opt_get_channel_layout(void *obj, const char *name, int search_flags, int64_t *cl)
int av_opt_get_dict_val(void *obj, const char *name, int search_flags, AVDictionary **out_val)
int av_opt_flag_is_set(void *obj, const char *field_name, const char *flag_name)
static void log_value(void *av_log_obj, int level, double d)
static const char *get_opt_const_name(void *obj, const char *unit, int64_t value)
static char *get_opt_flags_string(void *obj, const char *unit, int64_t value)
static void opt_list(void *obj, void *av_log_obj, const char *unit,
int req_flags, int rej_flags)
int av_opt_show2(void *obj, void *av_log_obj, int req_flags, int rej_flags)
void av_opt_set_defaults(void *s)
void av_opt_set_defaults2(void *s, int mask, int flags)
static int parse_key_value_pair(void *ctx, const char **buf,
const char *key_val_sep, const char *pairs_sep)
int av_set_options_string(void *ctx, const char *opts,
const char *key_val_sep, const char *pairs_sep)
#define WHITESPACES " \n\t\r"
static int is_key_char(char c)
static int get_key(const char **ropts, const char *delim, char **rkey)
int av_opt_get_key_value(const char **ropts,
const char *key_val_sep, const char *pairs_sep,
unsigned flags,
char **rkey, char **rval)
int av_opt_set_from_string(void *ctx, const char *opts,
const char *const *shorthand,
const char *key_val_sep, const char *pairs_sep)
void av_opt_free(void *obj)
int av_opt_set_dict2(void *obj, AVDictionary **options, int search_flags)
int av_opt_set_dict(void *obj, AVDictionary **options)
const AVOption *av_opt_find(void *obj, const char *name, const char *unit,
int opt_flags, int search_flags)
const AVOption *av_opt_find2(void *obj, const char *name, const char *unit,
int opt_flags, int search_flags, void **target_obj)
void *av_opt_child_next(void *obj, void *prev)
const AVClass *av_opt_child_class_next(const AVClass *parent, const AVClass *prev)
void *av_opt_ptr(const AVClass *class, void *obj, const char *name)
static int opt_size(enum AVOptionType type)
int av_opt_copy(void *dst, const void *src)
int av_opt_query_ranges(AVOptionRanges **ranges_arg, void *obj, const char *key, int flags)
int av_opt_query_ranges_default(AVOptionRanges **ranges_arg, void *obj, const char *key, int flags)
void av_opt_freep_ranges(AVOptionRanges **rangesp)
int av_opt_is_set_to_default(void *obj, const AVOption *o)
int av_opt_is_set_to_default_by_name(void *obj, const char *name, int search_flags)
int av_opt_serialize(void *obj, int opt_flags, int flags, char **buffer,
const char key_val_sep, const char pairs_sep)
