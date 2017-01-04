#define GPIO_BASE 		(W90X900_VA_GPIO)
#define GPIO_DIR		(0x04)
#define GPIO_OUT		(0x08)
#define GPIO_IN			(0x0C)
#define GROUPINERV		(0x10)
#define GPIO_GPIO(Nb)		(0x00000001 << (Nb))
#define to_nuc900_gpio_chip(c) container_of(c, struct nuc900_gpio_chip, chip)
#define NUC900_GPIO_CHIP(name, base_gpio, nr_gpio)			\
struct nuc900_gpio_chip ;
static int nuc900_gpio_get(struct gpio_chip *chip, unsigned offset)
static void nuc900_gpio_set(struct gpio_chip *chip, unsigned offset, int val)
static int nuc900_dir_input(struct gpio_chip *chip, unsigned offset)
static int nuc900_dir_output(struct gpio_chip *chip, unsigned offset, int val)
static struct nuc900_gpio_chip nuc900_gpio[] = ;
void __init nuc900_init_gpio(int nr_group)
