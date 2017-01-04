struct gdigrab ;
#define WIN32_API_ERROR(str)                                            \
av_log(s1, AV_LOG_ERROR, str " (error %li)\n", GetLastError())
#define REGION_WND_BORDER 3
static LRESULT CALLBACK
gdigrab_region_wnd_proc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
static int
gdigrab_region_wnd_init(AVFormatContext *s1, struct gdigrab *gdigrab)
static void
gdigrab_region_wnd_destroy(AVFormatContext *s1, struct gdigrab *gdigrab)
static void
gdigrab_region_wnd_update(AVFormatContext *s1, struct gdigrab *gdigrab)
static int
gdigrab_read_header(AVFormatContext *s1)
static void paint_mouse_pointer(AVFormatContext *s1, struct gdigrab *gdigrab)
static int gdigrab_read_packet(AVFormatContext *s1, AVPacket *pkt)
static int gdigrab_read_close(AVFormatContext *s1)
#define OFFSET(x) offsetof(struct gdigrab, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass gdigrab_class = ;
AVInputFormat ff_gdigrab_demuxer = ;
