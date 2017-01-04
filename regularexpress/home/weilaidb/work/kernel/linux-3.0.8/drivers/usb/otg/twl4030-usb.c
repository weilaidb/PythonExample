#define MCPC_CTRL			0x30
#define MCPC_CTRL_RTSOL			(1 << 7)
#define MCPC_CTRL_EXTSWR		(1 << 6)
#define MCPC_CTRL_EXTSWC		(1 << 5)
#define MCPC_CTRL_VOICESW		(1 << 4)
#define MCPC_CTRL_OUT64K		(1 << 3)
#define MCPC_CTRL_RTSCTSSW		(1 << 2)
#define MCPC_CTRL_HS_UART		(1 << 0)
#define MCPC_IO_CTRL			0x33
#define MCPC_IO_CTRL_MICBIASEN		(1 << 5)
#define MCPC_IO_CTRL_CTS_NPU		(1 << 4)
#define MCPC_IO_CTRL_RXD_PU		(1 << 3)
#define MCPC_IO_CTRL_TXDTYP		(1 << 2)
#define MCPC_IO_CTRL_CTSTYP		(1 << 1)
#define MCPC_IO_CTRL_RTSTYP		(1 << 0)
#define MCPC_CTRL2			0x36
#define MCPC_CTRL2_MCPC_CK_EN		(1 << 0)
#define OTHER_FUNC_CTRL			0x80
#define OTHER_FUNC_CTRL_BDIS_ACON_EN	(1 << 4)
#define OTHER_FUNC_CTRL_FIVEWIRE_MODE	(1 << 2)
#define OTHER_IFC_CTRL			0x83
#define OTHER_IFC_CTRL_OE_INT_EN	(1 << 6)
#define OTHER_IFC_CTRL_CEA2011_MODE	(1 << 5)
#define OTHER_IFC_CTRL_FSLSSERIALMODE_4PIN	(1 << 4)
#define OTHER_IFC_CTRL_HIZ_ULPI_60MHZ_OUT	(1 << 3)
#define OTHER_IFC_CTRL_HIZ_ULPI		(1 << 2)
#define OTHER_IFC_CTRL_ALT_INT_REROUTE	(1 << 0)
#define OTHER_INT_EN_RISE		0x86
#define OTHER_INT_EN_FALL		0x89
#define OTHER_INT_STS			0x8C
#define OTHER_INT_LATCH			0x8D
#define OTHER_INT_VB_SESS_VLD		(1 << 7)
#define OTHER_INT_DM_HI			(1 << 6)
#define OTHER_INT_DP_HI			(1 << 5)
#define OTHER_INT_BDIS_ACON		(1 << 3)
#define OTHER_INT_MANU			(1 << 1)
#define OTHER_INT_ABNORMAL_STRESS	(1 << 0)
#define ID_STATUS			0x96
#define ID_RES_FLOAT			(1 << 4)
#define ID_RES_440K			(1 << 3)
#define ID_RES_200K			(1 << 2)
#define ID_RES_102K			(1 << 1)
#define ID_RES_GND			(1 << 0)
#define POWER_CTRL			0xAC
#define POWER_CTRL_OTG_ENAB		(1 << 5)
#define OTHER_IFC_CTRL2			0xAF
#define OTHER_IFC_CTRL2_ULPI_STP_LOW	(1 << 4)
#define OTHER_IFC_CTRL2_ULPI_TXEN_POL	(1 << 3)
#define OTHER_IFC_CTRL2_ULPI_4PIN_2430	(1 << 2)
#define OTHER_IFC_CTRL2_USB_INT_OUTSEL_MASK	(3 << 0)
#define OTHER_IFC_CTRL2_USB_INT_OUTSEL_INT1N	(0 << 0)
#define OTHER_IFC_CTRL2_USB_INT_OUTSEL_INT2N	(1 << 0)
#define REG_CTRL_EN			0xB2
#define REG_CTRL_ERROR			0xB5
#define ULPI_I2C_CONFLICT_INTEN		(1 << 0)
#define OTHER_FUNC_CTRL2		0xB8
#define OTHER_FUNC_CTRL2_VBAT_TIMER_EN	(1 << 0)
#define VBUS_DEBOUNCE			0xC0
#define ID_DEBOUNCE			0xC1
#define VBAT_TIMER			0xD3
#define PHY_PWR_CTRL			0xFD
#define PHY_PWR_PHYPWD			(1 << 0)
#define PHY_CLK_CTRL			0xFE
#define PHY_CLK_CTRL_CLOCKGATING_EN	(1 << 2)
#define PHY_CLK_CTRL_CLK32K_EN		(1 << 1)
#define REQ_PHY_DPLL_CLK		(1 << 0)
#define PHY_CLK_CTRL_STS		0xFF
#define PHY_DPLL_CLK			(1 << 0)
#define STS_HW_CONDITIONS		0x0F
#define VUSB_DEDICATED1			0x7D
#define VUSB_DEDICATED2			0x7E
#define VUSB1V5_DEV_GRP			0x71
#define VUSB1V5_TYPE			0x72
#define VUSB1V5_REMAP			0x73
#define VUSB1V8_DEV_GRP			0x74
#define VUSB1V8_TYPE			0x75
#define VUSB1V8_REMAP			0x76
#define VUSB3V1_DEV_GRP			0x77
#define VUSB3V1_TYPE			0x78
#define VUSB3V1_REMAP			0x79
#define PMBR1				0x0D
#define GPIO_USB_4PIN_ULPI_2430C	(3 << 0)
struct twl4030_usb ;
#define xceiv_to_twl(x)		container_of((x), struct twl4030_usb, otg);
static int twl4030_i2c_write_u8_verify(struct twl4030_usb *twl,
u8 module, u8 data, u8 address)
#define twl4030_usb_write_verify(twl, address, data)	\
twl4030_i2c_write_u8_verify(twl, TWL4030_MODULE_USB, (data), (address))
static inline int twl4030_usb_write(struct twl4030_usb *twl,
u8 address, u8 data)
static inline int twl4030_readb(struct twl4030_usb *twl, u8 module, u8 address)
static inline int twl4030_usb_read(struct twl4030_usb *twl, u8 address)
static inline int
twl4030_usb_set_bits(struct twl4030_usb *twl, u8 reg, u8 bits)
static inline int
twl4030_usb_clear_bits(struct twl4030_usb *twl, u8 reg, u8 bits)
static enum usb_xceiv_events twl4030_usb_linkstat(struct twl4030_usb *twl)
static void twl4030_usb_set_mode(struct twl4030_usb *twl, int mode)
static void twl4030_i2c_access(struct twl4030_usb *twl, int on)
static void __twl4030_phy_power(struct twl4030_usb *twl, int on)
static void twl4030_phy_power(struct twl4030_usb *twl, int on)
static void twl4030_phy_suspend(struct twl4030_usb *twl, int controller_off)
static void __twl4030_phy_resume(struct twl4030_usb *twl)
static void twl4030_phy_resume(struct twl4030_usb *twl)
static int twl4030_usb_ldo_init(struct twl4030_usb *twl)
static ssize_t twl4030_usb_vbus_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(vbus, 0444, twl4030_usb_vbus_show, NULL);
static irqreturn_t twl4030_usb_irq(int irq, void *_twl)
static void twl4030_usb_phy_init(struct twl4030_usb *twl)
static int twl4030_set_suspend(struct otg_transceiver *x, int suspend)
static int twl4030_set_peripheral(struct otg_transceiver *x,
struct usb_gadget *gadget)
static int twl4030_set_host(struct otg_transceiver *x, struct usb_bus *host)
static int __devinit twl4030_usb_probe(struct platform_device *pdev)
static int __exit twl4030_usb_remove(struct platform_device *pdev)
static struct platform_driver twl4030_usb_driver = ;
static int __init twl4030_usb_init(void)
subsys_initcall(twl4030_usb_init);
static void __exit twl4030_usb_exit(void)
module_exit(twl4030_usb_exit);
MODULE_ALIAS("platform:twl4030_usb");
MODULE_AUTHOR("Texas Instruments, Inc, Nokia Corporation");
MODULE_DESCRIPTION("TWL4030 USB transceiver driver");
MODULE_LICENSE("GPL");
