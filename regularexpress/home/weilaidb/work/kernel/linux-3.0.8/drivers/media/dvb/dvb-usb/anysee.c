static int dvb_usb_anysee_debug;
module_param_named(debug, dvb_usb_anysee_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level" DVB_USB_DEBUG_STATUS);
static int dvb_usb_anysee_delsys;
module_param_named(delsys, dvb_usb_anysee_delsys, int, 0644);
MODULE_PARM_DESC(delsys, "select delivery mode (0=DVB-C, 1=DVB-T)");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static DEFINE_MUTEX(anysee_usb_mutex);
static int anysee_ctrl_msg(struct dvb_usb_device *d, u8 *sbuf, u8 slen,
u8 *rbuf, u8 rlen)
static int anysee_read_reg(struct dvb_usb_device *d, u16 reg, u8 *val)
static int anysee_write_reg(struct dvb_usb_device *d, u16 reg, u8 val)
static int anysee_wr_reg_mask(struct dvb_usb_device *d, u16 reg, u8 val,
u8 mask)
static int anysee_get_hw_info(struct dvb_usb_device *d, u8 *id)
static int anysee_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int anysee_led_ctrl(struct dvb_usb_device *d, u8 mode, u8 interval)
static int anysee_ir_ctrl(struct dvb_usb_device *d, u8 onoff)
static int anysee_init(struct dvb_usb_device *d)
static int anysee_master_xfer(struct i2c_adapter *adap, struct i2c_msg *msg,
int num)
static u32 anysee_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm anysee_i2c_algo = ;
static int anysee_mt352_demod_init(struct dvb_frontend *fe)
static struct tda10023_config anysee_tda10023_config = ;
static struct mt352_config anysee_mt352_config = ;
static struct zl10353_config anysee_zl10353_config = ;
static struct zl10353_config anysee_zl10353_tda18212_config2 = ;
static struct zl10353_config anysee_zl10353_tda18212_config = ;
static struct tda10023_config anysee_tda10023_tda18212_config = ;
static struct tda18212_config anysee_tda18212_config = ;
static struct cx24116_config anysee_cx24116_config = ;
static struct stv0900_config anysee_stv0900_config = ;
static struct stv6110_config anysee_stv6110_config = ;
static struct isl6423_config anysee_isl6423_config = ;
static int anysee_frontend_attach(struct dvb_usb_adapter *adap)
static int anysee_tuner_attach(struct dvb_usb_adapter *adap)
static int anysee_rc_query(struct dvb_usb_device *d)
static struct dvb_usb_device_properties anysee_properties;
static int anysee_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id anysee_table[] = ;
MODULE_DEVICE_TABLE(usb, anysee_table);
static struct dvb_usb_device_properties anysee_properties = ;
static struct usb_driver anysee_driver = ;
static int __init anysee_module_init(void)
static void __exit anysee_module_exit(void)
module_init(anysee_module_init);
module_exit(anysee_module_exit);
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_DESCRIPTION("Driver Anysee E30 DVB-C & DVB-T USB2.0");
MODULE_LICENSE("GPL");
