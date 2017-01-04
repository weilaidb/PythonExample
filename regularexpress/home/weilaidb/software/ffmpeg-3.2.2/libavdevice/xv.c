typedef struct  XVContext;
typedef struct XVTagFormatMap
XVTagFormatMap;
static const XVTagFormatMap tag_codec_map[] = ;
static int xv_get_tag_from_format(enum AVPixelFormat format)
static int xv_write_trailer(AVFormatContext *s)
static int xv_write_header(AVFormatContext *s)
static void compute_display_area(AVFormatContext *s)
static int xv_repaint(AVFormatContext *s)
static int write_picture(AVFormatContext *s, uint8_t *input_data[4],
int linesize[4])
static int xv_write_packet(AVFormatContext *s, AVPacket *pkt)
static int xv_write_frame(AVFormatContext *s, int stream_index, AVFrame **frame,
unsigned flags)
static int xv_control_message(AVFormatContext *s, int type, void *data, size_t data_size)
#define OFFSET(x) offsetof(XVContext, x)
static const AVOption options[] = ;
static const AVClass xv_class = ;
AVOutputFormat ff_xv_muxer = ;
