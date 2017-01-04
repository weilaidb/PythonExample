#define SECTOR_SHIFT		9
#define PAGE_SECTORS_SHIFT	(PAGE_SHIFT - SECTOR_SHIFT)
#define PAGE_SECTORS		(1 << PAGE_SECTORS_SHIFT)
struct brd_device ;
static DEFINE_MUTEX(brd_mutex);
static struct page *brd_lookup_page(struct brd_device *brd, sector_t sector)
static struct page *brd_insert_page(struct brd_device *brd, sector_t sector)
static void brd_free_page(struct brd_device *brd, sector_t sector)
static void brd_zero_page(struct brd_device *brd, sector_t sector)
#define FREE_BATCH 16
static void brd_free_pages(struct brd_device *brd)
static int copy_to_brd_setup(struct brd_device *brd, sector_t sector, size_t n)
static void discard_from_brd(struct brd_device *brd,
sector_t sector, size_t n)
static void copy_to_brd(struct brd_device *brd, const void *src,
sector_t sector, size_t n)
static void copy_from_brd(void *dst, struct brd_device *brd,
sector_t sector, size_t n)
static int brd_do_bvec(struct brd_device *brd, struct page *page,
unsigned int len, unsigned int off, int rw,
sector_t sector)
static int brd_make_request(struct request_queue *q, struct bio *bio)
static int brd_direct_access(struct block_device *bdev, sector_t sector,
void **kaddr, unsigned long *pfn)
static int brd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static const struct block_device_operations brd_fops = ;
static int rd_nr;
int rd_size = CONFIG_BLK_DEV_RAM_SIZE;
static int max_part;
static int part_shift;
module_param(rd_nr, int, S_IRUGO);
MODULE_PARM_DESC(rd_nr, "Maximum number of brd devices");
module_param(rd_size, int, S_IRUGO);
MODULE_PARM_DESC(rd_size, "Size of each RAM disk in kbytes.");
module_param(max_part, int, S_IRUGO);
MODULE_PARM_DESC(max_part, "Maximum number of partitions per RAM disk");
MODULE_LICENSE("GPL");
MODULE_ALIAS_BLOCKDEV_MAJOR(RAMDISK_MAJOR);
MODULE_ALIAS("rd");
static int __init ramdisk_size(char *str)
__setup("ramdisk_size=", ramdisk_size);
static LIST_HEAD(brd_devices);
static DEFINE_MUTEX(brd_devices_mutex);
static struct brd_device *brd_alloc(int i)
static void brd_free(struct brd_device *brd)
static struct brd_device *brd_init_one(int i)
static void brd_del_one(struct brd_device *brd)
static struct kobject *brd_probe(dev_t dev, int *part, void *data)
static int __init brd_init(void)
static void __exit brd_exit(void)
module_init(brd_init);
module_exit(brd_exit);
