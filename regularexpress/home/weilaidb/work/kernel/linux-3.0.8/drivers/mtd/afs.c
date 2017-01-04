struct footer_struct ;
struct image_info_struct ;
static u32 word_sum(void *words, int num)
static int
afs_read_footer(struct mtd_info *mtd, u_int *img_start, u_int *iis_start,
u_int off, u_int mask)
static int
afs_read_iis(struct mtd_info *mtd, struct image_info_struct *iis, u_int ptr)
static int parse_afs_partitions(struct mtd_info *mtd,
struct mtd_partition **pparts,
unsigned long origin)
static struct mtd_part_parser afs_parser = ;
static int __init afs_parser_init(void)
static void __exit afs_parser_exit(void)
module_init(afs_parser_init);
module_exit(afs_parser_exit);
MODULE_AUTHOR("ARM Ltd");
MODULE_DESCRIPTION("ARM Firmware Suite partition parser");
MODULE_LICENSE("GPL");
