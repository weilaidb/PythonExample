static int __uvc_query_ctrl(struct uvc_device *dev, __u8 query, __u8 unit,
__u8 intfnum, __u8 cs, void *data, __u16 size,
int timeout)
static const char *uvc_query_name(__u8 query)
int uvc_query_ctrl(struct uvc_device *dev, __u8 query, __u8 unit,
__u8 intfnum, __u8 cs, void *data, __u16 size)
static void uvc_fixup_video_ctrl(struct uvc_streaming *stream,
struct uvc_streaming_control *ctrl)
static int uvc_get_video_ctrl(struct uvc_streaming *stream,
struct uvc_streaming_control *ctrl, int probe, __u8 query)
static int uvc_set_video_ctrl(struct uvc_streaming *stream,
struct uvc_streaming_control *ctrl, int probe)
int uvc_probe_video(struct uvc_streaming *stream,
struct uvc_streaming_control *probe)
int uvc_commit_video(struct uvc_streaming *stream,
struct uvc_streaming_control *probe)
#define UVC_STREAM_EOH	(1 << 7)
#define UVC_STREAM_ERR	(1 << 6)
#define UVC_STREAM_STI	(1 << 5)
#define UVC_STREAM_RES	(1 << 4)
#define UVC_STREAM_SCR	(1 << 3)
#define UVC_STREAM_PTS	(1 << 2)
#define UVC_STREAM_EOF	(1 << 1)
#define UVC_STREAM_FID	(1 << 0)
static int uvc_video_decode_start(struct uvc_streaming *stream,
struct uvc_buffer *buf, const __u8 *data, int len)
static void uvc_video_decode_data(struct uvc_streaming *stream,
struct uvc_buffer *buf, const __u8 *data, int len)
static void uvc_video_decode_end(struct uvc_streaming *stream,
struct uvc_buffer *buf, const __u8 *data, int len)
static int uvc_video_encode_header(struct uvc_streaming *stream,
struct uvc_buffer *buf, __u8 *data, int len)
static int uvc_video_encode_data(struct uvc_streaming *stream,
struct uvc_buffer *buf, __u8 *data, int len)
static void uvc_video_decode_isoc(struct urb *urb, struct uvc_streaming *stream,
struct uvc_buffer *buf)
static void uvc_video_decode_bulk(struct urb *urb, struct uvc_streaming *stream,
struct uvc_buffer *buf)
static void uvc_video_encode_bulk(struct urb *urb, struct uvc_streaming *stream,
struct uvc_buffer *buf)
static void uvc_video_complete(struct urb *urb)
static void uvc_free_urb_buffers(struct uvc_streaming *stream)
static int uvc_alloc_urb_buffers(struct uvc_streaming *stream,
unsigned int size, unsigned int psize, gfp_t gfp_flags)
static void uvc_uninit_video(struct uvc_streaming *stream, int free_buffers)
static int uvc_init_video_isoc(struct uvc_streaming *stream,
struct usb_host_endpoint *ep, gfp_t gfp_flags)
static int uvc_init_video_bulk(struct uvc_streaming *stream,
struct usb_host_endpoint *ep, gfp_t gfp_flags)
static int uvc_init_video(struct uvc_streaming *stream, gfp_t gfp_flags)
int uvc_video_suspend(struct uvc_streaming *stream)
int uvc_video_resume(struct uvc_streaming *stream)
int uvc_video_init(struct uvc_streaming *stream)
int uvc_video_enable(struct uvc_streaming *stream, int enable)
