int dvb_usb_debug;
module_param_named(debug, dvb_usb_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,xfer=2,pll=4,ts=8,err=16,rc=32,fw=64,mem=128,uxfer=256  (or-able))." DVB_USB_DEBUG_STATUS);
int dvb_usb_disable_rc_polling;
module_param_named(disable_rc_polling, dvb_usb_disable_rc_polling, int, 0644);
MODULE_PARM_DESC(disable_rc_polling, "disable remote control polling (default: 0).");
static int dvb_usb_force_pid_filter_usage;
module_param_named(force_pid_filter_usage, dvb_usb_force_pid_filter_usage, int, 0444);
MODULE_PARM_DESC(force_pid_filter_usage, "force all dvb-usb-devices to use a PID filter, if any (default: 0).");
static int dvb_usb_adapter_init(struct dvb_usb_device *d, short *adapter_nrs)
static int dvb_usb_adapter_exit(struct dvb_usb_device *d)
static int dvb_usb_exit(struct dvb_usb_device *d)
static int dvb_usb_init(struct dvb_usb_device *d, short *adapter_nums)
static struct dvb_usb_device_description *dvb_usb_find_device(struct usb_device *udev, struct dvb_usb_device_properties *props, int *cold)
int dvb_usb_device_power_ctrl(struct dvb_usb_device *d, int onoff)
int dvb_usb_device_init(struct usb_interface *intf,
struct dvb_usb_device_properties *props,
struct module *owner, struct dvb_usb_device **du,
short *adapter_nums)
EXPORT_SYMBOL(dvb_usb_device_init);
void dvb_usb_device_exit(struct usb_interface *intf)
EXPORT_SYMBOL(dvb_usb_device_exit);
MODULE_VERSION("1.0");
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("A library module containing commonly used USB and DVB function USB DVB devices");
MODULE_LICENSE("GPL");
