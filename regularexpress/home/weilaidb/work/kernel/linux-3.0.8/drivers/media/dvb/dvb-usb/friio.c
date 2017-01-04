int dvb_usb_friio_debug;
module_param_named(debug, dvb_usb_friio_debug, int, 0644);
MODULE_PARM_DESC(debug,
"set debugging level (1=info,2=xfer,4=rc,8=fe (or-able))."
DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int gl861_i2c_ctrlmsg_data(struct dvb_usb_device *d, u8 addr,
u8 *wbuf, u16 wlen, u8 *rbuf, u16 rlen)
static int gl861_i2c_msg(struct dvb_usb_device *d, u8 addr,
u8 *wbuf, u16 wlen, u8 *rbuf, u16 rlen)
static int gl861_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 gl861_i2c_func(struct i2c_adapter *adapter)
static int friio_ext_ctl(struct dvb_usb_adapter *adap,
u32 sat_color, int lnb_on)
static int friio_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff);
static u8 streaming_init_cmds[][2] = ;
static int cmdlen = sizeof(streaming_init_cmds) / 2;
static int friio_initialize(struct dvb_usb_device *d)
static int friio_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int friio_frontend_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties friio_properties;
static int friio_probe(struct usb_interface *intf,
const struct usb_device_id *id)
struct jdvbt90502_config friio_fe_config = ;
static struct i2c_algorithm gl861_i2c_algo = ;
static struct usb_device_id friio_table[] = ;
MODULE_DEVICE_TABLE(usb, friio_table);
static struct dvb_usb_device_properties friio_properties = ;
static struct usb_driver friio_driver = ;
static int __init friio_module_init(void)
static void __exit friio_module_exit(void)
module_init(friio_module_init);
module_exit(friio_module_exit);
MODULE_AUTHOR("Akihiro Tsukada <tskd2@yahoo.co.jp>");
MODULE_DESCRIPTION("Driver for Friio ISDB-T USB2.0 Receiver");
MODULE_VERSION("0.2");
MODULE_LICENSE("GPL");
