#error "This file is PNX8550 bus glue.  CONFIG_PNX8550 must be defined."
extern int usb_disabled(void);
static void pnx8550_start_hc(struct platform_device *dev)
static void pnx8550_stop_hc(struct platform_device *dev)
int usb_hcd_pnx8550_probe (const struct hc_driver *driver,
struct platform_device *dev)
void usb_hcd_pnx8550_remove (struct usb_hcd *hcd, struct platform_device *dev)
static int __devinit
ohci_pnx8550_start (struct usb_hcd *hcd)
static const struct hc_driver ohci_pnx8550_hc_driver = ;
static int ohci_hcd_pnx8550_drv_probe(struct platform_device *pdev)
static int ohci_hcd_pnx8550_drv_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:pnx8550-ohci");
static struct platform_driver ohci_hcd_pnx8550_driver = ;
