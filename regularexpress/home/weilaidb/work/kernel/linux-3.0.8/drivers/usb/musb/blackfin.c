struct bfin_glue ;
#define glue_to_musb(g)		platform_get_drvdata(g->musb)
void musb_write_fifo(struct musb_hw_ep *hw_ep, u16 len, const u8 *src)
void musb_read_fifo(struct musb_hw_ep *hw_ep, u16 len, u8 *dst)
static irqreturn_t blackfin_interrupt(int irq, void *__hci)
static void musb_conn_timer_handler(unsigned long _musb)
static void bfin_musb_enable(struct musb *musb)
static void bfin_musb_disable(struct musb *musb)
static void bfin_musb_set_vbus(struct musb *musb, int is_on)
static int bfin_musb_set_power(struct otg_transceiver *x, unsigned mA)
static void bfin_musb_try_idle(struct musb *musb, unsigned long timeout)
static int bfin_musb_vbus_status(struct musb *musb)
static int bfin_musb_set_mode(struct musb *musb, u8 musb_mode)
static int bfin_musb_adjust_channel_params(struct dma_channel *channel,
u16 packet_sz, u8 *mode,
dma_addr_t *dma_addr, u32 *len)
static void bfin_musb_reg_init(struct musb *musb)
static int bfin_musb_init(struct musb *musb)
static int bfin_musb_exit(struct musb *musb)
static const struct musb_platform_ops bfin_ops = ;
static u64 bfin_dmamask = DMA_BIT_MASK(32);
static int __init bfin_probe(struct platform_device *pdev)
static int __exit bfin_remove(struct platform_device *pdev)
static int bfin_suspend(struct device *dev)
static int bfin_resume(struct device *dev)
static struct dev_pm_ops bfin_pm_ops = ;
#define DEV_PM_OPS	&bfin_pm_ops
#define DEV_PM_OPS	NULL
static struct platform_driver bfin_driver = ;
MODULE_DESCRIPTION("Blackfin MUSB Glue Layer");
MODULE_AUTHOR("Bryan Wy <cooloney@kernel.org>");
MODULE_LICENSE("GPL v2");
static int __init bfin_init(void)
subsys_initcall(bfin_init);
static void __exit bfin_exit(void)
module_exit(bfin_exit);
