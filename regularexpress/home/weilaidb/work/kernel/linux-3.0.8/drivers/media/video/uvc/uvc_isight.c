static int isight_decode(struct uvc_video_queue *queue, struct uvc_buffer *buf,
const __u8 *data, unsigned int len)
void uvc_video_decode_isight(struct urb *urb, struct uvc_streaming *stream,
struct uvc_buffer *buf)
