static int dvb_usb_cxusb_debug;
module_param_named(debug, dvb_usb_cxusb_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=rc (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define deb_info(args...)   dprintk(dvb_usb_cxusb_debug, 0x03, args)
#define deb_i2c(args...)    dprintk(dvb_usb_cxusb_debug, 0x02, args)
static int cxusb_ctrl_msg(struct dvb_usb_device *d,
u8 cmd, u8 *wbuf, int wlen, u8 *rbuf, int rlen)
static void cxusb_gpio_tuner(struct dvb_usb_device *d, int onoff)
static int cxusb_bluebird_gpio_rw(struct dvb_usb_device *d, u8 changemask,
u8 newval)
static void cxusb_bluebird_gpio_pulse(struct dvb_usb_device *d, u8 pin, int low)
static void cxusb_nano2_led(struct dvb_usb_device *d, int onoff)
static int cxusb_d680_dmb_gpio_tuner(struct dvb_usb_device *d,
u8 addr, int onoff)
static int cxusb_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[],
int num)
static u32 cxusb_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm cxusb_i2c_algo = ;
static int cxusb_power_ctrl(struct dvb_usb_device *d, int onoff)
static int cxusb_aver_power_ctrl(struct dvb_usb_device *d, int onoff)
static int cxusb_bluebird_power_ctrl(struct dvb_usb_device *d, int onoff)
static int cxusb_nano2_power_ctrl(struct dvb_usb_device *d, int onoff)
static int cxusb_d680_dmb_power_ctrl(struct dvb_usb_device *d, int onoff)
static int cxusb_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int cxusb_aver_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static void cxusb_d680_dmb_drain_message(struct dvb_usb_device *d)
static void cxusb_d680_dmb_drain_video(struct dvb_usb_device *d)
static int cxusb_d680_dmb_streaming_ctrl(
struct dvb_usb_adapter *adap, int onoff)
static int cxusb_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static int cxusb_bluebird2_rc_query(struct dvb_usb_device *d, u32 *event,
int *state)
static int cxusb_d680_dmb_rc_query(struct dvb_usb_device *d, u32 *event,
int *state)
static struct rc_map_table rc_map_dvico_mce_table[] = ;
static struct rc_map_table rc_map_dvico_portable_table[] = ;
static struct rc_map_table rc_map_d680_dmb_table[] = ;
static int cxusb_dee1601_demod_init(struct dvb_frontend* fe)
static int cxusb_mt352_demod_init(struct dvb_frontend* fe)
static struct cx22702_config cxusb_cx22702_config = ;
static struct lgdt330x_config cxusb_lgdt3303_config = ;
static struct lgdt330x_config cxusb_aver_lgdt3303_config = ;
static struct mt352_config cxusb_dee1601_config = ;
static struct zl10353_config cxusb_zl10353_dee1601_config = ;
static struct mt352_config cxusb_mt352_config = ;
static struct zl10353_config cxusb_zl10353_xc3028_config = ;
static struct zl10353_config cxusb_zl10353_xc3028_config_no_i2c_gate = ;
static struct mt352_config cxusb_mt352_xc3028_config = ;
static struct mxl5005s_config aver_a868r_tuner = ;
static struct mxl5005s_config d680_dmb_tuner = ;
static struct max2165_config mygica_d689_max2165_cfg = ;
static int cxusb_fmd1216me_tuner_attach(struct dvb_usb_adapter *adap)
static int cxusb_dee1601_tuner_attach(struct dvb_usb_adapter *adap)
static int cxusb_lgz201_tuner_attach(struct dvb_usb_adapter *adap)
static int cxusb_dtt7579_tuner_attach(struct dvb_usb_adapter *adap)
static int cxusb_lgh064f_tuner_attach(struct dvb_usb_adapter *adap)
static int dvico_bluebird_xc2028_callback(void *ptr, int component,
int command, int arg)
static int cxusb_dvico_xc3028_tuner_attach(struct dvb_usb_adapter *adap)
static int cxusb_mxl5003s_tuner_attach(struct dvb_usb_adapter *adap)
static int cxusb_d680_dmb_tuner_attach(struct dvb_usb_adapter *adap)
static int cxusb_mygica_d689_tuner_attach(struct dvb_usb_adapter *adap)
static int cxusb_cx22702_frontend_attach(struct dvb_usb_adapter *adap)
static int cxusb_lgdt3303_frontend_attach(struct dvb_usb_adapter *adap)
static int cxusb_aver_lgdt3303_frontend_attach(struct dvb_usb_adapter *adap)
static int cxusb_mt352_frontend_attach(struct dvb_usb_adapter *adap)
static int cxusb_dee1601_frontend_attach(struct dvb_usb_adapter *adap)
static int cxusb_dualdig4_frontend_attach(struct dvb_usb_adapter *adap)
static struct dibx000_agc_config dib7070_agc_config = ;
static struct dibx000_bandwidth_config dib7070_bw_config_12_mhz = ;
static struct dib7000p_config cxusb_dualdig4_rev2_config = ;
static int cxusb_dualdig4_rev2_frontend_attach(struct dvb_usb_adapter *adap)
static int dib7070_tuner_reset(struct dvb_frontend *fe, int onoff)
static int dib7070_tuner_sleep(struct dvb_frontend *fe, int onoff)
static struct dib0070_config dib7070p_dib0070_config = ;
struct dib0700_adapter_state ;
static int dib7070_set_param_override(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int cxusb_dualdig4_rev2_tuner_attach(struct dvb_usb_adapter *adap)
static int cxusb_nano2_frontend_attach(struct dvb_usb_adapter *adap)
static struct lgs8gxx_config d680_lgs8gl5_cfg = ;
static int cxusb_d680_dmb_frontend_attach(struct dvb_usb_adapter *adap)
static struct atbm8830_config mygica_d689_atbm8830_cfg = ;
static int cxusb_mygica_d689_frontend_attach(struct dvb_usb_adapter *adap)
static int bluebird_fx2_identify_state(struct usb_device *udev,
struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc,
int *cold)
static const int dvico_firmware_id_offsets[] = ;
static int bluebird_patch_dvico_firmware_download(struct usb_device *udev,
const struct firmware *fw)
static struct dvb_usb_device_properties cxusb_medion_properties;
static struct dvb_usb_device_properties cxusb_bluebird_lgh064f_properties;
static struct dvb_usb_device_properties cxusb_bluebird_dee1601_properties;
static struct dvb_usb_device_properties cxusb_bluebird_lgz201_properties;
static struct dvb_usb_device_properties cxusb_bluebird_dtt7579_properties;
static struct dvb_usb_device_properties cxusb_bluebird_dualdig4_properties;
static struct dvb_usb_device_properties cxusb_bluebird_dualdig4_rev2_properties;
static struct dvb_usb_device_properties cxusb_bluebird_nano2_properties;
static struct dvb_usb_device_properties cxusb_bluebird_nano2_needsfirmware_properties;
static struct dvb_usb_device_properties cxusb_aver_a868r_properties;
static struct dvb_usb_device_properties cxusb_d680_dmb_properties;
static struct dvb_usb_device_properties cxusb_mygica_d689_properties;
static int cxusb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id cxusb_table [] = ;
MODULE_DEVICE_TABLE (usb, cxusb_table);
static struct dvb_usb_device_properties cxusb_medion_properties = ;
static struct dvb_usb_device_properties cxusb_bluebird_lgh064f_properties = ;
static struct dvb_usb_device_properties cxusb_bluebird_dee1601_properties = ;
static struct dvb_usb_device_properties cxusb_bluebird_lgz201_properties = ;
static struct dvb_usb_device_properties cxusb_bluebird_dtt7579_properties = ;
static struct dvb_usb_device_properties cxusb_bluebird_dualdig4_properties = ;
static struct dvb_usb_device_properties cxusb_bluebird_nano2_properties = ;
static struct dvb_usb_device_properties cxusb_bluebird_nano2_needsfirmware_properties = ;
static struct dvb_usb_device_properties cxusb_aver_a868r_properties = ;
static
struct dvb_usb_device_properties cxusb_bluebird_dualdig4_rev2_properties = ;
static struct dvb_usb_device_properties cxusb_d680_dmb_properties = ;
static struct dvb_usb_device_properties cxusb_mygica_d689_properties = ;
static struct usb_driver cxusb_driver = ;
static int __init cxusb_module_init(void)
static void __exit cxusb_module_exit(void)
module_init (cxusb_module_init);
module_exit (cxusb_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_AUTHOR("Michael Krufky <mkrufky@linuxtv.org>");
MODULE_AUTHOR("Chris Pascoe <c.pascoe@itee.uq.edu.au>");
MODULE_DESCRIPTION("Driver for Conexant USB2.0 hybrid reference design");
MODULE_VERSION("1.0-alpha");
MODULE_LICENSE("GPL");
