MODULE_AUTHOR("Yoichi Yuasa <yuasa@linux-mips.org>");
MODULE_DESCRIPTION("NEC VR4100 series General-purpose I/O Unit driver");
MODULE_LICENSE("GPL");
#define GIUIOSELL	0x00
#define GIUIOSELH	0x02
#define GIUPIODL	0x04
#define GIUPIODH	0x06
#define GIUINTSTATL	0x08
#define GIUINTSTATH	0x0a
#define GIUINTENL	0x0c
#define GIUINTENH	0x0e
#define GIUINTTYPL	0x10
#define GIUINTTYPH	0x12
#define GIUINTALSELL	0x14
#define GIUINTALSELH	0x16
#define GIUINTHTSELL	0x18
#define GIUINTHTSELH	0x1a
#define GIUPODATL	0x1c
#define GIUPODATEN	0x1c
#define GIUPODATH	0x1e
#define PIOEN0		0x0100
#define PIOEN1		0x0200
#define GIUPODAT	0x1e
#define GIUFEDGEINHL	0x20
#define GIUFEDGEINHH	0x22
#define GIUREDGEINHL	0x24
#define GIUREDGEINHH	0x26
#define GIUUSEUPDN	0x1e0
#define GIUTERMUPDN	0x1e2
#define GPIO_HAS_PULLUPDOWN_IO		0x0001
#define GPIO_HAS_OUTPUT_ENABLE		0x0002
#define GPIO_HAS_INTERRUPT_EDGE_SELECT	0x0100
enum ;
static DEFINE_SPINLOCK(giu_lock);
static unsigned long giu_flags;
static void __iomem *giu_base;
#define giu_read(offset)		readw(giu_base + (offset))
#define giu_write(offset, value)	writew((value), giu_base + (offset))
#define GPIO_PIN_OF_IRQ(irq)	((irq) - GIU_IRQ_BASE)
#define GIUINT_HIGH_OFFSET	16
#define GIUINT_HIGH_MAX		32
static inline u16 giu_set(u16 offset, u16 set)
static inline u16 giu_clear(u16 offset, u16 clear)
static void ack_giuint_low(struct irq_data *d)
static void mask_giuint_low(struct irq_data *d)
static void mask_ack_giuint_low(struct irq_data *d)
static void unmask_giuint_low(struct irq_data *d)
static struct irq_chip giuint_low_irq_chip = ;
static void ack_giuint_high(struct irq_data *d)
static void mask_giuint_high(struct irq_data *d)
static void mask_ack_giuint_high(struct irq_data *d)
static void unmask_giuint_high(struct irq_data *d)
static struct irq_chip giuint_high_irq_chip = ;
static int giu_get_irq(unsigned int irq)
void vr41xx_set_irq_trigger(unsigned int pin, irq_trigger_t trigger,
irq_signal_t signal)
EXPORT_SYMBOL_GPL(vr41xx_set_irq_trigger);
void vr41xx_set_irq_level(unsigned int pin, irq_level_t level)
EXPORT_SYMBOL_GPL(vr41xx_set_irq_level);
static int giu_set_direction(struct gpio_chip *chip, unsigned pin, int dir)
int vr41xx_gpio_pullupdown(unsigned int pin, gpio_pull_t pull)
EXPORT_SYMBOL_GPL(vr41xx_gpio_pullupdown);
static int vr41xx_gpio_get(struct gpio_chip *chip, unsigned pin)
static void vr41xx_gpio_set(struct gpio_chip *chip, unsigned pin,
int value)
static int vr41xx_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int vr41xx_gpio_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
static int vr41xx_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static struct gpio_chip vr41xx_gpio_chip = ;
static int __devinit giu_probe(struct platform_device *pdev)
static int __devexit giu_remove(struct platform_device *pdev)
static struct platform_driver giu_device_driver = ;
static int __init vr41xx_giu_init(void)
static void __exit vr41xx_giu_exit(void)
module_init(vr41xx_giu_init);
module_exit(vr41xx_giu_exit);
