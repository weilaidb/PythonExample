static int dvb_usb_ec168_debug;
module_param_named(debug, dvb_usb_ec168_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level" DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static struct ec100_config ec168_ec100_config;
static int ec168_rw_udev(struct usb_device *udev, struct ec168_req *req)
static int ec168_ctrl_msg(struct dvb_usb_device *d, struct ec168_req *req)
static int ec168_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 ec168_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm ec168_i2c_algo = ;
static struct ec100_config ec168_ec100_config = ;
static int ec168_ec100_frontend_attach(struct dvb_usb_adapter *adap)
static struct mxl5005s_config ec168_mxl5003s_config = ;
static int ec168_mxl5003s_tuner_attach(struct dvb_usb_adapter *adap)
static int ec168_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int ec168_download_firmware(struct usb_device *udev,
const struct firmware *fw)
static int ec168_identify_state(struct usb_device *udev,
struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc, int *cold)
static struct dvb_usb_device_properties ec168_properties;
static int ec168_probe(struct usb_interface *intf,
const struct usb_device_id *id)
#define E3C_EC168_1689                          0
#define E3C_EC168_FFFA                          1
#define E3C_EC168_FFFB                          2
#define E3C_EC168_1001                          3
#define E3C_EC168_1002                          4
static struct usb_device_id ec168_id[] = ;
MODULE_DEVICE_TABLE(usb, ec168_id);
static struct dvb_usb_device_properties ec168_properties = ;
static struct usb_driver ec168_driver = ;
static int __init ec168_module_init(void)
static void __exit ec168_module_exit(void)
module_init(ec168_module_init);
module_exit(ec168_module_exit);
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_DESCRIPTION("E3C EC168 DVB-T USB2.0 driver");
MODULE_LICENSE("GPL");
