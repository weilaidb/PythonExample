static uint8_t trout_int_mask[2] = ;
static uint8_t trout_sleep_int_mask[] = ;
struct msm_gpio_chip ;
#define to_msm_gpio_chip(c) container_of(c, struct msm_gpio_chip, chip)
static int msm_gpiolib_get(struct gpio_chip *chip, unsigned offset)
static void msm_gpiolib_set(struct gpio_chip *chip, unsigned offset, int val)
static int msm_gpiolib_direction_input(struct gpio_chip *chip,
unsigned offset)
static int msm_gpiolib_direction_output(struct gpio_chip *chip,
unsigned offset, int val)
static int trout_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
#define TROUT_GPIO_BANK(name, reg_num, base_gpio, shadow_val)		\
static struct msm_gpio_chip msm_gpio_banks[] = ;
static void trout_gpio_irq_ack(struct irq_data *d)
static void trout_gpio_irq_mask(struct irq_data *d)
static void trout_gpio_irq_unmask(struct irq_data *d)
int trout_gpio_irq_set_wake(struct irq_data *d, unsigned int on)
static void trout_gpio_irq_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip trout_gpio_irq_chip = ;
int __init trout_init_gpio(void)
postcore_initcall(trout_init_gpio);
