extern char _ebss;
struct map_info uclinux_ram_map = ;
static struct mtd_info *uclinux_ram_mtdinfo;
static struct mtd_partition uclinux_romfs[] = ;
#define	NUM_PARTITIONS	ARRAY_SIZE(uclinux_romfs)
static int uclinux_point(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, void **virt, resource_size_t *phys)
static int __init uclinux_mtd_init(void)
static void __exit uclinux_mtd_cleanup(void)
module_init(uclinux_mtd_init);
module_exit(uclinux_mtd_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Greg Ungerer <gerg@snapgear.com>");
MODULE_DESCRIPTION("Generic RAM based MTD for uClinux");
