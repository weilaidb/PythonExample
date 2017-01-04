#define BLKVSC_MINORS	64
enum blkvsc_device_type ;
enum blkvsc_op_type ;
struct blkvsc_request_group ;
struct blkvsc_request ;
struct block_device_context ;
static const char *drv_name = "blkvsc";
static const struct hv_guid dev_type = ;
static void blkvsc_request_completion(struct hv_storvsc_request *request);
static int blkvsc_ringbuffer_size = BLKVSC_RING_BUFFER_SIZE;
module_param(blkvsc_ringbuffer_size, int, S_IRUGO);
MODULE_PARM_DESC(ring_size, "Ring buffer size (in bytes)");
static int blkvsc_probe(struct hv_device *dev);
static int blkvsc_device_add(struct hv_device *device,
void *additional_info)
static int blkvsc_submit_request(struct blkvsc_request *blkvsc_req,
void (*request_completion)(struct hv_storvsc_request *))
static int blkvsc_open(struct block_device *bdev, fmode_t mode)
static int blkvsc_getgeo(struct block_device *bd, struct hd_geometry *hg)
static void blkvsc_init_rw(struct blkvsc_request *blkvsc_req)
static int blkvsc_ioctl(struct block_device *bd, fmode_t mode,
unsigned cmd, unsigned long arg)
static void blkvsc_cmd_completion(struct hv_storvsc_request *request)
static int blkvsc_do_operation(struct block_device_context *blkdev,
enum blkvsc_op_type op)
static int blkvsc_cancel_pending_reqs(struct block_device_context *blkdev)
static int blkvsc_remove(struct hv_device *dev)
static void blkvsc_shutdown(struct hv_device *dev)
static int blkvsc_release(struct gendisk *disk, fmode_t mode)
static int blkvsc_do_request(struct block_device_context *blkdev,
struct request *req)
static int blkvsc_do_pending_reqs(struct block_device_context *blkdev)
static void blkvsc_request(struct request_queue *queue)
static  struct hv_driver blkvsc_drv = ;
static const struct block_device_operations block_ops = ;
static int blkvsc_drv_init(void)
static void blkvsc_drv_exit(void)
static int blkvsc_probe(struct hv_device *dev)
static void blkvsc_request_completion(struct hv_storvsc_request *request)
static void __exit blkvsc_exit(void)
MODULE_LICENSE("GPL");
MODULE_VERSION(HV_DRV_VERSION);
MODULE_DESCRIPTION("Microsoft Hyper-V virtual block driver");
module_init(blkvsc_drv_init);
module_exit(blkvsc_exit);
