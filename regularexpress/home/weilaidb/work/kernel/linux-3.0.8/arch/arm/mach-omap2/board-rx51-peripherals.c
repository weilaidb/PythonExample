#define SYSTEM_REV_B_USES_VAUX3	0x1699
#define SYSTEM_REV_S_USES_VAUX3 0x8
#define RX51_WL1251_POWER_GPIO		87
#define RX51_WL1251_IRQ_GPIO		42
#define RX51_FMTX_RESET_GPIO		163
#define RX51_FMTX_IRQ			53
#define RX51_USB_TRANSCEIVER_RST_GPIO	67
enum ;
static struct wl12xx_platform_data wl1251_pdata;
#if defined(CONFIG_SENSORS_TSL2563) || defined(CONFIG_SENSORS_TSL2563_MODULE)
static struct tsl2563_platform_data rx51_tsl2563_platform_data = ;
static struct omap2_mcspi_device_config wl1251_mcspi_config = ;
static struct omap2_mcspi_device_config mipid_mcspi_config = ;
static struct omap2_mcspi_device_config tsc2005_mcspi_config = ;
static struct spi_board_info rx51_peripherals_spi_board_info[] __initdata = ;
static void rx51_charger_set_power(bool on)
static struct isp1704_charger_data rx51_charger_data = ;
static struct platform_device rx51_charger_device = ;
static void __init rx51_charger_init(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
#define RX51_GPIO_CAMERA_LENS_COVER	110
#define RX51_GPIO_CAMERA_FOCUS		68
#define RX51_GPIO_CAMERA_CAPTURE	69
#define RX51_GPIO_KEYPAD_SLIDE		71
#define RX51_GPIO_LOCK_BUTTON		113
#define RX51_GPIO_PROXIMITY		89
#define RX51_GPIO_DEBOUNCE_TIMEOUT	10
static struct gpio_keys_button rx51_gpio_keys[] = ;
static struct gpio_keys_platform_data rx51_gpio_keys_data = ;
static struct platform_device rx51_gpio_keys_device = ;
static void __init rx51_add_gpio_keys(void)
static void __init rx51_add_gpio_keys(void)
static uint32_t board_keymap[] = ;
static struct matrix_keymap_data board_map_data = ;
static struct twl4030_keypad_data rx51_kp_data = ;
static struct twl4030_madc_platform_data rx51_madc_data = ;
static struct omap_board_mux rx51_mmc2_on_mux[] = ;
static struct omap_board_mux rx51_mmc2_off_mux[] = ;
static struct omap_mux_partition *partition;
static void rx51_mmc2_remux(struct device *dev, int slot, int power_on)
static struct omap2_hsmmc_info mmc[] __initdata = ;
static struct regulator_consumer_supply rx51_vmmc1_supply =
REGULATOR_SUPPLY("vmmc", "omap_hsmmc.0");
static struct regulator_consumer_supply rx51_vaux3_supply =
REGULATOR_SUPPLY("vmmc", "omap_hsmmc.1");
static struct regulator_consumer_supply rx51_vsim_supply =
REGULATOR_SUPPLY("vmmc_aux", "omap_hsmmc.1");
static struct regulator_consumer_supply rx51_vmmc2_supplies[] = ;
static struct regulator_consumer_supply rx51_vio_supplies[] = ;
static struct regulator_consumer_supply rx51_vaux1_consumers[] = ;
static struct regulator_consumer_supply rx51_vdac_supply[] = ;
static struct regulator_init_data rx51_vaux1 = ;
static struct regulator_init_data rx51_vaux2 = ;
static struct regulator_init_data rx51_vaux3_cam = ;
static struct regulator_init_data rx51_vaux3_mmc = ;
static struct regulator_init_data rx51_vaux4 = ;
static struct regulator_init_data rx51_vmmc1 = ;
static struct regulator_init_data rx51_vmmc2 = ;
static struct regulator_init_data rx51_vsim = ;
static struct regulator_init_data rx51_vdac = ;
static struct regulator_init_data rx51_vio = ;
static struct si4713_platform_data rx51_si4713_i2c_data __initdata_or_module = ;
static struct i2c_board_info rx51_si4713_board_info __initdata_or_module = ;
static struct radio_si4713_platform_data rx51_si4713_data __initdata_or_module = ;
static struct platform_device rx51_si4713_dev = ;
static __init void rx51_init_si4713(void)
static int rx51_twlgpio_setup(struct device *dev, unsigned gpio, unsigned n)
static struct twl4030_gpio_platform_data rx51_gpio_data = ;
static struct twl4030_usb_data rx51_usb_data = ;
static struct twl4030_ins sleep_on_seq[] __initdata = ;
static struct twl4030_script sleep_on_script __initdata = ;
static struct twl4030_ins wakeup_seq[] __initdata = ;
static struct twl4030_script wakeup_script __initdata = ;
static struct twl4030_ins wakeup_p3_seq[] __initdata = ;
static struct twl4030_script wakeup_p3_script __initdata = ;
static struct twl4030_ins wrst_seq[] __initdata = ;
static struct twl4030_script wrst_script __initdata = ;
static struct twl4030_script *twl4030_scripts[] __initdata = ;
static struct twl4030_resconfig twl4030_rconfig[] __initdata = ;
static struct twl4030_power_data rx51_t2scripts_data __initdata = ;
struct twl4030_codec_vibra_data rx51_vibra_data __initdata = ;
struct twl4030_codec_data rx51_codec_data __initdata = ;
static struct twl4030_platform_data rx51_twldata __initdata = ;
static struct tpa6130a2_platform_data rx51_tpa6130a2_data __initdata_or_module = ;
static struct aic3x_setup_data rx51_aic34_setup = ;
static struct aic3x_pdata rx51_aic3x_data = ;
static struct aic3x_pdata rx51_aic3x_data2 = ;
static struct i2c_board_info __initdata rx51_peripherals_i2c_board_info_2[] = ;
static int __init rx51_i2c_init(void)
#if defined(CONFIG_MTD_ONENAND_OMAP2) || \
defined(CONFIG_MTD_ONENAND_OMAP2_MODULE)
static struct mtd_partition onenand_partitions[] = ;
static struct omap_onenand_platform_data board_onenand_data[] = ;
#if defined(CONFIG_SMC91X) || defined(CONFIG_SMC91X_MODULE)
static struct omap_smc91x_platform_data board_smc91x_data = ;
static void __init board_smc91x_init(void)
static inline void board_smc91x_init(void)
static void rx51_wl1251_set_power(bool enable)
static struct gpio rx51_wl1251_gpios[] __initdata = ;
static void __init rx51_init_wl1251(void)
void __init rx51_peripherals_init(void)
