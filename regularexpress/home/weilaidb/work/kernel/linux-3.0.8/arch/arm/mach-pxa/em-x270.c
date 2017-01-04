#define GPIO13_MMC_CD		(13)
#define GPIO95_MMC_WP		(95)
#define GPIO56_NAND_RB		(56)
#define GPIO93_CAM_RESET	(93)
#define GPIO16_USB_HUB_RESET	(16)
#define GPIO114_MMC_CD		(114)
#define GPIO20_NAND_RB		(20)
#define GPIO38_SD_PWEN		(38)
#define GPIO37_WLAN_RST		(37)
#define GPIO95_TOUCHPAD_INT	(95)
#define GPIO130_CAM_RESET	(130)
#define GPIO10_USB_HUB_RESET	(10)
#define GPIO11_NAND_CS		(11)
#define GPIO41_ETHIRQ		(41)
#define EM_X270_ETHIRQ		IRQ_GPIO(GPIO41_ETHIRQ)
#define GPIO115_WLAN_PWEN	(115)
#define GPIO19_WLAN_STRAP	(19)
#define GPIO9_USB_VBUS_EN	(9)
static int mmc_cd;
static int nand_rb;
static int dm9000_flags;
static int cam_reset;
static int usb_hub_reset;
static unsigned long common_pin_config[] = ;
static unsigned long em_x270_pin_config[] = ;
static unsigned long exeda_pin_config[] = ;
#if defined(CONFIG_DM9000) || defined(CONFIG_DM9000_MODULE)
static struct resource em_x270_dm9000_resource[] = ;
static struct dm9000_plat_data em_x270_dm9000_platdata = ;
static struct platform_device em_x270_dm9000 = ;
static void __init em_x270_init_dm9000(void)
static inline void em_x270_init_dm9000(void)
#if defined(CONFIG_RTC_DRV_V3020) || defined(CONFIG_RTC_DRV_V3020_MODULE)
static struct resource em_x270_v3020_resource[] = ;
static struct v3020_platform_data em_x270_v3020_platdata = ;
static struct platform_device em_x270_rtc = ;
static void __init em_x270_init_rtc(void)
static inline void em_x270_init_rtc(void)
#if defined(CONFIG_MTD_NAND_PLATFORM) || defined(CONFIG_MTD_NAND_PLATFORM_MODULE)
static inline void nand_cs_on(void)
static void nand_cs_off(void)
static void em_x270_nand_cmd_ctl(struct mtd_info *mtd, int dat,
unsigned int ctrl)
static int em_x270_nand_device_ready(struct mtd_info *mtd)
static struct mtd_partition em_x270_partition_info[] = ;
static const char *em_x270_part_probes[] = ;
struct platform_nand_data em_x270_nand_platdata = ;
static struct resource em_x270_nand_resource[] = ;
static struct platform_device em_x270_nand = ;
static void __init em_x270_init_nand(void)
static inline void em_x270_init_nand(void)
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition em_x270_nor_parts[] = ;
static struct physmap_flash_data em_x270_nor_data[] = ;
static struct resource em_x270_nor_flash_resource = ;
static struct platform_device em_x270_physmap_flash = ;
static void __init em_x270_init_nor(void)
static inline void em_x270_init_nor(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static struct regulator *em_x270_usb_ldo;
static int em_x270_usb_hub_init(void)
static int em_x270_ohci_init(struct device *dev)
static void em_x270_ohci_exit(struct device *dev)
static struct pxaohci_platform_data em_x270_ohci_platform_data = ;
static void __init em_x270_init_ohci(void)
static inline void em_x270_init_ohci(void)
#if defined(CONFIG_MMC) || defined(CONFIG_MMC_MODULE)
static struct regulator *em_x270_sdio_ldo;
static int em_x270_mci_init(struct device *dev,
irq_handler_t em_x270_detect_int,
void *data)
static void em_x270_mci_setpower(struct device *dev, unsigned int vdd)
static void em_x270_mci_exit(struct device *dev, void *data)
static int em_x270_mci_get_ro(struct device *dev)
static struct pxamci_platform_data em_x270_mci_platform_data = ;
static void __init em_x270_init_mmc(void)
static inline void em_x270_init_mmc(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct pxafb_mode_info em_x270_lcd_modes[] = ;
static struct pxafb_mach_info em_x270_lcd = ;
static void __init em_x270_init_lcd(void)
static inline void em_x270_init_lcd(void)
#if defined(CONFIG_SPI_PXA2XX) || defined(CONFIG_SPI_PXA2XX_MODULE)
static struct pxa2xx_spi_master em_x270_spi_info = ;
static struct pxa2xx_spi_chip em_x270_tdo24m_chip = ;
static struct tdo24m_platform_data em_x270_tdo24m_pdata = ;
static struct pxa2xx_spi_master em_x270_spi_2_info = ;
static struct pxa2xx_spi_chip em_x270_libertas_chip = ;
static unsigned long em_x270_libertas_pin_config[] = ;
static int em_x270_libertas_setup(struct spi_device *spi)
static int em_x270_libertas_teardown(struct spi_device *spi)
struct libertas_spi_platform_data em_x270_libertas_pdata = ;
static struct spi_board_info em_x270_spi_devices[] __initdata = ;
static void __init em_x270_init_spi(void)
static inline void em_x270_init_spi(void)
#if defined(CONFIG_SND_PXA2XX_LIB_AC97)
static pxa2xx_audio_ops_t em_x270_ac97_info = ;
static void __init em_x270_init_ac97(void)
static inline void em_x270_init_ac97(void)
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int em_x270_module_matrix_keys[] = ;
struct pxa27x_keypad_platform_data em_x270_module_keypad_info = ;
static unsigned int em_x270_exeda_matrix_keys[] = ;
struct pxa27x_keypad_platform_data em_x270_exeda_keypad_info = ;
static void __init em_x270_init_keypad(void)
static inline void em_x270_init_keypad(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button gpio_keys_button[] = ;
static struct gpio_keys_platform_data em_x270_gpio_keys_data = ;
static struct platform_device em_x270_gpio_keys = ;
static void __init em_x270_init_gpio_keys(void)
static inline void em_x270_init_gpio_keys(void)
#if defined(CONFIG_VIDEO_PXA27x) || defined(CONFIG_VIDEO_PXA27x_MODULE)
static struct regulator *em_x270_camera_ldo;
static int em_x270_sensor_init(void)
struct pxacamera_platform_data em_x270_camera_platform_data = ;
static int em_x270_sensor_power(struct device *dev, int on)
static struct i2c_board_info em_x270_i2c_cam_info[] = ;
static struct soc_camera_link iclink = ;
static struct platform_device em_x270_camera = ;
static void  __init em_x270_init_camera(void)
static inline void em_x270_init_camera(void)
static struct regulator_bulk_data em_x270_gps_consumer_supply = ;
static struct regulator_userspace_consumer_data em_x270_gps_consumer_data = ;
static struct platform_device em_x270_gps_userspace_consumer = ;
static struct regulator_bulk_data em_x270_gprs_consumer_supply = ;
static struct regulator_userspace_consumer_data em_x270_gprs_consumer_data = ;
static struct platform_device em_x270_gprs_userspace_consumer = ;
static struct platform_device *em_x270_userspace_consumers[] = ;
static void __init em_x270_userspace_consumers_init(void)
#define REGULATOR_CONSUMER(_name, _dev, _supply)			       \
static struct regulator_consumer_supply _name##_consumers[] =
REGULATOR_CONSUMER(ldo3, &em_x270_gps_userspace_consumer.dev, "vcc gps");
REGULATOR_CONSUMER(ldo5, NULL, "vcc cam");
REGULATOR_CONSUMER(ldo10, &pxa_device_mci.dev, "vcc sdio");
REGULATOR_CONSUMER(ldo12, NULL, "vcc usb");
REGULATOR_CONSUMER(ldo19, &em_x270_gprs_userspace_consumer.dev, "vcc gprs");
REGULATOR_CONSUMER(buck2, NULL, "vcc_core");
#define REGULATOR_INIT(_ldo, _min_uV, _max_uV, _ops_mask)		\
static struct regulator_init_data _ldo##_data = ;
REGULATOR_INIT(ldo3, 3200000, 3200000, REGULATOR_CHANGE_STATUS);
REGULATOR_INIT(ldo5, 3000000, 3000000, REGULATOR_CHANGE_STATUS);
REGULATOR_INIT(ldo10, 2000000, 3200000,
REGULATOR_CHANGE_STATUS | REGULATOR_CHANGE_VOLTAGE);
REGULATOR_INIT(ldo12, 3000000, 3000000, REGULATOR_CHANGE_STATUS);
REGULATOR_INIT(ldo19, 3200000, 3200000, REGULATOR_CHANGE_STATUS);
REGULATOR_INIT(buck2, 1000000, 1650000, REGULATOR_CHANGE_VOLTAGE);
struct led_info em_x270_led_info = ;
struct power_supply_info em_x270_psy_info = ;
static void em_x270_battery_low(void)
static void em_x270_battery_critical(void)
struct da9030_battery_info em_x270_batterty_info = ;
#define DA9030_SUBDEV(_name, _id, _pdata)	\
#define DA9030_LDO(num)	DA9030_SUBDEV(regulator, LDO##num, &ldo##num##_data)
struct da903x_subdev_info em_x270_da9030_subdevs[] = ;
static struct da903x_platform_data em_x270_da9030_info = ;
static struct i2c_board_info em_x270_i2c_pmic_info = ;
static struct i2c_pxa_platform_data em_x270_pwr_i2c_info = ;
static void __init em_x270_init_da9030(void)
static struct pca953x_platform_data exeda_gpio_ext_pdata = ;
static struct i2c_board_info exeda_i2c_info[] = ;
static struct i2c_pxa_platform_data em_x270_i2c_info = ;
static void __init em_x270_init_i2c(void)
static void __init em_x270_module_init(void)
static void __init em_x270_exeda_init(void)
static void __init em_x270_init(void)
MACHINE_START(EM_X270, "Compulab EM-X270")
.boot_params	= 0xa0000100,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= em_x270_init,
MACHINE_END
MACHINE_START(EXEDA, "Compulab eXeda")
.boot_params	= 0xa0000100,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= em_x270_init,
MACHINE_END
