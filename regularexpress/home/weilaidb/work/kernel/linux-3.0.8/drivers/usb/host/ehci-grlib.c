#define GRUSBHC_HCIVERSION 0x0100
static int ehci_grlib_setup(struct usb_hcd *hcd)
static const struct hc_driver ehci_grlib_hc_driver = ;
static int __devinit ehci_hcd_grlib_probe(struct platform_device *op)
static int ehci_hcd_grlib_remove(struct platform_device *op)
static void ehci_hcd_grlib_shutdown(struct platform_device *op)
static const struct of_device_id ehci_hcd_grlib_of_match[] = ;
MODULE_DEVICE_TABLE(of, ehci_hcd_grlib_of_match);
static struct platform_driver ehci_grlib_driver = ;
