typedef struct X11GrabContext  X11GrabContext;
#define REGION_WIN_BORDER 3
static void x11grab_draw_region_win(X11GrabContext *s)
static void x11grab_region_win_init(X11GrabContext *s)
static int setup_shm(AVFormatContext *s, Display *dpy, XImage **image)
static int setup_mouse(Display *dpy, int screen)
static int pixfmt_from_image(AVFormatContext *s, XImage *image, int *pix_fmt)
static int x11grab_read_header(AVFormatContext *s1)
static void paint_mouse_pointer(XImage *image, AVFormatContext *s1)
static int xget_zpixmap(Display *dpy, Drawable d, XImage *image, int x, int y)
static int x11grab_read_packet(AVFormatContext *s1, AVPacket *pkt)
static int x11grab_read_close(AVFormatContext *s1)
#define OFFSET(x) offsetof(X11GrabContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass x11_class = ;
AVInputFormat ff_x11grab_demuxer = ;
