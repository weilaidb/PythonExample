struct viafb_gpio ;
static struct viafb_gpio viafb_all_gpios[] = ;
#define VIAFB_NUM_GPIOS ARRAY_SIZE(viafb_all_gpios)
struct viafb_gpio_cfg ;
static void via_gpio_set(struct gpio_chip *chip, unsigned int nr,
int value)
static int via_gpio_dir_out(struct gpio_chip *chip, unsigned int nr,
int value)
static int via_gpio_dir_input(struct gpio_chip *chip, unsigned int nr)
static int via_gpio_get(struct gpio_chip *chip, unsigned int nr)
static struct viafb_gpio_cfg viafb_gpio_config = ;
static void viafb_gpio_enable(struct viafb_gpio *gpio)
static void viafb_gpio_disable(struct viafb_gpio *gpio)
static int viafb_gpio_suspend(void *private)
static int viafb_gpio_resume(void *private)
static struct viafb_pm_hooks viafb_gpio_pm_hooks = ;
int viafb_gpio_lookup(const char *name)
EXPORT_SYMBOL_GPL(viafb_gpio_lookup);
static __devinit int viafb_gpio_probe(struct platform_device *platdev)
static int viafb_gpio_remove(struct platform_device *platdev)
static struct platform_driver via_gpio_driver = ;
int viafb_gpio_init(void)
void viafb_gpio_exit(void)
