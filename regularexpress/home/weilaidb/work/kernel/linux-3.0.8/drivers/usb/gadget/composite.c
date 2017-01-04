#define USB_BUFSIZ	1024
static struct usb_composite_driver *composite;
static int (*composite_gadget_bind)(struct usb_composite_dev *cdev);
static ushort idVendor;
module_param(idVendor, ushort, 0);
MODULE_PARM_DESC(idVendor, "USB Vendor ID");
static ushort idProduct;
module_param(idProduct, ushort, 0);
MODULE_PARM_DESC(idProduct, "USB Product ID");
static ushort bcdDevice;
module_param(bcdDevice, ushort, 0);
MODULE_PARM_DESC(bcdDevice, "USB Device version (BCD)");
static char *iManufacturer;
module_param(iManufacturer, charp, 0);
MODULE_PARM_DESC(iManufacturer, "USB Manufacturer string");
static char *iProduct;
module_param(iProduct, charp, 0);
MODULE_PARM_DESC(iProduct, "USB Product string");
static char *iSerialNumber;
module_param(iSerialNumber, charp, 0);
MODULE_PARM_DESC(iSerialNumber, "SerialNumber string");
static char composite_manufacturer[50];
int usb_add_function(struct usb_configuration *config,
struct usb_function *function)
int usb_function_deactivate(struct usb_function *function)
int usb_function_activate(struct usb_function *function)
int usb_interface_id(struct usb_configuration *config,
struct usb_function *function)
static int config_buf(struct usb_configuration *config,
enum usb_device_speed speed, void *buf, u8 type)
static int config_desc(struct usb_composite_dev *cdev, unsigned w_value)
static int count_configs(struct usb_composite_dev *cdev, unsigned type)
static void device_qual(struct usb_composite_dev *cdev)
static void reset_config(struct usb_composite_dev *cdev)
static int set_config(struct usb_composite_dev *cdev,
const struct usb_ctrlrequest *ctrl, unsigned number)
int usb_add_config(struct usb_composite_dev *cdev,
struct usb_configuration *config,
int (*bind)(struct usb_configuration *))
static void collect_langs(struct usb_gadget_strings **sp, __le16 *buf)
static int lookup_string(
struct usb_gadget_strings	**sp,
void				*buf,
u16				language,
int				id
)
static int get_string(struct usb_composite_dev *cdev,
void *buf, u16 language, int id)
int usb_string_id(struct usb_composite_dev *cdev)
int usb_string_ids_tab(struct usb_composite_dev *cdev, struct usb_string *str)
int usb_string_ids_n(struct usb_composite_dev *c, unsigned n)
static void composite_setup_complete(struct usb_ep *ep, struct usb_request *req)
static int
composite_setup(struct usb_gadget *gadget, const struct usb_ctrlrequest *ctrl)
static void composite_disconnect(struct usb_gadget *gadget)
static ssize_t composite_show_suspended(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(suspended, 0444, composite_show_suspended, NULL);
static void
composite_unbind(struct usb_gadget *gadget)
static u8 override_id(struct usb_composite_dev *cdev, u8 *desc)
static int composite_bind(struct usb_gadget *gadget)
static void
composite_suspend(struct usb_gadget *gadget)
static void
composite_resume(struct usb_gadget *gadget)
static struct usb_gadget_driver composite_driver = ;
int usb_composite_probe(struct usb_composite_driver *driver,
int (*bind)(struct usb_composite_dev *cdev))
void usb_composite_unregister(struct usb_composite_driver *driver)
void usb_composite_setup_continue(struct usb_composite_dev *cdev)
