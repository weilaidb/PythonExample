#define WINDOW_ADDR0 0x00000000
#define WINDOW_SIZE0 0x00800000
#define WINDOW_ADDR1 0x10000000
#define WINDOW_SIZE1 0x00800000
#define NUM_FLASHBANKS 2
#define BUSWIDTH     4
#define PROBETYPES
#define MSG_PREFIX "impA7:"
#define MTDID      "impa7-%d"
static struct mtd_info *impa7_mtd[NUM_FLASHBANKS];
static struct map_info impa7_map[NUM_FLASHBANKS] = ;
static struct mtd_partition static_partitions[] =
;
static int mtd_parts_nb[NUM_FLASHBANKS];
static struct mtd_partition *mtd_parts[NUM_FLASHBANKS];
static const char *probes[] = ;
static int __init init_impa7(void)
static void __exit cleanup_impa7(void)
module_init(init_impa7);
module_exit(cleanup_impa7);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Pavel Bartusek <pba@sysgo.de>");
MODULE_DESCRIPTION("MTD map driver for implementa impA7");
