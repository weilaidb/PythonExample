#define AC97C_ICA		0x10
#define AC97C_CBRHR		0x30
#define AC97C_CBSR		0x38
#define AC97C_CBMR		0x3c
#define AC97C_IER		0x54
#define AC97C_IDR		0x58
#define AC97C_RXRDY		(1 << 4)
#define AC97C_OVRUN		(1 << 5)
#define AC97C_CMR_SIZE_20	(0 << 16)
#define AC97C_CMR_SIZE_18	(1 << 16)
#define AC97C_CMR_SIZE_16	(2 << 16)
#define AC97C_CMR_SIZE_10	(3 << 16)
#define AC97C_CMR_CEM_LITTLE	(1 << 18)
#define AC97C_CMR_CEM_BIG	(0 << 18)
#define AC97C_CMR_CENA		(1 << 21)
#define AC97C_INT_CBEVT		(1 << 4)
#define AC97C_SR_CAEVT		(1 << 3)
#define AC97C_CH_MASK(slot)						\
(0x7 << (3 * (slot - 3)))
#define AC97C_CH_ASSIGN(slot, channel)					\
(AC97C_CHANNEL_##channel << (3 * (slot - 3)))
#define AC97C_CHANNEL_NONE	0x0
#define AC97C_CHANNEL_B		0x2
#define ac97c_writel(chip, reg, val)			\
__raw_writel((val), (chip)->regs + AC97C_##reg)
#define ac97c_readl(chip, reg)				\
__raw_readl((chip)->regs + AC97C_##reg)
#define ATMEL_WM97XX_AC97C_IOMEM	(0xfff02800)
#define ATMEL_WM97XX_AC97C_IRQ		(29)
#define ATMEL_WM97XX_GPIO_DEFAULT	(32+16)
#error Unknown CPU, this driver only supports AT32AP700X CPUs.
struct continuous ;
#define WM_READS(sp) ((sp / HZ) + 1)
static const struct continuous cinfo[] = ;
static int sp_idx;
static int cont_rate = 188;
module_param(cont_rate, int, 0);
MODULE_PARM_DESC(cont_rate, "Sampling rate in continuous mode (Hz)");
static int pen_int = 1;
module_param(pen_int, int, 0);
MODULE_PARM_DESC(pen_int, "Pen down detection (1 = interrupt, 0 = polling)");
static int pressure;
module_param(pressure, int, 0);
MODULE_PARM_DESC(pressure, "Pressure readback (1 = pressure, 0 = no pressure)");
static int ac97_touch_slot = 5;
module_param(ac97_touch_slot, int, 0);
MODULE_PARM_DESC(ac97_touch_slot, "Touch screen data slot AC97 number");
static int atmel_gpio_line = ATMEL_WM97XX_GPIO_DEFAULT;
module_param(atmel_gpio_line, int, 0);
MODULE_PARM_DESC(atmel_gpio_line, "GPIO line number connected to WM97xx");
struct atmel_wm97xx ;
static irqreturn_t atmel_wm97xx_channel_b_interrupt(int irq, void *dev_id)
static void atmel_wm97xx_acc_pen_up(struct wm97xx *wm)
static void atmel_wm97xx_pen_timer(unsigned long data)
static int atmel_wm97xx_acc_startup(struct wm97xx *wm)
static void atmel_wm97xx_acc_shutdown(struct wm97xx *wm)
static void atmel_wm97xx_irq_enable(struct wm97xx *wm, int enable)
static struct wm97xx_mach_ops atmel_mach_ops = ;
static int __init atmel_wm97xx_probe(struct platform_device *pdev)
static int __exit atmel_wm97xx_remove(struct platform_device *pdev)
static int atmel_wm97xx_suspend(struct platform_device *pdev, pm_message_t msg)
static int atmel_wm97xx_resume(struct platform_device *pdev)
#define atmel_wm97xx_suspend	NULL
#define atmel_wm97xx_resume	NULL
static struct platform_driver atmel_wm97xx_driver = ;
static int __init atmel_wm97xx_init(void)
module_init(atmel_wm97xx_init);
static void __exit atmel_wm97xx_exit(void)
module_exit(atmel_wm97xx_exit);
MODULE_AUTHOR("Hans-Christian Egtvedt <hans-christian.egtvedt@atmel.com>");
MODULE_DESCRIPTION("wm97xx continuous touch driver for Atmel AT91 and AVR32");
MODULE_LICENSE("GPL");
