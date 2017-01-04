#define _UVC_QUEUE_H_
#define UVC_MAX_FRAME_SIZE	(16*1024*1024)
#define UVC_MAX_VIDEO_BUFFERS	32
enum uvc_buffer_state ;
struct uvc_buffer ;
#define UVC_QUEUE_STREAMING		(1 << 0)
#define UVC_QUEUE_DISCONNECTED		(1 << 1)
#define UVC_QUEUE_DROP_INCOMPLETE	(1 << 2)
#define UVC_QUEUE_PAUSED		(1 << 3)
struct uvc_video_queue ;
static inline int uvc_queue_streaming(struct uvc_video_queue *queue)
