#define AVUTIL_AVUTIL_H
unsigned avutil_version(void);
const char *av_version_info(void);
const char *avutil_configuration(void);
const char *avutil_license(void);
enum AVMediaType ;
const char *av_get_media_type_string(enum AVMediaType media_type);
#define FF_LAMBDA_SHIFT 7
#define FF_LAMBDA_SCALE (1<<FF_LAMBDA_SHIFT)
#define FF_QP2LAMBDA 118
#define FF_LAMBDA_MAX (256*128-1)
#define FF_QUALITY_SCALE FF_LAMBDA_SCALE
#define AV_NOPTS_VALUE          ((int64_t)UINT64_C(0x8000000000000000))
#define AV_TIME_BASE            1000000
#define AV_TIME_BASE_Q          (AVRational)
enum AVPictureType ;
char av_get_picture_type_char(enum AVPictureType pict_type);
static inline void *av_x_if_null(const void *p, const void *x)
unsigned av_int_list_length_for_size(unsigned elsize,
const void *list, uint64_t term) av_pure;
#define av_int_list_length(list, term) \
av_int_list_length_for_size(sizeof(*(list)), list, term)
FILE *av_fopen_utf8(const char *path, const char *mode);
AVRational av_get_time_base_q(void);
