#define ASB2303_PROM_ADDR	0xA0000000
#define ASB2303_PROM_SIZE	(2 * 1024 * 1024)
#define ASB2303_FLASH_ADDR	0xA4000000
#define ASB2303_FLASH_SIZE	(32 * 1024 * 1024)
#define ASB2303_CONFIG_ADDR	0xA6000000
#define ASB2303_CONFIG_SIZE	(8 * 1024)
static struct mtd_partition asb2303_partitions[] = ;
static struct physmap_flash_data asb2303_bootprom_data = ;
static struct resource asb2303_bootprom_resource = ;
static struct platform_device asb2303_bootprom = ;
static struct physmap_flash_data asb2303_sysflash_data = ;
static struct resource asb2303_sysflash_resource = ;
static struct platform_device asb2303_sysflash = ;
static int __init asb2303_mtd_init(void)
module_init(asb2303_mtd_init);
