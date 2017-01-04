MODULE_DESCRIPTION("Driver for Lexar \"Jumpshot\" Compact Flash reader");
MODULE_AUTHOR("Jimmie Mayfield <mayfield+usb@sackheads.org>");
MODULE_LICENSE("GPL");
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id jumpshot_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, jumpshot_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev jumpshot_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
struct jumpshot_info ;
static inline int jumpshot_bulk_read(struct us_data *us,
unsigned char *data,
unsigned int len)
static inline int jumpshot_bulk_write(struct us_data *us,
unsigned char *data,
unsigned int len)
static int jumpshot_get_status(struct us_data  *us)
static int jumpshot_read_data(struct us_data *us,
struct jumpshot_info *info,
u32 sector,
u32 sectors)
static int jumpshot_write_data(struct us_data *us,
struct jumpshot_info *info,
u32 sector,
u32 sectors)
static int jumpshot_id_device(struct us_data *us,
struct jumpshot_info *info)
static int jumpshot_handle_mode_sense(struct us_data *us,
struct scsi_cmnd * srb,
int sense_6)
static void jumpshot_info_destructor(void *extra)
static int jumpshot_transport(struct scsi_cmnd *srb, struct us_data *us)
static int jumpshot_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver jumpshot_driver = ;
static int __init jumpshot_init(void)
static void __exit jumpshot_exit(void)
module_init(jumpshot_init);
module_exit(jumpshot_exit);
