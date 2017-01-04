MODULE_DESCRIPTION("Driver for Datafab USB Compact Flash reader");
MODULE_AUTHOR("Jimmie Mayfield <mayfield+datafab@sackheads.org>");
MODULE_LICENSE("GPL");
struct datafab_info ;
static int datafab_determine_lun(struct us_data *us,
struct datafab_info *info);
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id datafab_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, datafab_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev datafab_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
static inline int
datafab_bulk_read(struct us_data *us, unsigned char *data, unsigned int len)
static inline int
datafab_bulk_write(struct us_data *us, unsigned char *data, unsigned int len)
static int datafab_read_data(struct us_data *us,
struct datafab_info *info,
u32 sector,
u32 sectors)
static int datafab_write_data(struct us_data *us,
struct datafab_info *info,
u32 sector,
u32 sectors)
static int datafab_determine_lun(struct us_data *us,
struct datafab_info *info)
static int datafab_id_device(struct us_data *us,
struct datafab_info *info)
static int datafab_handle_mode_sense(struct us_data *us,
struct scsi_cmnd * srb,
int sense_6)
static void datafab_info_destructor(void *extra)
static int datafab_transport(struct scsi_cmnd *srb, struct us_data *us)
static int datafab_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver datafab_driver = ;
static int __init datafab_init(void)
static void __exit datafab_exit(void)
module_init(datafab_init);
module_exit(datafab_exit);
