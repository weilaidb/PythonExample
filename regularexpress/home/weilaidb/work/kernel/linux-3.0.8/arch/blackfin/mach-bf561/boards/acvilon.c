const char bfin_board_name[] = "Acvilon board";
#if defined(CONFIG_USB_ISP1760_HCD) || defined(CONFIG_USB_ISP1760_HCD_MODULE)
static struct resource bfin_isp1760_resources[] = ;
static struct isp1760_platform_data isp1760_priv = ;
static struct platform_device bfin_isp1760_device = ;
static struct resource bfin_i2c_pca_resources[] = ;
struct i2c_pca9564_pf_platform_data pca9564_platform_data = ;
static struct platform_device bfin_i2c_pca_device = ;
static struct i2c_board_info acvilon_i2c_devs[] __initdata = ;
#if defined(CONFIG_MTD_PLATRAM) || defined(CONFIG_MTD_PLATRAM_MODULE)
static struct platdata_mtd_ram mtd_ram_data = ;
static struct resource mtd_ram_resource = ;
static struct platform_device mtd_ram_device = ;
#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)
static struct resource smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device smsc911x_device = ;
#if defined(CONFIG_SERIAL_BFIN) || defined(CONFIG_SERIAL_BFIN_MODULE)
static struct resource bfin_uart0_resources[] = ;
static unsigned short bfin_uart0_peripherals[] = ;
static struct platform_device bfin_uart0_device = ;
#if defined(CONFIG_MTD_NAND_PLATFORM) || defined(CONFIG_MTD_NAND_PLATFORM_MODULE)
const char *part_probes[] = ;
static struct mtd_partition bfin_plat_nand_partitions[] = ;
#define BFIN_NAND_PLAT_CLE 2
#define BFIN_NAND_PLAT_ALE 3
static void bfin_plat_nand_cmd_ctrl(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
#define BFIN_NAND_PLAT_READY GPIO_PF10
static int bfin_plat_nand_dev_ready(struct mtd_info *mtd)
static struct platform_nand_data bfin_plat_nand_data = ;
#define MAX(x, y) (x > y ? x : y)
static struct resource bfin_plat_nand_resources = ;
static struct platform_device bfin_async_nand_device = ;
static void bfin_plat_nand_init(void)
static void bfin_plat_nand_init(void)
#if defined(CONFIG_MTD_DATAFLASH) || defined(CONFIG_MTD_DATAFLASH_MODULE)
static struct mtd_partition bfin_spi_dataflash_partitions[] = ;
static struct flash_platform_data bfin_spi_dataflash_data = ;
static struct bfin5xx_spi_chip data_flash_chip_info = ;
#if defined(CONFIG_SPI_SPIDEV) || defined(CONFIG_SPI_SPIDEV_MODULE)
static struct bfin5xx_spi_chip spidev_chip_info = ;
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
static struct resource bfin_spi0_resource[] = ;
static struct bfin5xx_spi_master bfin_spi0_info = ;
static struct platform_device bfin_spi0_device = ;
static struct spi_board_info bfin_spi_board_info[] __initdata = ;
static struct resource bfin_gpios_resources = ;
static struct platform_device bfin_gpios_device = ;
static const unsigned int cclk_vlev_datasheet[] = ;
static struct bfin_dpmc_platform_data bfin_dmpc_vreg_data = ;
static struct platform_device bfin_dpmc = ;
static struct platform_device *acvilon_devices[] __initdata = ;
static int __init acvilon_init(void)
arch_initcall(acvilon_init);
static struct platform_device *acvilon_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
