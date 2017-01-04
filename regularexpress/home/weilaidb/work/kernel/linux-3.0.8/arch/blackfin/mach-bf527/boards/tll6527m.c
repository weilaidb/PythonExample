#if defined(CONFIG_TOUCHSCREEN_AD7879) \
|| defined(CONFIG_TOUCHSCREEN_AD7879_MODULE)
#define LCD_BACKLIGHT_GPIO 0x40
const char bfin_board_name[] = "TLL6527M";
#if defined(CONFIG_USB_MUSB_HDRC) || defined(CONFIG_USB_MUSB_HDRC_MODULE)
static struct resource musb_resources[] = ;
static struct musb_hdrc_config musb_config = ;
static struct musb_hdrc_platform_data musb_plat = ;
static u64 musb_dmamask = ~(u32)0;
static struct platform_device musb_device = ;
#if defined(CONFIG_FB_BFIN_LQ035Q1) || defined(CONFIG_FB_BFIN_LQ035Q1_MODULE)
static struct bfin_lq035q1fb_disp_info bfin_lq035q1_data = ;
static struct resource bfin_lq035q1_resources[] = ;
static struct platform_device bfin_lq035q1_device = ;
#if defined(CONFIG_MTD_GPIO_ADDR) || defined(CONFIG_MTD_GPIO_ADDR_MODULE)
static struct mtd_partition tll6527m_partitions[] = ;
static struct physmap_flash_data tll6527m_flash_data = ;
static unsigned tll6527m_flash_gpios[] = ;
static struct resource tll6527m_flash_resource[] = ;
static struct platform_device tll6527m_flash_device = ;
#if defined(CONFIG_GPIO_DECODER) || defined(CONFIG_GPIO_DECODER_MODULE)
#define EXP_GPIO_SPISEL_BASE 0x64
static unsigned gpio_addr_inputs[] = ;
static struct gpio_decoder_platform_data spi_decoded_cs = ;
static struct platform_device spi_decoded_gpio = ;
#define EXP_GPIO_SPISEL_BASE 0x0
#if defined(CONFIG_INPUT_ADXL34X) || defined(CONFIG_INPUT_ADXL34X_MODULE)
static const struct adxl34x_platform_data adxl345_info = ;
#if defined(CONFIG_RTC_DRV_BFIN) || defined(CONFIG_RTC_DRV_BFIN_MODULE)
static struct platform_device rtc_device = ;
#if defined(CONFIG_BFIN_MAC) || defined(CONFIG_BFIN_MAC_MODULE)
static const unsigned short bfin_mac_peripherals[] = P_RMII0;
static struct bfin_phydev_platform_data bfin_phydev_data[] = ;
static struct bfin_mii_bus_platform_data bfin_mii_bus_data = ;
static struct platform_device bfin_mii_bus = ;
static struct platform_device bfin_mac_device = ;
#if defined(CONFIG_MTD_M25P80) \
|| defined(CONFIG_MTD_M25P80_MODULE)
static struct mtd_partition bfin_spi_flash_partitions[] = ;
static struct flash_platform_data bfin_spi_flash_data = ;
static struct bfin5xx_spi_chip spi_flash_chip_info = ;
#if defined(CONFIG_BFIN_SPI_ADC) \
|| defined(CONFIG_BFIN_SPI_ADC_MODULE)
static struct bfin5xx_spi_chip spi_adc_chip_info = ;
#if defined(CONFIG_MMC_SPI) || defined(CONFIG_MMC_SPI_MODULE)
static struct bfin5xx_spi_chip  mmc_spi_chip_info = ;
#if defined(CONFIG_TOUCHSCREEN_AD7879) \
|| defined(CONFIG_TOUCHSCREEN_AD7879_MODULE)
static const struct ad7879_platform_data bfin_ad7879_ts_info = ;
#if defined(CONFIG_TOUCHSCREEN_AD7879_SPI) \
|| defined(CONFIG_TOUCHSCREEN_AD7879_SPI_MODULE)
static struct bfin5xx_spi_chip spi_ad7879_chip_info = ;
#if defined(CONFIG_SPI_SPIDEV) || defined(CONFIG_SPI_SPIDEV_MODULE)
static struct bfin5xx_spi_chip spidev_chip_info = ;
#if defined(CONFIG_SND_BF5XX_I2S) || defined(CONFIG_SND_BF5XX_I2S_MODULE)
static struct platform_device bfin_i2s = ;
#if defined(CONFIG_FB_BFIN_LQ035Q1) || defined(CONFIG_FB_BFIN_LQ035Q1_MODULE)
static struct bfin5xx_spi_chip lq035q1_spi_chip_info = ;
#if defined(CONFIG_GPIO_MCP23S08) || defined(CONFIG_GPIO_MCP23S08_MODULE)
static struct bfin5xx_spi_chip spi_mcp23s08_sys_chip_info = ;
static struct bfin5xx_spi_chip spi_mcp23s08_usr_chip_info = ;
static const struct mcp23s08_platform_data bfin_mcp23s08_sys_gpio_info = ;
static const struct mcp23s08_platform_data bfin_mcp23s08_usr_gpio_info = ;
static struct spi_board_info bfin_spi_board_info[] __initdata = ;
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
static struct bfin5xx_spi_master bfin_spi0_info = ;
static struct resource bfin_spi0_resource[] = ;
static struct platform_device bfin_spi0_device = ;
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
static struct i2c_board_info __initdata bfin_i2c_board_info[] = ;
#if defined(CONFIG_SERIAL_BFIN_SPORT) \
|| defined(CONFIG_SERIAL_BFIN_SPORT_MODULE)
static struct resource bfin_sport0_uart_resources[] = ;
static unsigned short bfin_sport0_peripherals[] = ;
static struct platform_device bfin_sport0_uart_device = ;
static struct resource bfin_sport1_uart_resources[] = ;
static unsigned short bfin_sport1_peripherals[] = ;
static struct platform_device bfin_sport1_uart_device = ;
static const unsigned int cclk_vlev_datasheet[] = ;
static struct bfin_dpmc_platform_data bfin_dmpc_vreg_data = ;
static struct platform_device bfin_dpmc = ;
static struct platform_device *tll6527m_devices[] __initdata = ;
static int __init tll6527m_init(void)
arch_initcall(tll6527m_init);
static struct platform_device *tll6527m_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
void native_machine_restart(char *cmd)
void bfin_get_ether_addr(char *addr)
EXPORT_SYMBOL(bfin_get_ether_addr);
