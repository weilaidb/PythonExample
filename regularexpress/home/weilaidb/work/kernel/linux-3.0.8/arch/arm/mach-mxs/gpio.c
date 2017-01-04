static struct mxs_gpio_port *mxs_gpio_ports;
static int gpio_table_size;
#define PINCTRL_DOUT(n)		((cpu_is_mx23() ? 0x0500 : 0x0700) + (n) * 0x10)
#define PINCTRL_DIN(n)		((cpu_is_mx23() ? 0x0600 : 0x0900) + (n) * 0x10)
#define PINCTRL_DOE(n)		((cpu_is_mx23() ? 0x0700 : 0x0b00) + (n) * 0x10)
#define PINCTRL_PIN2IRQ(n)	((cpu_is_mx23() ? 0x0800 : 0x1000) + (n) * 0x10)
#define PINCTRL_IRQEN(n)	((cpu_is_mx23() ? 0x0900 : 0x1100) + (n) * 0x10)
#define PINCTRL_IRQLEV(n)	((cpu_is_mx23() ? 0x0a00 : 0x1200) + (n) * 0x10)
#define PINCTRL_IRQPOL(n)	((cpu_is_mx23() ? 0x0b00 : 0x1300) + (n) * 0x10)
#define PINCTRL_IRQSTAT(n)	((cpu_is_mx23() ? 0x0c00 : 0x1400) + (n) * 0x10)
#define GPIO_INT_FALL_EDGE	0x0
#define GPIO_INT_LOW_LEV	0x1
#define GPIO_INT_RISE_EDGE	0x2
#define GPIO_INT_HIGH_LEV	0x3
#define GPIO_INT_LEV_MASK	(1 << 0)
#define GPIO_INT_POL_MASK	(1 << 1)
static void clear_gpio_irqstatus(struct mxs_gpio_port *port, u32 index)
static void set_gpio_irqenable(struct mxs_gpio_port *port, u32 index,
int enable)
static void mxs_gpio_ack_irq(struct irq_data *d)
static void mxs_gpio_mask_irq(struct irq_data *d)
static void mxs_gpio_unmask_irq(struct irq_data *d)
static int mxs_gpio_get(struct gpio_chip *chip, unsigned offset);
static int mxs_gpio_set_irq_type(struct irq_data *d, unsigned int type)
static void mxs_gpio_irq_handler(u32 irq, struct irq_desc *desc)
static int mxs_gpio_set_wake_irq(struct irq_data *d, unsigned int enable)
static struct irq_chip gpio_irq_chip = ;
static void mxs_set_gpio_direction(struct gpio_chip *chip, unsigned offset,
int dir)
static int mxs_gpio_get(struct gpio_chip *chip, unsigned offset)
static void mxs_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int mxs_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static int mxs_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int mxs_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
int __init mxs_gpio_init(struct mxs_gpio_port *port, int cnt)
#define MX23_GPIO_BASE	MX23_IO_ADDRESS(MX23_PINCTRL_BASE_ADDR)
#define MX28_GPIO_BASE	MX28_IO_ADDRESS(MX28_PINCTRL_BASE_ADDR)
#define DEFINE_MXS_GPIO_PORT(_base, _irq, _id)				\
static struct mxs_gpio_port mx23_gpio_ports[] = ;
int __init mx23_register_gpios(void)
static struct mxs_gpio_port mx28_gpio_ports[] = ;
int __init mx28_register_gpios(void)
