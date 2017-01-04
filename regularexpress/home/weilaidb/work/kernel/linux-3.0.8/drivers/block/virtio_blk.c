#define PART_BITS 4
static int major, index;
struct workqueue_struct *virtblk_wq;
struct virtio_blk
;
struct virtblk_req
;
static void blk_done(struct virtqueue *vq)
static bool do_req(struct request_queue *q, struct virtio_blk *vblk,
struct request *req)
static void do_virtblk_request(struct request_queue *q)
static int virtblk_get_id(struct gendisk *disk, char *id_str)
static int virtblk_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long data)
static int virtblk_getgeo(struct block_device *bd, struct hd_geometry *geo)
static const struct block_device_operations virtblk_fops = ;
static int index_to_minor(int index)
static ssize_t virtblk_serial_show(struct device *dev,
struct device_attribute *attr, char *buf)
DEVICE_ATTR(serial, S_IRUGO, virtblk_serial_show, NULL);
static void virtblk_config_changed_work(struct work_struct *work)
static void virtblk_config_changed(struct virtio_device *vdev)
static int __devinit virtblk_probe(struct virtio_device *vdev)
static void __devexit virtblk_remove(struct virtio_device *vdev)
static const struct virtio_device_id id_table[] = ;
static unsigned int features[] = ;
static struct virtio_driver __refdata virtio_blk = ;
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_DEVICE_TABLE(virtio, id_table);
MODULE_DESCRIPTION("Virtio block driver");
MODULE_LICENSE("GPL");
