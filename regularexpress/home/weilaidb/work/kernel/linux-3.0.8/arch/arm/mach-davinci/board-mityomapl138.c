#define MITYOMAPL138_PHY_ID		""
#define FACTORY_CONFIG_MAGIC	0x012C0138
#define FACTORY_CONFIG_VERSION	0x00010001
struct factory_config ;
static struct factory_config factory_config;
struct part_no_info ;
static struct part_no_info mityomapl138_pn_info[] = ;
static void mityomapl138_cpufreq_init(const char *partnum)
static void mityomapl138_cpufreq_init(const char *partnum)
static void read_factory_config(struct memory_accessor *a, void *context)
static struct at24_platform_data mityomapl138_fd_chip = ;
static struct davinci_i2c_platform_data mityomap_i2c_0_pdata = ;
static struct regulator_consumer_supply tps65023_dcdc1_consumers[] = ;
static struct regulator_consumer_supply tps65023_dcdc2_consumers[] = ;
static struct regulator_consumer_supply tps65023_dcdc3_consumers[] = ;
static struct regulator_consumer_supply tps65023_ldo1_consumers[] = ;
static struct regulator_consumer_supply tps65023_ldo2_consumers[] = ;
static struct regulator_init_data tps65023_regulator_data[] = ;
static struct i2c_board_info __initdata mityomap_tps65023_info[] = ;
static int __init pmic_tps65023_init(void)
static struct mtd_partition spi_flash_partitions[] = ;
static struct flash_platform_data mityomapl138_spi_flash_data = ;
static struct davinci_spi_config spi_eprom_config = ;
static struct spi_board_info mityomapl138_spi_flash_info[] = ;
static struct mtd_partition mityomapl138_nandflash_partition[] = ;
static struct davinci_nand_pdata mityomapl138_nandflash_data = ;
static struct resource mityomapl138_nandflash_resource[] = ;
static struct platform_device mityomapl138_nandflash_device = ;
static struct platform_device *mityomapl138_devices[] __initdata = ;
static void __init mityomapl138_setup_nand(void)
static struct davinci_uart_config mityomapl138_uart_config __initdata = ;
static const short mityomap_mii_pins[] = ;
static const short mityomap_rmii_pins[] = ;
static void __init mityomapl138_config_emac(void)
static struct davinci_pm_config da850_pm_pdata = ;
static struct platform_device da850_pm_device = ;
static void __init mityomapl138_init(void)
static int __init mityomapl138_console_init(void)
console_initcall(mityomapl138_console_init);
static void __init mityomapl138_map_io(void)
MACHINE_START(MITYOMAPL138, "MityDSP-L138/MityARM-1808")
.boot_params	= (DA8XX_DDR_BASE + 0x100),
.map_io		= mityomapl138_map_io,
.init_irq	= cp_intc_init,
.timer		= &davinci_timer,
.init_machine	= mityomapl138_init,
MACHINE_END
