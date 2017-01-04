#define JZ4740_GPIO_BASE_A (32*0)
#define JZ4740_GPIO_BASE_B (32*1)
#define JZ4740_GPIO_BASE_C (32*2)
#define JZ4740_GPIO_BASE_D (32*3)
#define JZ4740_GPIO_NUM_A 32
#define JZ4740_GPIO_NUM_B 32
#define JZ4740_GPIO_NUM_C 31
#define JZ4740_GPIO_NUM_D 32
#define JZ4740_IRQ_GPIO_BASE_A (JZ4740_IRQ_GPIO(0) + JZ4740_GPIO_BASE_A)
#define JZ4740_IRQ_GPIO_BASE_B (JZ4740_IRQ_GPIO(0) + JZ4740_GPIO_BASE_B)
#define JZ4740_IRQ_GPIO_BASE_C (JZ4740_IRQ_GPIO(0) + JZ4740_GPIO_BASE_C)
#define JZ4740_IRQ_GPIO_BASE_D (JZ4740_IRQ_GPIO(0) + JZ4740_GPIO_BASE_D)
#define JZ_REG_GPIO_PIN			0x00
#define JZ_REG_GPIO_DATA		0x10
#define JZ_REG_GPIO_DATA_SET		0x14
#define JZ_REG_GPIO_DATA_CLEAR		0x18
#define JZ_REG_GPIO_MASK		0x20
#define JZ_REG_GPIO_MASK_SET		0x24
#define JZ_REG_GPIO_MASK_CLEAR		0x28
#define JZ_REG_GPIO_PULL		0x30
#define JZ_REG_GPIO_PULL_SET		0x34
#define JZ_REG_GPIO_PULL_CLEAR		0x38
#define JZ_REG_GPIO_FUNC		0x40
#define JZ_REG_GPIO_FUNC_SET		0x44
#define JZ_REG_GPIO_FUNC_CLEAR		0x48
#define JZ_REG_GPIO_SELECT		0x50
#define JZ_REG_GPIO_SELECT_SET		0x54
#define JZ_REG_GPIO_SELECT_CLEAR	0x58
#define JZ_REG_GPIO_DIRECTION		0x60
#define JZ_REG_GPIO_DIRECTION_SET	0x64
#define JZ_REG_GPIO_DIRECTION_CLEAR	0x68
#define JZ_REG_GPIO_TRIGGER		0x70
#define JZ_REG_GPIO_TRIGGER_SET		0x74
#define JZ_REG_GPIO_TRIGGER_CLEAR	0x78
#define JZ_REG_GPIO_FLAG		0x80
#define JZ_REG_GPIO_FLAG_CLEAR		0x14
#define GPIO_TO_BIT(gpio) BIT(gpio & 0x1f)
#define GPIO_TO_REG(gpio, reg) (gpio_to_jz_gpio_chip(gpio)->base + (reg))
#define CHIP_TO_REG(chip, reg) (gpio_chip_to_jz_gpio_chip(chip)->base + (reg))
struct jz_gpio_chip ;
static struct jz_gpio_chip jz4740_gpio_chips[];
static inline struct jz_gpio_chip *gpio_to_jz_gpio_chip(unsigned int gpio)
static inline struct jz_gpio_chip *gpio_chip_to_jz_gpio_chip(struct gpio_chip *gpio_chip)
static inline struct jz_gpio_chip *irq_to_jz_gpio_chip(struct irq_data *data)
static inline void jz_gpio_write_bit(unsigned int gpio, unsigned int reg)
int jz_gpio_set_function(int gpio, enum jz_gpio_function function)
EXPORT_SYMBOL_GPL(jz_gpio_set_function);
int jz_gpio_bulk_request(const struct jz_gpio_bulk_request *request, size_t num)
EXPORT_SYMBOL_GPL(jz_gpio_bulk_request);
void jz_gpio_bulk_free(const struct jz_gpio_bulk_request *request, size_t num)
EXPORT_SYMBOL_GPL(jz_gpio_bulk_free);
void jz_gpio_bulk_suspend(const struct jz_gpio_bulk_request *request, size_t num)
EXPORT_SYMBOL_GPL(jz_gpio_bulk_suspend);
void jz_gpio_bulk_resume(const struct jz_gpio_bulk_request *request, size_t num)
EXPORT_SYMBOL_GPL(jz_gpio_bulk_resume);
void jz_gpio_enable_pullup(unsigned gpio)
EXPORT_SYMBOL_GPL(jz_gpio_enable_pullup);
void jz_gpio_disable_pullup(unsigned gpio)
EXPORT_SYMBOL_GPL(jz_gpio_disable_pullup);
static int jz_gpio_get_value(struct gpio_chip *chip, unsigned gpio)
static void jz_gpio_set_value(struct gpio_chip *chip, unsigned gpio, int value)
static int jz_gpio_direction_output(struct gpio_chip *chip, unsigned gpio,
int value)
static int jz_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
int jz_gpio_port_direction_input(int port, uint32_t mask)
EXPORT_SYMBOL(jz_gpio_port_direction_input);
int jz_gpio_port_direction_output(int port, uint32_t mask)
EXPORT_SYMBOL(jz_gpio_port_direction_output);
void jz_gpio_port_set_value(int port, uint32_t value, uint32_t mask)
EXPORT_SYMBOL(jz_gpio_port_set_value);
uint32_t jz_gpio_port_get_value(int port, uint32_t mask)
EXPORT_SYMBOL(jz_gpio_port_get_value);
int gpio_to_irq(unsigned gpio)
EXPORT_SYMBOL_GPL(gpio_to_irq);
int irq_to_gpio(unsigned irq)
EXPORT_SYMBOL_GPL(irq_to_gpio);
#define IRQ_TO_BIT(irq) BIT(irq_to_gpio(irq) & 0x1f)
static void jz_gpio_check_trigger_both(struct jz_gpio_chip *chip, unsigned int irq)
static void jz_gpio_irq_demux_handler(unsigned int irq, struct irq_desc *desc)
;
static inline void jz_gpio_set_irq_bit(struct irq_data *data, unsigned int reg)
static void jz_gpio_irq_mask(struct irq_data *data)
;
static void jz_gpio_irq_unmask(struct irq_data *data)
;
static unsigned int jz_gpio_irq_startup(struct irq_data *data)
static void jz_gpio_irq_shutdown(struct irq_data *data)
static void jz_gpio_irq_ack(struct irq_data *data)
;
static int jz_gpio_irq_set_type(struct irq_data *data, unsigned int flow_type)
static int jz_gpio_irq_set_wake(struct irq_data *data, unsigned int on)
static struct irq_chip jz_gpio_irq_chip = ;
static struct lock_class_key gpio_lock_class;
#define JZ4740_GPIO_CHIP(_bank)
static struct jz_gpio_chip jz4740_gpio_chips[] = ;
static void jz4740_gpio_suspend_chip(struct jz_gpio_chip *chip)
static int jz4740_gpio_suspend(void)
static void jz4740_gpio_resume_chip(struct jz_gpio_chip *chip)
static void jz4740_gpio_resume(void)
static struct syscore_ops jz4740_gpio_syscore_ops = ;
static void jz4740_gpio_chip_init(struct jz_gpio_chip *chip, unsigned int id)
static int __init jz4740_gpio_init(void)
arch_initcall(jz4740_gpio_init);
static inline void gpio_seq_reg(struct seq_file *s, struct jz_gpio_chip *chip,
const char *name, unsigned int reg)
static int gpio_regs_show(struct seq_file *s, void *unused)
static int gpio_regs_open(struct inode *inode, struct file *file)
static const struct file_operations gpio_regs_operations = ;
static int __init gpio_debugfs_init(void)
subsys_initcall(gpio_debugfs_init);
