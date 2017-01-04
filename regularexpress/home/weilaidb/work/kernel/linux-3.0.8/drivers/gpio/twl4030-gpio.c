static struct gpio_chip twl_gpiochip;
static int twl4030_gpio_irq_base;
#define is_module()	true
#define is_module()	false
#define MASK_GPIO_CTRL_GPIO0CD1		BIT(0)
#define MASK_GPIO_CTRL_GPIO1CD2		BIT(1)
#define MASK_GPIO_CTRL_GPIO_ON		BIT(2)
#define GPIO_32_MASK			0x0003ffff
static DEFINE_MUTEX(gpio_lock);
static unsigned int gpio_usage_count;
static inline int gpio_twl4030_write(u8 address, u8 data)
#define TWL4030_LED_LEDEN	0x0
#define LEDEN_LEDAON		BIT(0)
#define LEDEN_LEDBON		BIT(1)
#define LEDEN_LEDAEXT		BIT(2)
#define LEDEN_LEDBEXT		BIT(3)
#define LEDEN_LEDAPWM		BIT(4)
#define LEDEN_LEDBPWM		BIT(5)
#define LEDEN_PWM_LENGTHA	BIT(6)
#define LEDEN_PWM_LENGTHB	BIT(7)
#define TWL4030_PWMx_PWMxON	0x0
#define TWL4030_PWMx_PWMxOFF	0x1
#define PWMxON_LENGTH		BIT(7)
static inline int gpio_twl4030_read(u8 address)
static u8 cached_leden;
static void twl4030_led_set_value(int led, int value)
static int twl4030_set_gpio_direction(int gpio, int is_input)
static int twl4030_set_gpio_dataout(int gpio, int enable)
static int twl4030_get_gpio_datain(int gpio)
static int twl_request(struct gpio_chip *chip, unsigned offset)
static void twl_free(struct gpio_chip *chip, unsigned offset)
static int twl_direction_in(struct gpio_chip *chip, unsigned offset)
static int twl_get(struct gpio_chip *chip, unsigned offset)
static int twl_direction_out(struct gpio_chip *chip, unsigned offset, int value)
static void twl_set(struct gpio_chip *chip, unsigned offset, int value)
static int twl_to_irq(struct gpio_chip *chip, unsigned offset)
static struct gpio_chip twl_gpiochip = ;
static int __devinit gpio_twl4030_pulls(u32 ups, u32 downs)
static int __devinit gpio_twl4030_debounce(u32 debounce, u8 mmc_cd)
static int gpio_twl4030_remove(struct platform_device *pdev);
static int __devinit gpio_twl4030_probe(struct platform_device *pdev)
static int gpio_twl4030_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:twl4030_gpio");
static struct platform_driver gpio_twl4030_driver = ;
static int __init gpio_twl4030_init(void)
subsys_initcall(gpio_twl4030_init);
static void __exit gpio_twl4030_exit(void)
module_exit(gpio_twl4030_exit);
MODULE_AUTHOR("Texas Instruments, Inc.");
MODULE_DESCRIPTION("GPIO interface for TWL4030");
MODULE_LICENSE("GPL");
