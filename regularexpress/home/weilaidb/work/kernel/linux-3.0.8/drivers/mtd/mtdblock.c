struct mtdblk_dev ;
static struct mutex mtdblks_lock;
static void erase_callback(struct erase_info *done)
static int erase_write (struct mtd_info *mtd, unsigned long pos,
int len, const char *buf)
static int write_cached_data (struct mtdblk_dev *mtdblk)
static int do_cached_write (struct mtdblk_dev *mtdblk, unsigned long pos,
int len, const char *buf)
static int do_cached_read (struct mtdblk_dev *mtdblk, unsigned long pos,
int len, char *buf)
static int mtdblock_readsect(struct mtd_blktrans_dev *dev,
unsigned long block, char *buf)
static int mtdblock_writesect(struct mtd_blktrans_dev *dev,
unsigned long block, char *buf)
static int mtdblock_open(struct mtd_blktrans_dev *mbd)
static int mtdblock_release(struct mtd_blktrans_dev *mbd)
static int mtdblock_flush(struct mtd_blktrans_dev *dev)
static void mtdblock_add_mtd(struct mtd_blktrans_ops *tr, struct mtd_info *mtd)
static void mtdblock_remove_dev(struct mtd_blktrans_dev *dev)
static struct mtd_blktrans_ops mtdblock_tr = ;
static int __init init_mtdblock(void)
static void __exit cleanup_mtdblock(void)
module_init(init_mtdblock);
module_exit(cleanup_mtdblock);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nicolas Pitre <nico@fluxnic.net> et al.");
MODULE_DESCRIPTION("Caching read/erase/writeback block device emulation access to MTD devices");
