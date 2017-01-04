#if defined(CONFIG_USB_ISP1362_HCD) || defined(CONFIG_USB_ISP1362_HCD_MODULE)
const char bfin_board_name[] = "IP04/IP08";
#if defined(CONFIG_BFIN532_IP0X)
#if defined(CONFIG_DM9000) || defined(CONFIG_DM9000_MODULE)
static struct resource dm9000_resource1[] = ;
static struct resource dm9000_resource2[] = ;
static struct dm9000_plat_data dm9000_platdata1 = ;
static struct platform_device dm9000_device1 = ;
static struct dm9000_plat_data dm9000_platdata2 = ;
static struct platform_device dm9000_device2 = ;
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
#if defined(CONFIG_MMC_SPI) || defined(CONFIG_MMC_SPI_MODULE)
static struct bfin5xx_spi_chip mmc_spi_chip_info = ;
static struct spi_board_info bfin_spi_board_info[] __initdata = ;
static struct bfin5xx_spi_master spi_bfin_master_info = ;
static struct platform_device spi_bfin_master_device = ;
#if defined(CONFIG_SERIAL_BFIN) || defined(CONFIG_SERIAL_BFIN_MODULE)
static struct resource bfin_uart0_resources[] = ;
static unsigned short bfin_uart0_peripherals[] = ;
static struct platform_device bfin_uart0_device = ;
#if defined(CONFIG_BFIN_SIR) || defined(CONFIG_BFIN_SIR_MODULE)
static struct resource bfin_sir0_resources[] = ;
static struct platform_device bfin_sir0_device = ;
#if defined(CONFIG_USB_ISP1362_HCD) || defined(CONFIG_USB_ISP1362_HCD_MODULE)
static struct resource isp1362_hcd_resources[] = ;
static struct isp1362_platform_data isp1362_priv = ;
static struct platform_device isp1362_hcd_device = ;
static struct platform_device *ip0x_devices[] __initdata = ;
static int __init ip0x_init(void)
arch_initcall(ip0x_init);
static struct platform_device *ip0x_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
