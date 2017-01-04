#define BOUNDARY_TAG "ffserver"
typedef struct MPJPEGContext  MPJPEGContext;
static int mpjpeg_write_header(AVFormatContext *s)
static int mpjpeg_write_packet(AVFormatContext *s, AVPacket *pkt)
static int mpjpeg_write_trailer(AVFormatContext *s)
static const AVOption options[] = ;
static const AVClass mpjpeg_muxer_class = ;
AVOutputFormat ff_mpjpeg_muxer = ;
