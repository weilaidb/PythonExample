#define ATI_REMOTE_VENDOR_ID		0x0bc7
#define LOLA_REMOTE_PRODUCT_ID		0x0002
#define LOLA2_REMOTE_PRODUCT_ID		0x0003
#define ATI_REMOTE_PRODUCT_ID		0x0004
#define NVIDIA_REMOTE_PRODUCT_ID	0x0005
#define MEDION_REMOTE_PRODUCT_ID	0x0006
#define DRIVER_VERSION	        "2.2.1"
#define DRIVER_AUTHOR           "Torrey Hoffman <thoffman@arnor.net>"
#define DRIVER_DESC             "ATI/X10 RF USB Remote Control"
#define NAME_BUFSIZE      80
#define DATA_BUFSIZE      63
#define FILTER_TIME	60
#define REPEAT_DELAY	500
static unsigned long channel_mask;
module_param(channel_mask, ulong, 0644);
MODULE_PARM_DESC(channel_mask, "Bitmask of remote control channels to ignore");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Enable extra debug messages and information");
static int repeat_filter = FILTER_TIME;
module_param(repeat_filter, int, 0644);
MODULE_PARM_DESC(repeat_filter, "Repeat filter time, default = 60 msec");
static int repeat_delay = REPEAT_DELAY;
module_param(repeat_delay, int, 0644);
MODULE_PARM_DESC(repeat_delay, "Delay before sending repeats, default = 500 msec");
#define dbginfo(dev, format, arg...) do  while (0)
#undef err
#define err(format, arg...) printk(KERN_ERR format , ## arg)
static struct usb_device_id ati_remote_table[] = ;
MODULE_DEVICE_TABLE(usb, ati_remote_table);
#define HI(a)	((unsigned char)((a) >> 8))
#define LO(a)	((unsigned char)((a) & 0xff))
#define SEND_FLAG_IN_PROGRESS	1
#define SEND_FLAG_COMPLETE	2
static char init1[] = ;
static char init2[] = ;
struct ati_remote ;
#define KIND_END        0
#define KIND_LITERAL    1
#define KIND_FILTERED   2
#define KIND_LU         3
#define KIND_RU         4
#define KIND_LD         5
#define KIND_RD         6
#define KIND_ACCEL      7
static const struct   ati_remote_tbl[] = ;
static int ati_remote_open		(struct input_dev *inputdev);
static void ati_remote_close		(struct input_dev *inputdev);
static int ati_remote_sendpacket	(struct ati_remote *ati_remote, u16 cmd, unsigned char *data);
static void ati_remote_irq_out		(struct urb *urb);
static void ati_remote_irq_in		(struct urb *urb);
static void ati_remote_input_report	(struct urb *urb);
static int ati_remote_initialize	(struct ati_remote *ati_remote);
static int ati_remote_probe		(struct usb_interface *interface, const struct usb_device_id *id);
static void ati_remote_disconnect	(struct usb_interface *interface);
static struct usb_driver ati_remote_driver = ;
static void ati_remote_dump(struct device *dev, unsigned char *data,
unsigned int len)
static int ati_remote_open(struct input_dev *inputdev)
static void ati_remote_close(struct input_dev *inputdev)
static void ati_remote_irq_out(struct urb *urb)
static int ati_remote_sendpacket(struct ati_remote *ati_remote, u16 cmd, unsigned char *data)
static int ati_remote_event_lookup(int rem, unsigned char d1, unsigned char d2)
static int ati_remote_compute_accel(struct ati_remote *ati_remote)
static void ati_remote_input_report(struct urb *urb)
static void ati_remote_irq_in(struct urb *urb)
static int ati_remote_alloc_buffers(struct usb_device *udev,
struct ati_remote *ati_remote)
static void ati_remote_free_buffers(struct ati_remote *ati_remote)
static void ati_remote_input_init(struct ati_remote *ati_remote)
static int ati_remote_initialize(struct ati_remote *ati_remote)
static int ati_remote_probe(struct usb_interface *interface, const struct usb_device_id *id)
static void ati_remote_disconnect(struct usb_interface *interface)
static int __init ati_remote_init(void)
static void __exit ati_remote_exit(void)
module_init(ati_remote_init);
module_exit(ati_remote_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
