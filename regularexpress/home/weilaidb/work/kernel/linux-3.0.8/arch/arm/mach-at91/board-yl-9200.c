static void __init yl9200_init_early(void)
static void __init yl9200_init_irq(void)
static struct gpio_led yl9200_leds[] = ;
static struct at91_eth_data __initdata yl9200_eth_data = ;
static struct at91_usbh_data __initdata yl9200_usbh_data = ;
static struct at91_udc_data __initdata yl9200_udc_data = ;
static struct at91_mmc_data __initdata yl9200_mmc_data = ;
static struct mtd_partition __initdata yl9200_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata yl9200_nand_data = ;
#define YL9200_FLASH_BASE	AT91_CHIPSELECT_0
#define YL9200_FLASH_SIZE	SZ_16M
static struct mtd_partition yl9200_flash_partitions[] = ;
static struct physmap_flash_data yl9200_flash_data = ;
static struct resource yl9200_flash_resources[] = ;
static struct platform_device yl9200_flash = ;
static struct i2c_board_info __initdata yl9200_i2c_devices[] = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button yl9200_buttons[] = ;
static struct gpio_keys_platform_data yl9200_button_data = ;
static struct platform_device yl9200_button_device = ;
static void __init yl9200_add_device_buttons(void)
static void __init yl9200_add_device_buttons(void)
#if defined(CONFIG_TOUCHSCREEN_ADS7846) || defined(CONFIG_TOUCHSCREEN_ADS7846_MODULE)
static int ads7843_pendown_state(void)
static struct ads7846_platform_data ads_info = ;
static void __init yl9200_add_device_ts(void)
static void __init yl9200_add_device_ts(void)
static struct spi_board_info yl9200_spi_devices[] = ;
#if defined(CONFIG_FB_S1D13XXX) || defined(CONFIG_FB_S1D13XXX_MODULE)
static void __init yl9200_init_video(void)
static struct s1d13xxxfb_regval yl9200_s1dfb_initregs[] =
;
static struct s1d13xxxfb_pdata yl9200_s1dfb_pdata = ;
#define YL9200_FB_REG_BASE	AT91_CHIPSELECT_7
#define YL9200_FB_VMEM_BASE	YL9200_FB_REG_BASE + SZ_2M
#define YL9200_FB_VMEM_SIZE	SZ_2M
static struct resource yl9200_s1dfb_resource[] = ;
static u64 s1dfb_dmamask = DMA_BIT_MASK(32);
static struct platform_device yl9200_s1dfb_device = ;
void __init yl9200_add_device_video(void)
void __init yl9200_add_device_video(void)
static void __init yl9200_board_init(void)
MACHINE_START(YL9200, "uCdragon YL-9200")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= yl9200_init_early,
.init_irq	= yl9200_init_irq,
.init_machine	= yl9200_board_init,
MACHINE_END
