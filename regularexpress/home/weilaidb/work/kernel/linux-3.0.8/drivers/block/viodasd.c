#define pr_fmt(fmt) "viod: " fmt
MODULE_DESCRIPTION("iSeries Virtual DASD");
MODULE_AUTHOR("Dave Boutcher");
MODULE_LICENSE("GPL");
#define VIOD_GENHD_NAME		"iseries/vd"
#define VIOD_VERS		"1.64"
enum ;
static DEFINE_MUTEX(viodasd_mutex);
static DEFINE_SPINLOCK(viodasd_spinlock);
#define VIOMAXREQ		16
#define DEVICE_NO(cell)	((struct viodasd_device *)(cell) - &viodasd_devices[0])
struct viodasd_waitevent ;
static const struct vio_error_entry viodasd_err_table[] = ;
#define VIODASD_MAXSECTORS (4096 / 512 * VIOMAXBLOCKDMA)
static int num_req_outstanding;
struct viodasd_device  viodasd_devices[MAX_DISKNO];
static int viodasd_open(struct block_device *bdev, fmode_t mode)
static int viodasd_unlocked_open(struct block_device *bdev, fmode_t mode)
static int viodasd_release(struct gendisk *disk, fmode_t mode)
static int viodasd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static const struct block_device_operations viodasd_fops = ;
static void viodasd_end_request(struct request *req, int error,
int num_sectors)
static int send_request(struct request *req)
static void do_viodasd_request(struct request_queue *q)
static int probe_disk(struct viodasd_device *d)
static int block_event_to_scatterlist(const struct vioblocklpevent *bevent,
struct scatterlist *sg, int *total_len)
static void viodasd_restart_all_queues_starting_from(int first_index)
static int viodasd_handle_read_write(struct vioblocklpevent *bevent)
static void handle_block_event(struct HvLpEvent *event)
static ssize_t probe_disks(struct device_driver *drv, const char *buf,
size_t count)
static DRIVER_ATTR(probe, S_IWUSR, NULL, probe_disks);
static int viodasd_probe(struct vio_dev *vdev, const struct vio_device_id *id)
static int viodasd_remove(struct vio_dev *vdev)
static struct vio_device_id viodasd_device_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, viodasd_device_table);
static struct vio_driver viodasd_driver = ;
static int need_delete_probe;
static int __init viodasd_init(void)
module_init(viodasd_init);
void __exit viodasd_exit(void)
module_exit(viodasd_exit);
