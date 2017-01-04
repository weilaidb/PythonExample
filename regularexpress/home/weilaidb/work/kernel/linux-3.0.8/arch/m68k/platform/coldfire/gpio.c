#define MCF_CHIP(chip) container_of(chip, struct mcf_gpio_chip, gpio_chip)
int mcf_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
int mcf_gpio_get_value(struct gpio_chip *chip, unsigned offset)
int mcf_gpio_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
void mcf_gpio_set_value(struct gpio_chip *chip, unsigned offset, int value)
void mcf_gpio_set_value_fast(struct gpio_chip *chip, unsigned offset, int value)
int mcf_gpio_request(struct gpio_chip *chip, unsigned offset)
void mcf_gpio_free(struct gpio_chip *chip, unsigned offset)
struct sysdev_class mcf_gpio_sysclass = ;
static int __init mcf_gpio_sysinit(void)
core_initcall(mcf_gpio_sysinit);
