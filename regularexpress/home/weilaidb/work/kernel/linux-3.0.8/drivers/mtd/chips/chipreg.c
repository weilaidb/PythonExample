static DEFINE_SPINLOCK(chip_drvs_lock);
static LIST_HEAD(chip_drvs_list);
void register_mtd_chip_driver(struct mtd_chip_driver *drv)
void unregister_mtd_chip_driver(struct mtd_chip_driver *drv)
static struct mtd_chip_driver *get_mtd_chip_driver (const char *name)
struct mtd_info *do_map_probe(const char *name, struct map_info *map)
void map_destroy(struct mtd_info *mtd)
EXPORT_SYMBOL(register_mtd_chip_driver);
EXPORT_SYMBOL(unregister_mtd_chip_driver);
EXPORT_SYMBOL(do_map_probe);
EXPORT_SYMBOL(map_destroy);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Core routines for registering and invoking MTD chip drivers");
