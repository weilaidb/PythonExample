#define OCTEON_OHCI_HCD_NAME "octeon-ohci"
void octeon2_usb_clocks_start(void);
void octeon2_usb_clocks_stop(void);
static void ohci_octeon_hw_start(void)
static void ohci_octeon_hw_stop(void)
static int __devinit ohci_octeon_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_octeon_hc_driver = ;
static int ohci_octeon_drv_probe(struct platform_device *pdev)
static int ohci_octeon_drv_remove(struct platform_device *pdev)
static struct platform_driver ohci_octeon_driver = ;
MODULE_ALIAS("platform:" OCTEON_OHCI_HCD_NAME);
