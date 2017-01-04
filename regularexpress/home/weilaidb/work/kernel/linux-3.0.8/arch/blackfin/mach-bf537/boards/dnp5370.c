const char bfin_board_name[] = "DNP/5370";
#define FLASH_MAC               0x202f0000
#define CONFIG_MTD_PHYSMAP_LEN  0x300000
#if defined(CONFIG_RTC_DRV_BFIN) || defined(CONFIG_RTC_DRV_BFIN_MODULE)
static struct platform_device rtc_device = ;
#if defined(CONFIG_BFIN_MAC) || defined(CONFIG_BFIN_MAC_MODULE)
static const unsigned short bfin_mac_peripherals[] = P_RMII0;
static struct bfin_phydev_platform_data bfin_phydev_data[] = ;
static struct bfin_mii_bus_platform_data bfin_mii_bus_data = ;
static struct platform_device bfin_mii_bus = ;
static struct platform_device bfin_mac_device = ;
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition asmb_flash_partitions[] = ;
static struct physmap_flash_data asmb_flash_data = ;
static struct resource asmb_flash_resource = ;
static struct platform_device asmb_flash_device = ;
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
#if defined(CONFIG_MMC_SPI) || defined(CONFIG_MMC_SPI_MODULE)
static struct bfin5xx_spi_chip mmc_spi_chip_info = ;
#if defined(CONFIG_MTD_DATAFLASH) || defined(CONFIG_MTD_DATAFLASH_MODULE)
static struct mtd_partition bfin_spi_dataflash_partitions[] = ;
static struct flash_platform_data bfin_spi_dataflash_data = ;
static struct bfin5xx_spi_chip spi_dataflash_chip_info = ;
static struct spi_board_info bfin_spi_board_info[] __initdata = ;
static struct resource bfin_spi0_resource[] = ;
static struct bfin5xx_spi_master spi_bfin_master_info = ;
static struct platform_device spi_bfin_master_device = ;
#if defined(CONFIG_SERIAL_BFIN) || defined(CONFIG_SERIAL_BFIN_MODULE)
static struct resource bfin_uart0_resources[] = ;
static unsigned short bfin_uart0_peripherals[] = ;
static struct platform_device bfin_uart0_device = ;
static struct resource bfin_uart1_resources[] = ;
static unsigned short bfin_uart1_peripherals[] = ;
static struct platform_device bfin_uart1_device = ;
#if defined(CONFIG_I2C_BLACKFIN_TWI) || defined(CONFIG_I2C_BLACKFIN_TWI_MODULE)
static struct resource bfin_twi0_resource[] = ;
static struct platform_device i2c_bfin_twi_device = ;
static struct platform_device *dnp5370_devices[] __initdata = ;
static int __init dnp5370_init(void)
arch_initcall(dnp5370_init);
void bfin_get_ether_addr(char *addr)
EXPORT_SYMBOL(bfin_get_ether_addr);
