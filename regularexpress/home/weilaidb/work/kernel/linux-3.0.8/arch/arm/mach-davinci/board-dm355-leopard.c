#define NAND_BLOCK_SIZE		SZ_128K
static struct mtd_partition davinci_nand_partitions[] = ;
static struct davinci_nand_pdata davinci_nand_data = ;
static struct resource davinci_nand_resources[] = ;
static struct platform_device davinci_nand_device = ;
static struct davinci_i2c_platform_data i2c_pdata = ;
static int leopard_mmc_gpio = -EINVAL;
static void dm355leopard_mmcsd_gpios(unsigned gpio)
static struct i2c_board_info dm355leopard_i2c_info[] = ;
static void __init leopard_init_i2c(void)
static struct resource dm355leopard_dm9000_rsrc[] = ;
static struct platform_device dm355leopard_dm9000 = ;
static struct platform_device *davinci_leopard_devices[] __initdata = ;
static struct davinci_uart_config uart_config __initdata = ;
static void __init dm355_leopard_map_io(void)
static int dm355leopard_mmc_get_cd(int module)
static int dm355leopard_mmc_get_ro(int module)
static struct davinci_mmc_config dm355leopard_mmc_config = ;
#define USB_ID_VALUE	0
#define USB_ID_VALUE	1
static struct spi_eeprom at25640a = ;
static struct spi_board_info dm355_leopard_spi_info[] __initconst = ;
static __init void dm355_leopard_init(void)
MACHINE_START(DM355_LEOPARD, "DaVinci DM355 leopard")
.boot_params  = (0x80000100),
.map_io	      = dm355_leopard_map_io,
.init_irq     = davinci_irq_init,
.timer	      = &davinci_timer,
.init_machine = dm355_leopard_init,
MACHINE_END
