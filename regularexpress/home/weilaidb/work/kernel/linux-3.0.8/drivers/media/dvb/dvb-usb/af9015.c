static int dvb_usb_af9015_debug;
module_param_named(debug, dvb_usb_af9015_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level" DVB_USB_DEBUG_STATUS);
static int dvb_usb_af9015_remote;
module_param_named(remote, dvb_usb_af9015_remote, int, 0644);
MODULE_PARM_DESC(remote, "select remote");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static DEFINE_MUTEX(af9015_usb_mutex);
static struct af9015_config af9015_config;
static struct dvb_usb_device_properties af9015_properties[3];
static int af9015_properties_count = ARRAY_SIZE(af9015_properties);
static struct af9013_config af9015_af9013_config[] = ;
static int af9015_rw_udev(struct usb_device *udev, struct req_t *req)
static int af9015_ctrl_msg(struct dvb_usb_device *d, struct req_t *req)
static int af9015_write_regs(struct dvb_usb_device *d, u16 addr, u8 *val,
u8 len)
static int af9015_write_reg(struct dvb_usb_device *d, u16 addr, u8 val)
static int af9015_read_regs(struct dvb_usb_device *d, u16 addr, u8 *val, u8 len)
static int af9015_read_reg(struct dvb_usb_device *d, u16 addr, u8 *val)
static int af9015_write_reg_i2c(struct dvb_usb_device *d, u8 addr, u16 reg,
u8 val)
static int af9015_read_reg_i2c(struct dvb_usb_device *d, u8 addr, u16 reg,
u8 *val)
static int af9015_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 af9015_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm af9015_i2c_algo = ;
static int af9015_do_reg_bit(struct dvb_usb_device *d, u16 addr, u8 bit, u8 op)
static int af9015_set_reg_bit(struct dvb_usb_device *d, u16 addr, u8 bit)
static int af9015_clear_reg_bit(struct dvb_usb_device *d, u16 addr, u8 bit)
static int af9015_init_endpoint(struct dvb_usb_device *d)
static int af9015_copy_firmware(struct dvb_usb_device *d)
static int af9015_eeprom_hash(struct usb_device *udev)
static int af9015_init(struct dvb_usb_device *d)
static int af9015_pid_filter_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int af9015_pid_filter(struct dvb_usb_adapter *adap, int index, u16 pid,
int onoff)
static int af9015_download_firmware(struct usb_device *udev,
const struct firmware *fw)
struct af9015_rc_setup ;
static char *af9015_rc_setup_match(unsigned int id,
const struct af9015_rc_setup *table)
static const struct af9015_rc_setup af9015_rc_setup_modparam[] = ;
static const struct af9015_rc_setup af9015_rc_setup_hashes[] = ;
static const struct af9015_rc_setup af9015_rc_setup_usbids[] = ;
static void af9015_set_remote_config(struct usb_device *udev,
struct dvb_usb_device_properties *props)
static int af9015_read_config(struct usb_device *udev)
static int af9015_identify_state(struct usb_device *udev,
struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc,
int *cold)
static int af9015_rc_query(struct dvb_usb_device *d)
static int af9015_i2c_init(struct dvb_usb_device *d)
static int af9015_af9013_frontend_attach(struct dvb_usb_adapter *adap)
static struct mt2060_config af9015_mt2060_config = ;
static struct qt1010_config af9015_qt1010_config = ;
static struct tda18271_config af9015_tda18271_config = ;
static struct mxl5005s_config af9015_mxl5003_config = ;
static struct mxl5005s_config af9015_mxl5005_config = ;
static struct mc44s803_config af9015_mc44s803_config = ;
static struct tda18218_config af9015_tda18218_config = ;
static struct mxl5007t_config af9015_mxl5007t_config = ;
static int af9015_tuner_attach(struct dvb_usb_adapter *adap)
static struct usb_device_id af9015_usb_table[] = ;
MODULE_DEVICE_TABLE(usb, af9015_usb_table);
#define AF9015_RC_INTERVAL 500
static struct dvb_usb_device_properties af9015_properties[] = ;
static int af9015_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void af9015_i2c_exit(struct dvb_usb_device *d)
static void af9015_usb_device_exit(struct usb_interface *intf)
static struct usb_driver af9015_usb_driver = ;
static int __init af9015_usb_module_init(void)
static void __exit af9015_usb_module_exit(void)
module_init(af9015_usb_module_init);
module_exit(af9015_usb_module_exit);
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_DESCRIPTION("Driver for Afatech AF9015 DVB-T");
MODULE_LICENSE("GPL");
