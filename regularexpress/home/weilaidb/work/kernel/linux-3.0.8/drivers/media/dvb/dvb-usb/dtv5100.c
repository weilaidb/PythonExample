static int dvb_usb_dtv5100_debug;
module_param_named(debug, dvb_usb_dtv5100_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level" DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int dtv5100_i2c_msg(struct dvb_usb_device *d, u8 addr,
u8 *wbuf, u16 wlen, u8 *rbuf, u16 rlen)
static int dtv5100_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 dtv5100_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm dtv5100_i2c_algo = ;
static struct zl10353_config dtv5100_zl10353_config = ;
static int dtv5100_frontend_attach(struct dvb_usb_adapter *adap)
static struct qt1010_config dtv5100_qt1010_config = ;
static int dtv5100_tuner_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties dtv5100_properties;
static int dtv5100_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id dtv5100_table[] = ;
MODULE_DEVICE_TABLE(usb, dtv5100_table);
static struct dvb_usb_device_properties dtv5100_properties = ;
static struct usb_driver dtv5100_driver = ;
static int __init dtv5100_module_init(void)
static void __exit dtv5100_module_exit(void)
module_init(dtv5100_module_init);
module_exit(dtv5100_module_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
