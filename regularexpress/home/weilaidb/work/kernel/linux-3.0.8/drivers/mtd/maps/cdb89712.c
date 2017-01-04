#define FLASH_START      0x00000000
#define FLASH_SIZE       0x800000
#define FLASH_WIDTH      4
#define SRAM_START       0x60000000
#define SRAM_SIZE        0xc000
#define SRAM_WIDTH       4
#define BOOTROM_START    0x70000000
#define BOOTROM_SIZE     0x80
#define BOOTROM_WIDTH    4
static struct mtd_info *flash_mtd;
struct map_info cdb89712_flash_map = ;
struct resource cdb89712_flash_resource = ;
static int __init init_cdb89712_flash (void)
static struct mtd_info *sram_mtd;
struct map_info cdb89712_sram_map = ;
struct resource cdb89712_sram_resource = ;
static int __init init_cdb89712_sram (void)
static struct mtd_info *bootrom_mtd;
struct map_info cdb89712_bootrom_map = ;
struct resource cdb89712_bootrom_resource = ;
static int __init init_cdb89712_bootrom (void)
static int __init init_cdb89712_maps(void)
static void __exit cleanup_cdb89712_maps(void)
module_init(init_cdb89712_maps);
module_exit(cleanup_cdb89712_maps);
MODULE_AUTHOR("Ray L");
MODULE_DESCRIPTION("ARM CDB89712 map driver");
MODULE_LICENSE("GPL");
