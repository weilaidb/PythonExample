static int dvb_usb_m920x_debug;
module_param_named(debug,dvb_usb_m920x_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=rc (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int m920x_set_filter(struct dvb_usb_device *d, int type, int idx, int pid);
static inline int m920x_read(struct usb_device *udev, u8 request, u16 value,
u16 index, void *data, int size)
static inline int m920x_write(struct usb_device *udev, u8 request,
u16 value, u16 index)
static int m920x_init(struct dvb_usb_device *d, struct m920x_inits *rc_seq)
static int m920x_init_ep(struct usb_interface *intf)
static int m920x_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static int m920x_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msg[], int num)
static u32 m920x_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm m920x_i2c_algo = ;
static int m920x_set_filter(struct dvb_usb_device *d, int type, int idx, int pid)
static int m920x_update_filters(struct dvb_usb_adapter *adap)
static int m920x_pid_filter_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int m920x_pid_filter(struct dvb_usb_adapter *adap, int index, u16 pid, int onoff)
static int m920x_firmware_download(struct usb_device *udev, const struct firmware *fw)
static int m920x_identify_state(struct usb_device *udev,
struct dvb_usb_device_properties *props,
struct dvb_usb_device_description **desc,
int *cold)
static int m920x_mt352_demod_init(struct dvb_frontend *fe)
static struct mt352_config m920x_mt352_config = ;
static struct tda1004x_config m920x_tda10046_08_config = ;
static struct tda1004x_config m920x_tda10046_0b_config = ;
static struct qt1010_config m920x_qt1010_config = ;
static int m920x_mt352_frontend_attach(struct dvb_usb_adapter *adap)
static int m920x_tda10046_08_frontend_attach(struct dvb_usb_adapter *adap)
static int m920x_tda10046_0b_frontend_attach(struct dvb_usb_adapter *adap)
static int m920x_qt1010_tuner_attach(struct dvb_usb_adapter *adap)
static int m920x_tda8275_60_tuner_attach(struct dvb_usb_adapter *adap)
static int m920x_tda8275_61_tuner_attach(struct dvb_usb_adapter *adap)
static int m920x_fmd1216me_tuner_attach(struct dvb_usb_adapter *adap)
static struct m920x_inits megasky_rc_init [] = ;
static struct m920x_inits tvwalkertwin_rc_init [] = ;
static struct m920x_inits pinnacle310e_init[] = ;
static struct rc_map_table rc_map_megasky_table[] = ;
static struct rc_map_table rc_map_tvwalkertwin_table[] = ;
static struct rc_map_table rc_map_pinnacle310e_table[] = ;
static struct dvb_usb_device_properties megasky_properties;
static struct dvb_usb_device_properties digivox_mini_ii_properties;
static struct dvb_usb_device_properties tvwalkertwin_properties;
static struct dvb_usb_device_properties dposh_properties;
static struct dvb_usb_device_properties pinnacle_pctv310e_properties;
static int m920x_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id m920x_table [] = ;
MODULE_DEVICE_TABLE (usb, m920x_table);
static struct dvb_usb_device_properties megasky_properties = ;
static struct dvb_usb_device_properties digivox_mini_ii_properties = ;
static struct dvb_usb_device_properties tvwalkertwin_properties = ;
static struct dvb_usb_device_properties dposh_properties = ;
static struct dvb_usb_device_properties pinnacle_pctv310e_properties = ;
static struct usb_driver m920x_driver = ;
static int __init m920x_module_init(void)
static void __exit m920x_module_exit(void)
module_init (m920x_module_init);
module_exit (m920x_module_exit);
MODULE_AUTHOR("Aapo Tahkola <aet@rasterburn.org>");
MODULE_DESCRIPTION("DVB Driver for ULI M920x");
MODULE_VERSION("0.1");
MODULE_LICENSE("GPL");
