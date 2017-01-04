static int dvb_usb_au6610_debug;
module_param_named(debug, dvb_usb_au6610_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level" DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int au6610_usb_msg(struct dvb_usb_device *d, u8 operation, u8 addr,
u8 *wbuf, u16 wlen, u8 *rbuf, u16 rlen)
static int au6610_i2c_msg(struct dvb_usb_device *d, u8 addr,
u8 *wbuf, u16 wlen, u8 *rbuf, u16 rlen)
static int au6610_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 au6610_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm au6610_i2c_algo = ;
static struct zl10353_config au6610_zl10353_config = ;
static int au6610_zl10353_frontend_attach(struct dvb_usb_adapter *adap)
static struct qt1010_config au6610_qt1010_config = ;
static int au6610_qt1010_tuner_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties au6610_properties;
static int au6610_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id au6610_table [] = ;
MODULE_DEVICE_TABLE(usb, au6610_table);
static struct dvb_usb_device_properties au6610_properties = ;
static struct usb_driver au6610_driver = ;
static int __init au6610_module_init(void)
static void __exit au6610_module_exit(void)
module_init(au6610_module_init);
module_exit(au6610_module_exit);
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_DESCRIPTION("Driver for Alcor Micro AU6610 DVB-T USB2.0");
MODULE_VERSION("0.1");
MODULE_LICENSE("GPL");
