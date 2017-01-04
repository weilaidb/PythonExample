static int dvb_usb_digitv_debug;
module_param_named(debug,dvb_usb_digitv_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=rc (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define deb_rc(args...)   dprintk(dvb_usb_digitv_debug,0x01,args)
static int digitv_ctrl_msg(struct dvb_usb_device *d,
u8 cmd, u8 vv, u8 *wbuf, int wlen, u8 *rbuf, int rlen)
static int digitv_i2c_xfer(struct i2c_adapter *adap,struct i2c_msg msg[],int num)
static u32 digitv_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm digitv_i2c_algo = ;
static int digitv_identify_state (struct usb_device *udev, struct
dvb_usb_device_properties *props, struct dvb_usb_device_description **desc,
int *cold)
static int digitv_mt352_demod_init(struct dvb_frontend *fe)
static struct mt352_config digitv_mt352_config = ;
static int digitv_nxt6000_tuner_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *fep)
static struct nxt6000_config digitv_nxt6000_config = ;
static int digitv_frontend_attach(struct dvb_usb_adapter *adap)
static int digitv_tuner_attach(struct dvb_usb_adapter *adap)
static struct rc_map_table rc_map_digitv_table[] = ;
static int digitv_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static struct dvb_usb_device_properties digitv_properties;
static int digitv_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id digitv_table [] = ;
MODULE_DEVICE_TABLE (usb, digitv_table);
static struct dvb_usb_device_properties digitv_properties = ;
static struct usb_driver digitv_driver = ;
static int __init digitv_module_init(void)
static void __exit digitv_module_exit(void)
module_init (digitv_module_init);
module_exit (digitv_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("Driver for Nebula Electronics uDigiTV DVB-T USB2.0");
MODULE_VERSION("1.0-alpha");
MODULE_LICENSE("GPL");
