struct nop_usb_xceiv ;
static struct platform_device *pd;
void usb_nop_xceiv_register(void)
EXPORT_SYMBOL(usb_nop_xceiv_register);
void usb_nop_xceiv_unregister(void)
EXPORT_SYMBOL(usb_nop_xceiv_unregister);
static inline struct nop_usb_xceiv *xceiv_to_nop(struct otg_transceiver *x)
static int nop_set_suspend(struct otg_transceiver *x, int suspend)
static int nop_set_peripheral(struct otg_transceiver *x,
struct usb_gadget *gadget)
static int nop_set_host(struct otg_transceiver *x, struct usb_bus *host)
static int __devinit nop_usb_xceiv_probe(struct platform_device *pdev)
static int __devexit nop_usb_xceiv_remove(struct platform_device *pdev)
static struct platform_driver nop_usb_xceiv_driver = ;
static int __init nop_usb_xceiv_init(void)
subsys_initcall(nop_usb_xceiv_init);
static void __exit nop_usb_xceiv_exit(void)
module_exit(nop_usb_xceiv_exit);
MODULE_ALIAS("platform:nop_usb_xceiv");
MODULE_AUTHOR("Texas Instruments Inc");
MODULE_DESCRIPTION("NOP USB Transceiver driver");
MODULE_LICENSE("GPL");
