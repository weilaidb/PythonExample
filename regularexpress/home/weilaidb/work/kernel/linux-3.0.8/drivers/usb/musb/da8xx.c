#define DA8XX_USB_REVISION_REG	0x00
#define DA8XX_USB_CTRL_REG	0x04
#define DA8XX_USB_STAT_REG	0x08
#define DA8XX_USB_EMULATION_REG 0x0c
#define DA8XX_USB_MODE_REG	0x10
#define DA8XX_USB_AUTOREQ_REG	0x14
#define DA8XX_USB_SRP_FIX_TIME_REG 0x18
#define DA8XX_USB_TEARDOWN_REG	0x1c
#define DA8XX_USB_INTR_SRC_REG	0x20
#define DA8XX_USB_INTR_SRC_SET_REG 0x24
#define DA8XX_USB_INTR_SRC_CLEAR_REG 0x28
#define DA8XX_USB_INTR_MASK_REG 0x2c
#define DA8XX_USB_INTR_MASK_SET_REG 0x30
#define DA8XX_USB_INTR_MASK_CLEAR_REG 0x34
#define DA8XX_USB_INTR_SRC_MASKED_REG 0x38
#define DA8XX_USB_END_OF_INTR_REG 0x3c
#define DA8XX_USB_GENERIC_RNDIS_EP_SIZE_REG(n) (0x50 + (((n) - 1) << 2))
#define DA8XX_SOFT_RESET_MASK	1
#define DA8XX_USB_TX_EP_MASK	0x1f
#define DA8XX_USB_RX_EP_MASK	0x1e
#define DA8XX_INTR_USB_SHIFT	16
#define DA8XX_INTR_USB_MASK	(0x1ff << DA8XX_INTR_USB_SHIFT)
#define DA8XX_INTR_DRVVBUS	0x100
#define DA8XX_INTR_RX_SHIFT	8
#define DA8XX_INTR_RX_MASK	(DA8XX_USB_RX_EP_MASK << DA8XX_INTR_RX_SHIFT)
#define DA8XX_INTR_TX_SHIFT	0
#define DA8XX_INTR_TX_MASK	(DA8XX_USB_TX_EP_MASK << DA8XX_INTR_TX_SHIFT)
#define DA8XX_MENTOR_CORE_OFFSET 0x400
#define CFGCHIP2	IO_ADDRESS(DA8XX_SYSCFG0_BASE + DA8XX_CFGCHIP2_REG)
struct da8xx_glue ;
static inline void phy_on(void)
static inline void phy_off(void)
static void da8xx_musb_enable(struct musb *musb)
static void da8xx_musb_disable(struct musb *musb)
#define portstate(stmt) 	stmt
#define portstate(stmt)
static void da8xx_musb_set_vbus(struct musb *musb, int is_on)
#define	POLL_SECONDS	2
static struct timer_list otg_workaround;
static void otg_timer(unsigned long _musb)
static void da8xx_musb_try_idle(struct musb *musb, unsigned long timeout)
static irqreturn_t da8xx_musb_interrupt(int irq, void *hci)
static int da8xx_musb_set_mode(struct musb *musb, u8 musb_mode)
static int da8xx_musb_init(struct musb *musb)
static int da8xx_musb_exit(struct musb *musb)
static const struct musb_platform_ops da8xx_ops = ;
static u64 da8xx_dmamask = DMA_BIT_MASK(32);
static int __init da8xx_probe(struct platform_device *pdev)
static int __exit da8xx_remove(struct platform_device *pdev)
static struct platform_driver da8xx_driver = ;
MODULE_DESCRIPTION("DA8xx/OMAP-L1x MUSB Glue Layer");
MODULE_AUTHOR("Sergei Shtylyov <sshtylyov@ru.mvista.com>");
MODULE_LICENSE("GPL v2");
static int __init da8xx_init(void)
subsys_initcall(da8xx_init);
static void __exit da8xx_exit(void)
module_exit(da8xx_exit);
