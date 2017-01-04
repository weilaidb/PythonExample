#if CONFIG_LIBXCB_XFIXES
#if CONFIG_LIBXCB_SHM
#if CONFIG_LIBXCB_SHAPE
typedef struct XCBGrabContext  XCBGrabContext;
#define FOLLOW_CENTER -1
#define OFFSET(x) offsetof(XCBGrabContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass xcbgrab_class = ;
static int xcbgrab_reposition(AVFormatContext *s,
xcb_query_pointer_reply_t *p,
xcb_get_geometry_reply_t *geo)
static int xcbgrab_frame(AVFormatContext *s, AVPacket *pkt)
static void wait_frame(AVFormatContext *s, AVPacket *pkt)
#if CONFIG_LIBXCB_SHM
static int check_shm(xcb_connection_t *conn)
static void dealloc_shm(void *unused, uint8_t *data)
static int xcbgrab_frame_shm(AVFormatContext *s, AVPacket *pkt)
#if CONFIG_LIBXCB_XFIXES
static int check_xfixes(xcb_connection_t *conn)
#define BLEND(target, source, alpha) \
(target) + ((source) * (255 - (alpha)) + 255 / 2) / 255
static void xcbgrab_draw_mouse(AVFormatContext *s, AVPacket *pkt,
xcb_query_pointer_reply_t *p,
xcb_get_geometry_reply_t *geo)
static void xcbgrab_update_region(AVFormatContext *s)
static int xcbgrab_read_packet(AVFormatContext *s, AVPacket *pkt)
static av_cold int xcbgrab_read_close(AVFormatContext *s)
static xcb_screen_t *get_screen(const xcb_setup_t *setup, int screen_num)
static int pixfmt_from_pixmap_format(AVFormatContext *s, int depth,
int *pix_fmt)
static int create_stream(AVFormatContext *s)
static void draw_rectangle(AVFormatContext *s)
static void setup_window(AVFormatContext *s)
static av_cold int xcbgrab_read_header(AVFormatContext *s)
AVInputFormat ff_x11grab_xcb_demuxer = ;
