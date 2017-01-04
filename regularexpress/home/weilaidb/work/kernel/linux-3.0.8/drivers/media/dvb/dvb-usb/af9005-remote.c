static int dvb_usb_af9005_remote_debug;
module_param_named(debug, dvb_usb_af9005_remote_debug, int, 0644);
MODULE_PARM_DESC(debug,
"enable (1) or disable (0) debug messages."
DVB_USB_DEBUG_STATUS);
#define deb_decode(args...)   dprintk(dvb_usb_af9005_remote_debug,0x01,args)
struct rc_map_table rc_map_af9005_table[] = ;
int rc_map_af9005_table_size = ARRAY_SIZE(rc_map_af9005_table);
static int repeatable_keys[] = ;
int af9005_rc_decode(struct dvb_usb_device *d, u8 * data, int len, u32 * event,
int *state)
EXPORT_SYMBOL(rc_map_af9005_table);
EXPORT_SYMBOL(rc_map_af9005_table_size);
EXPORT_SYMBOL(af9005_rc_decode);
MODULE_AUTHOR("Luca Olivetti <luca@ventoso.org>");
MODULE_DESCRIPTION
("Standard remote control decoder for Afatech 9005 DVB-T USB1.1 stick");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
