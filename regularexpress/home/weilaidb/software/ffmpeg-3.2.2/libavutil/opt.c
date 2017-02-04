*av_opt_next
read_number
write_number
hexchar2int
set_string_binary
set_string
DEFAULT_NUMVAL ((opt->type == AV_OPT_TYPE_INT64 || \
opt->type == AV_OPT_TYPE_CONST || \
opt->type == AV_OPT_TYPE_FLAGS || \
opt->type == AV_OPT_TYPE_INT)     \
? opt->default_val.i64             \
: opt->default_val.dbl)
set_string_number
set_string_image_size
set_string_video_rate
set_string_color
*get_bool_name
set_string_bool
set_string_fmt(const char *)), const char *desc)
set_string_pixel_fmt
set_string_sample_fmt
av_opt_set
OPT_EVAL_NUMBER                         \
int av_opt_eval_ ## name(void *obj, const AVOption *o,                  \
const char *val, vartype *name ## _out)        \
OPT_EVAL_NUMBER(flags,  AV_OPT_TYPE_FLAGS,    int)
OPT_EVAL_NUMBER(int,    AV_OPT_TYPE_INT,      int)
OPT_EVAL_NUMBER(int64,  AV_OPT_TYPE_INT64,    int64_t)
OPT_EVAL_NUMBER(float,  AV_OPT_TYPE_FLOAT,    float)
OPT_EVAL_NUMBER(double, AV_OPT_TYPE_DOUBLE,   double)
OPT_EVAL_NUMBER(q,      AV_OPT_TYPE_RATIONAL, AVRational)
set_number
av_opt_set_int
av_opt_set_double
av_opt_set_q
av_opt_set_bin
av_opt_set_image_size
av_opt_set_video_rate
set_format
av_opt_set_pixel_fmt
av_opt_set_sample_fmt
av_opt_set_channel_layout
av_opt_set_dict_val
format_duration
av_opt_get
get_number
av_opt_get_int
av_opt_get_double
av_opt_get_q
av_opt_get_image_size
av_opt_get_video_rate
get_format
av_opt_get_pixel_fmt
av_opt_get_sample_fmt
av_opt_get_channel_layout
av_opt_get_dict_val
av_opt_flag_is_set
log_value
*get_opt_const_name
*get_opt_flags_string
opt_list
av_opt_show2
av_opt_set_defaults
av_opt_set_defaults2
parse_key_value_pair
av_set_options_string
#define WHITESPACES
is_key_char
get_key
av_opt_get_key_value
av_opt_set_from_string
av_opt_free
av_opt_set_dict2
av_opt_set_dict
*av_opt_find
*av_opt_find2
*av_opt_child_next
*av_opt_child_class_next
*av_opt_ptr
opt_size
av_opt_copy
av_opt_query_ranges
av_opt_query_ranges_default
av_opt_freep_ranges
av_opt_is_set_to_default
av_opt_is_set_to_default_by_name
av_opt_serialize
