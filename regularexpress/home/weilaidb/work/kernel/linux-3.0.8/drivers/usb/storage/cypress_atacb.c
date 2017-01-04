MODULE_DESCRIPTION("SAT support for Cypress USB/ATA bridges with ATACB");
MODULE_AUTHOR("Matthieu Castet <castet.matthieu@free.fr>");
MODULE_LICENSE("GPL");
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id cypress_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, cypress_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev cypress_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
static void cypress_atacb_passthrough(struct scsi_cmnd *srb, struct us_data *us)
static int cypress_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver cypress_driver = ;
static int __init cypress_init(void)
static void __exit cypress_exit(void)
module_init(cypress_init);
module_exit(cypress_exit);
