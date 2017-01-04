#define MAX_NR_PIO_DEVICES		8
struct pio_device ;
static struct pio_device pio_dev[MAX_NR_PIO_DEVICES];
static struct pio_device *gpio_to_pio(unsigned int gpio)
static DEFINE_SPINLOCK(pio_lock);
void __init at32_select_periph(unsigned int port, u32 pin_mask,
unsigned int periph, unsigned long flags)
void __init at32_select_gpio(unsigned int pin, unsigned long flags)
void at32_deselect_pin(unsigned int pin)
void __init at32_reserve_pin(unsigned int port, u32 pin_mask)
static int direction_input(struct gpio_chip *chip, unsigned offset)
static int gpio_get(struct gpio_chip *chip, unsigned offset)
static void gpio_set(struct gpio_chip *chip, unsigned offset, int value);
static int direction_output(struct gpio_chip *chip, unsigned offset, int value)
static void gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static void gpio_irq_mask(struct irq_data *d)
static void gpio_irq_unmask(struct irq_data *d)
static int gpio_irq_type(struct irq_data *d, unsigned type)
static struct irq_chip gpio_irqchip = ;
static void gpio_irq_handler(unsigned irq, struct irq_desc *desc)
static void __init
gpio_irq_setup(struct pio_device *pio, int irq, int gpio_irq)
static void pio_bank_show(struct seq_file *s, struct gpio_chip *chip)
#define pio_bank_show	NULL
static int __init pio_probe(struct platform_device *pdev)
static struct platform_driver pio_driver = ;
static int __init pio_init(void)
postcore_initcall(pio_init);
void __init at32_init_pio(struct platform_device *pdev)
