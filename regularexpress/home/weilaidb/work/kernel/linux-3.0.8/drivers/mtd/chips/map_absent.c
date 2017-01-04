static int map_absent_read (struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int map_absent_write (struct mtd_info *, loff_t, size_t, size_t *, const u_char *);
static int map_absent_erase (struct mtd_info *, struct erase_info *);
static void map_absent_sync (struct mtd_info *);
static struct mtd_info *map_absent_probe(struct map_info *map);
static void map_absent_destroy (struct mtd_info *);
static struct mtd_chip_driver map_absent_chipdrv = ;
static struct mtd_info *map_absent_probe(struct map_info *map)
static int map_absent_read(struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf)
static int map_absent_write(struct mtd_info *mtd, loff_t to, size_t len, size_t *retlen, const u_char *buf)
static int map_absent_erase(struct mtd_info *mtd, struct erase_info *instr)
static void map_absent_sync(struct mtd_info *mtd)
static void map_absent_destroy(struct mtd_info *mtd)
static int __init map_absent_init(void)
static void __exit map_absent_exit(void)
module_init(map_absent_init);
module_exit(map_absent_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Resilience Corporation - Eric Brower <ebrower@resilience.com>");
MODULE_DESCRIPTION("Placeholder MTD chip driver for 'absent' chips");
