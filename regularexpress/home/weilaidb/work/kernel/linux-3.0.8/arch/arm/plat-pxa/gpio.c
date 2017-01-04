int pxa_last_gpio;
struct pxa_gpio_chip ;
static DEFINE_SPINLOCK(gpio_lock);
static struct pxa_gpio_chip *pxa_gpio_chips;
#define for_each_gpio_chip(i, c)			\
for (i = 0, c = &pxa_gpio_chips[0]; i <= pxa_last_gpio; i += 32, c++)
static inline void __iomem *gpio_chip_base(struct gpio_chip *c)
static inline struct pxa_gpio_chip *gpio_to_pxachip(unsigned gpio)
static int pxa_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int pxa_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int pxa_gpio_get(struct gpio_chip *chip, unsigned offset)
static void pxa_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int __init pxa_init_gpio_chip(int gpio_end)
static inline void update_edge_detect(struct pxa_gpio_chip *c)
static int pxa_gpio_irq_type(struct irq_data *d, unsigned int type)
static void pxa_gpio_demux_handler(unsigned int irq, struct irq_desc *desc)
static void pxa_ack_muxed_gpio(struct irq_data *d)
static void pxa_mask_muxed_gpio(struct irq_data *d)
static void pxa_unmask_muxed_gpio(struct irq_data *d)
static struct irq_chip pxa_muxed_gpio_chip = ;
void __init pxa_init_gpio(int mux_irq, int start, int end, set_wake_t fn)
static int pxa_gpio_suspend(void)
static void pxa_gpio_resume(void)
#define pxa_gpio_suspend	NULL
#define pxa_gpio_resume		NULL
struct syscore_ops pxa_gpio_syscore_ops = ;
