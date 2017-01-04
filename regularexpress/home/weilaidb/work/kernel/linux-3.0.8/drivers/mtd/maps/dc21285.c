static struct mtd_info *dc21285_mtd;
static void nw_en_write(void)
#define nw_en_write() do  while (0)
static map_word dc21285_read8(struct map_info *map, unsigned long ofs)
static map_word dc21285_read16(struct map_info *map, unsigned long ofs)
static map_word dc21285_read32(struct map_info *map, unsigned long ofs)
static void dc21285_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
static void dc21285_write8(struct map_info *map, const map_word d, unsigned long adr)
static void dc21285_write16(struct map_info *map, const map_word d, unsigned long adr)
static void dc21285_write32(struct map_info *map, const map_word d, unsigned long adr)
static void dc21285_copy_to_32(struct map_info *map, unsigned long to, const void *from, ssize_t len)
static void dc21285_copy_to_16(struct map_info *map, unsigned long to, const void *from, ssize_t len)
static void dc21285_copy_to_8(struct map_info *map, unsigned long to, const void *from, ssize_t len)
static struct map_info dc21285_map = ;
static struct mtd_partition *dc21285_parts;
static const char *probes[] = ;
static int __init init_dc21285(void)
static void __exit cleanup_dc21285(void)
module_init(init_dc21285);
module_exit(cleanup_dc21285);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nicolas Pitre <nico@fluxnic.net>");
MODULE_DESCRIPTION("MTD map driver for DC21285 boards");
