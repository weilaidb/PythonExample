static int storvsc_ringbuffer_size = STORVSC_RING_BUFFER_SIZE;
module_param(storvsc_ringbuffer_size, int, S_IRUGO);
MODULE_PARM_DESC(storvsc_ringbuffer_size, "Ring buffer size (bytes)");
static const char *driver_name = "storvsc";
static const struct hv_guid gStorVscDeviceType = ;
struct hv_host_device ;
struct storvsc_cmd_request ;
static int storvsc_device_alloc(struct scsi_device *sdevice)
static int storvsc_merge_bvec(struct request_queue *q,
struct bvec_merge_data *bmd, struct bio_vec *bvec)
static int storvsc_device_configure(struct scsi_device *sdevice)
static void destroy_bounce_buffer(struct scatterlist *sgl,
unsigned int sg_count)
static int do_bounce_buffer(struct scatterlist *sgl, unsigned int sg_count)
static struct scatterlist *create_bounce_buffer(struct scatterlist *sgl,
unsigned int sg_count,
unsigned int len)
static unsigned int copy_from_bounce_buffer(struct scatterlist *orig_sgl,
struct scatterlist *bounce_sgl,
unsigned int orig_sgl_count)
static unsigned int copy_to_bounce_buffer(struct scatterlist *orig_sgl,
struct scatterlist *bounce_sgl,
unsigned int orig_sgl_count)
static int storvsc_remove(struct hv_device *dev)
static int storvsc_get_chs(struct scsi_device *sdev, struct block_device * bdev,
sector_t capacity, int *info)
static int storvsc_host_reset(struct hv_device *device)
static int storvsc_host_reset_handler(struct scsi_cmnd *scmnd)
static void storvsc_commmand_completion(struct hv_storvsc_request *request)
static int storvsc_queuecommand_lck(struct scsi_cmnd *scmnd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(storvsc_queuecommand)
static struct scsi_host_template scsi_driver = ;
static int storvsc_probe(struct hv_device *device)
static struct hv_driver storvsc_drv = ;
static int storvsc_drv_init(void)
static void storvsc_drv_exit(void)
static int __init storvsc_init(void)
static void __exit storvsc_exit(void)
MODULE_LICENSE("GPL");
MODULE_VERSION(HV_DRV_VERSION);
MODULE_DESCRIPTION("Microsoft Hyper-V virtual storage driver");
module_init(storvsc_init);
module_exit(storvsc_exit);
