int dvb_usb_dtt200u_debug;
module_param_named(debug,dvb_usb_dtt200u_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,xfer=2 (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int dtt200u_power_ctrl(struct dvb_usb_device *d, int onoff)
static int dtt200u_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int dtt200u_pid_filter(struct dvb_usb_adapter *adap, int index, u16 pid, int onoff)
static struct rc_map_table rc_map_dtt200u_table[] = ;
static int dtt200u_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static int dtt200u_frontend_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties dtt200u_properties;
static struct dvb_usb_device_properties wt220u_fc_properties;
static struct dvb_usb_device_properties wt220u_properties;
static struct dvb_usb_device_properties wt220u_zl0353_properties;
static struct dvb_usb_device_properties wt220u_miglia_properties;
static int dtt200u_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id dtt200u_usb_table [] = ;
MODULE_DEVICE_TABLE(usb, dtt200u_usb_table);
static struct dvb_usb_device_properties dtt200u_properties = ;
static struct dvb_usb_device_properties wt220u_properties = ;
static struct dvb_usb_device_properties wt220u_fc_properties = ;
static struct dvb_usb_device_properties wt220u_zl0353_properties = ;
static struct dvb_usb_device_properties wt220u_miglia_properties = ;
static struct usb_driver dtt200u_usb_driver = ;
static int __init dtt200u_usb_module_init(void)
static void __exit dtt200u_usb_module_exit(void)
module_init(dtt200u_usb_module_init);
module_exit(dtt200u_usb_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("Driver for the WideView/Yakumo/Hama/Typhoon/Club3D/Miglia DVB-T USB2.0 devices");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
