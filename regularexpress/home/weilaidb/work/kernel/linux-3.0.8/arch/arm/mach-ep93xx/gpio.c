#define pr_fmt(fmt) "ep93xx " KBUILD_MODNAME ": " fmt
static unsigned char gpio_int_unmasked[3];
static unsigned char gpio_int_enabled[3];
static unsigned char gpio_int_type1[3];
static unsigned char gpio_int_type2[3];
static unsigned char gpio_int_debounce[3];
static const u8 int_type1_register_offset[3]	= ;
static const u8 int_type2_register_offset[3]	= ;
static const u8 eoi_register_offset[3]		= ;
static const u8 int_en_register_offset[3]	= ;
static const u8 int_debounce_register_offset[3]	= ;
static void ep93xx_gpio_update_int_params(unsigned port)
static inline void ep93xx_gpio_int_mask(unsigned line)
static void ep93xx_gpio_int_debounce(unsigned int irq, bool enable)
static void ep93xx_gpio_ab_irq_handler(unsigned int irq, struct irq_desc *desc)
static void ep93xx_gpio_f_irq_handler(unsigned int irq, struct irq_desc *desc)
static void ep93xx_gpio_irq_ack(struct irq_data *d)
static void ep93xx_gpio_irq_mask_ack(struct irq_data *d)
static void ep93xx_gpio_irq_mask(struct irq_data *d)
static void ep93xx_gpio_irq_unmask(struct irq_data *d)
static int ep93xx_gpio_irq_type(struct irq_data *d, unsigned int type)
static struct irq_chip ep93xx_gpio_irq_chip = ;
void __init ep93xx_gpio_init_irq(void)
struct ep93xx_gpio_chip ;
#define to_ep93xx_gpio_chip(c) container_of(c, struct ep93xx_gpio_chip, chip)
static int ep93xx_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int ep93xx_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int val)
static int ep93xx_gpio_get(struct gpio_chip *chip, unsigned offset)
static void ep93xx_gpio_set(struct gpio_chip *chip, unsigned offset, int val)
static int ep93xx_gpio_set_debounce(struct gpio_chip *chip,
unsigned offset, unsigned debounce)
#define EP93XX_GPIO_BANK(name, dr, ddr, base_gpio)			\
static struct ep93xx_gpio_chip ep93xx_gpio_banks[] = ;
void __init ep93xx_gpio_init(void)
