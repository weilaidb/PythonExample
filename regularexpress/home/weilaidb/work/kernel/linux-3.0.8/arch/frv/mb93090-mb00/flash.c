#define MB93090_BOOTROM_ADDR	0xFF000000
#define MB93090_BOOTROM_SIZE	(2 * 1024 * 1024)
#define MB93090_USERROM_ADDR	0xFF200000
#define MB93090_USERROM_SIZE	(2 * 1024 * 1024)
static struct mtd_partition mb93090_partitions[] = ;
static struct physmap_flash_data mb93090_bootrom_data = ;
static struct resource mb93090_bootrom_resource = ;
static struct platform_device mb93090_bootrom = ;
static struct physmap_flash_data mb93090_userrom_data = ;
static struct resource mb93090_userrom_resource = ;
static struct platform_device mb93090_userrom = ;
static int __init mb93090_mtd_init(void)
module_init(mb93090_mtd_init);
