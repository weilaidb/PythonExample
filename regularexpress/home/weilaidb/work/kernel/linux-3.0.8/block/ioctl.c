static int blkpg_ioctl(struct block_device *bdev, struct blkpg_ioctl_arg __user *arg)
static int blkdev_reread_part(struct block_device *bdev)
static int blk_ioctl_discard(struct block_device *bdev, uint64_t start,
uint64_t len, int secure)
static int put_ushort(unsigned long arg, unsigned short val)
static int put_int(unsigned long arg, int val)
static int put_uint(unsigned long arg, unsigned int val)
static int put_long(unsigned long arg, long val)
static int put_ulong(unsigned long arg, unsigned long val)
static int put_u64(unsigned long arg, u64 val)
int __blkdev_driver_ioctl(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg)
EXPORT_SYMBOL_GPL(__blkdev_driver_ioctl);
int blkdev_ioctl(struct block_device *bdev, fmode_t mode, unsigned cmd,
unsigned long arg)
EXPORT_SYMBOL_GPL(blkdev_ioctl);
