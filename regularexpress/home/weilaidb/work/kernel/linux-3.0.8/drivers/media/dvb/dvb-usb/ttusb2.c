#define DVB_USB_LOG_PREFIX "ttusb2"
static int dvb_usb_ttusb2_debug;
#define deb_info(args...)   dprintk(dvb_usb_ttusb2_debug,0x01,args)
module_param_named(debug,dvb_usb_ttusb2_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
struct ttusb2_state ;
static int ttusb2_msg(struct dvb_usb_device *d, u8 cmd,
u8 *wbuf, int wlen, u8 *rbuf, int rlen)
static int ttusb2_i2c_xfer(struct i2c_adapter *adap,struct i2c_msg msg[],int num)
static u32 ttusb2_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm ttusb2_i2c_algo = ;
#define CMD_GET_IR_CODE     0x1b
static int tt3650_rc_query(struct dvb_usb_device *d)
static int ttusb2_identify_state (struct usb_device *udev, struct
dvb_usb_device_properties *props, struct dvb_usb_device_description **desc,
int *cold)
static int ttusb2_power_ctrl(struct dvb_usb_device *d, int onoff)
static struct tda10086_config tda10086_config = ;
static struct tda10023_config tda10023_config = ;
static int ttusb2_frontend_tda10086_attach(struct dvb_usb_adapter *adap)
static int ttusb2_frontend_tda10023_attach(struct dvb_usb_adapter *adap)
static int ttusb2_tuner_tda827x_attach(struct dvb_usb_adapter *adap)
static int ttusb2_tuner_tda826x_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties ttusb2_properties;
static struct dvb_usb_device_properties ttusb2_properties_s2400;
static struct dvb_usb_device_properties ttusb2_properties_ct3650;
static int ttusb2_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id ttusb2_table [] = ;
MODULE_DEVICE_TABLE (usb, ttusb2_table);
static struct dvb_usb_device_properties ttusb2_properties = ;
static struct dvb_usb_device_properties ttusb2_properties_s2400 = ;
static struct dvb_usb_device_properties ttusb2_properties_ct3650 = ;
static struct usb_driver ttusb2_driver = ;
static int __init ttusb2_module_init(void)
static void __exit ttusb2_module_exit(void)
module_init (ttusb2_module_init);
module_exit (ttusb2_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("Driver for Pinnacle PCTV 400e DVB-S USB2.0");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
