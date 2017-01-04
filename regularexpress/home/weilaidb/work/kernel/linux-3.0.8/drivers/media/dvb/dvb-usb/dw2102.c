#define USB_PID_DW2102 0x2102
#define USB_PID_DW2104 0x2104
#define USB_PID_DW3101 0x3101
#define USB_PID_CINERGY_S 0x0064
#define USB_PID_TEVII_S630 0xd630
#define USB_PID_TEVII_S650 0xd650
#define USB_PID_TEVII_S660 0xd660
#define USB_PID_TEVII_S480_1 0xd481
#define USB_PID_TEVII_S480_2 0xd482
#define USB_PID_PROF_1100 0xb012
#define DW210X_READ_MSG 0
#define DW210X_WRITE_MSG 1
#define REG_1F_SYMBOLRATE_BYTE0 0x1f
#define REG_20_SYMBOLRATE_BYTE1 0x20
#define REG_21_SYMBOLRATE_BYTE2 0x21
#define DW2102_VOLTAGE_CTRL (0x1800)
#define SU3000_STREAM_CTRL (0x1900)
#define DW2102_RC_QUERY (0x1a00)
#define DW2102_LED_CTRL (0x1b00)
#define	err_str "did not find the firmware file. (%s) " \
"Please see linux/Documentation/dvb/ for more details " \
"on firmware-problems."
struct rc_map_dvb_usb_table_table ;
struct su3000_state ;
struct s6x0_state ;
static int dvb_usb_dw2102_debug;
module_param_named(debug, dvb_usb_dw2102_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info 2=xfer 4=rc(or-able))."
DVB_USB_DEBUG_STATUS);
static int ir_keymap;
module_param_named(keymap, ir_keymap, int, 0644);
MODULE_PARM_DESC(keymap, "set keymap 0=default 1=dvbworld 2=tevii 3=tbs  ..."
" 256=none");
static int demod_probe = 1;
module_param_named(demod, demod_probe, int, 0644);
MODULE_PARM_DESC(demod, "demod to probe (1=cx24116 2=stv0903+stv6110 "
"4=stv0903+stb6100(or-able)).");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int dw210x_op_rw(struct usb_device *dev, u8 request, u16 value,
u16 index, u8 * data, u16 len, int flags)
static int dw2102_i2c_transfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static int dw2102_serit_i2c_transfer(struct i2c_adapter *adap,
struct i2c_msg msg[], int num)
static int dw2102_earda_i2c_transfer(struct i2c_adapter *adap, struct i2c_msg msg[], int num)
static int dw2104_i2c_transfer(struct i2c_adapter *adap, struct i2c_msg msg[], int num)
static int dw3101_i2c_transfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static int s6x0_i2c_transfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static int su3000_i2c_transfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 dw210x_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm dw2102_i2c_algo = ;
static struct i2c_algorithm dw2102_serit_i2c_algo = ;
static struct i2c_algorithm dw2102_earda_i2c_algo = ;
static struct i2c_algorithm dw2104_i2c_algo = ;
static struct i2c_algorithm dw3101_i2c_algo = ;
static struct i2c_algorithm s6x0_i2c_algo = ;
static struct i2c_algorithm su3000_i2c_algo = ;
static int dw210x_read_mac_address(struct dvb_usb_device *d, u8 mac[6])
;
static int s6x0_read_mac_address(struct dvb_usb_device *d, u8 mac[6])
;
static int su3000_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int su3000_power_ctrl(struct dvb_usb_device *d, int i)
static int su3000_read_mac_address(struct dvb_usb_device *d, u8 mac[6])
static int su3000_identify_state(struct usb_device *udev,
struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc,
int *cold)
static int dw210x_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static int s660_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static void dw210x_led_ctrl(struct dvb_frontend *fe, int offon)
static struct stv0299_config sharp_z0194a_config = ;
static struct cx24116_config dw2104_config = ;
static struct si21xx_config serit_sp1511lhb_config = ;
static struct tda10023_config dw3101_tda10023_config = ;
static struct mt312_config zl313_config = ;
static struct ds3000_config dw2104_ds3000_config = ;
static struct stv0900_config dw2104a_stv0900_config = ;
static struct stb6100_config dw2104a_stb6100_config = ;
static struct stv0900_config dw2104_stv0900_config = ;
static struct stv6110_config dw2104_stv6110_config = ;
static struct stv0900_config prof_7500_stv0900_config = ;
static struct ds3000_config su3000_ds3000_config = ;
static int dw2104_frontend_attach(struct dvb_usb_adapter *d)
static struct dvb_usb_device_properties dw2102_properties;
static struct dvb_usb_device_properties dw2104_properties;
static struct dvb_usb_device_properties s6x0_properties;
static int dw2102_frontend_attach(struct dvb_usb_adapter *d)
static int dw3101_frontend_attach(struct dvb_usb_adapter *d)
static int zl100313_frontend_attach(struct dvb_usb_adapter *d)
static int stv0288_frontend_attach(struct dvb_usb_adapter *d)
static int ds3000_frontend_attach(struct dvb_usb_adapter *d)
static int prof_7500_frontend_attach(struct dvb_usb_adapter *d)
static int su3000_frontend_attach(struct dvb_usb_adapter *d)
static int dw2102_tuner_attach(struct dvb_usb_adapter *adap)
static int dw3101_tuner_attach(struct dvb_usb_adapter *adap)
static struct rc_map_table rc_map_dw210x_table[] = ;
static struct rc_map_table rc_map_tevii_table[] = ;
static struct rc_map_table rc_map_tbs_table[] = ;
static struct rc_map_table rc_map_su3000_table[] = ;
static struct rc_map_dvb_usb_table_table keys_tables[] = ;
static int dw2102_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static struct usb_device_id dw2102_table[] = ;
MODULE_DEVICE_TABLE(usb, dw2102_table);
static int dw2102_load_firmware(struct usb_device *dev,
const struct firmware *frmwr)
static struct dvb_usb_device_properties dw2102_properties = ;
static struct dvb_usb_device_properties dw2104_properties = ;
static struct dvb_usb_device_properties dw3101_properties = ;
static struct dvb_usb_device_properties s6x0_properties = ;
struct dvb_usb_device_properties *p1100;
static struct dvb_usb_device_description d1100 = ;
struct dvb_usb_device_properties *s660;
static struct dvb_usb_device_description d660 = ;
static struct dvb_usb_device_description d480_1 = ;
static struct dvb_usb_device_description d480_2 = ;
struct dvb_usb_device_properties *p7500;
static struct dvb_usb_device_description d7500 = ;
static struct dvb_usb_device_properties su3000_properties = ;
static int dw2102_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver dw2102_driver = ;
static int __init dw2102_module_init(void)
static void __exit dw2102_module_exit(void)
module_init(dw2102_module_init);
module_exit(dw2102_module_exit);
MODULE_AUTHOR("Igor M. Liplianin (c) liplianin@me.by");
MODULE_DESCRIPTION("Driver for DVBWorld DVB-S 2101, 2102, DVB-S2 2104,"
" DVB-C 3101 USB2.0,"
" TeVii S600, S630, S650, S660, S480,"
" Prof 1100, 7500 USB2.0,"
" Geniatech SU3000 devices");
MODULE_VERSION("0.1");
MODULE_LICENSE("GPL");
