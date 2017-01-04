#if defined(CONFIG_USB_ISP1362_HCD) || defined(CONFIG_USB_ISP1362_HCD_MODULE)
const char bfin_board_name[] = "ADI BF537-STAMP";
#if defined(CONFIG_USB_ISP1760_HCD) || defined(CONFIG_USB_ISP1760_HCD_MODULE)
static struct resource bfin_isp1760_resources[] = ;
static struct isp1760_platform_data isp1760_priv = ;
static struct platform_device bfin_isp1760_device = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button bfin_gpio_keys_table[] = ;
static struct gpio_keys_platform_data bfin_gpio_keys_data = ;
static struct platform_device bfin_device_gpiokeys = ;
#if defined(CONFIG_BFIN_CFPCMCIA) || defined(CONFIG_BFIN_CFPCMCIA_MODULE)
static struct resource bfin_pcmcia_cf_resources[] = ;
static struct platform_device bfin_pcmcia_cf_device = ;
#if defined(CONFIG_RTC_DRV_BFIN) || defined(CONFIG_RTC_DRV_BFIN_MODULE)
static struct platform_device rtc_device = ;
#if defined(CONFIG_SMC91X) || defined(CONFIG_SMC91X_MODULE)
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_DM9000) || defined(CONFIG_DM9000_MODULE)
static struct resource dm9000_resources[] = ;
static struct platform_device dm9000_device = ;
#if defined(CONFIG_USB_SL811_HCD) || defined(CONFIG_USB_SL811_HCD_MODULE)
static struct resource sl811_hcd_resources[] = ;
#if defined(CONFIG_USB_SL811_BFIN_USE_VBUS)
void sl811_port_power(struct device *dev, int is_on)
static struct sl811_platform_data sl811_priv = ;
static struct platform_device sl811_hcd_device = ;
#if defined(CONFIG_USB_ISP1362_HCD) || defined(CONFIG_USB_ISP1362_HCD_MODULE)
static struct resource isp1362_hcd_resources[] = ;
static struct isp1362_platform_data isp1362_priv = ;
static struct platform_device isp1362_hcd_device = ;
#if defined(CONFIG_CAN_BFIN) || defined(CONFIG_CAN_BFIN_MODULE)
static unsigned short bfin_can_peripherals[] = ;
static struct resource bfin_can_resources[] = ;
static struct platform_device bfin_can_device = ;
#if defined(CONFIG_BFIN_MAC) || defined(CONFIG_BFIN_MAC_MODULE)
static const unsigned short bfin_mac_peripherals[] = P_MII0;
static struct bfin_phydev_platform_data bfin_phydev_data[] = ;
static struct bfin_mii_bus_platform_data bfin_mii_bus_data = ;
static struct platform_device bfin_mii_bus = ;
static struct platform_device bfin_mac_device = ;
#if defined(CONFIG_USB_NET2272) || defined(CONFIG_USB_NET2272_MODULE)
static struct resource net2272_bfin_resources[] = ;
static struct platform_device net2272_bfin_device = ;
#if defined(CONFIG_MTD_NAND_PLATFORM) || defined(CONFIG_MTD_NAND_PLATFORM_MODULE)
const char *part_probes[] = ;
static struct mtd_partition bfin_plat_nand_partitions[] = ;
#define BFIN_NAND_PLAT_CLE 2
#define BFIN_NAND_PLAT_ALE 1
static void bfin_plat_nand_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
#define BFIN_NAND_PLAT_READY GPIO_PF3
static int bfin_plat_nand_dev_ready(struct mtd_info *mtd)
static struct platform_nand_data bfin_plat_nand_data = ;
#define MAX(x, y) (x > y ? x : y)
static struct resource bfin_plat_nand_resources = ;
static struct platform_device bfin_async_nand_device = ;
static void bfin_plat_nand_init(void)
static void bfin_plat_nand_init(void)
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition stamp_partitions[] = ;
static struct physmap_flash_data stamp_flash_data = ;
static struct resource stamp_flash_resource = ;
static struct platform_device stamp_flash_device = ;
#if defined(CONFIG_MTD_M25P80) \
|| defined(CONFIG_MTD_M25P80_MODULE)
static struct mtd_partition bfin_spi_flash_partitions[] = ;
static struct flash_platform_data bfin_spi_flash_data = ;
static struct bfin5xx_spi_chip spi_flash_chip_info = ;
#if defined(CONFIG_BFIN_SPI_ADC) \
|| defined(CONFIG_BFIN_SPI_ADC_MODULE)
static struct bfin5xx_spi_chip spi_adc_chip_info = ;
#if defined(CONFIG_SND_BF5XX_SOC_AD183X) \
|| defined(CONFIG_SND_BF5XX_SOC_AD183X_MODULE)
static struct bfin5xx_spi_chip ad1836_spi_chip_info = ;
#if defined(CONFIG_SND_BF5XX_SOC_AD193X) \
|| defined(CONFIG_SND_BF5XX_SOC_AD193X_MODULE)
static struct bfin5xx_spi_chip ad1938_spi_chip_info = ;
#if defined(CONFIG_SND_BF5XX_SOC_ADAV80X) \
|| defined(CONFIG_SND_BF5XX_SOC_ADAV80X_MODULE)
static struct bfin5xx_spi_chip adav801_spi_chip_info = ;
#if defined(CONFIG_INPUT_AD714X_SPI) || defined(CONFIG_INPUT_AD714X_SPI_MODULE)
static struct bfin5xx_spi_chip ad7147_spi_chip_info = ;
static struct ad714x_slider_plat ad7147_spi_slider_plat[] = ;
static struct ad714x_button_plat ad7147_spi_button_plat[] = ;
static struct ad714x_platform_data ad7147_spi_platform_data = ;
#if defined(CONFIG_INPUT_AD714X_I2C) || defined(CONFIG_INPUT_AD714X_I2C_MODULE)
static struct ad714x_button_plat ad7142_i2c_button_plat[] = ;
static struct ad714x_platform_data ad7142_i2c_platform_data = ;
#if defined(CONFIG_AD2S90) || defined(CONFIG_AD2S90_MODULE)
static struct bfin5xx_spi_chip ad2s90_spi_chip_info = ;
#if defined(CONFIG_AD2S120X) || defined(CONFIG_AD2S120X_MODULE)
static unsigned short ad2s120x_platform_data[] = ;
static struct bfin5xx_spi_chip ad2s120x_spi_chip_info = ;
#if defined(CONFIG_AD2S1210) || defined(CONFIG_AD2S1210_MODULE)
static unsigned short ad2s1210_platform_data[] = ;
static struct bfin5xx_spi_chip ad2s1210_spi_chip_info = ;
#if defined(CONFIG_AD7314) || defined(CONFIG_AD7314_MODULE)
static struct bfin5xx_spi_chip ad7314_spi_chip_info = ;
#if defined(CONFIG_AD7816) || defined(CONFIG_AD7816_MODULE)
static unsigned short ad7816_platform_data[] = ;
static struct bfin5xx_spi_chip ad7816_spi_chip_info = ;
#if defined(CONFIG_ADT7310) || defined(CONFIG_ADT7310_MODULE)
static unsigned long adt7310_platform_data[3] = ;
static struct bfin5xx_spi_chip adt7310_spi_chip_info = ;
#if defined(CONFIG_AD7298) || defined(CONFIG_AD7298_MODULE)
static unsigned short ad7298_platform_data[] = ;
static struct bfin5xx_spi_chip ad7298_spi_chip_info = ;
#if defined(CONFIG_ADT7316_SPI) || defined(CONFIG_ADT7316_SPI_MODULE)
static unsigned long adt7316_spi_data[2] = ;
static struct bfin5xx_spi_chip adt7316_spi_chip_info = ;
#if defined(CONFIG_MMC_SPI) || defined(CONFIG_MMC_SPI_MODULE)
#define MMC_SPI_CARD_DETECT_INT IRQ_PF5
static int bfin_mmc_spi_init(struct device *dev,
irqreturn_t (*detect_int)(int, void *), void *data)
static void bfin_mmc_spi_exit(struct device *dev, void *data)
static struct mmc_spi_platform_data bfin_mmc_spi_pdata = ;
static struct bfin5xx_spi_chip  mmc_spi_chip_info = ;
#if defined(CONFIG_TOUCHSCREEN_AD7877) || defined(CONFIG_TOUCHSCREEN_AD7877_MODULE)
static struct bfin5xx_spi_chip spi_ad7877_chip_info = ;
static const struct ad7877_platform_data bfin_ad7877_ts_info = ;
#if defined(CONFIG_TOUCHSCREEN_AD7879) || defined(CONFIG_TOUCHSCREEN_AD7879_MODULE)
static const struct ad7879_platform_data bfin_ad7879_ts_info = ;
#if defined(CONFIG_INPUT_ADXL34X) || defined(CONFIG_INPUT_ADXL34X_MODULE)
static const struct adxl34x_platform_data adxl34x_info = ;
#if defined(CONFIG_TOUCHSCREEN_AD7879_SPI) || defined(CONFIG_TOUCHSCREEN_AD7879_SPI_MODULE)
static struct bfin5xx_spi_chip spi_ad7879_chip_info = ;
#if defined(CONFIG_SPI_SPIDEV) || defined(CONFIG_SPI_SPIDEV_MODULE)
static struct bfin5xx_spi_chip spidev_chip_info = ;
#if defined(CONFIG_FB_BFIN_LQ035Q1) || defined(CONFIG_FB_BFIN_LQ035Q1_MODULE)
static struct bfin5xx_spi_chip lq035q1_spi_chip_info = ;
#if defined(CONFIG_ENC28J60) || defined(CONFIG_ENC28J60_MODULE)
static struct bfin5xx_spi_chip enc28j60_spi_chip_info = ;
#if defined(CONFIG_ADF702X) || defined(CONFIG_ADF702X_MODULE)
static struct bfin5xx_spi_chip adf7021_spi_chip_info = ;
#define TXREG 0x0160A470
static const u32 adf7021_regs[] = ;
static struct adf702x_platform_data adf7021_platform_data = ;
static inline void adf702x_mac_init(void)
static inline void adf702x_mac_init(void)
#if defined(CONFIG_TOUCHSCREEN_ADS7846) || defined(CONFIG_TOUCHSCREEN_ADS7846_MODULE)
static struct bfin5xx_spi_chip ad7873_spi_chip_info = ;
static int ads7873_get_pendown_state(void)
static struct ads7846_platform_data __initdata ad7873_pdata = ;
#if defined(CONFIG_MTD_DATAFLASH) \
|| defined(CONFIG_MTD_DATAFLASH_MODULE)
static struct mtd_partition bfin_spi_dataflash_partitions[] = ;
static struct flash_platform_data bfin_spi_dataflash_data = ;
static struct bfin5xx_spi_chip data_flash_chip_info = ;
#if defined(CONFIG_INPUT_ADXL34X_SPI) || defined(CONFIG_INPUT_ADXL34X_SPI_MODULE)
static struct bfin5xx_spi_chip spi_adxl34x_chip_info = ;
#if defined(CONFIG_AD7476) || defined(CONFIG_AD7476_MODULE)
static struct bfin5xx_spi_chip spi_ad7476_chip_info = ;
static struct spi_board_info bfin_spi_board_info[] __initdata = ;
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
static struct bfin5xx_spi_master bfin_spi0_info = ;
static struct resource bfin_spi0_resource[] = ;
static struct platform_device bfin_spi0_device = ;
#if defined(CONFIG_SPI_BFIN_SPORT) || defined(CONFIG_SPI_BFIN_SPORT_MODULE)
static struct bfin5xx_spi_master bfin_sport_spi0_info = ;
static struct resource bfin_sport_spi0_resource[] = ;
static struct platform_device bfin_sport_spi0_device = ;
static struct bfin5xx_spi_master bfin_sport_spi1_info = ;
static struct resource bfin_sport_spi1_resource[] = ;
static struct platform_device bfin_sport_spi1_device = ;
#if defined(CONFIG_FB_BF537_LQ035) || defined(CONFIG_FB_BF537_LQ035_MODULE)
static struct platform_device bfin_fb_device = ;
#if defined(CONFIG_FB_BFIN_LQ035Q1) || defined(CONFIG_FB_BFIN_LQ035Q1_MODULE)
static struct bfin_lq035q1fb_disp_info bfin_lq035q1_data = ;
static struct resource bfin_lq035q1_resources[] = ;
static struct platform_device bfin_lq035q1_device = ;
#if defined(CONFIG_SERIAL_BFIN) || defined(CONFIG_SERIAL_BFIN_MODULE)
static struct resource bfin_uart0_resources[] = ;
static unsigned short bfin_uart0_peripherals[] = ;
static struct platform_device bfin_uart0_device = ;
static struct resource bfin_uart1_resources[] = ;
static unsigned short bfin_uart1_peripherals[] = ;
static struct platform_device bfin_uart1_device = ;
#if defined(CONFIG_BFIN_SIR) || defined(CONFIG_BFIN_SIR_MODULE)
static struct resource bfin_sir0_resources[] = ;
static struct platform_device bfin_sir0_device = ;
static struct resource bfin_sir1_resources[] = ;
static struct platform_device bfin_sir1_device = ;
#if defined(CONFIG_I2C_BLACKFIN_TWI) || defined(CONFIG_I2C_BLACKFIN_TWI_MODULE)
static struct resource bfin_twi0_resource[] = ;
static struct platform_device i2c_bfin_twi_device = ;
#if defined(CONFIG_KEYBOARD_ADP5588) || defined(CONFIG_KEYBOARD_ADP5588_MODULE)
static const unsigned short adp5588_keymap[ADP5588_KEYMAPSIZE] = ;
static struct adp5588_kpad_platform_data adp5588_kpad_data = ;
#if defined(CONFIG_PMIC_ADP5520) || defined(CONFIG_PMIC_ADP5520_MODULE)
static struct adp5520_backlight_platform_data adp5520_backlight_data = ;
static struct led_info adp5520_leds[] = ;
static struct adp5520_leds_platform_data adp5520_leds_data = ;
static struct adp5520_gpio_platform_data adp5520_gpio_data = ;
static const unsigned short adp5520_keymap[ADP5520_KEYMAPSIZE] = ;
static struct adp5520_keys_platform_data adp5520_keys_data = ;
static struct adp5520_platform_data adp5520_pdev_data = ;
#if defined(CONFIG_GPIO_ADP5588) || defined(CONFIG_GPIO_ADP5588_MODULE)
static struct adp5588_gpio_platform_data adp5588_gpio_data = ;
#if defined(CONFIG_BACKLIGHT_ADP8870) || defined(CONFIG_BACKLIGHT_ADP8870_MODULE)
static struct led_info adp8870_leds[] = ;
static struct adp8870_backlight_platform_data adp8870_pdata = ;
#if defined(CONFIG_BACKLIGHT_ADP8860) || defined(CONFIG_BACKLIGHT_ADP8860_MODULE)
static struct led_info adp8860_leds[] = ;
static struct adp8860_backlight_platform_data adp8860_pdata = ;
#if defined(CONFIG_REGULATOR_AD5398) || defined(CONFIG_REGULATOR_AD5398_MODULE)
static struct regulator_consumer_supply ad5398_consumer = ;
static struct regulator_init_data ad5398_regulator_data = ;
#if defined(CONFIG_REGULATOR_VIRTUAL_CONSUMER) || \
defined(CONFIG_REGULATOR_VIRTUAL_CONSUMER_MODULE)
static struct platform_device ad5398_virt_consumer_device = ;
#if defined(CONFIG_REGULATOR_USERSPACE_CONSUMER) || \
defined(CONFIG_REGULATOR_USERSPACE_CONSUMER_MODULE)
static struct regulator_bulk_data ad5398_bulk_data = ;
static struct regulator_userspace_consumer_data ad5398_userspace_comsumer_data = ;
static struct platform_device ad5398_userspace_consumer_device = ;
#if defined(CONFIG_ADT7410) || defined(CONFIG_ADT7410_MODULE)
static unsigned long adt7410_platform_data[2] = ;
#if defined(CONFIG_ADT7316_I2C) || defined(CONFIG_ADT7316_I2C_MODULE)
static unsigned long adt7316_i2c_data[2] = ;
static struct i2c_board_info __initdata bfin_i2c_board_info[] = ;
#if defined(CONFIG_SERIAL_BFIN_SPORT) || defined(CONFIG_SERIAL_BFIN_SPORT_MODULE)
static struct resource bfin_sport0_uart_resources[] = ;
static unsigned short bfin_sport0_peripherals[] = ;
static struct platform_device bfin_sport0_uart_device = ;
static struct resource bfin_sport1_uart_resources[] = ;
static unsigned short bfin_sport1_peripherals[] = ;
static struct platform_device bfin_sport1_uart_device = ;
#if defined(CONFIG_PATA_PLATFORM) || defined(CONFIG_PATA_PLATFORM_MODULE)
#define CF_IDE_NAND_CARD_USE_HDD_INTERFACE
#define PATA_INT	IRQ_PF5
static struct pata_platform_info bfin_pata_platform_data = ;
static struct resource bfin_pata_resources[] = ;
#elif defined(CF_IDE_NAND_CARD_USE_CF_IN_COMMON_MEMORY_MODE)
static struct pata_platform_info bfin_pata_platform_data = ;
static struct resource bfin_pata_resources[] = ;
static struct platform_device bfin_pata_device = ;
static const unsigned int cclk_vlev_datasheet[] =
;
static struct bfin_dpmc_platform_data bfin_dmpc_vreg_data = ;
static struct platform_device bfin_dpmc = ;
#if defined(CONFIG_SND_BF5XX_I2S) || defined(CONFIG_SND_BF5XX_I2S_MODULE) || \
defined(CONFIG_SND_BF5XX_TDM) || defined(CONFIG_SND_BF5XX_TDM_MODULE) || \
defined(CONFIG_SND_BF5XX_AC97) || defined(CONFIG_SND_BF5XX_AC97_MODULE)
#define SPORT_REQ(x) \
[x] =
static const u16 bfin_snd_pin[][7] = ;
static struct bfin_snd_platform_data bfin_snd_data[] = ;
#define BFIN_SND_RES(x) \
[x] =
static struct resource bfin_snd_resources[][4] = ;
static struct platform_device bfin_pcm = ;
#if defined(CONFIG_SND_BF5XX_SOC_AD73311) || defined(CONFIG_SND_BF5XX_SOC_AD73311_MODULE)
static struct platform_device bfin_ad73311_codec_device = ;
#if defined(CONFIG_SND_BF5XX_SOC_I2S) || defined(CONFIG_SND_BF5XX_SOC_I2S_MODULE)
static struct platform_device bfin_i2s = ;
#if defined(CONFIG_SND_BF5XX_SOC_TDM) || defined(CONFIG_SND_BF5XX_SOC_TDM_MODULE)
static struct platform_device bfin_tdm = ;
#if defined(CONFIG_SND_BF5XX_SOC_AC97) || defined(CONFIG_SND_BF5XX_SOC_AC97_MODULE)
static struct platform_device bfin_ac97 = ;
#if defined(CONFIG_REGULATOR_FIXED_VOLTAGE) || defined(CONFIG_REGULATOR_FIXED_VOLTAGE_MODULE)
#define REGULATOR_ADP122	"adp122"
#define REGULATOR_ADP122_UV	2500000
static struct regulator_consumer_supply adp122_consumers = ;
static struct regulator_init_data adp_switch_regulator_data = ;
static struct fixed_voltage_config adp_switch_pdata = ;
static struct platform_device adp_switch_device = ;
#if defined(CONFIG_REGULATOR_USERSPACE_CONSUMER) || \
defined(CONFIG_REGULATOR_USERSPACE_CONSUMER_MODULE)
static struct regulator_bulk_data adp122_bulk_data = ;
static struct regulator_userspace_consumer_data adp122_userspace_comsumer_data = ;
static struct platform_device adp122_userspace_consumer_device = ;
#if defined(CONFIG_IIO_GPIO_TRIGGER) || \
defined(CONFIG_IIO_GPIO_TRIGGER_MODULE)
static struct resource iio_gpio_trigger_resources[] = ;
static struct platform_device iio_gpio_trigger = ;
static struct platform_device *stamp_devices[] __initdata = ;
static int __init stamp_init(void)
arch_initcall(stamp_init);
static struct platform_device *stamp_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
void native_machine_restart(char *cmd)
#define FLASH_MAC	0x203f0000
void bfin_get_ether_addr(char *addr)
EXPORT_SYMBOL(bfin_get_ether_addr);
