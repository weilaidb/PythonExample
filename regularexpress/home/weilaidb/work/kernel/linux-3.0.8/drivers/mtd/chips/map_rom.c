static int maprom_read (struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int maprom_write (struct mtd_info *, loff_t, size_t, size_t *, const u_char *);
static void maprom_nop (struct mtd_info *);
static struct mtd_info *map_rom_probe(struct map_info *map);
static int maprom_erase (struct mtd_info *mtd, struct erase_info *info);
static unsigned long maprom_unmapped_area(struct mtd_info *, unsigned long,
unsigned long, unsigned long);
static struct mtd_chip_driver maprom_chipdrv = ;
static struct mtd_info *map_rom_probe(struct map_info *map)
static unsigned long maprom_unmapped_area(struct mtd_info *mtd,
unsigned long len,
unsigned long offset,
unsigned long flags)
static int maprom_read (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf)
static void maprom_nop(struct mtd_info *mtd)
static int maprom_write (struct mtd_info *mtd, loff_t to, size_t len, size_t *retlen, const u_char *buf)
static int maprom_erase (struct mtd_info *mtd, struct erase_info *info)
static int __init map_rom_init(void)
static void __exit map_rom_exit(void)
module_init(map_rom_init);
module_exit(map_rom_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("MTD chip driver for ROM chips");
