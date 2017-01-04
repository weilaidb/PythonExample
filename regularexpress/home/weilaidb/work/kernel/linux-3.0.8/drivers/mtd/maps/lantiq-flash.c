enum ;
struct ltq_mtd ;
static char ltq_map_name[] = "ltq_nor";
static map_word
ltq_read16(struct map_info *map, unsigned long adr)
static void
ltq_write16(struct map_info *map, map_word d, unsigned long adr)
static void
ltq_copy_from(struct map_info *map, void *to,
unsigned long from, ssize_t len)
static void
ltq_copy_to(struct map_info *map, unsigned long to,
const void *from, ssize_t len)
static const char const *part_probe_types[] = ;
static int __init
ltq_mtd_probe(struct platform_device *pdev)
static int __devexit
ltq_mtd_remove(struct platform_device *pdev)
static struct platform_driver ltq_mtd_driver = ;
static int __init
init_ltq_mtd(void)
static void __exit
exit_ltq_mtd(void)
module_init(init_ltq_mtd);
module_exit(exit_ltq_mtd);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("John Crispin <blogic@openwrt.org>");
MODULE_DESCRIPTION("Lantiq SoC NOR");
