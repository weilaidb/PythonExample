#define WINDOW_START 0xe8000
#define WINDOW_LENGTH 0x8000
#define WINDOW_SHIFT 27
#define WINDOW_MASK 0x7FFF
#define PAGE_IO 0x208
static volatile char page_n_dev = 0;
static unsigned long iomapadr;
static DEFINE_SPINLOCK(oct5066_spin);
static void __oct5066_page(struct map_info *map, __u8 byte)
static inline void oct5066_page(struct map_info *map, unsigned long ofs)
static map_word oct5066_read8(struct map_info *map, unsigned long ofs)
static void oct5066_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
static void oct5066_write8(struct map_info *map, map_word d, unsigned long adr)
static void oct5066_copy_to(struct map_info *map, unsigned long to, const void *from, ssize_t len)
static struct map_info oct5066_map[2] = ;
static struct mtd_info *oct5066_mtd[2] = ;
static int __init OctProbe(void)
void cleanup_oct5066(void)
static int __init init_oct5066(void)
module_init(init_oct5066);
module_exit(cleanup_oct5066);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jason Gunthorpe <jgg@deltatee.com>, David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("MTD map driver for Octagon 5066 Single Board Computer");
