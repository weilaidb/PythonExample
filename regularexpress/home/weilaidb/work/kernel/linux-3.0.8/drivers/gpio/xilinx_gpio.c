#define XGPIO_DATA_OFFSET   (0x0)
#define XGPIO_TRI_OFFSET    (0x4)
struct xgpio_instance ;
static int xgpio_get(struct gpio_chip *gc, unsigned int gpio)
static void xgpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static int xgpio_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int xgpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static void xgpio_save_regs(struct of_mm_gpio_chip *mm_gc)
static int __devinit xgpio_of_probe(struct device_node *np)
static struct of_device_id xgpio_of_match[] __devinitdata = ;
static int __init xgpio_init(void)
subsys_initcall(xgpio_init);
MODULE_AUTHOR("Xilinx, Inc.");
MODULE_DESCRIPTION("Xilinx GPIO driver");
MODULE_LICENSE("GPL");
