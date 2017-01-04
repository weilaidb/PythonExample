int wa_create(struct wahc *wa, struct usb_interface *iface)
EXPORT_SYMBOL_GPL(wa_create);
void __wa_destroy(struct wahc *wa)
EXPORT_SYMBOL_GPL(__wa_destroy);
void wa_reset_all(struct wahc *wa)
MODULE_AUTHOR("Inaky Perez-Gonzalez <inaky.perez-gonzalez@intel.com>");
MODULE_DESCRIPTION("Wireless USB Wire Adapter core");
MODULE_LICENSE("GPL");
