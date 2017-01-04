static int __devinit
cns3xxx_ohci_start(struct usb_hcd *hcd)
static const struct hc_driver cns3xxx_ohci_hc_driver = ;
static int cns3xxx_ohci_probe(struct platform_device *pdev)
static int cns3xxx_ohci_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:cns3xxx-ohci");
static struct platform_driver ohci_hcd_cns3xxx_driver = ;
