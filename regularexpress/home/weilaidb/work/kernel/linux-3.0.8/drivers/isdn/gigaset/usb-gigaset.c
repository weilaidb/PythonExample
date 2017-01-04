#define DRIVER_AUTHOR "Hansjoerg Lipp <hjlipp@web.de>, Stefan Eilers"
#define DRIVER_DESC "USB Driver for Gigaset 307x using M105"
static int startmode = SM_ISDN;
static int cidmode = 1;
module_param(startmode, int, S_IRUGO);
module_param(cidmode, int, S_IRUGO);
MODULE_PARM_DESC(startmode, "start in isdn4linux mode");
MODULE_PARM_DESC(cidmode, "Call-ID mode");
#define GIGASET_MINORS     1
#define GIGASET_MINOR      8
#define GIGASET_MODULENAME "usb_gigaset"
#define GIGASET_DEVNAME    "ttyGU"
#define IF_WRITEBUF 264
#define USB_M105_VENDOR_ID	0x0681
#define USB_M105_PRODUCT_ID	0x0009
static const struct usb_device_id gigaset_table[] = ;
MODULE_DEVICE_TABLE(usb, gigaset_table);
static int gigaset_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void gigaset_disconnect(struct usb_interface *interface);
static int gigaset_suspend(struct usb_interface *intf, pm_message_t message);
static int gigaset_resume(struct usb_interface *intf);
static int gigaset_pre_reset(struct usb_interface *intf);
static struct gigaset_driver *driver;
static struct usb_driver gigaset_usb_driver = ;
struct usb_cardstate ;
static inline unsigned tiocm_to_gigaset(unsigned state)
static int gigaset_set_modem_ctrl(struct cardstate *cs, unsigned old_state,
unsigned new_state)
static int set_value(struct cardstate *cs, u8 req, u16 val)
static int gigaset_baud_rate(struct cardstate *cs, unsigned cflag)
static int gigaset_set_line_ctrl(struct cardstate *cs, unsigned cflag)
static int gigaset_init_bchannel(struct bc_state *bcs)
static int gigaset_close_bchannel(struct bc_state *bcs)
static int write_modem(struct cardstate *cs);
static int send_cb(struct cardstate *cs, struct cmdbuf_t *cb);
static void gigaset_modem_fill(unsigned long data)
static void gigaset_read_int_callback(struct urb *urb)
static void gigaset_write_bulk_callback(struct urb *urb)
static int send_cb(struct cardstate *cs, struct cmdbuf_t *cb)
static int gigaset_write_cmd(struct cardstate *cs, struct cmdbuf_t *cb)
static int gigaset_write_room(struct cardstate *cs)
static int gigaset_chars_in_buffer(struct cardstate *cs)
static int gigaset_brkchars(struct cardstate *cs, const unsigned char buf[6])
static int gigaset_freebcshw(struct bc_state *bcs)
static int gigaset_initbcshw(struct bc_state *bcs)
static void gigaset_reinitbcshw(struct bc_state *bcs)
static void gigaset_freecshw(struct cardstate *cs)
static int gigaset_initcshw(struct cardstate *cs)
static int write_modem(struct cardstate *cs)
static int gigaset_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void gigaset_disconnect(struct usb_interface *interface)
static int gigaset_suspend(struct usb_interface *intf, pm_message_t message)
static int gigaset_resume(struct usb_interface *intf)
static int gigaset_pre_reset(struct usb_interface *intf)
static const struct gigaset_ops ops = ;
static int __init usb_gigaset_init(void)
static void __exit usb_gigaset_exit(void)
module_init(usb_gigaset_init);
module_exit(usb_gigaset_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
