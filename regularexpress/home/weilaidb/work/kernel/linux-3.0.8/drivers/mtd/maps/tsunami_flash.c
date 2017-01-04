#define FLASH_ENABLE_PORT 0x00C00001
#define FLASH_ENABLE_BYTE 0x01
#define FLASH_DISABLE_BYTE 0x00
#define MAX_TIG_FLASH_SIZE (12*1024*1024)
static inline map_word tsunami_flash_read8(struct map_info *map, unsigned long offset)
static void tsunami_flash_write8(struct map_info *map, map_word value, unsigned long offset)
static void tsunami_flash_copy_from(
struct map_info *map, void *addr, unsigned long offset, ssize_t len)
static void tsunami_flash_copy_to(
struct map_info *map, unsigned long offset,
const void *addr, ssize_t len)
static struct map_info tsunami_flash_map = ;
static struct mtd_info *tsunami_flash_mtd;
static void __exit  cleanup_tsunami_flash(void)
static int __init init_tsunami_flash(void)
module_init(init_tsunami_flash);
module_exit(cleanup_tsunami_flash);
