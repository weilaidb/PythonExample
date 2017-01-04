#define WINDOW_ADDR	0x09400000
#define WINDOW_SIZE	0x00200000
static struct map_info ts5500_map = ;
static struct mtd_partition ts5500_partitions[] = ;
#define NUM_PARTITIONS ARRAY_SIZE(ts5500_partitions)
static struct mtd_info *mymtd;
static int __init init_ts5500_map(void)
static void __exit cleanup_ts5500_map(void)
module_init(init_ts5500_map);
module_exit(cleanup_ts5500_map);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sean Young <sean@mess.org>");
MODULE_DESCRIPTION("MTD map driver for Techology Systems TS-5500 board");
