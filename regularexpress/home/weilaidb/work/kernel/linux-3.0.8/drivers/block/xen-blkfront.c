enum blkif_state ;
struct blk_shadow ;
static DEFINE_MUTEX(blkfront_mutex);
static const struct block_device_operations xlvbd_block_fops;
#define BLK_RING_SIZE __CONST_RING_SIZE(blkif, PAGE_SIZE)
struct blkfront_info
;
static DEFINE_SPINLOCK(blkif_io_lock);
static unsigned int nr_minors;
static unsigned long *minors;
static DEFINE_SPINLOCK(minor_lock);
#define MAXIMUM_OUTSTANDING_BLOCK_REQS \
(BLKIF_MAX_SEGMENTS_PER_REQUEST * BLK_RING_SIZE)
#define GRANT_INVALID_REF	0
#define PARTS_PER_DISK		16
#define PARTS_PER_EXT_DISK      256
#define BLKIF_MAJOR(dev) ((dev)>>8)
#define BLKIF_MINOR(dev) ((dev) & 0xff)
#define EXT_SHIFT 28
#define EXTENDED (1<<EXT_SHIFT)
#define VDEV_IS_EXTENDED(dev) ((dev)&(EXTENDED))
#define BLKIF_MINOR_EXT(dev) ((dev)&(~EXTENDED))
#define EMULATED_HD_DISK_MINOR_OFFSET (0)
#define EMULATED_HD_DISK_NAME_OFFSET (EMULATED_HD_DISK_MINOR_OFFSET / 256)
#define EMULATED_SD_DISK_MINOR_OFFSET (0)
#define EMULATED_SD_DISK_NAME_OFFSET (EMULATED_SD_DISK_MINOR_OFFSET / 256)
#define DEV_NAME	"xvd"
static int get_id_from_freelist(struct blkfront_info *info)
static void add_id_to_freelist(struct blkfront_info *info,
unsigned long id)
static int xlbd_reserve_minors(unsigned int minor, unsigned int nr)
static void xlbd_release_minors(unsigned int minor, unsigned int nr)
static void blkif_restart_queue_callback(void *arg)
static int blkif_getgeo(struct block_device *bd, struct hd_geometry *hg)
static int blkif_ioctl(struct block_device *bdev, fmode_t mode,
unsigned command, unsigned long argument)
static int blkif_queue_request(struct request *req)
static inline void flush_requests(struct blkfront_info *info)
static void do_blkif_request(struct request_queue *rq)
static int xlvbd_init_blk_queue(struct gendisk *gd, u16 sector_size)
static void xlvbd_flush(struct blkfront_info *info)
static int xen_translate_vdev(int vdevice, int *minor, unsigned int *offset)
static int xlvbd_alloc_gendisk(blkif_sector_t capacity,
struct blkfront_info *info,
u16 vdisk_info, u16 sector_size)
static void xlvbd_release_gendisk(struct blkfront_info *info)
static void kick_pending_request_queues(struct blkfront_info *info)
static void blkif_restart_queue(struct work_struct *work)
static void blkif_free(struct blkfront_info *info, int suspend)
static void blkif_completion(struct blk_shadow *s)
static irqreturn_t blkif_interrupt(int irq, void *dev_id)
static int setup_blkring(struct xenbus_device *dev,
struct blkfront_info *info)
static int talk_to_blkback(struct xenbus_device *dev,
struct blkfront_info *info)
static int blkfront_probe(struct xenbus_device *dev,
const struct xenbus_device_id *id)
static int blkif_recover(struct blkfront_info *info)
static int blkfront_resume(struct xenbus_device *dev)
static void
blkfront_closing(struct blkfront_info *info)
static void blkfront_connect(struct blkfront_info *info)
static void blkback_changed(struct xenbus_device *dev,
enum xenbus_state backend_state)
static int blkfront_remove(struct xenbus_device *xbdev)
static int blkfront_is_ready(struct xenbus_device *dev)
static int blkif_open(struct block_device *bdev, fmode_t mode)
static int blkif_release(struct gendisk *disk, fmode_t mode)
static const struct block_device_operations xlvbd_block_fops =
;
static const struct xenbus_device_id blkfront_ids[] = ;
static struct xenbus_driver blkfront = ;
static int __init xlblk_init(void)
module_init(xlblk_init);
static void __exit xlblk_exit(void)
module_exit(xlblk_exit);
MODULE_DESCRIPTION("Xen virtual block device frontend");
MODULE_LICENSE("GPL");
MODULE_ALIAS_BLOCKDEV_MAJOR(XENVBD_MAJOR);
MODULE_ALIAS("xen:vbd");
MODULE_ALIAS("xenblk");
