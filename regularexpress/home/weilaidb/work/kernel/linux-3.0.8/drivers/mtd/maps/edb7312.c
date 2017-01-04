#define WINDOW_ADDR 0x00000000
#define WINDOW_SIZE 0x01000000
#define BUSWIDTH    2
#define FLASH_BLOCKSIZE_MAIN	0x20000
#define FLASH_NUMBLOCKS_MAIN	128
#define PROBETYPES
#define MSG_PREFIX "EDB7312-NOR:"
#define MTDID      "edb7312-nor"
static struct mtd_info *mymtd;
struct map_info edb7312nor_map = ;
static struct mtd_partition static_partitions[3] =
;
static const char *probes[] = ;
static int                   mtd_parts_nb = 0;
static struct mtd_partition *mtd_parts    = 0;
static int __init init_edb7312nor(void)
static void __exit cleanup_edb7312nor(void)
module_init(init_edb7312nor);
module_exit(cleanup_edb7312nor);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marius Groeger <mag@sysgo.de>");
MODULE_DESCRIPTION("Generic configurable MTD map driver");
