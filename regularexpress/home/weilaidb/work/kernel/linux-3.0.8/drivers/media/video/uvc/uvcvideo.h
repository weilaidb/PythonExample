#define _USB_VIDEO_H_
#warn "The uvcvideo.h header is deprecated, use linux/uvcvideo.h instead."
#define UVC_CTRL_DATA_TYPE_RAW		0
#define UVC_CTRL_DATA_TYPE_SIGNED	1
#define UVC_CTRL_DATA_TYPE_UNSIGNED	2
#define UVC_CTRL_DATA_TYPE_BOOLEAN	3
#define UVC_CTRL_DATA_TYPE_ENUM		4
#define UVC_CTRL_DATA_TYPE_BITMASK	5
#define UVC_CONTROL_SET_CUR	(1 << 0)
#define UVC_CONTROL_GET_CUR	(1 << 1)
#define UVC_CONTROL_GET_MIN	(1 << 2)
#define UVC_CONTROL_GET_MAX	(1 << 3)
#define UVC_CONTROL_GET_RES	(1 << 4)
#define UVC_CONTROL_GET_DEF	(1 << 5)
#define UVC_CONTROL_RESTORE	(1 << 6)
#define UVC_CONTROL_AUTO_UPDATE	(1 << 7)
#define UVC_CONTROL_GET_RANGE	(UVC_CONTROL_GET_CUR | UVC_CONTROL_GET_MIN | \
UVC_CONTROL_GET_MAX | UVC_CONTROL_GET_RES | \
UVC_CONTROL_GET_DEF)
struct uvc_menu_info ;
struct uvc_xu_control_mapping ;
struct uvc_xu_control_info ;
struct uvc_xu_control_mapping_old ;
struct uvc_xu_control ;
#define UVCIOC_CTRL_ADD		_IOW('U', 1, struct uvc_xu_control_info)
#define UVCIOC_CTRL_MAP_OLD	_IOWR('U', 2, struct uvc_xu_control_mapping_old)
#define UVCIOC_CTRL_MAP		_IOWR('U', 2, struct uvc_xu_control_mapping)
#define UVCIOC_CTRL_GET		_IOWR('U', 3, struct uvc_xu_control)
#define UVCIOC_CTRL_SET		_IOW('U', 4, struct uvc_xu_control)
#define __UVCIOC_CTRL_ADD	_IOW('U', 1, struct uvc_xu_control_info)
#define __UVCIOC_CTRL_MAP_OLD	_IOWR('U', 2, struct uvc_xu_control_mapping_old)
#define __UVCIOC_CTRL_MAP	_IOWR('U', 2, struct uvc_xu_control_mapping)
#define __UVCIOC_CTRL_GET	_IOWR('U', 3, struct uvc_xu_control)
#define __UVCIOC_CTRL_SET	_IOW('U', 4, struct uvc_xu_control)
#define UVC_TERM_INPUT			0x0000
#define UVC_TERM_OUTPUT			0x8000
#define UVC_TERM_DIRECTION(term)	((term)->type & 0x8000)
#define UVC_ENTITY_TYPE(entity)		((entity)->type & 0x7fff)
#define UVC_ENTITY_IS_UNIT(entity)	(((entity)->type & 0xff00) == 0)
#define UVC_ENTITY_IS_TERM(entity)	(((entity)->type & 0xff00) != 0)
#define UVC_ENTITY_IS_ITERM(entity) \
(UVC_ENTITY_IS_TERM(entity) && \
((entity)->type & 0x8000) == UVC_TERM_INPUT)
#define UVC_ENTITY_IS_OTERM(entity) \
(UVC_ENTITY_IS_TERM(entity) && \
((entity)->type & 0x8000) == UVC_TERM_OUTPUT)
#define UVC_GUID_UVC_CAMERA \
#define UVC_GUID_UVC_OUTPUT \
#define UVC_GUID_UVC_MEDIA_TRANSPORT_INPUT \
#define UVC_GUID_UVC_PROCESSING \
#define UVC_GUID_UVC_SELECTOR \
#define UVC_GUID_FORMAT_MJPEG \
#define UVC_GUID_FORMAT_YUY2 \
#define UVC_GUID_FORMAT_YUY2_ISIGHT \
#define UVC_GUID_FORMAT_NV12 \
#define UVC_GUID_FORMAT_YV12 \
#define UVC_GUID_FORMAT_I420 \
#define UVC_GUID_FORMAT_UYVY \
#define UVC_GUID_FORMAT_Y800 \
#define UVC_GUID_FORMAT_Y16 \
#define UVC_GUID_FORMAT_BY8 \
#define UVC_GUID_FORMAT_RGBP \
#define UVC_GUID_FORMAT_M420 \
#define DRIVER_VERSION_NUMBER	KERNEL_VERSION(1, 1, 0)
#define DRIVER_VERSION		"v1.1.0"
#define UVC_URBS		5
#define UVC_MAX_PACKETS		32
#define UVC_MAX_VIDEO_BUFFERS	32
#define UVC_MAX_STATUS_SIZE	16
#define UVC_CTRL_CONTROL_TIMEOUT	300
#define UVC_CTRL_STREAMING_TIMEOUT	5000
#define UVC_MAX_CONTROL_MAPPINGS	1024
#define UVC_QUIRK_STATUS_INTERVAL	0x00000001
#define UVC_QUIRK_PROBE_MINMAX		0x00000002
#define UVC_QUIRK_PROBE_EXTRAFIELDS	0x00000004
#define UVC_QUIRK_BUILTIN_ISIGHT	0x00000008
#define UVC_QUIRK_STREAM_NO_FID		0x00000010
#define UVC_QUIRK_IGNORE_SELECTOR_UNIT	0x00000020
#define UVC_QUIRK_FIX_BANDWIDTH		0x00000080
#define UVC_QUIRK_PROBE_DEF		0x00000100
#define UVC_QUIRK_RESTRICT_FRAME_RATE	0x00000200
#define UVC_FMT_FLAG_COMPRESSED		0x00000001
#define UVC_FMT_FLAG_STREAM		0x00000002
struct uvc_device;
struct uvc_control_info ;
struct uvc_control_mapping ;
struct uvc_control ;
struct uvc_format_desc ;
struct uvc_entity ;
struct uvc_frame ;
struct uvc_format ;
struct uvc_streaming_header ;
enum uvc_buffer_state ;
struct uvc_buffer ;
#define UVC_QUEUE_STREAMING		(1 << 0)
#define UVC_QUEUE_DISCONNECTED		(1 << 1)
#define UVC_QUEUE_DROP_CORRUPTED	(1 << 2)
struct uvc_video_queue ;
struct uvc_video_chain ;
struct uvc_streaming ;
enum uvc_device_state ;
struct uvc_device ;
enum uvc_handle_state ;
struct uvc_fh ;
struct uvc_driver ;
#define UVC_TRACE_PROBE		(1 << 0)
#define UVC_TRACE_DESCR		(1 << 1)
#define UVC_TRACE_CONTROL	(1 << 2)
#define UVC_TRACE_FORMAT	(1 << 3)
#define UVC_TRACE_CAPTURE	(1 << 4)
#define UVC_TRACE_CALLS		(1 << 5)
#define UVC_TRACE_IOCTL		(1 << 6)
#define UVC_TRACE_FRAME		(1 << 7)
#define UVC_TRACE_SUSPEND	(1 << 8)
#define UVC_TRACE_STATUS	(1 << 9)
#define UVC_TRACE_VIDEO		(1 << 10)
#define UVC_WARN_MINMAX		0
#define UVC_WARN_PROBE_DEF	1
extern unsigned int uvc_clock_param;
extern unsigned int uvc_no_drop_param;
extern unsigned int uvc_trace_param;
extern unsigned int uvc_timeout_param;
#define uvc_trace(flag, msg...) \
do  while (0)
#define uvc_warn_once(dev, warn, msg...) \
do  while (0)
#define uvc_printk(level, msg...) \
printk(level "uvcvideo: " msg)
extern struct uvc_driver uvc_driver;
extern struct uvc_entity *uvc_entity_by_id(struct uvc_device *dev, int id);
extern void uvc_queue_init(struct uvc_video_queue *queue,
enum v4l2_buf_type type, int drop_corrupted);
extern int uvc_alloc_buffers(struct uvc_video_queue *queue,
unsigned int nbuffers, unsigned int buflength);
extern int uvc_free_buffers(struct uvc_video_queue *queue);
extern int uvc_query_buffer(struct uvc_video_queue *queue,
struct v4l2_buffer *v4l2_buf);
extern int uvc_queue_buffer(struct uvc_video_queue *queue,
struct v4l2_buffer *v4l2_buf);
extern int uvc_dequeue_buffer(struct uvc_video_queue *queue,
struct v4l2_buffer *v4l2_buf, int nonblocking);
extern int uvc_queue_enable(struct uvc_video_queue *queue, int enable);
extern void uvc_queue_cancel(struct uvc_video_queue *queue, int disconnect);
extern struct uvc_buffer *uvc_queue_next_buffer(struct uvc_video_queue *queue,
struct uvc_buffer *buf);
extern int uvc_queue_mmap(struct uvc_video_queue *queue,
struct vm_area_struct *vma);
extern unsigned int uvc_queue_poll(struct uvc_video_queue *queue,
struct file *file, poll_table *wait);
extern unsigned long uvc_queue_get_unmapped_area(struct uvc_video_queue *queue,
unsigned long pgoff);
extern int uvc_queue_allocated(struct uvc_video_queue *queue);
static inline int uvc_queue_streaming(struct uvc_video_queue *queue)
extern const struct v4l2_file_operations uvc_fops;
extern int uvc_mc_register_entities(struct uvc_video_chain *chain);
extern void uvc_mc_cleanup_entity(struct uvc_entity *entity);
extern int uvc_video_init(struct uvc_streaming *stream);
extern int uvc_video_suspend(struct uvc_streaming *stream);
extern int uvc_video_resume(struct uvc_streaming *stream);
extern int uvc_video_enable(struct uvc_streaming *stream, int enable);
extern int uvc_probe_video(struct uvc_streaming *stream,
struct uvc_streaming_control *probe);
extern int uvc_commit_video(struct uvc_streaming *stream,
struct uvc_streaming_control *ctrl);
extern int uvc_query_ctrl(struct uvc_device *dev, __u8 query, __u8 unit,
__u8 intfnum, __u8 cs, void *data, __u16 size);
extern int uvc_status_init(struct uvc_device *dev);
extern void uvc_status_cleanup(struct uvc_device *dev);
extern int uvc_status_start(struct uvc_device *dev);
extern void uvc_status_stop(struct uvc_device *dev);
extern int uvc_status_suspend(struct uvc_device *dev);
extern int uvc_status_resume(struct uvc_device *dev);
extern int uvc_query_v4l2_ctrl(struct uvc_video_chain *chain,
struct v4l2_queryctrl *v4l2_ctrl);
extern int uvc_query_v4l2_menu(struct uvc_video_chain *chain,
struct v4l2_querymenu *query_menu);
extern int uvc_ctrl_add_mapping(struct uvc_video_chain *chain,
const struct uvc_control_mapping *mapping);
extern int uvc_ctrl_init_device(struct uvc_device *dev);
extern void uvc_ctrl_cleanup_device(struct uvc_device *dev);
extern int uvc_ctrl_resume_device(struct uvc_device *dev);
extern int uvc_ctrl_begin(struct uvc_video_chain *chain);
extern int __uvc_ctrl_commit(struct uvc_video_chain *chain, int rollback);
static inline int uvc_ctrl_commit(struct uvc_video_chain *chain)
static inline int uvc_ctrl_rollback(struct uvc_video_chain *chain)
extern int uvc_ctrl_get(struct uvc_video_chain *chain,
struct v4l2_ext_control *xctrl);
extern int uvc_ctrl_set(struct uvc_video_chain *chain,
struct v4l2_ext_control *xctrl);
extern int uvc_xu_ctrl_query(struct uvc_video_chain *chain,
struct uvc_xu_control_query *xqry);
extern void uvc_simplify_fraction(uint32_t *numerator, uint32_t *denominator,
unsigned int n_terms, unsigned int threshold);
extern uint32_t uvc_fraction_to_interval(uint32_t numerator,
uint32_t denominator);
extern struct usb_host_endpoint *uvc_find_endpoint(
struct usb_host_interface *alts, __u8 epaddr);
void uvc_video_decode_isight(struct urb *urb, struct uvc_streaming *stream,
struct uvc_buffer *buf);
