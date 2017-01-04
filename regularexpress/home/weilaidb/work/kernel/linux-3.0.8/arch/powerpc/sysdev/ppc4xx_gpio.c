#define GPIO_MASK(gpio)		(0x80000000 >> (gpio))
#define GPIO_MASK2(gpio)	(0xc0000000 >> ((gpio) * 2))
struct ppc4xx_gpio ;
struct ppc4xx_gpio_chip ;
static inline struct ppc4xx_gpio_chip *
to_ppc4xx_gpiochip(struct of_mm_gpio_chip *mm_gc)
static int ppc4xx_gpio_get(struct gpio_chip *gc, unsigned int gpio)
static inline void
__ppc4xx_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static void
ppc4xx_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static int ppc4xx_gpio_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int
ppc4xx_gpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static int __init ppc4xx_add_gpiochips(void)
arch_initcall(ppc4xx_add_gpiochips);
