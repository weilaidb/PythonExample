static const char *usbip_stub_driver_name = "usbip-host";
struct usbip_stub_driver *stub_driver;
static struct sysfs_driver *open_sysfs_stub_driver(void)
#define SYSFS_OPEN_RETRIES 100
static int32_t read_attr_usbip_status(struct usb_device *udev)
static void usbip_exported_device_delete(void *dev)
static struct usbip_exported_device *usbip_exported_device_new(char *sdevpath)
static int check_new(struct dlist *dlist, struct sysfs_device *target)
static void delete_nothing(void *dev __attribute__((unused)))
static int refresh_exported_devices(void)
int usbip_stub_refresh_device_list(void)
int usbip_stub_driver_open(void)
void usbip_stub_driver_close(void)
int usbip_stub_export_device(struct usbip_exported_device *edev, int sockfd)
struct usbip_exported_device *usbip_stub_get_device(int num)
