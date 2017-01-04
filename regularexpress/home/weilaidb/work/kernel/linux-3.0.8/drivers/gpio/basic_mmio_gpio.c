static void bgpio_write8(void __iomem *reg, unsigned long data)
static unsigned long bgpio_read8(void __iomem *reg)
static void bgpio_write16(void __iomem *reg, unsigned long data)
static unsigned long bgpio_read16(void __iomem *reg)
static void bgpio_write32(void __iomem *reg, unsigned long data)
static unsigned long bgpio_read32(void __iomem *reg)
#if BITS_PER_LONG >= 64
static void bgpio_write64(void __iomem *reg, unsigned long data)
static unsigned long bgpio_read64(void __iomem *reg)
static unsigned long bgpio_pin2mask(struct bgpio_chip *bgc, unsigned int pin)
static unsigned long bgpio_pin2mask_be(struct bgpio_chip *bgc,
unsigned int pin)
static int bgpio_get(struct gpio_chip *gc, unsigned int gpio)
static void bgpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static void bgpio_set_with_clear(struct gpio_chip *gc, unsigned int gpio,
int val)
static void bgpio_set_set(struct gpio_chip *gc, unsigned int gpio, int val)
static int bgpio_simple_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int bgpio_simple_dir_out(struct gpio_chip *gc, unsigned int gpio,
int val)
static int bgpio_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int bgpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static int bgpio_dir_in_inv(struct gpio_chip *gc, unsigned int gpio)
static int bgpio_dir_out_inv(struct gpio_chip *gc, unsigned int gpio, int val)
static int bgpio_setup_accessors(struct device *dev,
struct bgpio_chip *bgc,
bool be)
static int bgpio_setup_io(struct bgpio_chip *bgc,
void __iomem *dat,
void __iomem *set,
void __iomem *clr)
static int bgpio_setup_direction(struct bgpio_chip *bgc,
void __iomem *dirout,
void __iomem *dirin)
int __devexit bgpio_remove(struct bgpio_chip *bgc)
EXPORT_SYMBOL_GPL(bgpio_remove);
int __devinit bgpio_init(struct bgpio_chip *bgc,
struct device *dev,
unsigned long sz,
void __iomem *dat,
void __iomem *set,
void __iomem *clr,
void __iomem *dirout,
void __iomem *dirin,
bool big_endian)
EXPORT_SYMBOL_GPL(bgpio_init);
static void __iomem *bgpio_map(struct platform_device *pdev,
const char *name,
resource_size_t sane_sz,
int *err)
static int __devinit bgpio_pdev_probe(struct platform_device *pdev)
static int __devexit bgpio_pdev_remove(struct platform_device *pdev)
static const struct platform_device_id bgpio_id_table[] = ;
MODULE_DEVICE_TABLE(platform, bgpio_id_table);
static struct platform_driver bgpio_driver = ;
static int __init bgpio_platform_init(void)
module_init(bgpio_platform_init);
static void __exit bgpio_platform_exit(void)
module_exit(bgpio_platform_exit);
MODULE_DESCRIPTION("Driver for basic memory-mapped GPIO controllers");
MODULE_AUTHOR("Anton Vorontsov <cbouatmailru@gmail.com>");
MODULE_LICENSE("GPL");
