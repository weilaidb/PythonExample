#define USB_VENDOR_ID_LD		0x0f11
#define USB_DEVICE_ID_LD_CASSY		0x1000
#define USB_DEVICE_ID_LD_CASSY2		0x1001
#define USB_DEVICE_ID_LD_POCKETCASSY	0x1010
#define USB_DEVICE_ID_LD_POCKETCASSY2	0x1011
#define USB_DEVICE_ID_LD_MOBILECASSY	0x1020
#define USB_DEVICE_ID_LD_MOBILECASSY2	0x1021
#define USB_DEVICE_ID_LD_MICROCASSYVOLTAGE	0x1031
#define USB_DEVICE_ID_LD_MICROCASSYCURRENT	0x1032
#define USB_DEVICE_ID_LD_MICROCASSYTIME		0x1033
#define USB_DEVICE_ID_LD_MICROCASSYTEMPERATURE	0x1035
#define USB_DEVICE_ID_LD_MICROCASSYPH		0x1038
#define USB_DEVICE_ID_LD_JWM		0x1080
#define USB_DEVICE_ID_LD_DMMP		0x1081
#define USB_DEVICE_ID_LD_UMIP		0x1090
#define USB_DEVICE_ID_LD_UMIC		0x10A0
#define USB_DEVICE_ID_LD_UMIB		0x10B0
#define USB_DEVICE_ID_LD_XRAY		0x1100
#define USB_DEVICE_ID_LD_XRAY2		0x1101
#define USB_DEVICE_ID_LD_XRAYCT		0x1110
#define USB_DEVICE_ID_LD_VIDEOCOM	0x1200
#define USB_DEVICE_ID_LD_MOTOR		0x1210
#define USB_DEVICE_ID_LD_COM3LAB	0x2000
#define USB_DEVICE_ID_LD_TELEPORT	0x2010
#define USB_DEVICE_ID_LD_NETWORKANALYSER 0x2020
#define USB_DEVICE_ID_LD_POWERCONTROL	0x2030
#define USB_DEVICE_ID_LD_MACHINETEST	0x2040
#define USB_DEVICE_ID_LD_MOSTANALYSER	0x2050
#define USB_DEVICE_ID_LD_MOSTANALYSER2	0x2051
#define USB_DEVICE_ID_LD_ABSESP		0x2060
#define USB_DEVICE_ID_LD_AUTODATABUS	0x2070
#define USB_DEVICE_ID_LD_MCT		0x2080
#define USB_DEVICE_ID_LD_HYBRID		0x2090
#define USB_DEVICE_ID_LD_HEATCONTROL	0x20A0
#define USB_VENDOR_ID_VERNIER		0x08f7
#define USB_DEVICE_ID_VERNIER_GOTEMP	0x0002
#define USB_DEVICE_ID_VERNIER_SKIP	0x0003
#define USB_DEVICE_ID_VERNIER_CYCLOPS	0x0004
#define USB_DEVICE_ID_VERNIER_LCSPEC	0x0006
#define USB_LD_MINOR_BASE	0
#define USB_LD_MINOR_BASE	176
static const struct usb_device_id ld_usb_table[] = ;
MODULE_DEVICE_TABLE(usb, ld_usb_table);
MODULE_VERSION("V0.14");
MODULE_AUTHOR("Michael Hund <mhund@ld-didactic.de>");
MODULE_DESCRIPTION("LD USB Driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("LD USB Devices");
static int debug = 1;
static int debug = 0;
#define dbg_info(dev, format, arg...) do  while (0)
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
static int ring_buffer_size = 128;
module_param(ring_buffer_size, int, 0);
MODULE_PARM_DESC(ring_buffer_size, "Read ring buffer size in reports");
static int write_buffer_size = 10;
module_param(write_buffer_size, int, 0);
MODULE_PARM_DESC(write_buffer_size, "Write buffer size in reports");
static int min_interrupt_in_interval = 2;
module_param(min_interrupt_in_interval, int, 0);
MODULE_PARM_DESC(min_interrupt_in_interval, "Minimum interrupt in interval in ms");
static int min_interrupt_out_interval = 2;
module_param(min_interrupt_out_interval, int, 0);
MODULE_PARM_DESC(min_interrupt_out_interval, "Minimum interrupt out interval in ms");
struct ld_usb ;
static struct usb_driver ld_usb_driver;
static void ld_usb_abort_transfers(struct ld_usb *dev)
static void ld_usb_delete(struct ld_usb *dev)
static void ld_usb_interrupt_in_callback(struct urb *urb)
static void ld_usb_interrupt_out_callback(struct urb *urb)
static int ld_usb_open(struct inode *inode, struct file *file)
static int ld_usb_release(struct inode *inode, struct file *file)
static unsigned int ld_usb_poll(struct file *file, poll_table *wait)
static ssize_t ld_usb_read(struct file *file, char __user *buffer, size_t count,
loff_t *ppos)
static ssize_t ld_usb_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations ld_usb_fops = ;
static struct usb_class_driver ld_usb_class = ;
static int ld_usb_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void ld_usb_disconnect(struct usb_interface *intf)
static struct usb_driver ld_usb_driver = ;
static int __init ld_usb_init(void)
static void __exit ld_usb_exit(void)
module_init(ld_usb_init);
module_exit(ld_usb_exit);
