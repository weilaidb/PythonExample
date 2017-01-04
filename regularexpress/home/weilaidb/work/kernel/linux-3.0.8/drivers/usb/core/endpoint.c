struct ep_device ;
#define to_ep_device(_dev) \
container_of(_dev, struct ep_device, dev)
struct device_type usb_ep_device_type = ;
struct ep_attribute ;
#define to_ep_attribute(_attr) \
container_of(_attr, struct ep_attribute, attr)
#define usb_ep_attr(field, format_string)			\
static ssize_t show_ep_##field(struct device *dev,		\
struct device_attribute *attr,	\
char *buf)			\
\
static DEVICE_ATTR(field, S_IRUGO, show_ep_##field, NULL);
usb_ep_attr(bLength, "%02x\n")
usb_ep_attr(bEndpointAddress, "%02x\n")
usb_ep_attr(bmAttributes, "%02x\n")
usb_ep_attr(bInterval, "%02x\n")
static ssize_t show_ep_wMaxPacketSize(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wMaxPacketSize, S_IRUGO, show_ep_wMaxPacketSize, NULL);
static ssize_t show_ep_type(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(type, S_IRUGO, show_ep_type, NULL);
static ssize_t show_ep_interval(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(interval, S_IRUGO, show_ep_interval, NULL);
static ssize_t show_ep_direction(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(direction, S_IRUGO, show_ep_direction, NULL);
static struct attribute *ep_dev_attrs[] = ;
static struct attribute_group ep_dev_attr_grp = ;
static const struct attribute_group *ep_dev_groups[] = ;
static void ep_device_release(struct device *dev)
int usb_create_ep_devs(struct device *parent,
struct usb_host_endpoint *endpoint,
struct usb_device *udev)
void usb_remove_ep_devs(struct usb_host_endpoint *endpoint)
