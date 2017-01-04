typedef struct  FBDevContext;
static av_cold int fbdev_write_header(AVFormatContext *h)
static int fbdev_write_packet(AVFormatContext *h, AVPacket *pkt)
static av_cold int fbdev_write_trailer(AVFormatContext *h)
static int fbdev_get_device_list(AVFormatContext *s, AVDeviceInfoList *device_list)
#define OFFSET(x) offsetof(FBDevContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass fbdev_class = ;
AVOutputFormat ff_fbdev_muxer = ;
