typedef struct FBDevContext  FBDevContext;
static av_cold int fbdev_read_header(AVFormatContext *avctx)
static int fbdev_read_packet(AVFormatContext *avctx, AVPacket *pkt)
static av_cold int fbdev_read_close(AVFormatContext *avctx)
static int fbdev_get_device_list(AVFormatContext *s, AVDeviceInfoList *device_list)
#define OFFSET(x) offsetof(FBDevContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass fbdev_class = ;
AVInputFormat ff_fbdev_demuxer = ;
