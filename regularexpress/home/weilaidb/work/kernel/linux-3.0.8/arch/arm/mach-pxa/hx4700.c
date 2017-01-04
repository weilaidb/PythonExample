#define ATI_W3220_PHYS  PXA_CS2_PHYS
#define ASIC3_PHYS      PXA_CS3_PHYS
#define ASIC3_SD_PHYS   (PXA_CS3_PHYS + 0x02000000)
static unsigned long hx4700_pin_config[] __initdata = ;
#define HX4700_GPIO_IN(num, _desc) \
#define HX4700_GPIO_OUT(num, _init, _desc) \
struct gpio_ress ;
static int hx4700_gpio_request(struct gpio_ress *gpios, int size)
static struct pxaficp_platform_data ficp_info = ;
#define INIT_KEY(_code, _gpio, _active_low, _desc)	\
static struct gpio_keys_button gpio_keys_buttons[] = ;
static struct gpio_keys_platform_data gpio_keys_data = ;
static struct platform_device gpio_keys = ;
static u16 asic3_gpio_config[] = ;
static struct resource asic3_resources[] = ;
static struct asic3_platform_data asic3_platform_data = ;
static struct platform_device asic3 = ;
static struct resource egpio_resources[] = ;
static struct htc_egpio_chip egpio_chips[] = ;
static struct htc_egpio_platform_data egpio_info = ;
static struct platform_device egpio = ;
static void sony_lcd_init(void)
static void sony_lcd_off(void)
static void w3220_lcd_suspend(struct w100fb_par *wfb)
static void w3220_lcd_resume(struct w100fb_par *wfb)
#define w3220_lcd_resume	NULL
#define w3220_lcd_suspend	NULL
static struct w100_tg_info w3220_tg_info = ;
static struct w100_gen_regs w3220_regs = ;
static struct w100_mode w3220_modes[] = ;
struct w100_mem_info w3220_mem_info = ;
struct w100_bm_mem_info w3220_bm_mem_info = ;
static struct w100_gpio_regs w3220_gpio_info = ;
static struct w100fb_mach_info w3220_info = ;
static struct resource w3220_resources[] = ;
static struct platform_device w3220 = ;
static void hx4700_lcd_set_power(struct plat_lcd_data *pd, unsigned int power)
static struct plat_lcd_data hx4700_lcd_data = ;
static struct platform_device hx4700_lcd = ;
static struct platform_pwm_backlight_data backlight_data = ;
static struct platform_device backlight = ;
static struct gpio_vbus_mach_info gpio_vbus_info = ;
static struct platform_device gpio_vbus = ;
static const struct ads7846_platform_data tsc2046_info = ;
static struct pxa2xx_spi_chip tsc2046_chip = ;
static struct spi_board_info tsc2046_board_info[] __initdata = ;
static struct pxa2xx_spi_master pxa_ssp2_master_info = ;
static int power_supply_init(struct device *dev)
static int hx4700_is_ac_online(void)
static void power_supply_exit(struct device *dev)
static char *hx4700_supplicants[] = ;
static struct pda_power_pdata power_supply_info = ;
static struct resource power_supply_resources[] = ;
static struct platform_device power_supply = ;
static struct regulator_consumer_supply bq24022_consumers[] = ;
static struct regulator_init_data bq24022_init_data = ;
static struct bq24022_mach_info bq24022_info = ;
static struct platform_device bq24022 = ;
static void hx4700_set_vpp(struct platform_device *pdev, int vpp)
static struct resource strataflash_resource = ;
static struct physmap_flash_data strataflash_data = ;
static struct platform_device strataflash = ;
static struct regulator_consumer_supply max1587a_consumer = ;
static struct regulator_init_data max1587a_v3_info = ;
static struct max1586_subdev_data max1587a_subdev = ;
static struct max1586_platform_data max1587a_info = ;
static struct i2c_board_info __initdata pi2c_board_info[] = ;
static struct platform_device pcmcia = ;
static struct platform_device *devices[] __initdata = ;
static struct gpio_ress global_gpios[] = ;
static void __init hx4700_init(void)
MACHINE_START(H4700, "HP iPAQ HX4700")
.boot_params  = 0xa0000100,
.map_io       = pxa27x_map_io,
.nr_irqs      = HX4700_NR_IRQS,
.init_irq     = pxa27x_init_irq,
.init_machine = hx4700_init,
.timer        = &pxa_timer,
MACHINE_END
