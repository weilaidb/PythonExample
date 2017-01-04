int dvb_usb_af9005_debug;
module_param_named(debug, dvb_usb_af9005_debug, int, 0644);
MODULE_PARM_DESC(debug,
"set debugging level (1=info,xfer=2,rc=4,reg=8,i2c=16,fw=32 (or-able))."
DVB_USB_DEBUG_STATUS);
int dvb_usb_af9005_led = 1;
module_param_named(led, dvb_usb_af9005_led, bool, 0644);
MODULE_PARM_DESC(led, "enable led (default: 1).");
static int dvb_usb_af9005_dump_eeprom;
module_param_named(dump_eeprom, dvb_usb_af9005_dump_eeprom, int, 0);
MODULE_PARM_DESC(dump_eeprom, "dump contents of the eeprom.");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int (*rc_decode) (struct dvb_usb_device *d, u8 *data, int len,
u32 *event, int *state);
static void *rc_keys;
static int *rc_keys_size;
u8 regmask[8] = ;
struct af9005_device_state ;
static int af9005_generic_read_write(struct dvb_usb_device *d, u16 reg,
int readwrite, int type, u8 * values, int len)
int af9005_read_ofdm_register(struct dvb_usb_device *d, u16 reg, u8 * value)
int af9005_read_ofdm_registers(struct dvb_usb_device *d, u16 reg,
u8 * values, int len)
int af9005_write_ofdm_register(struct dvb_usb_device *d, u16 reg, u8 value)
int af9005_write_ofdm_registers(struct dvb_usb_device *d, u16 reg,
u8 * values, int len)
int af9005_read_register_bits(struct dvb_usb_device *d, u16 reg, u8 pos,
u8 len, u8 * value)
int af9005_write_register_bits(struct dvb_usb_device *d, u16 reg, u8 pos,
u8 len, u8 value)
static int af9005_usb_read_tuner_registers(struct dvb_usb_device *d,
u16 reg, u8 * values, int len)
static int af9005_usb_write_tuner_registers(struct dvb_usb_device *d,
u16 reg, u8 * values, int len)
int af9005_write_tuner_registers(struct dvb_usb_device *d, u16 reg,
u8 * values, int len)
int af9005_read_tuner_registers(struct dvb_usb_device *d, u16 reg, u8 addr,
u8 * values, int len)
static int af9005_i2c_write(struct dvb_usb_device *d, u8 i2caddr, u8 reg,
u8 * data, int len)
static int af9005_i2c_read(struct dvb_usb_device *d, u8 i2caddr, u8 reg,
u8 * data, int len)
static int af9005_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 af9005_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm af9005_i2c_algo = ;
int af9005_send_command(struct dvb_usb_device *d, u8 command, u8 * wbuf,
int wlen, u8 * rbuf, int rlen)
int af9005_read_eeprom(struct dvb_usb_device *d, u8 address, u8 * values,
int len)
static int af9005_boot_packet(struct usb_device *udev, int type, u8 * reply)
static int af9005_download_firmware(struct usb_device *udev, const struct firmware *fw)
int af9005_led_control(struct dvb_usb_device *d, int onoff)
static int af9005_frontend_attach(struct dvb_usb_adapter *adap)
static int af9005_rc_query(struct dvb_usb_device *d, u32 * event, int *state)
static int af9005_power_ctrl(struct dvb_usb_device *d, int onoff)
static int af9005_pid_filter_control(struct dvb_usb_adapter *adap, int onoff)
static int af9005_pid_filter(struct dvb_usb_adapter *adap, int index,
u16 pid, int onoff)
static int af9005_identify_state(struct usb_device *udev,
struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc,
int *cold)
static struct dvb_usb_device_properties af9005_properties;
static int af9005_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id af9005_usb_table[] = ;
MODULE_DEVICE_TABLE(usb, af9005_usb_table);
static struct dvb_usb_device_properties af9005_properties = ;
static struct usb_driver af9005_usb_driver = ;
static int __init af9005_usb_module_init(void)
static void __exit af9005_usb_module_exit(void)
module_init(af9005_usb_module_init);
module_exit(af9005_usb_module_exit);
MODULE_AUTHOR("Luca Olivetti <luca@ventoso.org>");
MODULE_DESCRIPTION("Driver for Afatech 9005 DVB-T USB1.1 stick");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
