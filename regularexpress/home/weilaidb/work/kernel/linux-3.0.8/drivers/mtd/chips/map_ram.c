static int mapram_read (struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int mapram_write (struct mtd_info *, loff_t, size_t, size_t *, const u_char *);
static int mapram_erase (struct mtd_info *, struct erase_info *);
static void mapram_nop (struct mtd_info *);
static struct mtd_info *map_ram_probe(struct map_info *map);
static unsigned long mapram_unmapped_area(struct mtd_info *, unsigned long,
unsigned long, unsigned long);
static struct mtd_chip_driver mapram_chipdrv = ;
static struct mtd_info *map_ram_probe(struct map_info *map)
static unsigned long mapram_unmapped_area(struct mtd_info *mtd,
unsigned long len,
unsigned long offset,
unsigned long flags)
static int mapram_read (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf)
static int mapram_write (struct mtd_info *mtd, loff_t to, size_t len, size_t *retlen, const u_char *buf)
static int mapram_erase (struct mtd_info *mtd, struct erase_info *instr)
static void mapram_nop(struct mtd_info *mtd)
static int __init map_ram_init(void)
static void __exit map_ram_exit(void)
module_init(map_ram_init);
module_exit(map_ram_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("MTD chip driver for RAM chips");
