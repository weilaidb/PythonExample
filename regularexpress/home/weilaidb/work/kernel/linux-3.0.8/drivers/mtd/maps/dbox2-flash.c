static struct mtd_partition partition_info[]= ;
#define NUM_PARTITIONS ARRAY_SIZE(partition_info)
#define WINDOW_ADDR 0x10000000
#define WINDOW_SIZE 0x800000
static struct mtd_info *mymtd;
struct map_info dbox2_flash_map = ;
static int __init init_dbox2_flash(void)
static void __exit cleanup_dbox2_flash(void)
module_init(init_dbox2_flash);
module_exit(cleanup_dbox2_flash);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kári Davíðsson <kd@flaga.is>, Bastian Blank <waldi@tuxbox.org>, Alexander Wild <wild@te-elektronik.com>");
MODULE_DESCRIPTION("MTD map driver for D-Box 2 board");
