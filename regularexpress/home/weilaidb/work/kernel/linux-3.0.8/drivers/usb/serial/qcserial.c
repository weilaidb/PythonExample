#define DRIVER_AUTHOR "Qualcomm Inc"
#define DRIVER_DESC "Qualcomm USB Serial driver"
static int debug;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver qcdriver = ;
static int qcprobe(struct usb_serial *serial, const struct usb_device_id *id)
static void qc_release(struct usb_serial *serial)
static struct usb_serial_driver qcdevice = ;
static int __init qcinit(void)
static void __exit qcexit(void)
module_init(qcinit);
module_exit(qcexit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL v2");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
