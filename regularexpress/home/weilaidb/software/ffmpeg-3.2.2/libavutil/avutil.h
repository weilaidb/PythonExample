#define AVUTIL_AVUTIL_H
avutil_version;
*av_version_info;
*avutil_configuration;
*avutil_license;
enum AVMediaType ;
*av_get_media_type_string;
#define FF_LAMBDA_SHIFT 7
#define FF_LAMBDA_SCALE (1<<FF_LAMBDA_SHIFT)
#define FF_QP2LAMBDA 118
#define FF_LAMBDA_MAX (256*128-1)
#define FF_QUALITY_SCALE FF_LAMBDA_SCALE
#define AV_NOPTS_VALUE          ((int64_t)UINT64_C(0x8000000000000000))
#define AV_TIME_BASE            1000000
#define AV_TIME_BASE_Q          (AVRational)
enum AVPictureType ;
av_get_picture_type_char;
*av_x_if_null
av_int_list_length_for_size av_pure;
av_int_list_length \
av_int_list_length_for_size(sizeof(*(list)), list, term)
*av_fopen_utf8;
av_get_time_base_q;
