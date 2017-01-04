#define CONFIG_USB_SERIAL_SAFE_PADDED 0
static int debug;
static int safe = 1;
static int padded = CONFIG_USB_SERIAL_SAFE_PADDED;
#define DRIVER_VERSION "v0.1"
#define DRIVER_AUTHOR "sl@lineo.com, tbr@lineo.com, Johan Hovold <jhovold@gmail.com>"
#define DRIVER_DESC "USB Safe Encapsulated Serial"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static __u16 vendor;
static __u16 product;
module_param(vendor, ushort, 0);
MODULE_PARM_DESC(vendor, "User specified USB idVendor (required)");
module_param(product, ushort, 0);
MODULE_PARM_DESC(product, "User specified USB idProduct (required)");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
module_param(safe, bool, 0);
MODULE_PARM_DESC(safe, "Turn Safe Encapsulation On/Off");
module_param(padded, bool, 0);
MODULE_PARM_DESC(padded, "Pad to full wMaxPacketSize On/Off");
#define CDC_DEVICE_CLASS                        0x02
#define CDC_INTERFACE_CLASS                     0x02
#define CDC_INTERFACE_SUBCLASS                  0x06
#define LINEO_INTERFACE_CLASS                   0xff
#define LINEO_INTERFACE_SUBCLASS_SAFENET        0x01
#define LINEO_SAFENET_CRC                       0x01
#define LINEO_SAFENET_CRC_PADDED                0x02
#define LINEO_INTERFACE_SUBCLASS_SAFESERIAL     0x02
#define LINEO_SAFESERIAL_CRC                    0x01
#define LINEO_SAFESERIAL_CRC_PADDED             0x02
#define MY_USB_DEVICE(vend, prod, dc, ic, isc) \
.match_flags = USB_DEVICE_ID_MATCH_DEVICE | \
USB_DEVICE_ID_MATCH_DEV_CLASS | \
USB_DEVICE_ID_MATCH_INT_CLASS | \
USB_DEVICE_ID_MATCH_INT_SUBCLASS, \
.idVendor = (vend), \
.idProduct = (prod),\
.bDeviceClass = (dc),\
.bInterfaceClass = (ic), \
.bInterfaceSubClass = (isc),
static struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver safe_driver = ;
static const __u16 crc10_table[256] = ;
#define CRC10_INITFCS     0x000
#define CRC10_GOODFCS     0x000
#define CRC10_FCS(fcs, c) ((((fcs) << 8) & 0x3ff) ^ crc10_table[((fcs) >> 2) & 0xff] ^ (c))
static __u16 __inline__ fcs_compute10(unsigned char *sp, int len, __u16 fcs)
static void safe_process_read_urb(struct urb *urb)
static int safe_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size)
static int safe_startup(struct usb_serial *serial)
static struct usb_serial_driver safe_device = ;
static int __init safe_init(void)
static void __exit safe_exit(void)
module_init(safe_init);
module_exit(safe_exit);
