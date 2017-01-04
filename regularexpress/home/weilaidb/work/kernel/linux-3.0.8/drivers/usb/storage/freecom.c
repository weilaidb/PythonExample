MODULE_DESCRIPTION("Driver for Freecom USB/IDE adaptor");
MODULE_AUTHOR("David Brown <usb-storage@davidb.org>");
MODULE_LICENSE("GPL");
static void pdump (void *, int);
#define ERR_STAT		0x01
#define DRQ_STAT		0x08
struct freecom_cb_wrap ;
struct freecom_xfer_wrap  __attribute__ ((packed));
struct freecom_ide_out ;
struct freecom_ide_in ;
struct freecom_status ;
#define FCM_INT_STATUS		0x02
#define FCM_STATUS_BUSY		0x80
#define FCM_PACKET_ATAPI	0x21
#define FCM_PACKET_STATUS	0x20
#define FCM_PACKET_INPUT	0x81
#define FCM_PACKET_OUTPUT	0x01
#define FCM_PACKET_IDE_WRITE	0x40
#define FCM_PACKET_IDE_READ	0xC0
#define FCM_PACKET_LENGTH		64
#define FCM_STATUS_PACKET_LENGTH	4
static int init_freecom(struct us_data *us);
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id freecom_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, freecom_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev freecom_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
static int
freecom_readdata (struct scsi_cmnd *srb, struct us_data *us,
unsigned int ipipe, unsigned int opipe, int count)
static int
freecom_writedata (struct scsi_cmnd *srb, struct us_data *us,
int unsigned ipipe, unsigned int opipe, int count)
static int freecom_transport(struct scsi_cmnd *srb, struct us_data *us)
static int init_freecom(struct us_data *us)
static int usb_stor_freecom_reset(struct us_data *us)
static void pdump (void *ibuffer, int length)
static int freecom_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver freecom_driver = ;
static int __init freecom_init(void)
static void __exit freecom_exit(void)
module_init(freecom_init);
module_exit(freecom_exit);
