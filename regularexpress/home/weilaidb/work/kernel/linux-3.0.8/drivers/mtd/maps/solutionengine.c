static struct mtd_info *flash_mtd;
static struct mtd_info *eprom_mtd;
static struct mtd_partition *parsed_parts;
struct map_info soleng_eprom_map = ;
struct map_info soleng_flash_map = ;
static const char *probes[] = ;
static struct mtd_partition superh_se_partitions[] = ;
static int __init init_soleng_maps(void)
static void __exit cleanup_soleng_maps(void)
module_init(init_soleng_maps);
module_exit(cleanup_soleng_maps);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("MTD map driver for Hitachi SolutionEngine (and similar) boards");
