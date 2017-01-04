static struct physmap_flash_data physmap_flash_data = ;
static struct resource physmap_flash_resource = ;
static struct resource puv3_i2c_resources[] = ;
static struct platform_pwm_backlight_data nb0916_backlight_data = ;
static struct gpio_keys_button nb0916_gpio_keys[] = ;
static struct gpio_keys_platform_data nb0916_gpio_button_data = ;
static irqreturn_t nb0916_lcdcaseoff_handler(int irq, void *dev_id)
static irqreturn_t nb0916_overheat_handler(int irq, void *dev_id)
static struct i2c_board_info __initdata puv3_i2c_devices[] = ;
int __init mach_nb0916_init(void)
subsys_initcall_sync(mach_nb0916_init);
