const char bfin_board_name[] = "ADI PNAV-1.0";
#if defined(CONFIG_BFIN_CFPCMCIA) || defined(CONFIG_BFIN_CFPCMCIA_MODULE)
static struct resource bfin_pcmcia_cf_resources[] = ;
static struct platform_device bfin_pcmcia_cf_device = ;
#if defined(CONFIG_RTC_DRV_BFIN) || defined(CONFIG_RTC_DRV_BFIN_MODULE)
static struct platform_device rtc_device = ;
#if defined(CONFIG_SMC91X) || defined(CONFIG_SMC91X_MODULE)
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_BFIN_MAC) || defined(CONFIG_BFIN_MAC_MODULE)
static const unsigned short bfin_mac_peripherals[] = P_RMII0;
static struct bfin_phydev_platform_data bfin_phydev_data[] = ;
static struct bfin_mii_bus_platform_data bfin_mii_bus_data = ;
static struct platform_device bfin_mii_bus = ;
static struct platform_device bfin_mac_device = ;
#if defined(CONFIG_USB_NET2272) || defined(CONFIG_USB_NET2272_MODULE)
static struct resource net2272_bfin_resources[] = ;
static struct platform_device net2272_bfin_device = ;
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
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
#if defined(CONFIG_MMC_SPI) || defined(CONFIG_MMC_SPI_MODULE)
static struct bfin5xx_spi_chip mmc_spi_chip_info = ;
#if defined(CONFIG_TOUCHSCREEN_AD7877) || defined(CONFIG_TOUCHSCREEN_AD7877_MODULE)
static struct bfin5xx_spi_chip spi_ad7877_chip_info = ;
static const struct ad7877_platform_data bfin_ad7877_ts_info = ;
static struct spi_board_info bfin_spi_board_info[] __initdata = ;
static struct resource bfin_spi0_resource[] = ;
static struct bfin5xx_spi_master bfin_spi0_info = ;
static struct platform_device bfin_spi0_device = ;
#if defined(CONFIG_FB_BF537_LQ035) || defined(CONFIG_FB_BF537_LQ035_MODULE)
static struct platform_device bfin_fb_device = ;
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
static struct platform_device *stamp_devices[] __initdata = ;
static int __init pnav_init(void)
arch_initcall(pnav_init);
static struct platform_device *stamp_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
void bfin_get_ether_addr(char *addr)
EXPORT_SYMBOL(bfin_get_ether_addr);
