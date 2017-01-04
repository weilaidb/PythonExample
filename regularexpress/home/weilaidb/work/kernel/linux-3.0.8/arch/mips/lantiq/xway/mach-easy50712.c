static struct mtd_partition easy50712_partitions[] = ;
static struct physmap_flash_data easy50712_flash_data = ;
static struct ltq_pci_data ltq_pci_data = ;
static struct ltq_eth_data ltq_eth_data = ;
static void __init easy50712_init(void)
MIPS_MACHINE(LTQ_MACH_EASY50712,
"EASY50712",
"EASY50712 Eval Board",
easy50712_init);
