#define AVUTIL_OPT_H
enum AVOptionType;
typedef struct AVOption  AVOption;
typedef struct AVOptionRange  AVOptionRange;
typedef struct AVOptionRanges  AVOptionRanges;
av_opt_show2;
av_opt_set_defaults;
av_opt_set_defaults2;
av_set_options_string;
av_opt_set_from_string;
av_opt_free;
av_opt_flag_is_set;
av_opt_set_dict;
av_opt_set_dict2;
av_opt_get_key_value;
enum ;
int av_opt_eval_flags (void *obj, const AVOption *o, const char *val, int        *flags_out);
int av_opt_eval_int   (void *obj, const AVOption *o, const char *val, int        *int_out);
int av_opt_eval_int64 (void *obj, const AVOption *o, const char *val, int64_t    *int64_out);
int av_opt_eval_float (void *obj, const AVOption *o, const char *val, float      *float_out);
av_opt_eval_double;
int av_opt_eval_q     (void *obj, const AVOption *o, const char *val, AVRational *q_out);
#define AV_OPT_SEARCH_CHILDREN   (1 << 0)
#define AV_OPT_SEARCH_FAKE_OBJ   (1 << 1)
#define AV_OPT_ALLOW_NULL (1 << 2)
#define AV_OPT_MULTI_COMPONENT_RANGE (1 << 12)
*av_opt_find;
*av_opt_find2;
*av_opt_next;
*av_opt_child_next;
*av_opt_child_class_next;
int av_opt_set         (void *obj, const char *name, const char *val, int search_flags);
int av_opt_set_int     (void *obj, const char *name, int64_t     val, int search_flags);
int av_opt_set_double  (void *obj, const char *name, double      val, int search_flags);
int av_opt_set_q       (void *obj, const char *name, AVRational  val, int search_flags);
int av_opt_set_bin     (void *obj, const char *name, const uint8_t *val, int size, int search_flags);
av_opt_set_image_size;
int av_opt_set_pixel_fmt (void *obj, const char *name, enum AVPixelFormat fmt, int search_flags);
av_opt_set_sample_fmt;
av_opt_set_video_rate;
av_opt_set_channel_layout;
av_opt_set_dict_val;
av_opt_set_int_list \
(av_int_list_length(val, term) > INT_MAX / sizeof(*(val)) ? \
AVERROR(EINVAL) : \
av_opt_set_bin(obj, name, (const uint8_t *)(val), \
sizeof), flags))
int av_opt_get         (void *obj, const char *name, int search_flags, uint8_t   **out_val);
int av_opt_get_int     (void *obj, const char *name, int search_flags, int64_t    *out_val);
int av_opt_get_double  (void *obj, const char *name, int search_flags, double     *out_val);
int av_opt_get_q       (void *obj, const char *name, int search_flags, AVRational *out_val);
av_opt_get_image_size;
int av_opt_get_pixel_fmt (void *obj, const char *name, int search_flags, enum AVPixelFormat *out_fmt);
av_opt_get_sample_fmt;
av_opt_get_video_rate;
av_opt_get_channel_layout;
av_opt_get_dict_val;
*av_opt_ptr;
av_opt_freep_ranges;
av_opt_query_ranges;
av_opt_copy;
av_opt_query_ranges_default;
av_opt_is_set_to_default;
av_opt_is_set_to_default_by_name;
#define AV_OPT_SERIALIZE_SKIP_DEFAULTS              0x00000001
#define AV_OPT_SERIALIZE_OPT_FLAGS_EXACT            0x00000002
av_opt_serialize;
