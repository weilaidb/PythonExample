static int usb_serial_device_match(struct device *dev,
struct device_driver *drv)
static ssize_t show_port_number(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(port_number, S_IRUGO, show_port_number, NULL);
static int usb_serial_device_probe(struct device *dev)
static int usb_serial_device_remove(struct device *dev)
static ssize_t store_new_id(struct device_driver *driver,
const char *buf, size_t count)
static struct driver_attribute drv_attrs[] = ;
static void free_dynids(struct usb_serial_driver *drv)
static struct driver_attribute drv_attrs[] = ;
static inline void free_dynids(struct usb_serial_driver *drv)
struct bus_type usb_serial_bus_type = ;
int usb_serial_bus_register(struct usb_serial_driver *driver)
void usb_serial_bus_deregister(struct usb_serial_driver *driver)
