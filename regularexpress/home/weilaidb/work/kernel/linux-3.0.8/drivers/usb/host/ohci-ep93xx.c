static struct clk *usb_host_clock;
static void ep93xx_start_hc(struct device *dev)
static void ep93xx_stop_hc(struct device *dev)
static int usb_hcd_ep93xx_probe(const struct hc_driver *driver,
struct platform_device *pdev)
static void usb_hcd_ep93xx_remove(struct usb_hcd *hcd,
struct platform_device *pdev)
static int __devinit ohci_ep93xx_start(struct usb_hcd *hcd)
static struct hc_driver ohci_ep93xx_hc_driver = ;
extern int usb_disabled(void);
static int ohci_hcd_ep93xx_drv_probe(struct platform_device *pdev)
static int ohci_hcd_ep93xx_drv_remove(struct platform_device *pdev)
static int ohci_hcd_ep93xx_drv_suspend(struct platform_device *pdev, pm_message_t state)
static int ohci_hcd_ep93xx_drv_resume(struct platform_device *pdev)
static struct platform_driver ohci_hcd_ep93xx_driver = ;
MODULE_ALIAS("platform:ep93xx-ohci");
