#define GPIO_BANK(x)		((x) >> 5)
#define GPIO_PORT(x)		(((x) >> 3) & 0x3)
#define GPIO_BIT(x)		((x) & 0x7)
#define GPIO_REG(x)		(IO_TO_VIRT(TEGRA_GPIO_BASE) +	\
GPIO_BANK(x) * 0x80 +		\
GPIO_PORT(x) * 4)
#define GPIO_CNF(x)		(GPIO_REG(x) + 0x00)
#define GPIO_OE(x)		(GPIO_REG(x) + 0x10)
#define GPIO_OUT(x)		(GPIO_REG(x) + 0X20)
#define GPIO_IN(x)		(GPIO_REG(x) + 0x30)
#define GPIO_INT_STA(x)		(GPIO_REG(x) + 0x40)
#define GPIO_INT_ENB(x)		(GPIO_REG(x) + 0x50)
#define GPIO_INT_LVL(x)		(GPIO_REG(x) + 0x60)
#define GPIO_INT_CLR(x)		(GPIO_REG(x) + 0x70)
#define GPIO_MSK_CNF(x)		(GPIO_REG(x) + 0x800)
#define GPIO_MSK_OE(x)		(GPIO_REG(x) + 0x810)
#define GPIO_MSK_OUT(x)		(GPIO_REG(x) + 0X820)
#define GPIO_MSK_INT_STA(x)	(GPIO_REG(x) + 0x840)
#define GPIO_MSK_INT_ENB(x)	(GPIO_REG(x) + 0x850)
#define GPIO_MSK_INT_LVL(x)	(GPIO_REG(x) + 0x860)
#define GPIO_INT_LVL_MASK		0x010101
#define GPIO_INT_LVL_EDGE_RISING	0x000101
#define GPIO_INT_LVL_EDGE_FALLING	0x000100
#define GPIO_INT_LVL_EDGE_BOTH		0x010100
#define GPIO_INT_LVL_LEVEL_HIGH		0x000001
#define GPIO_INT_LVL_LEVEL_LOW		0x000000
struct tegra_gpio_bank ;
static struct tegra_gpio_bank tegra_gpio_banks[] = ;
static int tegra_gpio_compose(int bank, int port, int bit)
static void tegra_gpio_mask_write(u32 reg, int gpio, int value)
void tegra_gpio_enable(int gpio)
void tegra_gpio_disable(int gpio)
static void tegra_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int tegra_gpio_get(struct gpio_chip *chip, unsigned offset)
static int tegra_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int tegra_gpio_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
static struct gpio_chip tegra_gpio_chip = ;
static void tegra_gpio_irq_ack(struct irq_data *d)
static void tegra_gpio_irq_mask(struct irq_data *d)
static void tegra_gpio_irq_unmask(struct irq_data *d)
static int tegra_gpio_irq_set_type(struct irq_data *d, unsigned int type)
static void tegra_gpio_irq_handler(unsigned int irq, struct irq_desc *desc)
void tegra_gpio_resume(void)
void tegra_gpio_suspend(void)
static int tegra_gpio_wake_enable(struct irq_data *d, unsigned int enable)
static struct irq_chip tegra_gpio_irq_chip = ;
static struct lock_class_key gpio_lock_class;
static int __init tegra_gpio_init(void)
postcore_initcall(tegra_gpio_init);
void __init tegra_gpio_config(struct tegra_gpio_table *table, int num)
static int dbg_gpio_show(struct seq_file *s, void *unused)
static int dbg_gpio_open(struct inode *inode, struct file *file)
static const struct file_operations debug_fops = ;
static int __init tegra_gpio_debuginit(void)
late_initcall(tegra_gpio_debuginit);
