static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=rc,2=eeprom (|-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define deb_rc(args...) dprintk(debug,0x01,args)
#define deb_ee(args...) dprintk(debug,0x02,args)
static struct rc_map_table rc_map_haupp_table[] = ;
static int nova_t_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static int nova_t_read_mac_address (struct dvb_usb_device *d, u8 mac[6])
static struct dvb_usb_device_properties nova_t_properties;
static int nova_t_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id nova_t_table [] = ;
MODULE_DEVICE_TABLE(usb, nova_t_table);
static struct dvb_usb_device_properties nova_t_properties = ;
static struct usb_driver nova_t_driver = ;
static int __init nova_t_module_init(void)
static void __exit nova_t_module_exit(void)
module_init (nova_t_module_init);
module_exit (nova_t_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("Hauppauge WinTV-NOVA-T usb2");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
