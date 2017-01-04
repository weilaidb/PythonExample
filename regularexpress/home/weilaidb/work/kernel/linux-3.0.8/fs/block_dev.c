struct bdev_inode ;
static const struct address_space_operations def_blk_aops;
static inline struct bdev_inode *BDEV_I(struct inode *inode)
inline struct block_device *I_BDEV(struct inode *inode)
EXPORT_SYMBOL(I_BDEV);
static void bdev_inode_switch_bdi(struct inode *inode,
struct backing_dev_info *dst)
static sector_t max_block(struct block_device *bdev)
static void kill_bdev(struct block_device *bdev)
int set_blocksize(struct block_device *bdev, int size)
EXPORT_SYMBOL(set_blocksize);
int sb_set_blocksize(struct super_block *sb, int size)
EXPORT_SYMBOL(sb_set_blocksize);
int sb_min_blocksize(struct super_block *sb, int size)
EXPORT_SYMBOL(sb_min_blocksize);
static int
blkdev_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh, int create)
static int
blkdev_get_blocks(struct inode *inode, sector_t iblock,
struct buffer_head *bh, int create)
static ssize_t
blkdev_direct_IO(int rw, struct kiocb *iocb, const struct iovec *iov,
loff_t offset, unsigned long nr_segs)
int __sync_blockdev(struct block_device *bdev, int wait)
int sync_blockdev(struct block_device *bdev)
EXPORT_SYMBOL(sync_blockdev);
int fsync_bdev(struct block_device *bdev)
EXPORT_SYMBOL(fsync_bdev);
struct super_block *freeze_bdev(struct block_device *bdev)
EXPORT_SYMBOL(freeze_bdev);
int thaw_bdev(struct block_device *bdev, struct super_block *sb)
EXPORT_SYMBOL(thaw_bdev);
static int blkdev_writepage(struct page *page, struct writeback_control *wbc)
static int blkdev_readpage(struct file * file, struct page * page)
static int blkdev_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int blkdev_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static loff_t block_llseek(struct file *file, loff_t offset, int origin)
int blkdev_fsync(struct file *filp, int datasync)
EXPORT_SYMBOL(blkdev_fsync);
static  __cacheline_aligned_in_smp DEFINE_SPINLOCK(bdev_lock);
static struct kmem_cache * bdev_cachep __read_mostly;
static struct inode *bdev_alloc_inode(struct super_block *sb)
static void bdev_i_callback(struct rcu_head *head)
static void bdev_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static inline void __bd_forget(struct inode *inode)
static void bdev_evict_inode(struct inode *inode)
static const struct super_operations bdev_sops = ;
static struct dentry *bd_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type bd_type = ;
struct super_block *blockdev_superblock __read_mostly;
void __init bdev_cache_init(void)
static inline unsigned long hash(dev_t dev)
static int bdev_test(struct inode *inode, void *data)
static int bdev_set(struct inode *inode, void *data)
static LIST_HEAD(all_bdevs);
struct block_device *bdget(dev_t dev)
EXPORT_SYMBOL(bdget);
struct block_device *bdgrab(struct block_device *bdev)
long nr_blockdev_pages(void)
void bdput(struct block_device *bdev)
EXPORT_SYMBOL(bdput);
static struct block_device *bd_acquire(struct inode *inode)
void bd_forget(struct inode *inode)
static bool bd_may_claim(struct block_device *bdev, struct block_device *whole,
void *holder)
static int bd_prepare_to_claim(struct block_device *bdev,
struct block_device *whole, void *holder)
static struct block_device *bd_start_claiming(struct block_device *bdev,
void *holder)
struct bd_holder_disk ;
static struct bd_holder_disk *bd_find_holder_disk(struct block_device *bdev,
struct gendisk *disk)
static int add_symlink(struct kobject *from, struct kobject *to)
static void del_symlink(struct kobject *from, struct kobject *to)
int bd_link_disk_holder(struct block_device *bdev, struct gendisk *disk)
EXPORT_SYMBOL_GPL(bd_link_disk_holder);
void bd_unlink_disk_holder(struct block_device *bdev, struct gendisk *disk)
EXPORT_SYMBOL_GPL(bd_unlink_disk_holder);
static void flush_disk(struct block_device *bdev, bool kill_dirty)
void check_disk_size_change(struct gendisk *disk, struct block_device *bdev)
EXPORT_SYMBOL(check_disk_size_change);
int revalidate_disk(struct gendisk *disk)
EXPORT_SYMBOL(revalidate_disk);
int check_disk_change(struct block_device *bdev)
EXPORT_SYMBOL(check_disk_change);
void bd_set_size(struct block_device *bdev, loff_t size)
EXPORT_SYMBOL(bd_set_size);
static int __blkdev_put(struct block_device *bdev, fmode_t mode, int for_part);
static int __blkdev_get(struct block_device *bdev, fmode_t mode, int for_part)
int blkdev_get(struct block_device *bdev, fmode_t mode, void *holder)
EXPORT_SYMBOL(blkdev_get);
struct block_device *blkdev_get_by_path(const char *path, fmode_t mode,
void *holder)
EXPORT_SYMBOL(blkdev_get_by_path);
struct block_device *blkdev_get_by_dev(dev_t dev, fmode_t mode, void *holder)
EXPORT_SYMBOL(blkdev_get_by_dev);
static int blkdev_open(struct inode * inode, struct file * filp)
static int __blkdev_put(struct block_device *bdev, fmode_t mode, int for_part)
int blkdev_put(struct block_device *bdev, fmode_t mode)
EXPORT_SYMBOL(blkdev_put);
static int blkdev_close(struct inode * inode, struct file * filp)
static long block_ioctl(struct file *file, unsigned cmd, unsigned long arg)
ssize_t blkdev_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
EXPORT_SYMBOL_GPL(blkdev_aio_write);
static int blkdev_releasepage(struct page *page, gfp_t wait)
static const struct address_space_operations def_blk_aops = ;
const struct file_operations def_blk_fops = ;
int ioctl_by_bdev(struct block_device *bdev, unsigned cmd, unsigned long arg)
EXPORT_SYMBOL(ioctl_by_bdev);
struct block_device *lookup_bdev(const char *pathname)
EXPORT_SYMBOL(lookup_bdev);
int __invalidate_device(struct block_device *bdev, bool kill_dirty)
EXPORT_SYMBOL(__invalidate_device);
