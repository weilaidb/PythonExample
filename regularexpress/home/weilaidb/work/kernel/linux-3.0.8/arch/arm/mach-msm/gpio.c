#define FIRST_GPIO_IRQ MSM_GPIO_TO_INT(0)
#define MSM_GPIO_BANK(bank, first, last)				\
#define MSM_GPIO_BROKEN_INT_CLEAR 1
struct msm_gpio_regs ;
struct msm_gpio_chip ;
static int msm_gpio_write(struct msm_gpio_chip *msm_chip,
unsigned offset, unsigned on)
static void msm_gpio_update_both_edge_detect(struct msm_gpio_chip *msm_chip)
static int msm_gpio_clear_detect_status(struct msm_gpio_chip *msm_chip,
unsigned offset)
static int msm_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int
msm_gpio_direction_output(struct gpio_chip *chip, unsigned offset, int value)
static int msm_gpio_get(struct gpio_chip *chip, unsigned offset)
static void msm_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int msm_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static int msm_gpio_request(struct gpio_chip *chip, unsigned offset)
static void msm_gpio_free(struct gpio_chip *chip, unsigned offset)
#define msm_gpio_request NULL
#define msm_gpio_free NULL
struct msm_gpio_chip msm_gpio_chips[] = ;
static void msm_gpio_irq_ack(struct irq_data *d)
static void msm_gpio_irq_mask(struct irq_data *d)
static void msm_gpio_irq_unmask(struct irq_data *d)
static int msm_gpio_irq_set_wake(struct irq_data *d, unsigned int on)
static int msm_gpio_irq_set_type(struct irq_data *d, unsigned int flow_type)
static void msm_gpio_irq_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip msm_gpio_irq_chip = ;
static int __init msm_init_gpio(void)
postcore_initcall(msm_init_gpio);
