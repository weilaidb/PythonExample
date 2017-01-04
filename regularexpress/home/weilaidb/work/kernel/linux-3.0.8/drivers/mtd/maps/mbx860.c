#define WINDOW_ADDR 0xfe000000
#define WINDOW_SIZE 0x00200000
#define MAX_SIZE_KiB              8192
#define BOOT_PARTITION_SIZE_KiB    512
#define KERNEL_PARTITION_SIZE_KiB 5632
#define APP_PARTITION_SIZE_KiB    2048
#define NUM_PARTITIONS 3
static struct mtd_partition partition_info[]=;
static struct mtd_info *mymtd;
struct map_info mbx_map = ;
static int __init init_mbx(void)
static void __exit cleanup_mbx(void)
module_init(init_mbx);
module_exit(cleanup_mbx);
MODULE_AUTHOR("Anton Todorov <a.todorov@emness.com>");
MODULE_DESCRIPTION("MTD map driver for Motorola MBX860 board");
MODULE_LICENSE("GPL");
