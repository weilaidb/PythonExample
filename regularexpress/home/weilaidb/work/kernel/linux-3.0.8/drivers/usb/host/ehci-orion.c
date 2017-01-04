#define rdl(off)	__raw_readl(hcd->regs + (off))
#define wrl(off, val)	__raw_writel((val), hcd->regs + (off))
#define USB_CMD			0x140
#define USB_MODE		0x1a8
#define USB_CAUSE		0x310
#define USB_MASK		0x314
#define USB_WINDOW_CTRL(i)	(0x320 + ((i) << 4))
#define USB_WINDOW_BASE(i)	(0x324 + ((i) << 4))
#define USB_IPG			0x360
#define USB_PHY_PWR_CTRL	0x400
#define USB_PHY_TX_CTRL		0x420
#define USB_PHY_RX_CTRL		0x430
#define USB_PHY_IVREF_CTRL	0x440
#define USB_PHY_TST_GRP_CTRL	0x450
static void orion_usb_phy_v1_setup(struct usb_hcd *hcd)
static int ehci_orion_setup(struct usb_hcd *hcd)
static const struct hc_driver ehci_orion_hc_driver = ;
static void __init
ehci_orion_conf_mbus_windows(struct usb_hcd *hcd,
struct mbus_dram_target_info *dram)
static int __devinit ehci_orion_drv_probe(struct platform_device *pdev)
static int __exit ehci_orion_drv_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:orion-ehci");
static struct platform_driver ehci_orion_driver = ;
