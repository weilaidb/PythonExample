static void __init kb9202_init_early(void)
static void __init kb9202_init_irq(void)
static struct at91_eth_data __initdata kb9202_eth_data = ;
static struct at91_usbh_data __initdata kb9202_usbh_data = ;
static struct at91_udc_data __initdata kb9202_udc_data = ;
static struct at91_mmc_data __initdata kb9202_mmc_data = ;
static struct mtd_partition __initdata kb9202_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata kb9202_nand_data = ;
static void __init kb9202_board_init(void)
MACHINE_START(KB9200, "KB920x")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= kb9202_init_early,
.init_irq	= kb9202_init_irq,
.init_machine	= kb9202_board_init,
MACHINE_END
