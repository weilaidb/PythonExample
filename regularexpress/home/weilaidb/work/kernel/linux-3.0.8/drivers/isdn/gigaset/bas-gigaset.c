#define DRIVER_AUTHOR "Tilman Schmidt <tilman@imap.cc>, Hansjoerg Lipp <hjlipp@web.de>, Stefan Eilers"
#define DRIVER_DESC "USB Driver for Gigaset 307x"
static int startmode = SM_ISDN;
static int cidmode = 1;
module_param(startmode, int, S_IRUGO);
module_param(cidmode, int, S_IRUGO);
MODULE_PARM_DESC(startmode, "start in isdn4linux mode");
MODULE_PARM_DESC(cidmode, "Call-ID mode");
#define GIGASET_MINORS     1
#define GIGASET_MINOR      16
#define GIGASET_MODULENAME "bas_gigaset"
#define GIGASET_DEVNAME    "ttyGB"
#define IF_WRITEBUF 264
#define IP_MSGSIZE 3
#define USB_GIGA_VENDOR_ID      0x0681
#define USB_3070_PRODUCT_ID     0x0001
#define USB_3075_PRODUCT_ID     0x0002
#define USB_SX303_PRODUCT_ID    0x0021
#define USB_SX353_PRODUCT_ID    0x0022
static const struct usb_device_id gigaset_table[] = ;
MODULE_DEVICE_TABLE(usb, gigaset_table);
static int gigaset_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void gigaset_disconnect(struct usb_interface *interface);
static int gigaset_suspend(struct usb_interface *intf, pm_message_t message);
static int gigaset_resume(struct usb_interface *intf);
static int gigaset_pre_reset(struct usb_interface *intf);
static int gigaset_post_reset(struct usb_interface *intf);
static int atread_submit(struct cardstate *, int);
static void stopurbs(struct bas_bc_state *);
static int req_submit(struct bc_state *, int, int, int);
static int atwrite_submit(struct cardstate *, unsigned char *, int);
static int start_cbsend(struct cardstate *);
struct bas_cardstate ;
#define BS_ATOPEN	0x001
#define BS_B1OPEN	0x002
#define BS_B2OPEN	0x004
#define BS_ATREADY	0x008
#define BS_INIT		0x010
#define BS_ATTIMER	0x020
#define BS_ATRDPEND	0x040
#define BS_ATWRPEND	0x080
#define BS_SUSPEND	0x100
#define BS_RESETTING	0x200
static struct gigaset_driver *driver;
static struct usb_driver gigaset_usb_driver = ;
static char *get_usb_rcmsg(int rc)
static char *get_usb_statmsg(int status)
static inline char *usb_pipetype_str(int pipe)
static inline void dump_urb(enum debuglevel level, const char *tag,
struct urb *urb)
static int gigaset_set_modem_ctrl(struct cardstate *cs, unsigned old_state,
unsigned new_state)
static int gigaset_baud_rate(struct cardstate *cs, unsigned cflag)
static int gigaset_set_line_ctrl(struct cardstate *cs, unsigned cflag)
static inline int update_basstate(struct bas_cardstate *ucs,
int set, int clear)
static inline void error_hangup(struct bc_state *bcs)
static inline void error_reset(struct cardstate *cs)
static void check_pending(struct bas_cardstate *ucs)
static void cmd_in_timeout(unsigned long data)
static void read_ctrl_callback(struct urb *urb)
static int atread_submit(struct cardstate *cs, int timeout)
static void int_in_work(struct work_struct *work)
static void int_in_resubmit(unsigned long data)
static void read_int_callback(struct urb *urb)
static void read_iso_callback(struct urb *urb)
static void write_iso_callback(struct urb *urb)
static int starturbs(struct bc_state *bcs)
static void stopurbs(struct bas_bc_state *ubc)
static int submit_iso_write_urb(struct isow_urbctx_t *ucx)
static void write_iso_tasklet(unsigned long data)
static void read_iso_tasklet(unsigned long data)
static void req_timeout(unsigned long data)
static void write_ctrl_callback(struct urb *urb)
static int req_submit(struct bc_state *bcs, int req, int val, int timeout)
static int gigaset_init_bchannel(struct bc_state *bcs)
static int gigaset_close_bchannel(struct bc_state *bcs)
static void complete_cb(struct cardstate *cs)
static void write_command_callback(struct urb *urb)
static void atrdy_timeout(unsigned long data)
static int atwrite_submit(struct cardstate *cs, unsigned char *buf, int len)
static int start_cbsend(struct cardstate *cs)
static int gigaset_write_cmd(struct cardstate *cs, struct cmdbuf_t *cb)
static int gigaset_write_room(struct cardstate *cs)
static int gigaset_chars_in_buffer(struct cardstate *cs)
static int gigaset_brkchars(struct cardstate *cs, const unsigned char buf[6])
static int gigaset_freebcshw(struct bc_state *bcs)
static int gigaset_initbcshw(struct bc_state *bcs)
static void gigaset_reinitbcshw(struct bc_state *bcs)
static void gigaset_freecshw(struct cardstate *cs)
static int gigaset_initcshw(struct cardstate *cs)
static void freeurbs(struct cardstate *cs)
static int gigaset_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void gigaset_disconnect(struct usb_interface *interface)
static int gigaset_suspend(struct usb_interface *intf, pm_message_t message)
static int gigaset_resume(struct usb_interface *intf)
static int gigaset_pre_reset(struct usb_interface *intf)
static int gigaset_post_reset(struct usb_interface *intf)
static const struct gigaset_ops gigops = ;
static int __init bas_gigaset_init(void)
static void __exit bas_gigaset_exit(void)
module_init(bas_gigaset_init);
module_exit(bas_gigaset_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
