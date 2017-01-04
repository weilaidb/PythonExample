struct spear_ehci ;
#define to_spear_ehci(hcd)	(struct spear_ehci *)hcd_to_ehci(hcd)
static void spear_start_ehci(struct spear_ehci *ehci)
static void spear_stop_ehci(struct spear_ehci *ehci)
static int ehci_spear_setup(struct usb_hcd *hcd)
static const struct hc_driver ehci_spear_hc_driver = ;
static int spear_ehci_hcd_drv_probe(struct platform_device *pdev)
static int spear_ehci_hcd_drv_remove(struct platform_device *pdev)
static struct platform_driver spear_ehci_hcd_driver = ;
MODULE_ALIAS("platform:spear-ehci");
