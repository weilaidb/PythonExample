#define DRIVER_AUTHOR "Takahiro Hirofuchi <hirofuchi@users.sourceforge.net>"
#define DRIVER_DESC "USB/IP Core"
unsigned long usbip_debug_flag = 0xffffffff;
unsigned long usbip_debug_flag;
EXPORT_SYMBOL_GPL(usbip_debug_flag);
struct device_attribute dev_attr_usbip_debug;
EXPORT_SYMBOL_GPL(dev_attr_usbip_debug);
static ssize_t show_flag(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_flag(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
DEVICE_ATTR(usbip_debug, (S_IRUGO | S_IWUSR), show_flag, store_flag);
static void usbip_dump_buffer(char *buff, int bufflen)
static void usbip_dump_pipe(unsigned int p)
static void usbip_dump_usb_device(struct usb_device *udev)
static void usbip_dump_request_type(__u8 rt)
static void usbip_dump_usb_ctrlrequest(struct usb_ctrlrequest *cmd)
void usbip_dump_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usbip_dump_urb);
void usbip_dump_header(struct usbip_header *pdu)
EXPORT_SYMBOL_GPL(usbip_dump_header);
int usbip_xmit(int send, struct socket *sock, char *buf,
int size, int msg_flags)
EXPORT_SYMBOL_GPL(usbip_xmit);
struct socket *sockfd_to_socket(unsigned int sockfd)
EXPORT_SYMBOL_GPL(sockfd_to_socket);
static unsigned int tweak_transfer_flags(unsigned int flags)
static void usbip_pack_cmd_submit(struct usbip_header *pdu, struct urb *urb,
int pack)
static void usbip_pack_ret_submit(struct usbip_header *pdu, struct urb *urb,
int pack)
void usbip_pack_pdu(struct usbip_header *pdu, struct urb *urb, int cmd,
int pack)
EXPORT_SYMBOL_GPL(usbip_pack_pdu);
static void correct_endian_basic(struct usbip_header_basic *base, int send)
static void correct_endian_cmd_submit(struct usbip_header_cmd_submit *pdu,
int send)
static void correct_endian_ret_submit(struct usbip_header_ret_submit *pdu,
int send)
static void correct_endian_cmd_unlink(struct usbip_header_cmd_unlink *pdu,
int send)
static void correct_endian_ret_unlink(struct usbip_header_ret_unlink *pdu,
int send)
void usbip_header_correct_endian(struct usbip_header *pdu, int send)
EXPORT_SYMBOL_GPL(usbip_header_correct_endian);
static void usbip_iso_pakcet_correct_endian(
struct usbip_iso_packet_descriptor *iso,
int send)
static void usbip_pack_iso(struct usbip_iso_packet_descriptor *iso,
struct usb_iso_packet_descriptor *uiso, int pack)
void *usbip_alloc_iso_desc_pdu(struct urb *urb, ssize_t *bufflen)
EXPORT_SYMBOL_GPL(usbip_alloc_iso_desc_pdu);
int usbip_recv_iso(struct usbip_device *ud, struct urb *urb)
EXPORT_SYMBOL_GPL(usbip_recv_iso);
int usbip_pad_iso(struct usbip_device *ud, struct urb *urb)
EXPORT_SYMBOL_GPL(usbip_pad_iso);
int usbip_recv_xbuff(struct usbip_device *ud, struct urb *urb)
EXPORT_SYMBOL_GPL(usbip_recv_xbuff);
static int __init usbip_common_init(void)
static void __exit usbip_common_exit(void)
module_init(usbip_common_init);
module_exit(usbip_common_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(USBIP_VERSION);
