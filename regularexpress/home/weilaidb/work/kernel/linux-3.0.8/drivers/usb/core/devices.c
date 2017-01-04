#define ALLOW_SERIAL_NUMBER
static const char format_topo[] =
"\nT:  Bus=%2.2d Lev=%2.2d Prnt=%2.2d Port=%2.2d Cnt=%2.2d Dev#=%3d Spd=%-4s MxCh=%2d\n";
static const char format_string_manufacturer[] =
"S:  Manufacturer=%.100s\n";
static const char format_string_product[] =
"S:  Product=%.100s\n";
static const char format_string_serialnumber[] =
"S:  SerialNumber=%.100s\n";
static const char format_bandwidth[] =
"B:  Alloc=%3d/%3d us (%2d%%), #Int=%3d, #Iso=%3d\n";
static const char format_device1[] =
"D:  Ver=%2x.%02x Cls=%02x(%-5s) Sub=%02x Prot=%02x MxPS=%2d #Cfgs=%3d\n";
static const char format_device2[] =
"P:  Vendor=%04x ProdID=%04x Rev=%2x.%02x\n";
static const char format_config[] =
"C:%c #Ifs=%2d Cfg#=%2d Atr=%02x MxPwr=%3dmA\n";
static const char format_iad[] =
"A:  FirstIf#=%2d IfCount=%2d Cls=%02x(%-5s) Sub=%02x Prot=%02x\n";
static const char format_iface[] =
"I:%c If#=%2d Alt=%2d #EPs=%2d Cls=%02x(%-5s) Sub=%02x Prot=%02x Driver=%s\n";
static const char format_endpt[] =
"E:  Ad=%02x(%c) Atr=%02x(%-4s) MxPS=%4d Ivl=%d%cs\n";
static struct device_connect_event  device_event = ;
struct class_info ;
static const struct class_info clas_info[] = ;
void usbfs_conn_disc_event(void)
static const char *class_decode(const int class)
static char *usb_dump_endpoint_descriptor(int speed, char *start, char *end,
const struct usb_endpoint_descriptor *desc)
static char *usb_dump_interface_descriptor(char *start, char *end,
const struct usb_interface_cache *intfc,
const struct usb_interface *iface,
int setno)
static char *usb_dump_interface(int speed, char *start, char *end,
const struct usb_interface_cache *intfc,
const struct usb_interface *iface, int setno)
static char *usb_dump_iad_descriptor(char *start, char *end,
const struct usb_interface_assoc_descriptor *iad)
static char *usb_dump_config_descriptor(char *start, char *end,
const struct usb_config_descriptor *desc,
int active)
static char *usb_dump_config(int speed, char *start, char *end,
const struct usb_host_config *config, int active)
static char *usb_dump_device_descriptor(char *start, char *end,
const struct usb_device_descriptor *desc)
static char *usb_dump_device_strings(char *start, char *end,
struct usb_device *dev)
static char *usb_dump_desc(char *start, char *end, struct usb_device *dev)
static char *usb_dump_hub_descriptor(char *start, char *end,
const struct usb_hub_descriptor *desc)
static char *usb_dump_string(char *start, char *end,
const struct usb_device *dev, char *id, int index)
static ssize_t usb_device_dump(char __user **buffer, size_t *nbytes,
loff_t *skip_bytes, loff_t *file_offset,
struct usb_device *usbdev, struct usb_bus *bus,
int level, int index, int count)
static ssize_t usb_device_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static unsigned int usb_device_poll(struct file *file,
struct poll_table_struct *wait)
static loff_t usb_device_lseek(struct file *file, loff_t offset, int orig)
const struct file_operations usbfs_devices_fops = ;
