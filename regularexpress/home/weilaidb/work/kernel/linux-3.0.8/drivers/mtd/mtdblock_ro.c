static int mtdblock_readsect(struct mtd_blktrans_dev *dev,
unsigned long block, char *buf)
static int mtdblock_writesect(struct mtd_blktrans_dev *dev,
unsigned long block, char *buf)
static void mtdblock_add_mtd(struct mtd_blktrans_ops *tr, struct mtd_info *mtd)
static void mtdblock_remove_dev(struct mtd_blktrans_dev *dev)
static struct mtd_blktrans_ops mtdblock_tr = ;
static int __init mtdblock_init(void)
static void __exit mtdblock_exit(void)
module_init(mtdblock_init);
module_exit(mtdblock_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Simple read-only block device emulation access to MTD devices");
