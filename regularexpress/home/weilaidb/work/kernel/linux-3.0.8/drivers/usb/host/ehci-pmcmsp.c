#define USB_CTRL_MODE_STREAM_DISABLE	0x10
#define USB_CTRL_FIFO_THRESH		0x00300000
#define USB_EHCI_REG_USB_MODE		0x68
#define USB_EHCI_REG_USB_FIFO		0x24
#define USB_EHCI_REG_USB_STATUS		0x44
#define USB_EHCI_REG_BIT_STAT_STS	(1<<29)
#define MSP_PIN_USB0_HOST_DEV		49
#define MSP_PIN_USB1_HOST_DEV		50
static void usb_hcd_tdi_set_mode(struct ehci_hcd *ehci)
static int ehci_msp_setup(struct usb_hcd *hcd)
static int usb_hcd_msp_map_regs(struct mspusb_device *dev)
int usb_hcd_msp_probe(const struct hc_driver *driver,
struct platform_device *dev)
void usb_hcd_msp_remove(struct usb_hcd *hcd, struct platform_device *dev)
static irqreturn_t ehci_msp_irq(struct usb_hcd *hcd)
static const struct hc_driver ehci_msp_hc_driver = ;
static int ehci_hcd_msp_drv_probe(struct platform_device *pdev)
static int ehci_hcd_msp_drv_remove(struct platform_device *pdev)
MODULE_ALIAS("pmcmsp-ehci");
static struct platform_driver ehci_hcd_msp_driver = ;
