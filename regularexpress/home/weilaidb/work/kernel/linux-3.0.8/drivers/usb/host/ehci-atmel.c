static struct clk *iclk, *fclk;
static int clocked;
static void atmel_start_clock(void)
static void atmel_stop_clock(void)
static void atmel_start_ehci(struct platform_device *pdev)
static void atmel_stop_ehci(struct platform_device *pdev)
static int ehci_atmel_setup(struct usb_hcd *hcd)
static const struct hc_driver ehci_atmel_hc_driver = ;
static int __devinit ehci_atmel_drv_probe(struct platform_device *pdev)
static int __devexit ehci_atmel_drv_remove(struct platform_device *pdev)
static struct platform_driver ehci_atmel_driver = ;
