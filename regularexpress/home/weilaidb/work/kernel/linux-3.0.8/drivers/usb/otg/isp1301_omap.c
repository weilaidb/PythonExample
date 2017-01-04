#undef	VERBOSE
#define	DRIVER_VERSION	"24 August 2004"
#define	DRIVER_NAME	(isp1301_driver.driver.name)
MODULE_DESCRIPTION("ISP1301 USB OTG Transceiver Driver");
MODULE_LICENSE("GPL");
struct isp1301 ;
#define	OTG_XCEIV_OUTPUTS \
(OTG_ASESSVLD|OTG_BSESSEND|OTG_BSESSVLD|OTG_VBUSVLD|OTG_ID)
#define	OTG_XCEIV_INPUTS \
(OTG_PULLDOWN|OTG_PULLUP|OTG_DRV_VBUS|OTG_PD_VBUS|OTG_PU_VBUS|OTG_PU_ID)
#define	OTG_CTRL_BITS \
(OTG_A_BUSREQ|OTG_A_SETB_HNPEN|OTG_B_BUSREQ|OTG_B_HNPEN|OTG_BUSDROP)
#define	OTG_CTRL_MASK	(OTG_DRIVER_SEL| \
OTG_XCEIV_OUTPUTS|OTG_XCEIV_INPUTS| \
OTG_CTRL_BITS)
#if defined(CONFIG_MACH_OMAP_H2) || defined(CONFIG_MACH_OMAP_H3)
#if	defined(CONFIG_TPS65010) || defined(CONFIG_TPS65010_MODULE)
static inline int tps65010_set_vbus_draw(unsigned mA)
static void enable_vbus_draw(struct isp1301 *isp, unsigned mA)
static void enable_vbus_draw(struct isp1301 *isp, unsigned mA)
static void enable_vbus_source(struct isp1301 *isp)
static inline void notresponding(struct isp1301 *isp)
static struct i2c_driver isp1301_driver;
static inline u8
isp1301_get_u8(struct isp1301 *isp, u8 reg)
static inline int
isp1301_get_u16(struct isp1301 *isp, u8 reg)
static inline int
isp1301_set_bits(struct isp1301 *isp, u8 reg, u8 bits)
static inline int
isp1301_clear_bits(struct isp1301 *isp, u8 reg, u8 bits)
#define	ISP1301_VENDOR_ID		0x00
#define	ISP1301_PRODUCT_ID		0x02
#define	ISP1301_BCD_DEVICE		0x14
#define	I2C_VENDOR_ID_PHILIPS		0x04cc
#define	I2C_PRODUCT_ID_PHILIPS_1301	0x1301
#define	ISP1301_MODE_CONTROL_1		0x04
#	define	MC1_SPEED		(1 << 0)
#	define	MC1_SUSPEND		(1 << 1)
#	define	MC1_DAT_SE0		(1 << 2)
#	define	MC1_TRANSPARENT		(1 << 3)
#	define	MC1_BDIS_ACON_EN	(1 << 4)
#	define	MC1_OE_INT_EN		(1 << 5)
#	define	MC1_UART_EN		(1 << 6)
#	define	MC1_MASK		0x7f
#define	ISP1301_MODE_CONTROL_2		0x12
#	define	MC2_GLOBAL_PWR_DN	(1 << 0)
#	define	MC2_SPD_SUSP_CTRL	(1 << 1)
#	define	MC2_BI_DI		(1 << 2)
#	define	MC2_TRANSP_BDIR0	(1 << 3)
#	define	MC2_TRANSP_BDIR1	(1 << 4)
#	define	MC2_AUDIO_EN		(1 << 5)
#	define	MC2_PSW_EN		(1 << 6)
#	define	MC2_EN2V7		(1 << 7)
#define	ISP1301_OTG_CONTROL_1		0x06
#	define	OTG1_DP_PULLUP		(1 << 0)
#	define	OTG1_DM_PULLUP		(1 << 1)
#	define	OTG1_DP_PULLDOWN	(1 << 2)
#	define	OTG1_DM_PULLDOWN	(1 << 3)
#	define	OTG1_ID_PULLDOWN	(1 << 4)
#	define	OTG1_VBUS_DRV		(1 << 5)
#	define	OTG1_VBUS_DISCHRG	(1 << 6)
#	define	OTG1_VBUS_CHRG		(1 << 7)
#define	ISP1301_OTG_STATUS		0x10
#	define	OTG_B_SESS_END		(1 << 6)
#	define	OTG_B_SESS_VLD		(1 << 7)
#define	ISP1301_INTERRUPT_SOURCE	0x08
#define	ISP1301_INTERRUPT_LATCH		0x0A
#define	ISP1301_INTERRUPT_FALLING	0x0C
#define	ISP1301_INTERRUPT_RISING	0x0E
#	define	INTR_VBUS_VLD		(1 << 0)
#	define	INTR_SESS_VLD		(1 << 1)
#	define	INTR_DP_HI		(1 << 2)
#	define	INTR_ID_GND		(1 << 3)
#	define	INTR_DM_HI		(1 << 4)
#	define	INTR_ID_FLOAT		(1 << 5)
#	define	INTR_BDIS_ACON		(1 << 6)
#	define	INTR_CR_INT		(1 << 7)
static inline const char *state_name(struct isp1301 *isp)
static void power_down(struct isp1301 *isp)
static void power_up(struct isp1301 *isp)
#define	NO_HOST_SUSPEND
static int host_suspend(struct isp1301 *isp)
static int host_resume(struct isp1301 *isp)
static int gadget_suspend(struct isp1301 *isp)
#define	TIMER_MINUTES	10
#define	TIMER_JIFFIES	(TIMER_MINUTES * 60 * HZ)
static void isp1301_defer_work(struct isp1301 *isp, int work)
static void a_idle(struct isp1301 *isp, const char *tag)
static void b_idle(struct isp1301 *isp, const char *tag)
static void
dump_regs(struct isp1301 *isp, const char *label)
static void check_state(struct isp1301 *isp, const char *tag)
static inline void check_state(struct isp1301 *isp, const char *tag)
static void update_otg1(struct isp1301 *isp, u8 int_src)
static void update_otg2(struct isp1301 *isp, u8 otg_status)
static void otg_update_isp(struct isp1301 *isp)
static irqreturn_t omap_otg_irq(int irq, void *_isp)
static struct platform_device *otg_dev;
static int isp1301_otg_init(struct isp1301 *isp)
static int otg_probe(struct platform_device *dev)
static int otg_remove(struct platform_device *dev)
static struct platform_driver omap_otg_driver = ;
static int otg_bind(struct isp1301 *isp)
static void otg_unbind(struct isp1301 *isp)
static void b_peripheral(struct isp1301 *isp)
static void isp_update_otg(struct isp1301 *isp, u8 stat)
static u8 isp1301_clear_latch(struct isp1301 *isp)
static void
isp1301_work(struct work_struct *work)
static irqreturn_t isp1301_irq(int irq, void *isp)
static void isp1301_timer(unsigned long _isp)
static void isp1301_release(struct device *dev)
static struct isp1301 *the_transceiver;
static int __exit isp1301_remove(struct i2c_client *i2c)
static int isp1301_otg_enable(struct isp1301 *isp)
static int
isp1301_set_host(struct otg_transceiver *otg, struct usb_bus *host)
static int
isp1301_set_peripheral(struct otg_transceiver *otg, struct usb_gadget *gadget)
static int
isp1301_set_power(struct otg_transceiver *dev, unsigned mA)
static int
isp1301_start_srp(struct otg_transceiver *dev)
static int
isp1301_start_hnp(struct otg_transceiver *dev)
static int __devinit
isp1301_probe(struct i2c_client *i2c, const struct i2c_device_id *id)
static const struct i2c_device_id isp1301_id[] = ;
MODULE_DEVICE_TABLE(i2c, isp1301_id);
static struct i2c_driver isp1301_driver = ;
static int __init isp_init(void)
subsys_initcall(isp_init);
static void __exit isp_exit(void)
module_exit(isp_exit);
