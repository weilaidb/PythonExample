static int dvb_usb_vp7045_debug;
module_param_named(debug,dvb_usb_vp7045_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,xfer=2,rc=4 (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define deb_info(args...) dprintk(dvb_usb_vp7045_debug,0x01,args)
#define deb_xfer(args...) dprintk(dvb_usb_vp7045_debug,0x02,args)
#define deb_rc(args...)   dprintk(dvb_usb_vp7045_debug,0x04,args)
int vp7045_usb_op(struct dvb_usb_device *d, u8 cmd, u8 *out, int outlen, u8 *in, int inlen, int msec)
u8 vp7045_read_reg(struct dvb_usb_device *d, u8 reg)
static int vp7045_power_ctrl(struct dvb_usb_device *d, int onoff)
static struct rc_map_table rc_map_vp7045_table[] = ;
static int vp7045_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static int vp7045_read_eeprom(struct dvb_usb_device *d,u8 *buf, int len, int offset)
static int vp7045_read_mac_addr(struct dvb_usb_device *d,u8 mac[6])
static int vp7045_frontend_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties vp7045_properties;
static int vp7045_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id vp7045_usb_table [] = ;
MODULE_DEVICE_TABLE(usb, vp7045_usb_table);
static struct dvb_usb_device_properties vp7045_properties = ;
static struct usb_driver vp7045_usb_driver = ;
static int __init vp7045_usb_module_init(void)
static void __exit vp7045_usb_module_exit(void)
module_init(vp7045_usb_module_init);
module_exit(vp7045_usb_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("Driver for Twinhan MagicBox/Alpha and DNTV tinyUSB2 DVB-T USB2.0");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
