const char bfin_board_name[] = "ADI BF548-EZKIT";
#if defined(CONFIG_USB_ISP1760_HCD) || defined(CONFIG_USB_ISP1760_HCD_MODULE)
static struct resource bfin_isp1760_resources[] = ;
static struct isp1760_platform_data isp1760_priv = ;
static struct platform_device bfin_isp1760_device = ;
#if defined(CONFIG_FB_BF54X_LQ043) || defined(CONFIG_FB_BF54X_LQ043_MODULE)
static struct bfin_bf54xfb_mach_info bf54x_lq043_data = ;
static struct resource bf54x_lq043_resources[] = ;
static struct platform_device bf54x_lq043_device = ;
#if defined(CONFIG_KEYBOARD_BFIN) || defined(CONFIG_KEYBOARD_BFIN_MODULE)
static const unsigned int bf548_keymap[] = ;
static struct bfin_kpad_platform_data bf54x_kpad_data = ;
static struct resource bf54x_kpad_resources[] = ;
static struct platform_device bf54x_kpad_device = ;
#if defined(CONFIG_INPUT_BFIN_ROTARY) || defined(CONFIG_INPUT_BFIN_ROTARY_MODULE)
static struct bfin_rotary_platform_data bfin_rotary_data = ;
static struct resource bfin_rotary_resources[] = ;
static struct platform_device bfin_rotary_device = ;
#if defined(CONFIG_INPUT_ADXL34X) || defined(CONFIG_INPUT_ADXL34X_MODULE)
static const struct adxl34x_platform_data adxl34x_info = ;
#if defined(CONFIG_RTC_DRV_BFIN) || defined(CONFIG_RTC_DRV_BFIN_MODULE)
static struct platform_device rtc_device = ;
#if defined(CONFIG_SERIAL_BFIN) || defined(CONFIG_SERIAL_BFIN_MODULE)
static struct resource bfin_uart0_resources[] = ;
static unsigned short bfin_uart0_peripherals[] = ;
static struct platform_device bfin_uart0_device = ;
static struct resource bfin_uart1_resources[] = ;
static unsigned short bfin_uart1_peripherals[] = ;
static struct platform_device bfin_uart1_device = ;
static struct resource bfin_uart2_resources[] = ;
static unsigned short bfin_uart2_peripherals[] = ;
static struct platform_device bfin_uart2_device = ;
static struct resource bfin_uart3_resources[] = ;
static unsigned short bfin_uart3_peripherals[] = ;
static struct platform_device bfin_uart3_device = ;
#if defined(CONFIG_BFIN_SIR) || defined(CONFIG_BFIN_SIR_MODULE)
static struct resource bfin_sir0_resources[] = ;
static struct platform_device bfin_sir0_device = ;
static struct resource bfin_sir1_resources[] = ;
static struct platform_device bfin_sir1_device = ;
static struct resource bfin_sir2_resources[] = ;
static struct platform_device bfin_sir2_device = ;
static struct resource bfin_sir3_resources[] = ;
static struct platform_device bfin_sir3_device = ;
#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)
static struct resource smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device smsc911x_device = ;
#if defined(CONFIG_USB_MUSB_HDRC) || defined(CONFIG_USB_MUSB_HDRC_MODULE)
static struct resource musb_resources[] = ;
static struct musb_hdrc_config musb_config = ;
static struct musb_hdrc_platform_data musb_plat = ;
static u64 musb_dmamask = ~(u32)0;
static struct platform_device musb_device = ;
#if defined(CONFIG_SERIAL_BFIN_SPORT) || defined(CONFIG_SERIAL_BFIN_SPORT_MODULE)
static struct resource bfin_sport0_uart_resources[] = ;
static unsigned short bfin_sport0_peripherals[] = ;
static struct platform_device bfin_sport0_uart_device = ;
static struct resource bfin_sport1_uart_resources[] = ;
static unsigned short bfin_sport1_peripherals[] = ;
static struct platform_device bfin_sport1_uart_device = ;
static struct resource bfin_sport2_uart_resources[] = ;
static unsigned short bfin_sport2_peripherals[] = ;
static struct platform_device bfin_sport2_uart_device = ;
static struct resource bfin_sport3_uart_resources[] = ;
static unsigned short bfin_sport3_peripherals[] = ;
static struct platform_device bfin_sport3_uart_device = ;
#if defined(CONFIG_CAN_BFIN) || defined(CONFIG_CAN_BFIN_MODULE)
static unsigned short bfin_can0_peripherals[] = ;
static struct resource bfin_can0_resources[] = ;
static struct platform_device bfin_can0_device = ;
static unsigned short bfin_can1_peripherals[] = ;
static struct resource bfin_can1_resources[] = ;
static struct platform_device bfin_can1_device = ;
#if defined(CONFIG_PATA_BF54X) || defined(CONFIG_PATA_BF54X_MODULE)
static struct resource bfin_atapi_resources[] = ;
static struct platform_device bfin_atapi_device = ;
#if defined(CONFIG_MTD_NAND_BF5XX) || defined(CONFIG_MTD_NAND_BF5XX_MODULE)
static struct mtd_partition partition_info[] = ;
static struct bf5xx_nand_platform bf5xx_nand_platform = ;
static struct resource bf5xx_nand_resources[] = ;
static struct platform_device bf5xx_nand_device = ;
#if defined(CONFIG_SDH_BFIN) || defined(CONFIG_SDH_BFIN_MODULE)
static struct bfin_sd_host bfin_sdh_data = ;
static struct platform_device bf54x_sdh_device = ;
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition ezkit_partitions[] = ;
static struct physmap_flash_data ezkit_flash_data = ;
static struct resource ezkit_flash_resource = ;
static struct platform_device ezkit_flash_device = ;
#if defined(CONFIG_MTD_M25P80) \
|| defined(CONFIG_MTD_M25P80_MODULE)
static struct mtd_partition bfin_spi_flash_partitions[] = ;
static struct flash_platform_data bfin_spi_flash_data = ;
static struct bfin5xx_spi_chip spi_flash_chip_info = ;
#if defined(CONFIG_SND_BF5XX_SOC_AD183X) \
|| defined(CONFIG_SND_BF5XX_SOC_AD183X_MODULE)
static struct bfin5xx_spi_chip ad1836_spi_chip_info = ;
#if defined(CONFIG_TOUCHSCREEN_AD7877) || defined(CONFIG_TOUCHSCREEN_AD7877_MODULE)
static struct bfin5xx_spi_chip spi_ad7877_chip_info = ;
static const struct ad7877_platform_data bfin_ad7877_ts_info = ;
#if defined(CONFIG_SPI_SPIDEV) || defined(CONFIG_SPI_SPIDEV_MODULE)
static struct bfin5xx_spi_chip spidev_chip_info = ;
#if defined(CONFIG_INPUT_ADXL34X_SPI) || defined(CONFIG_INPUT_ADXL34X_SPI_MODULE)
static struct bfin5xx_spi_chip spi_adxl34x_chip_info = ;
static struct spi_board_info bfin_spi_board_info[] __initdata = ;
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
static struct resource bfin_spi0_resource[] = ;
static struct resource bfin_spi1_resource[] = ;
static struct bfin5xx_spi_master bf54x_spi_master_info0 = ;
static struct platform_device bf54x_spi_master0 = ;
static struct bfin5xx_spi_master bf54x_spi_master_info1 = ;
static struct platform_device bf54x_spi_master1 = ;
#if defined(CONFIG_I2C_BLACKFIN_TWI) || defined(CONFIG_I2C_BLACKFIN_TWI_MODULE)
static struct resource bfin_twi0_resource[] = ;
static struct platform_device i2c_bfin_twi0_device = ;
#if !defined(CONFIG_BF542)
static struct resource bfin_twi1_resource[] = ;
static struct platform_device i2c_bfin_twi1_device = ;
static struct i2c_board_info __initdata bfin_i2c_board_info0[] = ;
#if !defined(CONFIG_BF542)
static struct i2c_board_info __initdata bfin_i2c_board_info1[] = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button bfin_gpio_keys_table[] = ;
static struct gpio_keys_platform_data bfin_gpio_keys_data = ;
static struct platform_device bfin_device_gpiokeys = ;
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
#if defined(CONFIG_SND_BF5XX_SOC_AD1980) || defined(CONFIG_SND_BF5XX_SOC_AD1980_MODULE)
static struct platform_device bfin_ad1980_codec_device = ;
#if defined(CONFIG_SND_BF5XX_SOC_I2S) || defined(CONFIG_SND_BF5XX_SOC_I2S_MODULE)
static struct platform_device bfin_i2s = ;
#if defined(CONFIG_SND_BF5XX_SOC_TDM) || defined(CONFIG_SND_BF5XX_SOC_TDM_MODULE)
static struct platform_device bfin_tdm = ;
#if defined(CONFIG_SND_BF5XX_SOC_AC97) || defined(CONFIG_SND_BF5XX_SOC_AC97_MODULE)
static struct platform_device bfin_ac97 = ;
static struct platform_device *ezkit_devices[] __initdata = ;
static int __init ezkit_init(void)
arch_initcall(ezkit_init);
static struct platform_device *ezkit_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
