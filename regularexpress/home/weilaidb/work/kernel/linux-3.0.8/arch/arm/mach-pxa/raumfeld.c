#define GPIO_ON_OFF		(14)
#define GPIO_VOLENC_A		(19)
#define GPIO_VOLENC_B		(20)
#define GPIO_CHARGE_DONE	(23)
#define GPIO_CHARGE_IND		(27)
#define GPIO_TOUCH_IRQ		(32)
#define GPIO_ETH_IRQ		(40)
#define GPIO_SPI_MISO		(98)
#define GPIO_ACCEL_IRQ		(104)
#define GPIO_RESCUE_BOOT	(115)
#define GPIO_DOCK_DETECT	(116)
#define GPIO_KEY1		(117)
#define GPIO_KEY2		(118)
#define GPIO_KEY3		(119)
#define GPIO_CHARGE_USB_OK	(112)
#define GPIO_CHARGE_DC_OK	(101)
#define GPIO_CHARGE_USB_SUSP	(102)
#define GPIO_SHUTDOWN_SUPPLY	(16)
#define GPIO_SHUTDOWN_BATT	(18)
#define GPIO_CHRG_PEN2		(31)
#define GPIO_TFT_VA_EN		(33)
#define GPIO_SPDIF_CS		(34)
#define GPIO_LED2		(35)
#define GPIO_LED1		(36)
#define GPIO_SPDIF_RESET	(38)
#define GPIO_SPI_CLK		(95)
#define GPIO_MCLK_DAC_CS	(96)
#define GPIO_SPI_MOSI		(97)
#define GPIO_W1_PULLUP_ENABLE	(105)
#define GPIO_DISPLAY_ENABLE	(106)
#define GPIO_MCLK_RESET		(111)
#define GPIO_W2W_RESET		(113)
#define GPIO_W2W_PDN		(114)
#define GPIO_CODEC_RESET	(120)
#define GPIO_AUDIO_VA_ENABLE	(124)
#define GPIO_ACCEL_CS		(125)
#define GPIO_ONE_WIRE		(126)
static mfp_cfg_t raumfeld_controller_pin_config[] __initdata = ;
static mfp_cfg_t raumfeld_connector_pin_config[] __initdata = ;
static mfp_cfg_t raumfeld_speaker_pin_config[] __initdata = ;
static struct resource smc91x_resources[] = ;
static struct smsc911x_platform_config raumfeld_smsc911x_config = ;
static struct platform_device smc91x_device = ;
static struct mtd_partition raumfeld_nand_partitions[] = ;
static struct pxa3xx_nand_platform_data raumfeld_nand_info = ;
static struct pxaohci_platform_data raumfeld_ohci_info = ;
static struct rotary_encoder_platform_data raumfeld_rotary_encoder_info = ;
static struct platform_device rotary_encoder_device = ;
static struct gpio_keys_button gpio_keys_button[] = ;
static struct gpio_keys_platform_data gpio_keys_platform_data = ;
static struct platform_device raumfeld_gpio_keys_device = ;
static struct gpio_led raumfeld_leds[] = ;
static struct gpio_led_platform_data raumfeld_led_platform_data = ;
static struct platform_device raumfeld_led_device = ;
static void w1_enable_external_pullup(int enable)
static struct w1_gpio_platform_data w1_gpio_platform_data = ;
struct platform_device raumfeld_w1_gpio_device = ;
static void __init raumfeld_w1_init(void)
static struct platform_pwm_backlight_data raumfeld_pwm_backlight_data = ;
static struct platform_device raumfeld_pwm_backlight_device = ;
static struct gpio_led raumfeld_lt3593_led = ;
static struct gpio_led_platform_data raumfeld_lt3593_platform_data = ;
static struct platform_device raumfeld_lt3593_device = ;
static struct pxafb_mode_info sharp_lq043t3dx02_mode = ;
static struct pxafb_mach_info raumfeld_sharp_lcd_info = ;
static void __init raumfeld_lcd_init(void)
struct spi_gpio_platform_data raumfeld_spi_platform_data = ;
static struct platform_device raumfeld_spi_device = ;
static struct lis3lv02d_platform_data lis3_pdata = ;
#define SPI_AK4104	\
#define SPI_LIS3	\
#define SPI_DAC7512	\
static struct spi_board_info connector_spi_devices[] __initdata = ;
static struct spi_board_info speaker_spi_devices[] __initdata = ;
static struct spi_board_info controller_spi_devices[] __initdata = ;
static int raumfeld_mci_init(struct device *dev, irq_handler_t isr, void *data)
static void raumfeld_mci_exit(struct device *dev, void *data)
static struct pxamci_platform_data raumfeld_mci_platform_data = ;
static int power_supply_init(struct device *dev)
static void power_supply_exit(struct device *dev)
static int raumfeld_is_ac_online(void)
static int raumfeld_is_usb_online(void)
static char *raumfeld_power_supplicants[] = ;
static void raumfeld_power_signal_charged(void)
static int raumfeld_power_resume(void)
static struct pda_power_pdata power_supply_info = ;
static struct resource power_supply_resources[] = ;
static irqreturn_t charge_done_irq(int irq, void *dev_id)
static struct platform_device raumfeld_power_supply = ;
static void __init raumfeld_power_init(void)
static struct regulator_consumer_supply audio_va_consumer_supply =
REGULATOR_SUPPLY("va", "0-0048");
struct regulator_init_data audio_va_initdata = ;
static struct fixed_voltage_config audio_va_config = ;
static struct platform_device audio_va_device = ;
static struct regulator_consumer_supply audio_dummy_supplies[] = ;
struct regulator_init_data audio_dummy_initdata = ;
static struct fixed_voltage_config audio_dummy_config = ;
static struct platform_device audio_supply_dummy_device = ;
static struct platform_device *audio_regulator_devices[] = ;
static struct regulator_consumer_supply vcc_mmc_supply =
REGULATOR_SUPPLY("vmmc", "pxa2xx-mci.0");
static struct regulator_init_data vcc_mmc_init_data = ;
struct max8660_subdev_data max8660_v6_subdev_data = ;
static struct max8660_platform_data max8660_pdata = ;
static struct i2c_board_info raumfeld_pwri2c_board_info = ;
static struct i2c_board_info raumfeld_connector_i2c_board_info __initdata = ;
static struct eeti_ts_platform_data eeti_ts_pdata = ;
static struct i2c_board_info raumfeld_controller_i2c_board_info __initdata = ;
static struct platform_device *raumfeld_common_devices[] = ;
static void __init raumfeld_audio_init(void)
static void __init raumfeld_common_init(void)
static void __init raumfeld_controller_init(void)
static void __init raumfeld_connector_init(void)
static void __init raumfeld_speaker_init(void)
#define	RAUMFELD_SDRAM_BASE	0xa0000000
MACHINE_START(RAUMFELD_RC, "Raumfeld Controller")
.boot_params	= RAUMFELD_SDRAM_BASE + 0x100,
.init_machine	= raumfeld_controller_init,
.map_io		= pxa3xx_map_io,
.init_irq	= pxa3xx_init_irq,
.timer		= &pxa_timer,
MACHINE_END
MACHINE_START(RAUMFELD_CONNECTOR, "Raumfeld Connector")
.boot_params	= RAUMFELD_SDRAM_BASE + 0x100,
.init_machine	= raumfeld_connector_init,
.map_io		= pxa3xx_map_io,
.init_irq	= pxa3xx_init_irq,
.timer		= &pxa_timer,
MACHINE_END
MACHINE_START(RAUMFELD_SPEAKER, "Raumfeld Speaker")
.boot_params	= RAUMFELD_SDRAM_BASE + 0x100,
.init_machine	= raumfeld_speaker_init,
.map_io		= pxa3xx_map_io,
.init_irq	= pxa3xx_init_irq,
.timer		= &pxa_timer,
MACHINE_END
