static void ks8695_gpio_mode(unsigned int pin, short gpio)
static unsigned short gpio_irq[] = ;
int ks8695_gpio_interrupt(unsigned int pin, unsigned int type)
EXPORT_SYMBOL(ks8695_gpio_interrupt);
static int ks8695_gpio_direction_input(struct gpio_chip *gc, unsigned int pin)
static int ks8695_gpio_direction_output(struct gpio_chip *gc,
unsigned int pin, int state)
static void ks8695_gpio_set_value(struct gpio_chip *gc,
unsigned int pin, int state)
static int ks8695_gpio_get_value(struct gpio_chip *gc, unsigned int pin)
static int ks8695_gpio_to_irq(struct gpio_chip *gc, unsigned int pin)
int irq_to_gpio(unsigned int irq)
EXPORT_SYMBOL(irq_to_gpio);
static struct gpio_chip ks8695_gpio_chip = ;
void ks8695_register_gpios(void)
static int ks8695_gpio_show(struct seq_file *s, void *unused)
static int ks8695_gpio_open(struct inode *inode, struct file *file)
static const struct file_operations ks8695_gpio_operations = ;
static int __init ks8695_gpio_debugfs_init(void)
postcore_initcall(ks8695_gpio_debugfs_init);
