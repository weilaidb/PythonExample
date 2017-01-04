#define AVUTIL_DOWNMIX_INFO_H
enum AVDownmixType ;
typedef struct AVDownmixInfo  AVDownmixInfo;
AVDownmixInfo *av_downmix_info_update_side_data(AVFrame *frame);
