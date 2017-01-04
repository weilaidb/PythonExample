#if defined(CONFIG_USB_ISP1362_HCD) || defined(CONFIG_USB_ISP1362_HCD_MODULE)
const char bfin_board_name[] = "Bluetechnix CM BF537U";
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
#if defined(CONFIG_MTD_M25P80) || defined(CONFIG_MTD_M25P80_MODULE)
static struct mtd_partition bfin_spi_flash_partitions[] = ;
static struct flash_platform_data bfin_spi_flash_data = ;
static struct bfin5xx_spi_chip spi_flash_chip_info = ;
#if defined(CONFIG_BFIN_SPI_ADC) || defined(CONFIG_BFIN_SPI_ADC_MODULE)
static struct bfin5xx_spi_chip spi_adc_chip_info = ;
#if defined(CONFIG_SND_BF5XX_SOC_AD183X) || defined(CONFIG_SND_BF5XX_SOC_AD183X_MODULE)
static struct bfin5xx_spi_chip ad1836_spi_chip_info = ;
#if defined(CONFIG_MMC_SPI) || defined(CONFIG_MMC_SPI_MODULE)
static struct bfin5xx_spi_chip  mmc_spi_chip_info = ;
static struct spi_board_info bfin_spi_board_info[] __initdata = ;
static struct resource bfin_spi0_resource[] = ;
static struct bfin5xx_spi_master bfin_spi0_info = ;
static struct platform_device bfin_spi0_device = ;
#if defined(CONFIG_RTC_DRV_BFIN) || defined(CONFIG_RTC_DRV_BFIN_MODULE)
static struct platform_device rtc_device = ;
#if defined(CONFIG_FB_HITACHI_TX09) || defined(CONFIG_FB_HITACHI_TX09_MODULE)
static struct platform_device hitachi_fb_device = ;
#if defined(CONFIG_SMC91X) || defined(CONFIG_SMC91X_MODULE)
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_USB_ISP1362_HCD) || defined(CONFIG_USB_ISP1362_HCD_MODULE)
static struct resource isp1362_hcd_resources[] = ;
static struct isp1362_platform_data isp1362_priv = ;
static struct platform_device isp1362_hcd_device = ;
#if defined(CONFIG_USB_NET2272) || defined(CONFIG_USB_NET2272_MODULE)
static struct resource net2272_bfin_resources[] = ;
static struct platform_device net2272_bfin_device = ;
#if defined(CONFIG_MTD_GPIO_ADDR) || defined(CONFIG_MTD_GPIO_ADDR_MODULE)
static struct mtd_partition cm_partitions[] = ;
static struct physmap_flash_data cm_flash_data = ;
static unsigned cm_flash_gpios[] = ;
static struct resource cm_flash_resource[] = ;
static struct platform_device cm_flash_device = ;
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
#if defined(CONFIG_SERIAL_BFIN_SPORT) || defined(CONFIG_SERIAL_BFIN_SPORT_MODULE)
static struct resource bfin_sport0_uart_resources[] = ;
static unsigned short bfin_sport0_peripherals[] = ;
static struct platform_device bfin_sport0_uart_device = ;
static struct resource bfin_sport1_uart_resources[] = ;
static unsigned short bfin_sport1_peripherals[] = ;
static struct platform_device bfin_sport1_uart_device = ;
#if defined(CONFIG_BFIN_MAC) || defined(CONFIG_BFIN_MAC_MODULE)
static const unsigned short bfin_mac_peripherals[] = P_MII0;
static struct bfin_phydev_platform_data bfin_phydev_data[] = ;
static struct bfin_mii_bus_platform_data bfin_mii_bus_data = ;
static struct platform_device bfin_mii_bus = ;
static struct platform_device bfin_mac_device = ;
#if defined(CONFIG_PATA_PLATFORM) || defined(CONFIG_PATA_PLATFORM_MODULE)
#define PATA_INT	IRQ_PF14
static struct pata_platform_info bfin_pata_platform_data = ;
static struct resource bfin_pata_resources[] = ;
static struct platform_device bfin_pata_device = ;
static const unsigned int cclk_vlev_datasheet[] =
;
static struct bfin_dpmc_platform_data bfin_dmpc_vreg_data = ;
static struct platform_device bfin_dpmc = ;
static struct platform_device *cm_bf537u_devices[] __initdata = ;
static int __init cm_bf537u_init(void)
arch_initcall(cm_bf537u_init);
static struct platform_device *cm_bf537u_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
void bfin_get_ether_addr(char *addr)
EXPORT_SYMBOL(bfin_get_ether_addr);
