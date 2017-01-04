#error "This file is DA8xx bus glue.  Define CONFIG_ARCH_DAVINCI_DA8XX."
#define CFGCHIP2	DA8XX_SYSCFG0_VIRT(DA8XX_CFGCHIP2_REG)
static struct clk *usb11_clk;
static struct clk *usb20_clk;
static volatile u16 ocic_mask;
static void ohci_da8xx_clock(int on)
static void ohci_da8xx_ocic_handler(struct da8xx_ohci_root_hub *hub,
unsigned port)
static int ohci_da8xx_init(struct usb_hcd *hcd)
static void ohci_da8xx_stop(struct usb_hcd *hcd)
static int ohci_da8xx_start(struct usb_hcd *hcd)
static int ohci_da8xx_hub_status_data(struct usb_hcd *hcd, char *buf)
static int ohci_da8xx_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)
static const struct hc_driver ohci_da8xx_hc_driver = ;
static int usb_hcd_da8xx_probe(const struct hc_driver *driver,
struct platform_device *pdev)
static inline void
usb_hcd_da8xx_remove(struct usb_hcd *hcd, struct platform_device *pdev)
static int ohci_hcd_da8xx_drv_probe(struct platform_device *dev)
static int ohci_hcd_da8xx_drv_remove(struct platform_device *dev)
static int ohci_da8xx_suspend(struct platform_device *dev, pm_message_t message)
static int ohci_da8xx_resume(struct platform_device *dev)
static struct platform_driver ohci_hcd_da8xx_driver = ;
