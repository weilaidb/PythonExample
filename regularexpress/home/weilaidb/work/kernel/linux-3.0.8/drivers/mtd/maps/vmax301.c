#define WINDOW_START 0xd8000
#define WINDOW_LENGTH 0x2000
#define WINDOW_SHIFT 25
#define WINDOW_MASK 0x1FFF
static DEFINE_SPINLOCK(vmax301_spin);
static void __vmax301_page(struct map_info *map, unsigned long page)
static inline void vmax301_page(struct map_info *map,
unsigned long ofs)
static map_word vmax301_read8(struct map_info *map, unsigned long ofs)
static void vmax301_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
static void vmax301_write8(struct map_info *map, map_word d, unsigned long adr)
static void vmax301_copy_to(struct map_info *map, unsigned long to, const void *from, ssize_t len)
static struct map_info vmax_map[2] = ;
static struct mtd_info *vmax_mtd[2] = ;
static void __exit cleanup_vmax301(void)
static int __init init_vmax301(void)
module_init(init_vmax301);
module_exit(cleanup_vmax301);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("MTD map driver for Tempustech VMAX SBC301 board");
