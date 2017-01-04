#define USB_STREAM_INTERFACE_VERSION 2
#define SNDRV_USB_STREAM_IOCTL_SET_PARAMS \
_IOW('H', 0x90, struct usb_stream_config)
struct usb_stream_packet ;
struct usb_stream_config ;
struct usb_stream ;
enum usb_stream_state ;
#if __KERNEL__
#define USB_STREAM_NURBS 4
#define USB_STREAM_URBDEPTH 4
struct usb_stream_kernel ;
struct usb_stream *usb_stream_new(struct usb_stream_kernel *sk,
struct usb_device *dev,
unsigned in_endpoint, unsigned out_endpoint,
unsigned sample_rate, unsigned use_packsize,
unsigned period_frames, unsigned frame_size);
void usb_stream_free(struct usb_stream_kernel *);
int usb_stream_start(struct usb_stream_kernel *);
void usb_stream_stop(struct usb_stream_kernel *);
