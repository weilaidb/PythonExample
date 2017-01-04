static int stub_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void stub_disconnect(struct usb_interface *interface);
static int stub_pre_reset(struct usb_interface *interface);
static int stub_post_reset(struct usb_interface *interface);
static struct usb_device_id stub_table[] = ;
MODULE_DEVICE_TABLE(usb, stub_table);
struct usb_driver stub_driver = ;
static ssize_t show_status(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(usbip_status, S_IRUGO, show_status, NULL);
static ssize_t store_sockfd(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(usbip_sockfd, S_IWUSR, NULL, store_sockfd);
static int stub_add_files(struct device *dev)
static void stub_remove_files(struct device *dev)
static void stub_shutdown_connection(struct usbip_device *ud)
static void stub_device_reset(struct usbip_device *ud)
static void stub_device_unusable(struct usbip_device *ud)
static struct stub_device *stub_device_alloc(struct usb_device *udev,
struct usb_interface *interface)
static int stub_device_free(struct stub_device *sdev)
static int stub_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void shutdown_busid(struct bus_id_priv *busid_priv)
static void stub_disconnect(struct usb_interface *interface)
int stub_pre_reset(struct usb_interface *interface)
int stub_post_reset(struct usb_interface *interface)
