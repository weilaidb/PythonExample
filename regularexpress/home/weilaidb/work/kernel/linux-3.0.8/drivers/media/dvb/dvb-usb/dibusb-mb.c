DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int dib3000mb_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static int dibusb_dib3000mb_frontend_attach(struct dvb_usb_adapter *adap)
static int dibusb_thomson_tuner_attach(struct dvb_usb_adapter *adap)
static int dibusb_panasonic_tuner_attach(struct dvb_usb_adapter *adap)
static int dibusb_tuner_probe_and_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties dibusb1_1_properties;
static struct dvb_usb_device_properties dibusb1_1_an2235_properties;
static struct dvb_usb_device_properties dibusb2_0b_properties;
static struct dvb_usb_device_properties artec_t1_usb2_properties;
static int dibusb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id dibusb_dib3000mb_table [] = ;
MODULE_DEVICE_TABLE (usb, dibusb_dib3000mb_table);
static struct dvb_usb_device_properties dibusb1_1_properties = ;
static struct dvb_usb_device_properties dibusb1_1_an2235_properties = ;
static struct dvb_usb_device_properties dibusb2_0b_properties = ;
static struct dvb_usb_device_properties artec_t1_usb2_properties = ;
static struct usb_driver dibusb_driver = ;
static int __init dibusb_module_init(void)
static void __exit dibusb_module_exit(void)
module_init (dibusb_module_init);
module_exit (dibusb_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("Driver for DiBcom USB DVB-T devices (DiB3000M-B based)");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
