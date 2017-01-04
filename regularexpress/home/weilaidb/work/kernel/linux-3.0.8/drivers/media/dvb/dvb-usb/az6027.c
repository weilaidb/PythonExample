int dvb_usb_az6027_debug;
module_param_named(debug, dvb_usb_az6027_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,xfer=2,rc=4 (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
struct az6027_device_state ;
static const struct stb0899_s1_reg az6027_stb0899_s1_init_1[] = ;
static const struct stb0899_s1_reg az6027_stb0899_s1_init_3[] = ;
struct stb0899_config az6027_stb0899_config = ;
struct stb6100_config az6027_stb6100_config = ;
int az6027_usb_in_op(struct dvb_usb_device *d, u8 req, u16 value, u16 index, u8 *b, int blen)
static int az6027_usb_out_op(struct dvb_usb_device *d,
u8 req,
u16 value,
u16 index,
u8 *b,
int blen)
static int az6027_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static struct rc_map_table rc_map_az6027_table[] = ;
static int az6027_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static int az6027_ci_read_attribute_mem(struct dvb_ca_en50221 *ca,
int slot,
int address)
static int az6027_ci_write_attribute_mem(struct dvb_ca_en50221 *ca,
int slot,
int address,
u8 value)
static int az6027_ci_read_cam_control(struct dvb_ca_en50221 *ca,
int slot,
u8 address)
static int az6027_ci_write_cam_control(struct dvb_ca_en50221 *ca,
int slot,
u8 address,
u8 value)
static int CI_CamReady(struct dvb_ca_en50221 *ca, int slot)
static int az6027_ci_slot_reset(struct dvb_ca_en50221 *ca, int slot)
static int az6027_ci_slot_shutdown(struct dvb_ca_en50221 *ca, int slot)
static int az6027_ci_slot_ts_enable(struct dvb_ca_en50221 *ca, int slot)
static int az6027_ci_poll_slot_status(struct dvb_ca_en50221 *ca, int slot, int open)
static void az6027_ci_uninit(struct dvb_usb_device *d)
static int az6027_ci_init(struct dvb_usb_adapter *a)
static int az6027_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static int az6027_frontend_poweron(struct dvb_usb_adapter *adap)
static int az6027_frontend_reset(struct dvb_usb_adapter *adap)
static int az6027_frontend_tsbypass(struct dvb_usb_adapter *adap, int onoff)
static int az6027_frontend_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties az6027_properties;
static void az6027_usb_disconnect(struct usb_interface *intf)
static int az6027_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static int az6027_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[], int num)
static u32 az6027_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm az6027_i2c_algo = ;
int az6027_identify_state(struct usb_device *udev,
struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc,
int *cold)
static struct usb_device_id az6027_usb_table[] = ;
MODULE_DEVICE_TABLE(usb, az6027_usb_table);
static struct dvb_usb_device_properties az6027_properties = ;
static struct usb_driver az6027_usb_driver = ;
static int __init az6027_usb_module_init(void)
static void __exit az6027_usb_module_exit(void)
module_init(az6027_usb_module_init);
module_exit(az6027_usb_module_exit);
MODULE_AUTHOR("Adams Xu <Adams.xu@azwave.com.cn>");
MODULE_DESCRIPTION("Driver for AZUREWAVE DVB-S/S2 USB2.0 (AZ6027)");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
