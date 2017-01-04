static int st5481_isoc_flatten(struct urb *urb);
static void usb_next_ctrl_msg(struct urb *urb,
struct st5481_adapter *adapter)
static void usb_ctrl_msg(struct st5481_adapter *adapter,
u8 request, u8 requesttype, u16 value, u16 index,
ctrl_complete_t complete, void *context)
void st5481_usb_device_ctrl_msg(struct st5481_adapter *adapter,
u8 request, u16 value,
ctrl_complete_t complete, void *context)
void st5481_usb_pipe_reset(struct st5481_adapter *adapter,
u_char pipe,
ctrl_complete_t complete, void *context)
void st5481_ph_command(struct st5481_adapter *adapter, unsigned int command)
static void usb_ctrl_complete(struct urb *urb)
static void usb_int_complete(struct urb *urb)
int st5481_setup_usb(struct st5481_adapter *adapter)
void st5481_release_usb(struct st5481_adapter *adapter)
void st5481_start(struct st5481_adapter *adapter)
void st5481_stop(struct st5481_adapter *adapter)
static void
fill_isoc_urb(struct urb *urb, struct usb_device *dev,
unsigned int pipe, void *buf, int num_packets,
int packet_size, usb_complete_t complete,
void *context)
int
st5481_setup_isocpipes(struct urb* urb[2], struct usb_device *dev,
unsigned int pipe, int num_packets,
int packet_size, int buf_size,
usb_complete_t complete, void *context)
void st5481_release_isocpipes(struct urb* urb[2])
static void usb_in_complete(struct urb *urb)
int st5481_setup_in(struct st5481_in *in)
void st5481_release_in(struct st5481_in *in)
static int st5481_isoc_flatten(struct urb *urb)
static void st5481_start_rcv(void *context)
void st5481_in_mode(struct st5481_in *in, int mode)
