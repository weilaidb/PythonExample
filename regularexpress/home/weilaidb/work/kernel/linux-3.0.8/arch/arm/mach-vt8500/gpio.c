#define to_vt8500(__chip) container_of(__chip, struct vt8500_gpio_chip, chip)
#define ENABLE_REGS	0x0
#define DIRECTION_REGS	0x20
#define OUTVALUE_REGS	0x40
#define INVALUE_REGS	0x60
#define EXT_REGOFF	0x1c
static void __iomem *regbase;
struct vt8500_gpio_chip ;
static int gpio_to_irq_map[8];
static int vt8500_muxed_gpio_request(struct gpio_chip *chip,
unsigned offset)
static void vt8500_muxed_gpio_free(struct gpio_chip *chip,
unsigned offset)
static int vt8500_muxed_gpio_direction_input(struct gpio_chip *chip,
unsigned offset)
static int vt8500_muxed_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int vt8500_muxed_gpio_get_value(struct gpio_chip *chip,
unsigned offset)
static void vt8500_muxed_gpio_set_value(struct gpio_chip *chip,
unsigned offset, int value)
#define VT8500_GPIO_BANK(__name, __shift, __off, __base, __num)		\
static struct vt8500_gpio_chip vt8500_muxed_gpios[] = ;
static int vt8500_gpio_direction_input(struct gpio_chip *chip,
unsigned offset)
static int vt8500_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int vt8500_gpio_get_value(struct gpio_chip *chip,
unsigned offset)
static void vt8500_gpio_set_value(struct gpio_chip *chip,
unsigned offset, int value)
static int vt8500_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static struct gpio_chip vt8500_external_gpios = ;
void __init vt8500_gpio_init(void)
