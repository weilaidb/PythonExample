#define DVB_USB_LOG_PREFIX "opera"
#define OPERA_READ_MSG 0
#define OPERA_WRITE_MSG 1
#define OPERA_I2C_TUNER 0xd1
#define READ_FX2_REG_REQ  0xba
#define READ_MAC_ADDR 0x08
#define OPERA_WRITE_FX2 0xbb
#define OPERA_TUNER_REQ 0xb1
#define REG_1F_SYMBOLRATE_BYTE0 0x1f
#define REG_20_SYMBOLRATE_BYTE1 0x20
#define REG_21_SYMBOLRATE_BYTE2 0x21
#define ADDR_B600_VOLTAGE_13V (0x02)
#define ADDR_B601_VOLTAGE_18V (0x03)
#define ADDR_B1A6_STREAM_CTRL (0x04)
#define ADDR_B880_READ_REMOTE (0x05)
struct opera1_state ;
struct rc_map_opera_table ;
static int dvb_usb_opera1_debug;
module_param_named(debug, dvb_usb_opera1_debug, int, 0644);
MODULE_PARM_DESC(debug,
"set debugging level (1=info,xfer=2,pll=4,ts=8,err=16,rc=32,fw=64 (or-able))."
DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int opera1_xilinx_rw(struct usb_device *dev, u8 request, u16 value,
u8 * data, u16 len, int flags)
static int opera1_usb_i2c_msgxfer(struct dvb_usb_device *dev, u16 addr,
u8 * buf, u16 len)
static int opera1_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 opera1_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm opera1_i2c_algo = ;
static int opera1_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static int opera1_stv0299_set_symbol_rate(struct dvb_frontend *fe, u32 srate,
u32 ratio)
static u8 opera1_inittab[] = ;
static struct stv0299_config opera1_stv0299_config = ;
static int opera1_frontend_attach(struct dvb_usb_adapter *d)
static int opera1_tuner_attach(struct dvb_usb_adapter *adap)
static int opera1_power_ctrl(struct dvb_usb_device *d, int onoff)
static int opera1_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int opera1_pid_filter(struct dvb_usb_adapter *adap, int index, u16 pid,
int onoff)
static int opera1_pid_filter_control(struct dvb_usb_adapter *adap, int onoff)
static struct rc_map_table rc_map_opera1_table[] = ;
static int opera1_rc_query(struct dvb_usb_device *dev, u32 * event, int *state)
static struct usb_device_id opera1_table[] = ;
MODULE_DEVICE_TABLE(usb, opera1_table);
static int opera1_read_mac_address(struct dvb_usb_device *d, u8 mac[6])
static int opera1_xilinx_load_firmware(struct usb_device *dev,
const char *filename)
static struct dvb_usb_device_properties opera1_properties = ;
static int opera1_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver opera1_driver = ;
static int __init opera1_module_init(void)
static void __exit opera1_module_exit(void)
module_init(opera1_module_init);
module_exit(opera1_module_exit);
MODULE_AUTHOR("Mario Hlawitschka (c) dh1pa@amsat.org");
MODULE_AUTHOR("Marco Gittler (c) g.marco@freenet.de");
MODULE_DESCRIPTION("Driver for Opera1 DVB-S device");
MODULE_VERSION("0.1");
MODULE_LICENSE("GPL");
