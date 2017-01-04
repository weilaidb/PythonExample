#define DRIVER_AUTHOR "Mike Isely <isely@pobox.com>"
#define DRIVER_DESC "Hauppauge WinTV-PVR-USB2 MPEG2 Encoder/Tuner"
#define DRIVER_VERSION "V4L in-tree version"
#define DEFAULT_DEBUG_MASK (PVR2_TRACE_ERROR_LEGS| \
PVR2_TRACE_INFO| \
PVR2_TRACE_STD| \
PVR2_TRACE_TOLERANCE| \
PVR2_TRACE_TRAP| \
0)
int pvrusb2_debug = DEFAULT_DEBUG_MASK;
module_param_named(debug,pvrusb2_debug,int,S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(debug, "Debug trace mask");
static struct pvr2_sysfs_class *class_ptr = NULL;
static void pvr_setup_attach(struct pvr2_context *pvr)
static int pvr_probe(struct usb_interface *intf,
const struct usb_device_id *devid)
static void pvr_disconnect(struct usb_interface *intf)
static struct usb_driver pvr_driver = ;
static int __init pvr_init(void)
static void __exit pvr_exit(void)
module_init(pvr_init);
module_exit(pvr_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
