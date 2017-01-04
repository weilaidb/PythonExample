DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static struct dvb_usb_device_properties dibusb_mc_properties;
static int dibusb_mc_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id dibusb_dib3000mc_table [] = ;
MODULE_DEVICE_TABLE (usb, dibusb_dib3000mc_table);
static struct dvb_usb_device_properties dibusb_mc_properties = ;
static struct usb_driver dibusb_mc_driver = ;
static int __init dibusb_mc_module_init(void)
static void __exit dibusb_mc_module_exit(void)
module_init (dibusb_mc_module_init);
module_exit (dibusb_mc_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("Driver for DiBcom USB2.0 DVB-T (DiB3000M-C/P based) devices");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
