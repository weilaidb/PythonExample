static int usb_hcd_ppc_soc_probe(const struct hc_driver *driver,
struct platform_device *pdev)
static void usb_hcd_ppc_soc_remove(struct usb_hcd *hcd,
struct platform_device *pdev)
static int __devinit
ohci_ppc_soc_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_ppc_soc_hc_driver = ;
static int ohci_hcd_ppc_soc_drv_probe(struct platform_device *pdev)
static int ohci_hcd_ppc_soc_drv_remove(struct platform_device *pdev)
static struct platform_driver ohci_hcd_ppc_soc_driver = ;
MODULE_ALIAS("platform:ppc-soc-ohci");
