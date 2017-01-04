int dvb_usb_cinergyt2_debug;
module_param_named(debug, dvb_usb_cinergyt2_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info, xfer=2, rc=4 "
"(or-able)).");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
struct cinergyt2_state ;
static struct dvb_usb_device *cinergyt2_usb_device;
static struct dvb_usb_device_properties cinergyt2_properties;
static int cinergyt2_streaming_ctrl(struct dvb_usb_adapter *adap, int enable)
static int cinergyt2_power_ctrl(struct dvb_usb_device *d, int enable)
static int cinergyt2_frontend_attach(struct dvb_usb_adapter *adap)
static struct rc_map_table rc_map_cinergyt2_table[] = ;
#define RC_REPEAT_DELAY 3
static int repeatable_keys[] = ;
static int cinergyt2_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static int cinergyt2_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id cinergyt2_usb_table[] = ;
MODULE_DEVICE_TABLE(usb, cinergyt2_usb_table);
static struct dvb_usb_device_properties cinergyt2_properties = ;
static struct usb_driver cinergyt2_driver = ;
static int __init cinergyt2_usb_init(void)
static void __exit cinergyt2_usb_exit(void)
module_init(cinergyt2_usb_init);
module_exit(cinergyt2_usb_exit);
MODULE_DESCRIPTION("Terratec Cinergy T2 DVB-T driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tomi Orava");
