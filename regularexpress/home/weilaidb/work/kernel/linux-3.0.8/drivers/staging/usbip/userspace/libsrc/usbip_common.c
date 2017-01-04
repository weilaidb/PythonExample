int usbip_use_syslog = 0;
int usbip_use_stderr = 0;
int usbip_use_debug  = 0;
struct speed_string ;
static const struct speed_string speed_strings[] = ;
struct portst_string ;
static struct portst_string portst_strings[] = ;
const char *usbip_status_string(int32_t status)
const char *usbip_speed_string(int num)
#define DBG_UDEV_INTEGER(name)\
dbg("%-20s = %x", to_string(name), (int) udev->name)
#define DBG_UINF_INTEGER(name)\
dbg("%-20s = %x", to_string(name), (int) uinf->name)
void dump_usb_interface(struct usb_interface *uinf)
void dump_usb_device(struct usb_device *udev)
int read_attr_value(struct sysfs_device *dev, const char *name, const char *format)
int read_attr_speed(struct sysfs_device *dev)
#define READ_ATTR(object, type, dev, name, format)\
do  while (0)
int read_usb_device(struct sysfs_device *sdev, struct usb_device *udev)
int read_usb_interface(struct usb_device *udev, int i, struct usb_interface *uinf)
int usbip_names_init(char *f)
void usbip_names_free()
void usbip_names_get_product(char *buff, size_t size, uint16_t vendor, uint16_t product)
void usbip_names_get_class(char *buff, size_t size, uint8_t class, uint8_t subclass, uint8_t protocol)
