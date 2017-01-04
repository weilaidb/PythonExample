#define WINDOW_ADDR 0xfe000000
#define WINDOW_SIZE 0x800000
static struct mtd_info *mymtd;
static struct map_info rpxlite_map = ;
static int __init init_rpxlite(void)
static void __exit cleanup_rpxlite(void)
module_init(init_rpxlite);
module_exit(cleanup_rpxlite);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnold Christensen <AKC@pel.dk>");
MODULE_DESCRIPTION("MTD map driver for RPX Lite and CLLF boards");
