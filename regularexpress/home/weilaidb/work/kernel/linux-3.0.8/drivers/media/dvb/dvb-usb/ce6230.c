static int dvb_usb_ce6230_debug;
module_param_named(debug, dvb_usb_ce6230_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level" DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static struct zl10353_config ce6230_zl10353_config;
static int ce6230_rw_udev(struct usb_device *udev, struct req_t *req)
static int ce6230_ctrl_msg(struct dvb_usb_device *d, struct req_t *req)
static int ce6230_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 ce6230_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm ce6230_i2c_algo = ;
static struct zl10353_config ce6230_zl10353_config = ;
static int ce6230_zl10353_frontend_attach(struct dvb_usb_adapter *adap)
static struct mxl5005s_config ce6230_mxl5003s_config = ;
static int ce6230_mxl5003s_tuner_attach(struct dvb_usb_adapter *adap)
static int ce6230_power_ctrl(struct dvb_usb_device *d, int onoff)
static struct dvb_usb_device_properties ce6230_properties;
static int ce6230_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id ce6230_table[] = ;
MODULE_DEVICE_TABLE(usb, ce6230_table);
static struct dvb_usb_device_properties ce6230_properties = ;
static struct usb_driver ce6230_driver = ;
static int __init ce6230_module_init(void)
static void __exit ce6230_module_exit(void)
module_init(ce6230_module_init);
module_exit(ce6230_module_exit);
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_DESCRIPTION("Driver for Intel CE6230 DVB-T USB2.0");
MODULE_LICENSE("GPL");
