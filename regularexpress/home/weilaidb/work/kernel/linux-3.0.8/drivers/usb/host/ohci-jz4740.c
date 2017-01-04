struct jz4740_ohci_hcd ;
static inline struct jz4740_ohci_hcd *hcd_to_jz4740_hcd(struct usb_hcd *hcd)
static inline struct usb_hcd *jz4740_hcd_to_hcd(struct jz4740_ohci_hcd *jz4740_ohci)
static int ohci_jz4740_start(struct usb_hcd *hcd)
static int ohci_jz4740_set_vbus_power(struct jz4740_ohci_hcd *jz4740_ohci,
bool enabled)
static int ohci_jz4740_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)
static const struct hc_driver ohci_jz4740_hc_driver = ;
static __devinit int jz4740_ohci_probe(struct platform_device *pdev)
static __devexit int jz4740_ohci_remove(struct platform_device *pdev)
static struct platform_driver ohci_hcd_jz4740_driver = ;
MODULE_ALIAS("platform:jz4740-ohci");
