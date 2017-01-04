#define FLASH_BASE_ADDR 0xf0000000
#define FLASH_BANK_SIZE (128*1024*1024)
MODULE_AUTHOR("Scott Wood, TimeSys Corporation <scott.wood@timesys.com>");
MODULE_DESCRIPTION("User-programmable flash device on the Dy4 SVME182 board");
MODULE_LICENSE("GPL");
static struct map_info svme182_map = ;
#define BOOTIMAGE_PART_SIZE		((6*1024*1024)-RESERVED_PART_SIZE)
#define NEW_BOOTIMAGE_PART_SIZE  (6 * 1024 * 1024)
#define NEW_BOOTLOADER_PART_SIZE (1024 * 1024)
#define NEW_RFS_PART_SIZE        (0x01000000 - NEW_BOOTLOADER_PART_SIZE - \
NEW_BOOTIMAGE_PART_SIZE)
static struct mtd_partition svme182_partitions[] = ;
static struct mtd_info *this_mtd;
static int __init init_svme182(void)
static void __exit cleanup_svme182(void)
module_init(init_svme182);
module_exit(cleanup_svme182);
