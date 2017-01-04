struct blk_cmd_filter ;
static struct blk_cmd_filter blk_default_cmd_filter;
const unsigned char scsi_command_size_tbl[8] =
;
EXPORT_SYMBOL(scsi_command_size_tbl);
static int sg_get_version(int __user *p)
static int scsi_get_idlun(struct request_queue *q, int __user *p)
static int scsi_get_bus(struct request_queue *q, int __user *p)
static int sg_get_timeout(struct request_queue *q)
static int sg_set_timeout(struct request_queue *q, int __user *p)
static int sg_get_reserved_size(struct request_queue *q, int __user *p)
static int sg_set_reserved_size(struct request_queue *q, int __user *p)
static int sg_emulated_host(struct request_queue *q, int __user *p)
static void blk_set_cmd_filter_defaults(struct blk_cmd_filter *filter)
int blk_verify_command(unsigned char *cmd, fmode_t has_write_perm)
EXPORT_SYMBOL(blk_verify_command);
static int blk_fill_sghdr_rq(struct request_queue *q, struct request *rq,
struct sg_io_hdr *hdr, fmode_t mode)
static int blk_complete_sghdr_rq(struct request *rq, struct sg_io_hdr *hdr,
struct bio *bio)
static int sg_io(struct request_queue *q, struct gendisk *bd_disk,
struct sg_io_hdr *hdr, fmode_t mode)
#define OMAX_SB_LEN 16
int sg_scsi_ioctl(struct request_queue *q, struct gendisk *disk, fmode_t mode,
struct scsi_ioctl_command __user *sic)
EXPORT_SYMBOL_GPL(sg_scsi_ioctl);
static int __blk_send_generic(struct request_queue *q, struct gendisk *bd_disk,
int cmd, int data)
static inline int blk_send_start_stop(struct request_queue *q,
struct gendisk *bd_disk, int data)
int scsi_cmd_ioctl(struct request_queue *q, struct gendisk *bd_disk, fmode_t mode,
unsigned int cmd, void __user *arg)
EXPORT_SYMBOL(scsi_cmd_ioctl);
static int __init blk_scsi_ioctl_init(void)
fs_initcall(blk_scsi_ioctl_init);
