static int ohci_sm501_init(struct usb_hcd *hcd)
static int ohci_sm501_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_sm501_hc_driver = ;
static int ohci_hcd_sm501_drv_probe(struct platform_device *pdev)
static int ohci_hcd_sm501_drv_remove(struct platform_device *pdev)
static int ohci_sm501_suspend(struct platform_device *pdev, pm_message_t msg)
static int ohci_sm501_resume(struct platform_device *pdev)
#define ohci_sm501_suspend NULL
#define ohci_sm501_resume NULL
static struct platform_driver ohci_hcd_sm501_driver = ;
MODULE_ALIAS("platform:sm501-usb");
