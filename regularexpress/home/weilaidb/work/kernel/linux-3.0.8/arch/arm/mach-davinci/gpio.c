struct davinci_gpio_regs ;
#define chip2controller(chip)	\
container_of(chip, struct davinci_gpio_controller, chip)
static struct davinci_gpio_controller chips[DIV_ROUND_UP(DAVINCI_N_GPIO, 32)];
static void __iomem *gpio_base;
static struct davinci_gpio_regs __iomem __init *gpio2regs(unsigned gpio)
static inline struct davinci_gpio_regs __iomem *irq2regs(int irq)
static int __init davinci_gpio_irq_setup(void);
static inline int __davinci_direction(struct gpio_chip *chip,
unsigned offset, bool out, int value)
static int davinci_direction_in(struct gpio_chip *chip, unsigned offset)
static int
davinci_direction_out(struct gpio_chip *chip, unsigned offset, int value)
static int davinci_gpio_get(struct gpio_chip *chip, unsigned offset)
static void
davinci_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int __init davinci_gpio_setup(void)
pure_initcall(davinci_gpio_setup);
static void gpio_irq_disable(struct irq_data *d)
static void gpio_irq_enable(struct irq_data *d)
static int gpio_irq_type(struct irq_data *d, unsigned trigger)
static struct irq_chip gpio_irqchip = ;
static void
gpio_irq_handler(unsigned irq, struct irq_desc *desc)
static int gpio_to_irq_banked(struct gpio_chip *chip, unsigned offset)
static int gpio_to_irq_unbanked(struct gpio_chip *chip, unsigned offset)
static int gpio_irq_type_unbanked(struct irq_data *d, unsigned trigger)
static int __init davinci_gpio_irq_setup(void)
