static struct mtd_info *sbcmtd[3];
static struct mtd_partition *sbcmtd_parts[3];
struct map_info sbc82xx_flash_map[3] = ;
static struct mtd_partition smallflash_parts[] = ;
static struct mtd_partition bigflash_parts[] = ;
static const char *part_probes[] __initdata = ;
#define init_sbc82xx_one_flash(map, br, or)			\
do  while (0);
static int __init init_sbc82xx_flash(void)
static void __exit cleanup_sbc82xx_flash(void)
module_init(init_sbc82xx_flash);
module_exit(cleanup_sbc82xx_flash);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Flash map driver for WindRiver PowerQUICC II");
