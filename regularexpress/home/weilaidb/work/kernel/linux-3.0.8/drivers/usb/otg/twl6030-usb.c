#define USB_VENDOR_ID_LSB		0x00
#define USB_VENDOR_ID_MSB		0x01
#define USB_PRODUCT_ID_LSB		0x02
#define USB_PRODUCT_ID_MSB		0x03
#define USB_VBUS_CTRL_SET		0x04
#define USB_VBUS_CTRL_CLR		0x05
#define USB_ID_CTRL_SET			0x06
#define USB_ID_CTRL_CLR			0x07
#define USB_VBUS_INT_SRC		0x08
#define USB_VBUS_INT_LATCH_SET		0x09
#define USB_VBUS_INT_LATCH_CLR		0x0A
#define USB_VBUS_INT_EN_LO_SET		0x0B
#define USB_VBUS_INT_EN_LO_CLR		0x0C
#define USB_VBUS_INT_EN_HI_SET		0x0D
#define USB_VBUS_INT_EN_HI_CLR		0x0E
#define USB_ID_INT_SRC			0x0F
#define USB_ID_INT_LATCH_SET		0x10
#define USB_ID_INT_LATCH_CLR		0x11
#define USB_ID_INT_EN_LO_SET		0x12
#define USB_ID_INT_EN_LO_CLR		0x13
#define USB_ID_INT_EN_HI_SET		0x14
#define USB_ID_INT_EN_HI_CLR		0x15
#define USB_OTG_ADP_CTRL		0x16
#define USB_OTG_ADP_HIGH		0x17
#define USB_OTG_ADP_LOW			0x18
#define USB_OTG_ADP_RISE		0x19
#define USB_OTG_REVISION		0x1A
#define TWL6030_MISC2			0xE5
#define TWL6030_CFG_LDO_PD2		0xF5
#define TWL6030_BACKUP_REG		0xFA
#define STS_HW_CONDITIONS		0x21
#define STS_HW_CONDITIONS		0x21
#define STS_USB_ID			BIT(2)
#define VUSB_CFG_TRANS			0x71
#define VUSB_CFG_STATE			0x72
#define VUSB_CFG_VOLTAGE		0x73
#define CHARGERUSB_CTRL1		0x8
#define CONTROLLER_STAT1		0x03
#define	VBUS_DET			BIT(2)
struct twl6030_usb ;
#define xceiv_to_twl(x)		container_of((x), struct twl6030_usb, otg)
static inline int twl6030_writeb(struct twl6030_usb *twl, u8 module,
u8 data, u8 address)
static inline u8 twl6030_readb(struct twl6030_usb *twl, u8 module, u8 address)
static int twl6030_set_phy_clk(struct otg_transceiver *x, int on)
static int twl6030_phy_init(struct otg_transceiver *x)
static void twl6030_phy_shutdown(struct otg_transceiver *x)
static int twl6030_phy_suspend(struct otg_transceiver *x, int suspend)
static int twl6030_start_srp(struct otg_transceiver *x)
static int twl6030_usb_ldo_init(struct twl6030_usb *twl)
static ssize_t twl6030_usb_vbus_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(vbus, 0444, twl6030_usb_vbus_show, NULL);
static irqreturn_t twl6030_usb_irq(int irq, void *_twl)
static irqreturn_t twl6030_usbotg_irq(int irq, void *_twl)
static int twl6030_set_peripheral(struct otg_transceiver *x,
struct usb_gadget *gadget)
static int twl6030_enable_irq(struct otg_transceiver *x)
static int twl6030_set_vbus(struct otg_transceiver *x, bool enabled)
static int twl6030_set_host(struct otg_transceiver *x, struct usb_bus *host)
static int __devinit twl6030_usb_probe(struct platform_device *pdev)
static int __exit twl6030_usb_remove(struct platform_device *pdev)
static struct platform_driver twl6030_usb_driver = ;
static int __init twl6030_usb_init(void)
subsys_initcall(twl6030_usb_init);
static void __exit twl6030_usb_exit(void)
module_exit(twl6030_usb_exit);
MODULE_ALIAS("platform:twl6030_usb");
MODULE_AUTHOR("Hema HK <hemahk@ti.com>");
MODULE_DESCRIPTION("TWL6030 USB transceiver driver");
MODULE_LICENSE("GPL");
