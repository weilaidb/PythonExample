unsigned int zorro_num_autocon;
struct zorro_dev zorro_autocon[ZORRO_NUM_AUTO];
struct zorro_bus ;
struct zorro_dev *zorro_find_device(zorro_id id, struct zorro_dev *from)
EXPORT_SYMBOL(zorro_find_device);
DECLARE_BITMAP(zorro_unused_z2ram, 128);
EXPORT_SYMBOL(zorro_unused_z2ram);
static void __init mark_region(unsigned long start, unsigned long end,
int flag)
static struct resource __init *zorro_find_parent_resource(
struct platform_device *bridge, struct zorro_dev *z)
static int __init amiga_zorro_probe(struct platform_device *pdev)
static struct platform_driver amiga_zorro_driver = ;
static int __init amiga_zorro_init(void)
module_init(amiga_zorro_init);
MODULE_LICENSE("GPL");
