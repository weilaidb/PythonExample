static DEFINE_SPINLOCK(gpio_lock);
struct mpc52xx_gpiochip ;
static int mpc52xx_wkup_gpio_get(struct gpio_chip *gc, unsigned int gpio)
static inline void
__mpc52xx_wkup_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static void
mpc52xx_wkup_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static int mpc52xx_wkup_gpio_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int
mpc52xx_wkup_gpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static int __devinit mpc52xx_wkup_gpiochip_probe(struct platform_device *ofdev)
static int mpc52xx_gpiochip_remove(struct platform_device *ofdev)
static const struct of_device_id mpc52xx_wkup_gpiochip_match[] = ;
static struct platform_driver mpc52xx_wkup_gpiochip_driver = ;
static int mpc52xx_simple_gpio_get(struct gpio_chip *gc, unsigned int gpio)
static inline void
__mpc52xx_simple_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static void
mpc52xx_simple_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static int mpc52xx_simple_gpio_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int
mpc52xx_simple_gpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static int __devinit mpc52xx_simple_gpiochip_probe(struct platform_device *ofdev)
static const struct of_device_id mpc52xx_simple_gpiochip_match[] = ;
static struct platform_driver mpc52xx_simple_gpiochip_driver = ;
static int __init mpc52xx_gpio_init(void)
subsys_initcall(mpc52xx_gpio_init);
MODULE_DESCRIPTION("Freescale MPC52xx gpio driver");
MODULE_AUTHOR("Sascha Hauer <s.hauer@pengutronix.de");
MODULE_LICENSE("GPL v2");
