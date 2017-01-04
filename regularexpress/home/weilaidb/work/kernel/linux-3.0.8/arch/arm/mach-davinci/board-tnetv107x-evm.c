#define EVM_MMC_WP_GPIO		21
#define EVM_MMC_CD_GPIO		24
#define EVM_SPI_CS_GPIO		54
static int initialize_gpio(int gpio, char *desc)
static int mmc_get_cd(int index)
static int mmc_get_ro(int index)
static struct davinci_mmc_config mmc_config = ;
static const short sdio1_pins[] __initdata = ;
static const short uart1_pins[] __initdata = ;
static const short ssp_pins[] __initdata = ;
static struct mtd_partition nand_partitions[] = ;
static struct davinci_nand_pdata nand_config = ;
static struct davinci_uart_config serial_config __initconst = ;
static const uint32_t keymap[] = ;
static const struct matrix_keymap_data keymap_data = ;
static struct matrix_keypad_platform_data keypad_config = ;
static void spi_select_device(int cs)
static struct ti_ssp_spi_data spi_master_data = ;
static struct ti_ssp_data ssp_config = ;
static struct tnetv107x_device_info evm_device_info __initconst = ;
static struct spi_board_info spi_info[] __initconst = ;
static __init void tnetv107x_evm_board_init(void)
static int __init tnetv107x_evm_console_init(void)
console_initcall(tnetv107x_evm_console_init);
MACHINE_START(TNETV107X, "TNETV107X EVM")
.boot_params	= (TNETV107X_DDR_BASE + 0x100),
.map_io		= tnetv107x_init,
.init_irq	= cp_intc_init,
.timer		= &davinci_timer,
.init_machine	= tnetv107x_evm_board_init,
MACHINE_END
