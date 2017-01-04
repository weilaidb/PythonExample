#define DVB_USB_LOG_PREFIX "technisat-usb2"
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug,
"set debugging level (bit-mask: 1=info,2=eeprom,4=i2c,8=rc)." \
DVB_USB_DEBUG_STATUS);
static int disable_led_control;
module_param(disable_led_control, int, 0444);
MODULE_PARM_DESC(disable_led_control,
"disable LED control of the device "
"(default: 0 - LED control is active).");
struct technisat_usb2_state ;
#define deb_info(args...)    dprintk(debug, 0x01, args)
#define deb_eeprom(args...)  dprintk(debug, 0x02, args)
#define deb_i2c(args...)     dprintk(debug, 0x04, args)
#define deb_rc(args...)      dprintk(debug, 0x08, args)
#define SET_IFCLK_TO_EXTERNAL_TSCLK_VENDOR_REQUEST 0xB3
#define SET_FRONT_END_RESET_VENDOR_REQUEST         0xB4
#define GET_VERSION_INFO_VENDOR_REQUEST            0xB5
#define SET_GREEN_LED_VENDOR_REQUEST               0xB6
#define SET_RED_LED_VENDOR_REQUEST                 0xB7
#define GET_IR_DATA_VENDOR_REQUEST                 0xB8
#define SET_LED_TIMER_DIVIDER_VENDOR_REQUEST       0xB9
#define SET_USB_REENUMERATION                      0xBA
#define I2C_SPEED_100KHZ_BIT 0x40
#define I2C_STATUS_NAK 7
#define I2C_STATUS_OK 8
static int technisat_usb2_i2c_access(struct usb_device *udev,
u8 device_addr, u8 *tx, u8 txlen, u8 *rx, u8 rxlen)
static int technisat_usb2_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg *msg,
int num)
static u32 technisat_usb2_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm technisat_usb2_i2c_algo = ;
enum technisat_usb2_led_state ;
static int technisat_usb2_set_led(struct dvb_usb_device *d, int red, enum technisat_usb2_led_state state)
static int technisat_usb2_set_led_timer(struct dvb_usb_device *d, u8 red, u8 green)
static void technisat_usb2_green_led_control(struct work_struct *work)
static int technisat_usb2_identify_state(struct usb_device *udev,
struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc, int *cold)
static int technisat_usb2_power_ctrl(struct dvb_usb_device *d, int level)
static u8 technisat_usb2_calc_lrc(const u8 *b, u16 length)
static int technisat_usb2_eeprom_lrc_read(struct dvb_usb_device *d,
u16 offset, u8 *b, u16 length, u8 tries)
#define EEPROM_MAC_START 0x3f8
#define EEPROM_MAC_TOTAL 8
static int technisat_usb2_read_mac_address(struct dvb_usb_device *d,
u8 mac[])
static int technisat_usb2_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static struct stv090x_config technisat_usb2_stv090x_config = ;
static struct stv6110x_config technisat_usb2_stv6110x_config = ;
static int technisat_usb2_frontend_attach(struct dvb_usb_adapter *a)
#define NOMINAL_IR_BIT_TRANSITION_TIME_US 889
#define NOMINAL_IR_BIT_TIME_US (2 * NOMINAL_IR_BIT_TRANSITION_TIME_US)
#define FIRMWARE_CLOCK_TICK 83333
#define FIRMWARE_CLOCK_DIVISOR 256
#define IR_PERCENT_TOLERANCE 15
#define NOMINAL_IR_BIT_TRANSITION_TICKS ((NOMINAL_IR_BIT_TRANSITION_TIME_US * 1000 * 1000) / FIRMWARE_CLOCK_TICK)
#define NOMINAL_IR_BIT_TRANSITION_TICK_COUNT (NOMINAL_IR_BIT_TRANSITION_TICKS / FIRMWARE_CLOCK_DIVISOR)
#define NOMINAL_IR_BIT_TIME_TICKS ((NOMINAL_IR_BIT_TIME_US * 1000 * 1000) / FIRMWARE_CLOCK_TICK)
#define NOMINAL_IR_BIT_TIME_TICK_COUNT (NOMINAL_IR_BIT_TIME_TICKS / FIRMWARE_CLOCK_DIVISOR)
#define MINIMUM_IR_BIT_TRANSITION_TICK_COUNT (NOMINAL_IR_BIT_TRANSITION_TICK_COUNT - ((NOMINAL_IR_BIT_TRANSITION_TICK_COUNT * IR_PERCENT_TOLERANCE) / 100))
#define MAXIMUM_IR_BIT_TRANSITION_TICK_COUNT (NOMINAL_IR_BIT_TRANSITION_TICK_COUNT + ((NOMINAL_IR_BIT_TRANSITION_TICK_COUNT * IR_PERCENT_TOLERANCE) / 100))
#define MINIMUM_IR_BIT_TIME_TICK_COUNT (NOMINAL_IR_BIT_TIME_TICK_COUNT - ((NOMINAL_IR_BIT_TIME_TICK_COUNT * IR_PERCENT_TOLERANCE) / 100))
#define MAXIMUM_IR_BIT_TIME_TICK_COUNT (NOMINAL_IR_BIT_TIME_TICK_COUNT + ((NOMINAL_IR_BIT_TIME_TICK_COUNT * IR_PERCENT_TOLERANCE) / 100))
static int technisat_usb2_get_ir(struct dvb_usb_device *d)
static int technisat_usb2_rc_query(struct dvb_usb_device *d)
static struct usb_device_id technisat_usb2_id_table[] = ;
static struct dvb_usb_device_properties technisat_usb2_devices = ;
static int technisat_usb2_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void technisat_usb2_disconnect(struct usb_interface *intf)
static struct usb_driver technisat_usb2_driver = ;
static int __init technisat_usb2_module_init(void)
static void __exit technisat_usb2_module_exit(void)
module_init(technisat_usb2_module_init);
module_exit(technisat_usb2_module_exit);
MODULE_AUTHOR("Patrick Boettcher <pboettcher@kernellabs.com>");
MODULE_DESCRIPTION("Driver for Technisat DVB-S/S2 USB 2.0 device");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
