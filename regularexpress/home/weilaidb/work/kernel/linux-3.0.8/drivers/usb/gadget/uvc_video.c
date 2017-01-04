static int
uvc_video_encode_header(struct uvc_video *video, struct uvc_buffer *buf,
u8 *data, int len)
static int
uvc_video_encode_data(struct uvc_video *video, struct uvc_buffer *buf,
u8 *data, int len)
static void
uvc_video_encode_bulk(struct usb_request *req, struct uvc_video *video,
struct uvc_buffer *buf)
static void
uvc_video_encode_isoc(struct usb_request *req, struct uvc_video *video,
struct uvc_buffer *buf)
static void
uvc_video_complete(struct usb_ep *ep, struct usb_request *req)
static int
uvc_video_free_requests(struct uvc_video *video)
static int
uvc_video_alloc_requests(struct uvc_video *video)
static int
uvc_video_pump(struct uvc_video *video)
static int
uvc_video_enable(struct uvc_video *video, int enable)
static int
uvc_video_init(struct uvc_video *video)
