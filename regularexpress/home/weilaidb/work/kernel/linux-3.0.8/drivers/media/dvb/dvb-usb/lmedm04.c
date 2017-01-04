#define DVB_USB_LOG_PREFIX "LME2510(C)"
static int dvb_usb_lme2510_debug;
#define l_dprintk(var, level, args...) do  while (0)
#define deb_info(level, args...) l_dprintk(dvb_usb_lme2510_debug, level, args)
#define debug_data_snipet(level, name, p) \
deb_info(level, name" (%02x%02x%02x%02x%02x%02x%02x%02x)", \
*p, *(p+1), *(p+2), *(p+3), *(p+4), \
*(p+5), *(p+6), *(p+7));
module_param_named(debug, dvb_usb_lme2510_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info (or-able))."
DVB_USB_DEBUG_STATUS);
static int dvb_usb_lme2510_firmware;
module_param_named(firmware, dvb_usb_lme2510_firmware, int, 0644);
MODULE_PARM_DESC(firmware, "set default firmware 0=Sharp7395 1=LG");
static int pid_filter;
module_param_named(pid, pid_filter, int, 0644);
MODULE_PARM_DESC(pid, "set default 0=on 1=off");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define TUNER_DEFAULT	0x0
#define TUNER_LG	0x1
#define TUNER_S7395	0x2
#define TUNER_S0194	0x3
struct lme2510_state ;
static int lme2510_bulk_write(struct usb_device *dev,
u8 *snd, int len, u8 pipe)
static int lme2510_bulk_read(struct usb_device *dev,
u8 *rev, int len, u8 pipe)
static int lme2510_usb_talk(struct dvb_usb_device *d,
u8 *wbuf, int wlen, u8 *rbuf, int rlen)
static int lme2510_stream_restart(struct dvb_usb_device *d)
static int lme2510_enable_pid(struct dvb_usb_device *d, u8 index, u16 pid_out)
static void lme2510_int_response(struct urb *lme_urb)
static int lme2510_int_read(struct dvb_usb_adapter *adap)
static int lme2510_pid_filter_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int lme2510_pid_filter(struct dvb_usb_adapter *adap, int index, u16 pid,
int onoff)
static int lme2510_return_status(struct usb_device *dev)
static int lme2510_msg(struct dvb_usb_device *d,
u8 *wbuf, int wlen, u8 *rbuf, int rlen)
static int lme2510_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 lme2510_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm lme2510_i2c_algo = ;
static int lme2510_identify_state(struct usb_device *udev,
struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc,
int *cold)
static int lme2510_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static u8 check_sum(u8 *p, u8 len)
static int lme2510_download_firmware(struct usb_device *dev,
const struct firmware *fw)
static void lme_coldreset(struct usb_device *dev)
static int lme_firmware_switch(struct usb_device *udev, int cold)
static int lme2510_kill_urb(struct usb_data_stream *stream)
static struct tda10086_config tda10086_config = ;
static struct stv0288_config lme_config = ;
static struct ix2505v_config lme_tuner = ;
static struct stv0299_config sharp_z0194_config = ;
static int dm04_lme2510_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static int lme_name(struct dvb_usb_adapter *adap)
static int dm04_lme2510_frontend_attach(struct dvb_usb_adapter *adap)
static int dm04_lme2510_tuner(struct dvb_usb_adapter *adap)
static int lme2510_powerup(struct dvb_usb_device *d, int onoff)
static struct dvb_usb_device_properties lme2510_properties;
static struct dvb_usb_device_properties lme2510c_properties;
static int lme2510_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id lme2510_table[] = ;
MODULE_DEVICE_TABLE(usb, lme2510_table);
static struct dvb_usb_device_properties lme2510_properties = ;
static struct dvb_usb_device_properties lme2510c_properties = ;
static void *lme2510_exit_int(struct dvb_usb_device *d)
static void lme2510_exit(struct usb_interface *intf)
static struct usb_driver lme2510_driver = ;
static int __init lme2510_module_init(void)
static void __exit lme2510_module_exit(void)
module_init(lme2510_module_init);
module_exit(lme2510_module_exit);
MODULE_AUTHOR("Malcolm Priestley <tvboxspy@gmail.com>");
MODULE_DESCRIPTION("LME2510(C) DVB-S USB2.0");
MODULE_VERSION("1.88");
MODULE_LICENSE("GPL");
