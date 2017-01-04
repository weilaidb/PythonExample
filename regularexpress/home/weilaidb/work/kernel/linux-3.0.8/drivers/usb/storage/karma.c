MODULE_DESCRIPTION("Driver for Rio Karma");
MODULE_AUTHOR("Bob Copeland <me@bobcopeland.com>, Keith Bennett <keith@mcs.st-and.ac.uk>");
MODULE_LICENSE("GPL");
#define RIO_PREFIX "RIOP\x00"
#define RIO_PREFIX_LEN 5
#define RIO_SEND_LEN 40
#define RIO_RECV_LEN 0x200
#define RIO_ENTER_STORAGE 0x1
#define RIO_LEAVE_STORAGE 0x2
#define RIO_RESET 0xC
struct karma_data ;
static int rio_karma_init(struct us_data *us);
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id karma_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, karma_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev karma_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
static int rio_karma_send_command(char cmd, struct us_data *us)
static int rio_karma_transport(struct scsi_cmnd *srb, struct us_data *us)
static void rio_karma_destructor(void *extra)
static int rio_karma_init(struct us_data *us)
static int karma_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver karma_driver = ;
static int __init karma_init(void)
static void __exit karma_exit(void)
module_init(karma_init);
module_exit(karma_exit);
