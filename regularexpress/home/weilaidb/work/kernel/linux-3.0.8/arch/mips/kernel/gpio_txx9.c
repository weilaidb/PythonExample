static DEFINE_SPINLOCK(txx9_gpio_lock);
static struct txx9_pio_reg __iomem *txx9_pioptr;
static int txx9_gpio_get(struct gpio_chip *chip, unsigned int offset)
static void txx9_gpio_set_raw(unsigned int offset, int value)
static void txx9_gpio_set(struct gpio_chip *chip, unsigned int offset,
int value)
static int txx9_gpio_dir_in(struct gpio_chip *chip, unsigned int offset)
static int txx9_gpio_dir_out(struct gpio_chip *chip, unsigned int offset,
int value)
static struct gpio_chip txx9_gpio_chip = ;
int __init txx9_gpio_init(unsigned long baseaddr,
unsigned int base, unsigned int num)
