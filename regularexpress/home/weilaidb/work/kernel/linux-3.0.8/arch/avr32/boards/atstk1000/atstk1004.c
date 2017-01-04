unsigned long at32_board_osc_rates[3] = ;
static struct at73c213_board_info at73c213_data = ;
static struct spi_board_info spi0_board_info[] __initdata = ;
static struct spi_board_info spi1_board_info[] __initdata = ;
static struct mci_platform_data __initdata mci0_data = ;
static void __init atstk1004_setup_extdac(void)
static void __init atstk1004_setup_extdac(void)
void __init setup_board(void)
static int __init atstk1004_init(void)
postcore_initcall(atstk1004_init);
