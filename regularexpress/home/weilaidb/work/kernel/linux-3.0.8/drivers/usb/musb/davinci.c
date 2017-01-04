#define GPIO_nVBUS_DRV		160
#define USB_PHY_CTRL	IO_ADDRESS(USBPHY_CTL_PADDR)
#define DM355_DEEPSLEEP	IO_ADDRESS(DM355_DEEPSLEEP_PADDR)
struct davinci_glue ;
static inline void phy_on(void)
static inline void phy_off(void)
static int dma_off = 1;
static void davinci_musb_enable(struct musb *musb)
static void davinci_musb_disable(struct musb *musb)
#define	portstate(stmt)		stmt
#define	portstate(stmt)
static int vbus_state = -1;
static void evm_deferred_drvvbus(struct work_struct *ignored)
static void davinci_musb_source_power(struct musb *musb, int is_on, int immediate)
static void davinci_musb_set_vbus(struct musb *musb, int is_on)
#define	POLL_SECONDS	2
static struct timer_list otg_workaround;
static void otg_timer(unsigned long _musb)
static irqreturn_t davinci_musb_interrupt(int irq, void *__hci)
static int davinci_musb_set_mode(struct musb *musb, u8 mode)
static int davinci_musb_init(struct musb *musb)
static int davinci_musb_exit(struct musb *musb)
static const struct musb_platform_ops davinci_ops = ;
static u64 davinci_dmamask = DMA_BIT_MASK(32);
static int __init davinci_probe(struct platform_device *pdev)
static int __exit davinci_remove(struct platform_device *pdev)
static struct platform_driver davinci_driver = ;
MODULE_DESCRIPTION("DaVinci MUSB Glue Layer");
MODULE_AUTHOR("Felipe Balbi <balbi@ti.com>");
MODULE_LICENSE("GPL v2");
static int __init davinci_init(void)
subsys_initcall(davinci_init);
static void __exit davinci_exit(void)
module_exit(davinci_exit);
