static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (rc=1 (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define deb_rc(args...)   dprintk(debug,0x01,args)
static int a800_power_ctrl(struct dvb_usb_device *d, int onoff)
static int a800_identify_state(struct usb_device *udev, struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc, int *cold)
static struct rc_map_table rc_map_a800_table[] = ;
static int a800_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static struct dvb_usb_device_properties a800_properties;
static int a800_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id a800_table [] = ;
MODULE_DEVICE_TABLE (usb, a800_table);
static struct dvb_usb_device_properties a800_properties = ;
static struct usb_driver a800_driver = ;
static int __init a800_module_init(void)
static void __exit a800_module_exit(void)
module_init (a800_module_init);
module_exit (a800_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("AVerMedia AverTV DVB-T USB 2.0 (A800)");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
