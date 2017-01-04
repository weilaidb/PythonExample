enum ;
static void usb6fire_comm_init_urb(struct comm_runtime *rt, struct urb *urb,
u8 *buffer, void *context, void(*handler)(struct urb *urb))
static void usb6fire_comm_receiver_handler(struct urb *urb)
static void usb6fire_comm_init_buffer(u8 *buffer, u8 id, u8 request,
u8 reg, u8 vl, u8 vh)
static int usb6fire_comm_send_buffer(u8 *buffer, struct usb_device *dev)
static int usb6fire_comm_write8(struct comm_runtime *rt, u8 request,
u8 reg, u8 value)
static int usb6fire_comm_write16(struct comm_runtime *rt, u8 request,
u8 reg, u8 vl, u8 vh)
int __devinit usb6fire_comm_init(struct sfire_chip *chip)
void usb6fire_comm_abort(struct sfire_chip *chip)
void usb6fire_comm_destroy(struct sfire_chip *chip)
