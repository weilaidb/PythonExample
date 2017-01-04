#define _UVC_GADGET_H_
#define UVC_EVENT_FIRST			(V4L2_EVENT_PRIVATE_START + 0)
#define UVC_EVENT_CONNECT		(V4L2_EVENT_PRIVATE_START + 0)
#define UVC_EVENT_DISCONNECT		(V4L2_EVENT_PRIVATE_START + 1)
#define UVC_EVENT_STREAMON		(V4L2_EVENT_PRIVATE_START + 2)
#define UVC_EVENT_STREAMOFF		(V4L2_EVENT_PRIVATE_START + 3)
#define UVC_EVENT_SETUP			(V4L2_EVENT_PRIVATE_START + 4)
#define UVC_EVENT_DATA			(V4L2_EVENT_PRIVATE_START + 5)
#define UVC_EVENT_LAST			(V4L2_EVENT_PRIVATE_START + 5)
struct uvc_request_data
;
struct uvc_event
;
#define UVCIOC_SEND_RESPONSE		_IOW('U', 1, struct uvc_request_data)
#define UVC_INTF_CONTROL		0
#define UVC_INTF_STREAMING		1
#define UVC_TRACE_PROBE				(1 << 0)
#define UVC_TRACE_DESCR				(1 << 1)
#define UVC_TRACE_CONTROL			(1 << 2)
#define UVC_TRACE_FORMAT			(1 << 3)
#define UVC_TRACE_CAPTURE			(1 << 4)
#define UVC_TRACE_CALLS				(1 << 5)
#define UVC_TRACE_IOCTL				(1 << 6)
#define UVC_TRACE_FRAME				(1 << 7)
#define UVC_TRACE_SUSPEND			(1 << 8)
#define UVC_TRACE_STATUS			(1 << 9)
#define UVC_WARN_MINMAX				0
#define UVC_WARN_PROBE_DEF			1
extern unsigned int uvc_gadget_trace_param;
#define uvc_trace(flag, msg...) \
do  while (0)
#define uvc_warn_once(dev, warn, msg...) \
do  while (0)
#define uvc_printk(level, msg...) \
printk(level "uvcvideo: " msg)
#define DRIVER_VERSION				"0.1.0"
#define DRIVER_VERSION_NUMBER			KERNEL_VERSION(0, 1, 0)
#define DMA_ADDR_INVALID			(~(dma_addr_t)0)
#define UVC_NUM_REQUESTS			4
#define UVC_MAX_REQUEST_SIZE			64
#define UVC_MAX_EVENTS				4
struct uvc_video
;
enum uvc_state
;
struct uvc_device
;
static inline struct uvc_device *to_uvc(struct usb_function *f)
struct uvc_file_handle
;
#define to_uvc_file_handle(handle) \
container_of(handle, struct uvc_file_handle, vfh)
extern void uvc_endpoint_stream(struct uvc_device *dev);
extern void uvc_function_connect(struct uvc_device *uvc);
extern void uvc_function_disconnect(struct uvc_device *uvc);
