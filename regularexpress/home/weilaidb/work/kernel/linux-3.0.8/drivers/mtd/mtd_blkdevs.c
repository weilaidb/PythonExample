static LIST_HEAD(blktrans_majors);
static DEFINE_MUTEX(blktrans_ref_mutex);
static void blktrans_dev_release(struct kref *kref)
static struct mtd_blktrans_dev *blktrans_dev_get(struct gendisk *disk)
static void blktrans_dev_put(struct mtd_blktrans_dev *dev)
static int do_blktrans_request(struct mtd_blktrans_ops *tr,
struct mtd_blktrans_dev *dev,
struct request *req)
int mtd_blktrans_cease_background(struct mtd_blktrans_dev *dev)
EXPORT_SYMBOL_GPL(mtd_blktrans_cease_background);
static int mtd_blktrans_thread(void *arg)
static void mtd_blktrans_request(struct request_queue *rq)
static int blktrans_open(struct block_device *bdev, fmode_t mode)
static int blktrans_release(struct gendisk *disk, fmode_t mode)
static int blktrans_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int blktrans_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static const struct block_device_operations mtd_blktrans_ops = ;
int add_mtd_blktrans_dev(struct mtd_blktrans_dev *new)
int del_mtd_blktrans_dev(struct mtd_blktrans_dev *old)
static void blktrans_notify_remove(struct mtd_info *mtd)
static void blktrans_notify_add(struct mtd_info *mtd)
static struct mtd_notifier blktrans_notifier = ;
int register_mtd_blktrans(struct mtd_blktrans_ops *tr)
int deregister_mtd_blktrans(struct mtd_blktrans_ops *tr)
static void __exit mtd_blktrans_exit(void)
module_exit(mtd_blktrans_exit);
EXPORT_SYMBOL_GPL(register_mtd_blktrans);
EXPORT_SYMBOL_GPL(deregister_mtd_blktrans);
EXPORT_SYMBOL_GPL(add_mtd_blktrans_dev);
EXPORT_SYMBOL_GPL(del_mtd_blktrans_dev);
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Common interface to block layer for MTD 'translation layers'");
