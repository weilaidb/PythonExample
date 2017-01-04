MODULE_DESCRIPTION("Driver for SanDisk SDDR-55 SmartMedia reader");
MODULE_AUTHOR("Simon Munton");
MODULE_LICENSE("GPL");
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id sddr55_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, sddr55_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev sddr55_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
#define short_pack(lsb,msb) ( ((u16)(lsb)) | ( ((u16)(msb))<<8 ) )
#define LSB_of(s) ((s)&0xFF)
#define MSB_of(s) ((s)>>8)
#define PAGESIZE  512
#define set_sense_info(sk, asc, ascq)	\
do  while (0)
struct sddr55_card_info ;
#define NOT_ALLOCATED		0xffffffff
#define BAD_BLOCK		0xffff
#define CIS_BLOCK		0x400
#define UNUSED_BLOCK		0x3ff
static int
sddr55_bulk_transport(struct us_data *us, int direction,
unsigned char *data, unsigned int len)
static int sddr55_status(struct us_data *us)
static int sddr55_read_data(struct us_data *us,
unsigned int lba,
unsigned int page,
unsigned short sectors)
static int sddr55_write_data(struct us_data *us,
unsigned int lba,
unsigned int page,
unsigned short sectors)
static int sddr55_read_deviceID(struct us_data *us,
unsigned char *manufacturerID,
unsigned char *deviceID)
static int sddr55_reset(struct us_data *us)
static unsigned long sddr55_get_capacity(struct us_data *us)
static int sddr55_read_map(struct us_data *us)
static void sddr55_card_info_destructor(void *extra)
static int sddr55_transport(struct scsi_cmnd *srb, struct us_data *us)
static int sddr55_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sddr55_driver = ;
static int __init sddr55_init(void)
static void __exit sddr55_exit(void)
module_init(sddr55_init);
module_exit(sddr55_exit);
