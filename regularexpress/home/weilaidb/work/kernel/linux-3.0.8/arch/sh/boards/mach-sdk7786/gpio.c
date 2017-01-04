#define NR_FPGA_GPIOS	8
static const char *usrgpir_gpio_names[NR_FPGA_GPIOS] = ;
static int usrgpir_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
static int usrgpir_gpio_get(struct gpio_chip *chip, unsigned gpio)
static struct gpio_chip usrgpir_gpio_chip = ;
static int __init usrgpir_gpio_setup(void)
device_initcall(usrgpir_gpio_setup);
