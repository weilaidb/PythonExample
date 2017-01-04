const char bfin_board_name[] = "ADI BF538-EZKIT";
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
#if defined(CONFIG_BFIN_SIR) || defined(CONFIG_BFIN_SIR_MODULE)
static struct resource bfin_sir0_resources[] = ;
static struct platform_device bfin_sir0_device = ;
static struct resource bfin_sir1_resources[] = ;
static struct platform_device bfin_sir1_device = ;
static struct resource bfin_sir2_resources[] = ;
static struct platform_device bfin_sir2_device = ;
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
static unsigned short bfin_can_peripherals[] = ;
static struct resource bfin_can_resources[] = ;
static struct platform_device bfin_can_device = ;
#if defined(CONFIG_SMC91X) || defined(CONFIG_SMC91X_MODULE)
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
#if defined(CONFIG_MTD_M25P80) \
|| defined(CONFIG_MTD_M25P80_MODULE)
static struct mtd_partition bfin_spi_flash_partitions[] = ;
static struct flash_platform_data bfin_spi_flash_data = ;
static struct bfin5xx_spi_chip spi_flash_chip_info = ;
#if defined(CONFIG_TOUCHSCREEN_AD7879) || defined(CONFIG_TOUCHSCREEN_AD7879_MODULE)
static const struct ad7879_platform_data bfin_ad7879_ts_info = ;
#if defined(CONFIG_TOUCHSCREEN_AD7879_SPI) || defined(CONFIG_TOUCHSCREEN_AD7879_SPI_MODULE)
static struct bfin5xx_spi_chip spi_ad7879_chip_info = ;
#if defined(CONFIG_FB_BFIN_LQ035Q1) || defined(CONFIG_FB_BFIN_LQ035Q1_MODULE)
static struct bfin_lq035q1fb_disp_info bfin_lq035q1_data = ;
static struct resource bfin_lq035q1_resources[] = ;
static struct platform_device bfin_lq035q1_device = ;
#if defined(CONFIG_SPI_SPIDEV) || defined(CONFIG_SPI_SPIDEV_MODULE)
static struct bfin5xx_spi_chip spidev_chip_info = ;
#if defined(CONFIG_FB_BFIN_LQ035Q1) || defined(CONFIG_FB_BFIN_LQ035Q1_MODULE)
static struct bfin5xx_spi_chip lq035q1_spi_chip_info = ;
static struct spi_board_info bf538_spi_board_info[] __initdata = ;
static struct resource bfin_spi0_resource[] = ;
static struct resource bfin_spi1_resource[] = ;
static struct resource bfin_spi2_resource[] = ;
static struct bfin5xx_spi_master bf538_spi_master_info0 = ;
static struct platform_device bf538_spi_master0 = ;
static struct bfin5xx_spi_master bf538_spi_master_info1 = ;
static struct platform_device bf538_spi_master1 = ;
static struct bfin5xx_spi_master bf538_spi_master_info2 = ;
static struct platform_device bf538_spi_master2 = ;
#if defined(CONFIG_I2C_BLACKFIN_TWI) || defined(CONFIG_I2C_BLACKFIN_TWI_MODULE)
static struct resource bfin_twi0_resource[] = ;
static struct platform_device i2c_bfin_twi0_device = ;
#if !defined(CONFIG_BF542)
static struct resource bfin_twi1_resource[] = ;
static struct platform_device i2c_bfin_twi1_device = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button bfin_gpio_keys_table[] = ;
static struct gpio_keys_platform_data bfin_gpio_keys_data = ;
static struct platform_device bfin_device_gpiokeys = ;
static const unsigned int cclk_vlev_datasheet[] =
;
static struct bfin_dpmc_platform_data bfin_dmpc_vreg_data = ;
static struct platform_device bfin_dpmc = ;
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition ezkit_partitions[] = ;
static struct physmap_flash_data ezkit_flash_data = ;
static struct resource ezkit_flash_resource = ;
static struct platform_device ezkit_flash_device = ;
static struct platform_device *cm_bf538_devices[] __initdata = ;
static int __init ezkit_init(void)
arch_initcall(ezkit_init);
static struct platform_device *ezkit_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
