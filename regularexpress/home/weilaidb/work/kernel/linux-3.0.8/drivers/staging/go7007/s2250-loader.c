#define S2250_LOADER_FIRMWARE	"s2250_loader.fw"
#define S2250_FIRMWARE		"s2250.fw"
typedef struct device_extension_s  device_extension_t, *pdevice_extension_t;
#define USB_s2250loader_MAJOR 240
#define USB_s2250loader_MINOR_BASE 0
#define MAX_DEVICES 256
static pdevice_extension_t s2250_dev_table[MAX_DEVICES];
static DEFINE_MUTEX(s2250_dev_table_mutex);
#define to_s2250loader_dev_common(d) container_of(d, device_extension_t, kref)
static void s2250loader_delete(struct kref *kref)
static int s2250loader_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void s2250loader_disconnect(struct usb_interface *interface)
static const struct usb_device_id s2250loader_ids[] = ;
MODULE_DEVICE_TABLE(usb, s2250loader_ids);
static struct usb_driver s2250loader_driver = ;
static int __init s2250loader_init(void)
module_init(s2250loader_init);
static void __exit s2250loader_cleanup(void)
module_exit(s2250loader_cleanup);
MODULE_AUTHOR("");
MODULE_DESCRIPTION("firmware loader for Sensoray 2250/2251");
MODULE_LICENSE("GPL v2");
