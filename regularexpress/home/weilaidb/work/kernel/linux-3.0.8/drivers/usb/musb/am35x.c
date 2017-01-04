#define USB_REVISION_REG	0x00
#define USB_CTRL_REG		0x04
#define USB_STAT_REG		0x08
#define USB_EMULATION_REG	0x0c
#define USB_AUTOREQ_REG		0x14
#define USB_SRP_FIX_TIME_REG	0x18
#define USB_TEARDOWN_REG	0x1c
#define EP_INTR_SRC_REG		0x20
#define EP_INTR_SRC_SET_REG	0x24
#define EP_INTR_SRC_CLEAR_REG	0x28
#define EP_INTR_MASK_REG	0x2c
#define EP_INTR_MASK_SET_REG	0x30
#define EP_INTR_MASK_CLEAR_REG	0x34
#define EP_INTR_SRC_MASKED_REG	0x38
#define CORE_INTR_SRC_REG	0x40
#define CORE_INTR_SRC_SET_REG	0x44
#define CORE_INTR_SRC_CLEAR_REG	0x48
#define CORE_INTR_MASK_REG	0x4c
#define CORE_INTR_MASK_SET_REG	0x50
#define CORE_INTR_MASK_CLEAR_REG 0x54
#define CORE_INTR_SRC_MASKED_REG 0x58
#define USB_END_OF_INTR_REG	0x60
#define AM35X_SOFT_RESET_MASK	1
#define AM35X_INTR_USB_SHIFT	16
#define AM35X_INTR_USB_MASK	(0x1ff << AM35X_INTR_USB_SHIFT)
#define AM35X_INTR_DRVVBUS	0x100
#define AM35X_INTR_RX_SHIFT	16
#define AM35X_INTR_TX_SHIFT	0
#define AM35X_TX_EP_MASK	0xffff
#define AM35X_RX_EP_MASK	0xfffe
#define AM35X_TX_INTR_MASK	(AM35X_TX_EP_MASK << AM35X_INTR_TX_SHIFT)
#define AM35X_RX_INTR_MASK	(AM35X_RX_EP_MASK << AM35X_INTR_RX_SHIFT)
#define USB_MENTOR_CORE_OFFSET	0x400
struct am35x_glue ;
#define glue_to_musb(g)		platform_get_drvdata(g->musb)
static void am35x_musb_enable(struct musb *musb)
static void am35x_musb_disable(struct musb *musb)
#define portstate(stmt)		stmt
#define portstate(stmt)
static void am35x_musb_set_vbus(struct musb *musb, int is_on)
#define	POLL_SECONDS	2
static struct timer_list otg_workaround;
static void otg_timer(unsigned long _musb)
static void am35x_musb_try_idle(struct musb *musb, unsigned long timeout)
static irqreturn_t am35x_musb_interrupt(int irq, void *hci)
static int am35x_musb_set_mode(struct musb *musb, u8 musb_mode)
static int am35x_musb_init(struct musb *musb)
static int am35x_musb_exit(struct musb *musb)
void musb_read_fifo(struct musb_hw_ep *hw_ep, u16 len, u8 *dst)
static const struct musb_platform_ops am35x_ops = ;
static u64 am35x_dmamask = DMA_BIT_MASK(32);
static int __init am35x_probe(struct platform_device *pdev)
static int __exit am35x_remove(struct platform_device *pdev)
static int am35x_suspend(struct device *dev)
static int am35x_resume(struct device *dev)
static struct dev_pm_ops am35x_pm_ops = ;
#define DEV_PM_OPS	&am35x_pm_ops
#define DEV_PM_OPS	NULL
static struct platform_driver am35x_driver = ;
MODULE_DESCRIPTION("AM35x MUSB Glue Layer");
MODULE_AUTHOR("Ajay Kumar Gupta <ajay.gupta@ti.com>");
MODULE_LICENSE("GPL v2");
static int __init am35x_init(void)
subsys_initcall(am35x_init);
static void __exit am35x_exit(void)
module_exit(am35x_exit);
