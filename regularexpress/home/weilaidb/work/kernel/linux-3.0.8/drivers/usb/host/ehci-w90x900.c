#define	ENPHY		(0x01<<8)
#define PHY0_CTR	(0xA4)
#define PHY1_CTR	(0xA8)
static int __devinit usb_w90x900_probe(const struct hc_driver *driver,
struct platform_device *pdev)
static
void usb_w90x900_remove(struct usb_hcd *hcd, struct platform_device *pdev)
static const struct hc_driver ehci_w90x900_hc_driver = ;
static int __devinit ehci_w90x900_probe(struct platform_device *pdev)
static int __devexit ehci_w90x900_remove(struct platform_device *pdev)
static struct platform_driver ehci_hcd_w90x900_driver = ;
MODULE_AUTHOR("Wan ZongShun <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("w90p910 usb ehci driver!");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:w90p910-ehci");
