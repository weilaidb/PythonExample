struct at91_gpio_chip ;
#define to_at91_gpio_chip(c) container_of(c, struct at91_gpio_chip, chip)
static void at91_gpiolib_dbg_show(struct seq_file *s, struct gpio_chip *chip);
static void at91_gpiolib_set(struct gpio_chip *chip, unsigned offset, int val);
static int at91_gpiolib_get(struct gpio_chip *chip, unsigned offset);
static int at91_gpiolib_direction_output(struct gpio_chip *chip,
unsigned offset, int val);
static int at91_gpiolib_direction_input(struct gpio_chip *chip,
unsigned offset);
#define AT91_GPIO_CHIP(name, base_gpio, nr_gpio)			\
static struct at91_gpio_chip gpio_chip[] = ;
static int gpio_banks;
static inline void __iomem *pin_to_controller(unsigned pin)
static inline unsigned pin_to_mask(unsigned pin)
int __init_or_module at91_set_GPIO_periph(unsigned pin, int use_pullup)
EXPORT_SYMBOL(at91_set_GPIO_periph);
int __init_or_module at91_set_A_periph(unsigned pin, int use_pullup)
EXPORT_SYMBOL(at91_set_A_periph);
int __init_or_module at91_set_B_periph(unsigned pin, int use_pullup)
EXPORT_SYMBOL(at91_set_B_periph);
int __init_or_module at91_set_gpio_input(unsigned pin, int use_pullup)
EXPORT_SYMBOL(at91_set_gpio_input);
int __init_or_module at91_set_gpio_output(unsigned pin, int value)
EXPORT_SYMBOL(at91_set_gpio_output);
int __init_or_module at91_set_deglitch(unsigned pin, int is_on)
EXPORT_SYMBOL(at91_set_deglitch);
int __init_or_module at91_set_multi_drive(unsigned pin, int is_on)
EXPORT_SYMBOL(at91_set_multi_drive);
int at91_set_gpio_value(unsigned pin, int value)
EXPORT_SYMBOL(at91_set_gpio_value);
int at91_get_gpio_value(unsigned pin)
EXPORT_SYMBOL(at91_get_gpio_value);
static u32 wakeups[MAX_GPIO_BANKS];
static u32 backups[MAX_GPIO_BANKS];
static int gpio_irq_set_wake(struct irq_data *d, unsigned state)
void at91_gpio_suspend(void)
void at91_gpio_resume(void)
#define gpio_irq_set_wake	NULL
static void gpio_irq_mask(struct irq_data *d)
static void gpio_irq_unmask(struct irq_data *d)
static int gpio_irq_type(struct irq_data *d, unsigned type)
static struct irq_chip gpio_irqchip = ;
static void gpio_irq_handler(unsigned irq, struct irq_desc *desc)
static int at91_gpio_show(struct seq_file *s, void *unused)
static int at91_gpio_open(struct inode *inode, struct file *file)
static const struct file_operations at91_gpio_operations = ;
static int __init at91_gpio_debugfs_init(void)
postcore_initcall(at91_gpio_debugfs_init);
static struct lock_class_key gpio_lock_class;
void __init at91_gpio_irq_setup(void)
static int at91_gpiolib_direction_input(struct gpio_chip *chip,
unsigned offset)
static int at91_gpiolib_direction_output(struct gpio_chip *chip,
unsigned offset, int val)
static int at91_gpiolib_get(struct gpio_chip *chip, unsigned offset)
static void at91_gpiolib_set(struct gpio_chip *chip, unsigned offset, int val)
static void at91_gpiolib_dbg_show(struct seq_file *s, struct gpio_chip *chip)
void __init at91_gpio_init(struct at91_gpio_bank *data, int nr_banks)
