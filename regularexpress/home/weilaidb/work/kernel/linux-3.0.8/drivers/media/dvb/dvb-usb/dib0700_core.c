int dvb_usb_dib0700_debug;
module_param_named(debug,dvb_usb_dib0700_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,2=fw,4=fwdata,8=data (or-able))." DVB_USB_DEBUG_STATUS);
static int nb_packet_buffer_size = 21;
module_param(nb_packet_buffer_size, int, 0644);
MODULE_PARM_DESC(nb_packet_buffer_size,
"Set the dib0700 driver data buffer size. This parameter "
"corresponds to the number of TS packets. The actual size of "
"the data buffer corresponds to this parameter "
"multiplied by 188 (default: 21)");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
int dib0700_get_version(struct dvb_usb_device *d, u32 *hwversion,
u32 *romversion, u32 *ramversion, u32 *fwtype)
static int dib0700_ctrl_wr(struct dvb_usb_device *d, u8 *tx, u8 txlen)
int dib0700_ctrl_rd(struct dvb_usb_device *d, u8 *tx, u8 txlen, u8 *rx, u8 rxlen)
int dib0700_set_gpio(struct dvb_usb_device *d, enum dib07x0_gpios gpio, u8 gpio_dir, u8 gpio_val)
static int dib0700_set_usb_xfer_len(struct dvb_usb_device *d, u16 nb_ts_packets)
static int dib0700_i2c_xfer_new(struct i2c_adapter *adap, struct i2c_msg *msg,
int num)
static int dib0700_i2c_xfer_legacy(struct i2c_adapter *adap,
struct i2c_msg *msg, int num)
static int dib0700_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg *msg,
int num)
static u32 dib0700_i2c_func(struct i2c_adapter *adapter)
struct i2c_algorithm dib0700_i2c_algo = ;
int dib0700_identify_state(struct usb_device *udev, struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc, int *cold)
static int dib0700_set_clock(struct dvb_usb_device *d, u8 en_pll,
u8 pll_src, u8 pll_range, u8 clock_gpio3, u16 pll_prediv,
u16 pll_loopdiv, u16 free_div, u16 dsuScaler)
int dib0700_set_i2c_speed(struct dvb_usb_device *d, u16 scl_kHz)
int dib0700_ctrl_clock(struct dvb_usb_device *d, u32 clk_MHz, u8 clock_out_gp3)
static int dib0700_jumpram(struct usb_device *udev, u32 address)
int dib0700_download_firmware(struct usb_device *udev, const struct firmware *fw)
int dib0700_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
int dib0700_change_protocol(struct rc_dev *rc, u64 rc_type)
#define RC_REPEAT_DELAY_V1_20 10
struct dib0700_rc_response ;
#define RC_MSG_SIZE_V1_20 6
static void dib0700_rc_urb_completion(struct urb *purb)
int dib0700_rc_setup(struct dvb_usb_device *d)
static int dib0700_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver dib0700_driver = ;
static int __init dib0700_module_init(void)
static void __exit dib0700_module_exit(void)
module_init (dib0700_module_init);
module_exit (dib0700_module_exit);
MODULE_AUTHOR("Patrick Boettcher <pboettcher@dibcom.fr>");
MODULE_DESCRIPTION("Driver for devices based on DiBcom DiB0700 - USB bridge");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
