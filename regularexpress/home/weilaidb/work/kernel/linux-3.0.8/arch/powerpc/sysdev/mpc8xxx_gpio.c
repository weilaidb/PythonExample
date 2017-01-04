#define MPC8XXX_GPIO_PINS	32
#define GPIO_DIR		0x00
#define GPIO_ODR		0x04
#define GPIO_DAT		0x08
#define GPIO_IER		0x0c
#define GPIO_IMR		0x10
#define GPIO_ICR		0x14
#define GPIO_ICR2		0x18
struct mpc8xxx_gpio_chip ;
static inline u32 mpc8xxx_gpio2mask(unsigned int gpio)
static inline struct mpc8xxx_gpio_chip *
to_mpc8xxx_gpio_chip(struct of_mm_gpio_chip *mm)
static void mpc8xxx_gpio_save_regs(struct of_mm_gpio_chip *mm)
static int mpc8572_gpio_get(struct gpio_chip *gc, unsigned int gpio)
static int mpc8xxx_gpio_get(struct gpio_chip *gc, unsigned int gpio)
static void mpc8xxx_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static int mpc8xxx_gpio_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int mpc8xxx_gpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static int mpc8xxx_gpio_to_irq(struct gpio_chip *gc, unsigned offset)
static void mpc8xxx_gpio_irq_cascade(unsigned int irq, struct irq_desc *desc)
static void mpc8xxx_irq_unmask(struct irq_data *d)
static void mpc8xxx_irq_mask(struct irq_data *d)
static void mpc8xxx_irq_ack(struct irq_data *d)
static int mpc8xxx_irq_set_type(struct irq_data *d, unsigned int flow_type)
static int mpc512x_irq_set_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip mpc8xxx_irq_chip = ;
static int mpc8xxx_gpio_irq_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int mpc8xxx_gpio_irq_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq,
unsigned int *out_flags)
static struct irq_host_ops mpc8xxx_gpio_irq_ops = ;
static struct of_device_id mpc8xxx_gpio_ids[] __initdata = ;
static void __init mpc8xxx_add_controller(struct device_node *np)
static int __init mpc8xxx_add_gpiochips(void)
arch_initcall(mpc8xxx_add_gpiochips);
