#define AR7_PARTS	4
#define ROOT_OFFSET	0xe0000
#define LOADER_MAGIC1	le32_to_cpu(0xfeedfa42)
#define LOADER_MAGIC2	le32_to_cpu(0xfeed1281)
#define SQUASHFS_MAGIC	0x73717368
struct ar7_bin_rec ;
static int create_mtd_partitions(struct mtd_info *master,
struct mtd_partition **pparts,
unsigned long origin)
static struct mtd_part_parser ar7_parser = ;
static int __init ar7_parser_init(void)
module_init(ar7_parser_init);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(	"Felix Fietkau <nbd@openwrt.org>, "
"Eugene Konev <ejka@openwrt.org>");
MODULE_DESCRIPTION("MTD partitioning for TI AR7");
