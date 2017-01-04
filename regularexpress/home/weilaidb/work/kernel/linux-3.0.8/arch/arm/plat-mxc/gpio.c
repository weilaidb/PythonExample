static struct mxc_gpio_port *mxc_gpio_ports;
static int gpio_table_size;
#define cpu_is_mx1_mx2()	(cpu_is_mx1() || cpu_is_mx2())
#define GPIO_DR		(cpu_is_mx1_mx2() ? 0x1c : 0x00)
#define GPIO_GDIR	(cpu_is_mx1_mx2() ? 0x00 : 0x04)
#define GPIO_PSR	(cpu_is_mx1_mx2() ? 0x24 : 0x08)
#define GPIO_ICR1	(cpu_is_mx1_mx2() ? 0x28 : 0x0C)
#define GPIO_ICR2	(cpu_is_mx1_mx2() ? 0x2C : 0x10)
#define GPIO_IMR	(cpu_is_mx1_mx2() ? 0x30 : 0x14)
#define GPIO_ISR	(cpu_is_mx1_mx2() ? 0x34 : 0x18)
#define GPIO_INT_LOW_LEV	(cpu_is_mx1_mx2() ? 0x3 : 0x0)
#define GPIO_INT_HIGH_LEV	(cpu_is_mx1_mx2() ? 0x2 : 0x1)
#define GPIO_INT_RISE_EDGE	(cpu_is_mx1_mx2() ? 0x0 : 0x2)
#define GPIO_INT_FALL_EDGE	(cpu_is_mx1_mx2() ? 0x1 : 0x3)
#define GPIO_INT_NONE		0x4
static void _clear_gpio_irqstatus(struct mxc_gpio_port *port, u32 index)
static void _set_gpio_irqenable(struct mxc_gpio_port *port, u32 index,
int enable)
static void gpio_ack_irq(struct irq_data *d)
static void gpio_mask_irq(struct irq_data *d)
static void gpio_unmask_irq(struct irq_data *d)
static int mxc_gpio_get(struct gpio_chip *chip, unsigned offset);
static int gpio_set_irq_type(struct irq_data *d, u32 type)
static void mxc_flip_edge(struct mxc_gpio_port *port, u32 gpio)
static void mxc_gpio_irq_handler(struct mxc_gpio_port *port, u32 irq_stat)
static void mx3_gpio_irq_handler(u32 irq, struct irq_desc *desc)
static void mx2_gpio_irq_handler(u32 irq, struct irq_desc *desc)
static int gpio_set_wake_irq(struct irq_data *d, u32 enable)
static struct irq_chip gpio_irq_chip = ;
static void _set_gpio_direction(struct gpio_chip *chip, unsigned offset,
int dir)
static void mxc_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int mxc_gpio_get(struct gpio_chip *chip, unsigned offset)
static int mxc_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int mxc_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static struct lock_class_key gpio_lock_class;
int __init mxc_gpio_init(struct mxc_gpio_port *port, int cnt)
