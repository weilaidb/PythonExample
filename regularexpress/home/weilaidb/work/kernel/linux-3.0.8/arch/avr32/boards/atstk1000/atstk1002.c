unsigned long at32_board_osc_rates[3] = ;
static struct smc_timing nand_timing __initdata = ;
static struct smc_config nand_config __initdata = ;
static struct mtd_partition nand_partitions[] = ;
static struct mtd_partition *nand_part_info(int size, int *num_partitions)
static struct atmel_nand_data atstk1006_nand_data __initdata = ;
struct eth_addr ;
static struct eth_addr __initdata hw_addr[2];
static struct eth_platform_data __initdata eth_data[2] = ;
static struct at73c213_board_info at73c213_data = ;
static struct spi_board_info spi0_board_info[] __initdata = ;
static struct spi_board_info spi1_board_info[] __initdata = ;
static int __init parse_tag_ethernet(struct tag *tag)
__tagtable(ATAG_ETHERNET, parse_tag_ethernet);
static void __init set_hw_addr(struct platform_device *pdev)
static void __init atstk1002_setup_extdac(void)
static void __init atstk1002_setup_extdac(void)
void __init setup_board(void)
static struct mci_platform_data __initdata mci0_data = ;
static int __init atstk1002_init(void)
postcore_initcall(atstk1002_init);
