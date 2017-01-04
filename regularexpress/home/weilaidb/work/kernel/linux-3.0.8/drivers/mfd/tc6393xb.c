#define SCR_REVID	0x08
#define SCR_ISR		0x50
#define SCR_IMR		0x52
#define SCR_IRR		0x54
#define SCR_GPER	0x60
#define SCR_GPI_SR(i)	(0x64 + (i))
#define SCR_GPI_IMR(i)	(0x68 + (i))
#define SCR_GPI_EDER(i)	(0x6c + (i))
#define SCR_GPI_LIR(i)	(0x70 + (i))
#define SCR_GPO_DSR(i)	(0x78 + (i))
#define SCR_GPO_DOECR(i) (0x7c + (i))
#define SCR_GP_IARCR(i)	(0x80 + (i))
#define SCR_GP_IARLCR(i) (0x84 + (i))
#define SCR_GPI_BCR(i)	(0x88 + (i))
#define SCR_GPA_IARCR	0x8c
#define SCR_GPA_IARLCR	0x90
#define SCR_GPA_BCR	0x94
#define SCR_CCR		0x98
#define SCR_PLL2CR	0x9a
#define SCR_PLL1CR	0x9c
#define SCR_DIARCR	0xa0
#define SCR_DBOCR	0xa1
#define SCR_FER		0xe0
#define SCR_MCR		0xe4
#define SCR_CONFIG	0xfc
#define SCR_DEBUG	0xff
#define SCR_CCR_CK32K	BIT(0)
#define SCR_CCR_USBCK	BIT(1)
#define SCR_CCR_UNK1	BIT(4)
#define SCR_CCR_MCLK_MASK	(7 << 8)
#define SCR_CCR_MCLK_OFF	(0 << 8)
#define SCR_CCR_MCLK_12	(1 << 8)
#define SCR_CCR_MCLK_24	(2 << 8)
#define SCR_CCR_MCLK_48	(3 << 8)
#define SCR_CCR_HCLK_MASK	(3 << 12)
#define SCR_CCR_HCLK_24	(0 << 12)
#define SCR_CCR_HCLK_48	(1 << 12)
#define SCR_FER_USBEN		BIT(0)
#define SCR_FER_LCDCVEN		BIT(1)
#define SCR_FER_SLCDEN		BIT(2)
#define SCR_MCR_RDY_MASK		(3 << 0)
#define SCR_MCR_RDY_OPENDRAIN	(0 << 0)
#define SCR_MCR_RDY_TRISTATE	(1 << 0)
#define SCR_MCR_RDY_PUSHPULL	(2 << 0)
#define SCR_MCR_RDY_UNK		BIT(2)
#define SCR_MCR_RDY_EN		BIT(3)
#define SCR_MCR_INT_MASK		(3 << 4)
#define SCR_MCR_INT_OPENDRAIN	(0 << 4)
#define SCR_MCR_INT_TRISTATE	(1 << 4)
#define SCR_MCR_INT_PUSHPULL	(2 << 4)
#define SCR_MCR_INT_UNK		BIT(6)
#define SCR_MCR_INT_EN		BIT(7)
#define TC_GPIO_BIT(i)		(1 << (i & 0x7))
struct tc6393xb ;
enum ;
static int tc6393xb_nand_enable(struct platform_device *nand)
static struct resource __devinitdata tc6393xb_nand_resources[] = ;
static struct resource tc6393xb_mmc_resources[] = ;
static const struct resource tc6393xb_ohci_resources[] = ;
static struct resource __devinitdata tc6393xb_fb_resources[] = ;
static int tc6393xb_ohci_enable(struct platform_device *dev)
static int tc6393xb_ohci_disable(struct platform_device *dev)
static int tc6393xb_fb_enable(struct platform_device *dev)
static int tc6393xb_fb_disable(struct platform_device *dev)
int tc6393xb_lcd_set_power(struct platform_device *fb, bool on)
EXPORT_SYMBOL(tc6393xb_lcd_set_power);
int tc6393xb_lcd_mode(struct platform_device *fb,
const struct fb_videomode *mode)
EXPORT_SYMBOL(tc6393xb_lcd_mode);
static int tc6393xb_mmc_enable(struct platform_device *mmc)
static int tc6393xb_mmc_resume(struct platform_device *mmc)
static void tc6393xb_mmc_pwr(struct platform_device *mmc, int state)
static void tc6393xb_mmc_clk_div(struct platform_device *mmc, int state)
static struct tmio_mmc_data tc6393xb_mmc_data = ;
static struct mfd_cell __devinitdata tc6393xb_cells[] = ;
static int tc6393xb_gpio_get(struct gpio_chip *chip,
unsigned offset)
static void __tc6393xb_gpio_set(struct gpio_chip *chip,
unsigned offset, int value)
static void tc6393xb_gpio_set(struct gpio_chip *chip,
unsigned offset, int value)
static int tc6393xb_gpio_direction_input(struct gpio_chip *chip,
unsigned offset)
static int tc6393xb_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int tc6393xb_register_gpio(struct tc6393xb *tc6393xb, int gpio_base)
static void
tc6393xb_irq(unsigned int irq, struct irq_desc *desc)
static void tc6393xb_irq_ack(struct irq_data *data)
static void tc6393xb_irq_mask(struct irq_data *data)
static void tc6393xb_irq_unmask(struct irq_data *data)
static struct irq_chip tc6393xb_chip = ;
static void tc6393xb_attach_irq(struct platform_device *dev)
static void tc6393xb_detach_irq(struct platform_device *dev)
static int __devinit tc6393xb_probe(struct platform_device *dev)
static int __devexit tc6393xb_remove(struct platform_device *dev)
static int tc6393xb_suspend(struct platform_device *dev, pm_message_t state)
static int tc6393xb_resume(struct platform_device *dev)
#define tc6393xb_suspend NULL
#define tc6393xb_resume NULL
static struct platform_driver tc6393xb_driver = ;
static int __init tc6393xb_init(void)
static void __exit tc6393xb_exit(void)
subsys_initcall(tc6393xb_init);
module_exit(tc6393xb_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Ian Molton, Dmitry Baryshkov and Dirk Opfer");
MODULE_DESCRIPTION("tc6393xb Toshiba Mobile IO Controller");
MODULE_ALIAS("platform:tc6393xb");
