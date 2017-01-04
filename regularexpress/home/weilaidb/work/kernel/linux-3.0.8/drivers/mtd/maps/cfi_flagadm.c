#define FLASH_PHYS_ADDR 0x40000000
#define FLASH_SIZE 0x400000
#define FLASH_PARTITION0_ADDR 0x00000000
#define FLASH_PARTITION0_SIZE 0x00020000
#define FLASH_PARTITION1_ADDR 0x00020000
#define FLASH_PARTITION1_SIZE 0x000A0000
#define FLASH_PARTITION2_ADDR 0x000C0000
#define FLASH_PARTITION2_SIZE 0x00180000
#define FLASH_PARTITION3_ADDR 0x00240000
#define FLASH_PARTITION3_SIZE 0x001C0000
struct map_info flagadm_map = ;
struct mtd_partition flagadm_parts[] = ;
#define PARTITION_COUNT ARRAY_SIZE(flagadm_parts)
static struct mtd_info *mymtd;
static int __init init_flagadm(void)
static void __exit cleanup_flagadm(void)
module_init(init_flagadm);
module_exit(cleanup_flagadm);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kári Davíðsson <kd@flaga.is>");
MODULE_DESCRIPTION("MTD map driver for Flaga digital module");
