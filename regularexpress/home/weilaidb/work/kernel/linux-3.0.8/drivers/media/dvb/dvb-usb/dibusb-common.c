static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info (|-able))." DVB_USB_DEBUG_STATUS);
MODULE_LICENSE("GPL");
#define deb_info(args...) dprintk(debug,0x01,args)
int dibusb_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
EXPORT_SYMBOL(dibusb_streaming_ctrl);
int dibusb_pid_filter(struct dvb_usb_adapter *adap, int index, u16 pid, int onoff)
EXPORT_SYMBOL(dibusb_pid_filter);
int dibusb_pid_filter_ctrl(struct dvb_usb_adapter *adap, int onoff)
EXPORT_SYMBOL(dibusb_pid_filter_ctrl);
int dibusb_power_ctrl(struct dvb_usb_device *d, int onoff)
EXPORT_SYMBOL(dibusb_power_ctrl);
int dibusb2_0_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
EXPORT_SYMBOL(dibusb2_0_streaming_ctrl);
int dibusb2_0_power_ctrl(struct dvb_usb_device *d, int onoff)
EXPORT_SYMBOL(dibusb2_0_power_ctrl);
static int dibusb_i2c_msg(struct dvb_usb_device *d, u8 addr,
u8 *wbuf, u16 wlen, u8 *rbuf, u16 rlen)
static int dibusb_i2c_xfer(struct i2c_adapter *adap,struct i2c_msg msg[],int num)
static u32 dibusb_i2c_func(struct i2c_adapter *adapter)
struct i2c_algorithm dibusb_i2c_algo = ;
EXPORT_SYMBOL(dibusb_i2c_algo);
int dibusb_read_eeprom_byte(struct dvb_usb_device *d, u8 offs, u8 *val)
EXPORT_SYMBOL(dibusb_read_eeprom_byte);
static struct dibx000_agc_config dib3000p_mt2060_agc_config = ;
static struct dib3000mc_config stk3000p_dib3000p_config = ;
static struct dibx000_agc_config dib3000p_panasonic_agc_config = ;
#if defined(CONFIG_DVB_DIB3000MC) || 					\
(defined(CONFIG_DVB_DIB3000MC_MODULE) && defined(MODULE))
static struct dib3000mc_config mod3000p_dib3000p_config = ;
int dibusb_dib3000mc_frontend_attach(struct dvb_usb_adapter *adap)
EXPORT_SYMBOL(dibusb_dib3000mc_frontend_attach);
static struct mt2060_config stk3000p_mt2060_config = ;
int dibusb_dib3000mc_tuner_attach(struct dvb_usb_adapter *adap)
EXPORT_SYMBOL(dibusb_dib3000mc_tuner_attach);
struct rc_map_table rc_map_dibusb_table[] = ;
EXPORT_SYMBOL(rc_map_dibusb_table);
int dibusb_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
EXPORT_SYMBOL(dibusb_rc_query);
