#define GPIO_BASE(chip)		(((unsigned long)(chip)->base) & 0xFFFFF000u)
#define CON_OFFSET		0x700
#define MASK_OFFSET		0x900
#define PEND_OFFSET		0xA00
#define REG_OFFSET(x)		((x) << 2)
struct s5p_gpioint_bank ;
LIST_HEAD(banks);
static int s5p_gpioint_set_type(struct irq_data *d, unsigned int type)
static void s5p_gpioint_handler(unsigned int irq, struct irq_desc *desc)
static __init int s5p_gpioint_add(struct s3c_gpio_chip *chip)
int __init s5p_register_gpio_interrupt(int pin)
int __init s5p_register_gpioint_bank(int chain_irq, int start, int nr_groups)
