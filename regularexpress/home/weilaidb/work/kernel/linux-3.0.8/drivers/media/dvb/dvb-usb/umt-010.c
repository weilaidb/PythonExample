DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int umt_mt352_demod_init(struct dvb_frontend *fe)
static int umt_mt352_frontend_attach(struct dvb_usb_adapter *adap)
static int umt_tuner_attach (struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties umt_properties;
static int umt_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id umt_table [] = ;
MODULE_DEVICE_TABLE (usb, umt_table);
static struct dvb_usb_device_properties umt_properties = ;
static struct usb_driver umt_driver = ;
static int __init umt_module_init(void)
static void __exit umt_module_exit(void)
module_init (umt_module_init);
module_exit (umt_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("Driver for HanfTek UMT 010 USB2.0 DVB-T device");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
