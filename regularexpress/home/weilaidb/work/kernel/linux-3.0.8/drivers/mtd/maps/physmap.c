#define MAX_RESOURCES		4
struct physmap_flash_info ;
static int physmap_flash_remove(struct platform_device *dev)
static void physmap_set_vpp(struct map_info *map, int state)
static const char *rom_probe_types[] = ;
static const char *part_probe_types[] = ;
static int physmap_flash_probe(struct platform_device *dev)
static void physmap_flash_shutdown(struct platform_device *dev)
#define physmap_flash_shutdown NULL
static struct platform_driver physmap_flash_driver = ;
static struct physmap_flash_data physmap_flash_data = ;
static struct resource physmap_flash_resource = ;
static struct platform_device physmap_flash = ;
void physmap_configure(unsigned long addr, unsigned long size,
int bankwidth, void (*set_vpp)(struct map_info *, int))
void physmap_set_partitions(struct mtd_partition *parts, int num_parts)
static int __init physmap_init(void)
static void __exit physmap_exit(void)
module_init(physmap_init);
module_exit(physmap_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Generic configurable MTD map driver");
MODULE_ALIAS("platform:physmap-flash");
