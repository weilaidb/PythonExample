static struct mtd_partition partition_info[]=;
#define NUM_PARTITIONS ARRAY_SIZE(partition_info)
#define WINDOW_SIZE	0x00100000
#define WINDOW_ADDR	0x00200000
static struct map_info netsc520_map = ;
#define NUM_FLASH_BANKS	ARRAY_SIZE(netsc520_map)
static struct mtd_info *mymtd;
static int __init init_netsc520(void)
static void __exit cleanup_netsc520(void)
module_init(init_netsc520);
module_exit(cleanup_netsc520);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mark Langsdorf <mark.langsdorf@amd.com>");
MODULE_DESCRIPTION("MTD map driver for AMD NetSc520 Demonstration Board");
