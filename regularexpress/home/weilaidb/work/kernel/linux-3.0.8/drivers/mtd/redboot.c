struct fis_image_desc ;
struct fis_list ;
static int directory = CONFIG_MTD_REDBOOT_DIRECTORY_BLOCK;
module_param(directory, int, 0);
static inline int redboot_checksum(struct fis_image_desc *img)
static int parse_redboot_partitions(struct mtd_info *master,
struct mtd_partition **pparts,
unsigned long fis_origin)
static struct mtd_part_parser redboot_parser = ;
static int __init redboot_parser_init(void)
static void __exit redboot_parser_exit(void)
module_init(redboot_parser_init);
module_exit(redboot_parser_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Parsing code for RedBoot Flash Image System (FIS) tables");
