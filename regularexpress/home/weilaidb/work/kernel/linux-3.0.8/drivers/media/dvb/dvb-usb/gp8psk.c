static char bcm4500_firmware[] = "dvb-usb-gp8psk-02.fw";
int dvb_usb_gp8psk_debug;
module_param_named(debug,dvb_usb_gp8psk_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,xfer=2,rc=4 (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int gp8psk_get_fw_version(struct dvb_usb_device *d, u8 *fw_vers)
static int gp8psk_get_fpga_version(struct dvb_usb_device *d, u8 *fpga_vers)
static void gp8psk_info(struct dvb_usb_device *d)
int gp8psk_usb_in_op(struct dvb_usb_device *d, u8 req, u16 value, u16 index, u8 *b, int blen)
int gp8psk_usb_out_op(struct dvb_usb_device *d, u8 req, u16 value,
u16 index, u8 *b, int blen)
static int gp8psk_load_bcm4500fw(struct dvb_usb_device *d)
static int gp8psk_power_ctrl(struct dvb_usb_device *d, int onoff)
int gp8psk_bcm4500_reload(struct dvb_usb_device *d)
static int gp8psk_streaming_ctrl(struct dvb_usb_adapter *adap, int onoff)
static int gp8psk_frontend_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties gp8psk_properties;
static int gp8psk_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_device_id gp8psk_usb_table [] = ;
MODULE_DEVICE_TABLE(usb, gp8psk_usb_table);
static struct dvb_usb_device_properties gp8psk_properties = ;
static struct usb_driver gp8psk_usb_driver = ;
static int __init gp8psk_usb_module_init(void)
static void __exit gp8psk_usb_module_exit(void)
module_init(gp8psk_usb_module_init);
module_exit(gp8psk_usb_module_exit);
MODULE_AUTHOR("Alan Nisota <alannisota@gamil.com>");
MODULE_DESCRIPTION("Driver for Genpix DVB-S");
MODULE_VERSION("1.1");
MODULE_LICENSE("GPL");
