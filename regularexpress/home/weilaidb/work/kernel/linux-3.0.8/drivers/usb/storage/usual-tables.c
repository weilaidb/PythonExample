#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
#define COMPLIANT_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
#define USUAL_DEV(useProto, useTrans, useType) \
struct usb_device_id usb_storage_usb_ids[] = ;
EXPORT_SYMBOL_GPL(usb_storage_usb_ids);
MODULE_DEVICE_TABLE(usb, usb_storage_usb_ids);
#undef UNUSUAL_DEV
#undef COMPLIANT_DEV
#undef USUAL_DEV
struct ignore_entry ;
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
static struct ignore_entry ignore_ids[] = ;
#undef UNUSUAL_DEV
int usb_usual_ignore_device(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_usual_ignore_device);
