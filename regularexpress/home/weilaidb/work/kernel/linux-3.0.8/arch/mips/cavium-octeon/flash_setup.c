static struct map_info flash_map;
static struct mtd_info *mymtd;
static int nr_parts;
static struct mtd_partition *parts;
static const char *part_probe_types[] = ;
static int __init flash_init(void)
late_initcall(flash_init);
