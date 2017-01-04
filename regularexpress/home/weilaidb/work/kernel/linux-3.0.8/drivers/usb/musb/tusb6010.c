struct tusb6010_glue ;
static void tusb_musb_set_vbus(struct musb *musb, int is_on);
#define TUSB_REV_MAJOR(reg_val)		((reg_val >> 4) & 0xf)
#define TUSB_REV_MINOR(reg_val)		(reg_val & 0xf)
u8 tusb_get_revision(struct musb *musb)
static int tusb_print_revision(struct musb *musb)
#define WBUS_QUIRK_MASK	(TUSB_PHY_OTG_CTRL_TESTM2 | TUSB_PHY_OTG_CTRL_TESTM1 \
| TUSB_PHY_OTG_CTRL_TESTM0)
static void tusb_wbus_quirk(struct musb *musb, int enabled)
static inline void
tusb_fifo_write_unaligned(void __iomem *fifo, const u8 *buf, u16 len)
static inline void tusb_fifo_read_unaligned(void __iomem *fifo,
void __iomem *buf, u16 len)
void musb_write_fifo(struct musb_hw_ep *hw_ep, u16 len, const u8 *buf)
void musb_read_fifo(struct musb_hw_ep *hw_ep, u16 len, u8 *buf)
static struct musb *the_musb;
static int tusb_draw_power(struct otg_transceiver *x, unsigned mA)
#define tusb_draw_power	NULL
static void tusb_set_clock_source(struct musb *musb, unsigned mode)
static void tusb_allow_idle(struct musb *musb, u32 wakeup_enables)
static int tusb_musb_vbus_status(struct musb *musb)
static struct timer_list musb_idle_timer;
static void musb_do_idle(unsigned long _musb)
static void tusb_musb_try_idle(struct musb *musb, unsigned long timeout)
#define DEVCLOCK		60000000
#define OTG_TIMER_MS(msecs)	((msecs) \
? (TUSB_DEV_OTG_TIMER_VAL((DEVCLOCK/1000)*(msecs)) \
| TUSB_DEV_OTG_TIMER_ENABLE) \
: 0)
static void tusb_musb_set_vbus(struct musb *musb, int is_on)
static int tusb_musb_set_mode(struct musb *musb, u8 musb_mode)
static inline unsigned long
tusb_otg_ints(struct musb *musb, u32 int_src, void __iomem *tbase)
static irqreturn_t tusb_musb_interrupt(int irq, void *__hci)
static int dma_off;
static void tusb_musb_enable(struct musb *musb)
static void tusb_musb_disable(struct musb *musb)
static void tusb_setup_cpu_interface(struct musb *musb)
static int tusb_musb_start(struct musb *musb)
static int tusb_musb_init(struct musb *musb)
static int tusb_musb_exit(struct musb *musb)
static const struct musb_platform_ops tusb_ops = ;
static u64 tusb_dmamask = DMA_BIT_MASK(32);
static int __init tusb_probe(struct platform_device *pdev)
static int __exit tusb_remove(struct platform_device *pdev)
static struct platform_driver tusb_driver = ;
MODULE_DESCRIPTION("TUSB6010 MUSB Glue Layer");
MODULE_AUTHOR("Felipe Balbi <balbi@ti.com>");
MODULE_LICENSE("GPL v2");
static int __init tusb_init(void)
subsys_initcall(tusb_init);
static void __exit tusb_exit(void)
module_exit(tusb_exit);
