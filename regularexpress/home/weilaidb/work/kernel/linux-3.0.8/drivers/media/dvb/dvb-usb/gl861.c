static int dvb_usb_gl861_debug;
module_param_named(debug, dvb_usb_gl861_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=rc (or-able))."
DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int gl861_i2c_msg(struct dvb_usb_device *d, u8 addr,
u8 *wbuf, u16 wlen, u8 *rbuf, u16 rlen)
static int gl861_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 gl861_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm gl861_i2c_algo = ;
static struct zl10353_config gl861_zl10353_config = ;
static int gl861_frontend_attach(struct dvb_usb_adapter *adap)
static struct qt1010_config gl861_qt1010_config = ;
static int gl861_tuner_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties gl861_properties;
static int gl861_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id gl861_table [] = ;
MODULE_DEVICE_TABLE(usb, gl861_table);
static struct dvb_usb_device_properties gl861_properties = ;
static struct usb_driver gl861_driver = ;
static int __init gl861_module_init(void)
static void __exit gl861_module_exit(void)
module_init(gl861_module_init);
module_exit(gl861_module_exit);
MODULE_AUTHOR("Carl Lundqvist <comabug@gmail.com>");
MODULE_DESCRIPTION("Driver MSI Mega Sky 580 DVB-T USB2.0 / GL861");
MODULE_VERSION("0.1");
MODULE_LICENSE("GPL");
