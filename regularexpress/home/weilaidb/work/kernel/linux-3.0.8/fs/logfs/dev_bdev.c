#define PAGE_OFS(ofs) ((ofs) & (PAGE_SIZE-1))
static void request_complete(struct bio *bio, int err)
static int sync_request(struct page *page, struct block_device *bdev, int rw)
static int bdev_readpage(void *_sb, struct page *page)
static DECLARE_WAIT_QUEUE_HEAD(wq);
static void writeseg_end_io(struct bio *bio, int err)
static int __bdev_writeseg(struct super_block *sb, u64 ofs, pgoff_t index,
size_t nr_pages)
static void bdev_writeseg(struct super_block *sb, u64 ofs, size_t len)
static void erase_end_io(struct bio *bio, int err)
static int do_erase(struct super_block *sb, u64 ofs, pgoff_t index,
size_t nr_pages)
static int bdev_erase(struct super_block *sb, loff_t to, size_t len,
int ensure_write)
static void bdev_sync(struct super_block *sb)
static struct page *bdev_find_first_sb(struct super_block *sb, u64 *ofs)
static struct page *bdev_find_last_sb(struct super_block *sb, u64 *ofs)
static int bdev_write_sb(struct super_block *sb, struct page *page)
static void bdev_put_device(struct logfs_super *s)
static int bdev_can_write_buf(struct super_block *sb, u64 ofs)
static const struct logfs_device_ops bd_devops = ;
int logfs_get_sb_bdev(struct logfs_super *p, struct file_system_type *type,
const char *devname)
