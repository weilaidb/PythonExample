#define FLASH_ADDR 0x40000000
#define FLASH_SIZE 0x00800000
#define FLASH_BANK_MAX 4
struct mtd_part_def
;
static struct mtd_info* mtd_banks[FLASH_BANK_MAX];
static struct map_info* map_banks[FLASH_BANK_MAX];
static struct mtd_part_def part_banks[FLASH_BANK_MAX];
static unsigned long num_banks;
static void __iomem *start_scan_addr;
static unsigned long tqm8xxl_max_flash_size = 0x00800000;
static struct mtd_partition tqm8xxl_partitions[] = ;
static struct mtd_partition tqm8xxl_fs_partitions[] = ;
static int __init init_tqm_mtd(void)
static void __exit cleanup_tqm_mtd(void)
module_init(init_tqm_mtd);
module_exit(cleanup_tqm_mtd);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kirk Lee <kirk@hpc.ee.ntu.edu.tw>");
MODULE_DESCRIPTION("MTD map driver for TQM8xxL boards");
