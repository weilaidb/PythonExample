#error "CONFIG_ARCH_AT91 must be defined."
static struct clk *iclk, *fclk, *hclk;
static int clocked;
extern int usb_disabled(void);
static void at91_start_clock(void)
static void at91_stop_clock(void)
static void at91_start_hc(struct platform_device *pdev)
static void at91_stop_hc(struct platform_device *pdev)
static void usb_hcd_at91_remove (struct usb_hcd *, struct platform_device *);
static int usb_hcd_at91_probe(const struct hc_driver *driver,
struct platform_device *pdev)
static void usb_hcd_at91_remove(struct usb_hcd *hcd,
struct platform_device *pdev)
static int __devinit
ohci_at91_start (struct usb_hcd *hcd)
static const struct hc_driver ohci_at91_hc_driver = ;
static int ohci_hcd_at91_drv_probe(struct platform_device *pdev)
static int ohci_hcd_at91_drv_remove(struct platform_device *pdev)
static int
ohci_hcd_at91_drv_suspend(struct platform_device *pdev, pm_message_t mesg)
static int ohci_hcd_at91_drv_resume(struct platform_device *pdev)
#define ohci_hcd_at91_drv_suspend NULL
#define ohci_hcd_at91_drv_resume  NULL
MODULE_ALIAS("platform:at91_ohci");
static struct platform_driver ohci_hcd_at91_driver = ;
