MODULE_AUTHOR("Eric Youngdale");
MODULE_DESCRIPTION("SCSI disk (sd) driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK0_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK1_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK2_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK3_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK4_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK5_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK6_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK7_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK8_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK9_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK10_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK11_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK12_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK13_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK14_MAJOR);
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_DISK15_MAJOR);
MODULE_ALIAS_SCSI_DEVICE(TYPE_DISK);
MODULE_ALIAS_SCSI_DEVICE(TYPE_MOD);
MODULE_ALIAS_SCSI_DEVICE(TYPE_RBC);
#if !defined(CONFIG_DEBUG_BLOCK_EXT_DEVT)
#define SD_MINORS	16
#define SD_MINORS	0
static void sd_config_discard(struct scsi_disk *, unsigned int);
static int  sd_revalidate_disk(struct gendisk *);
static void sd_unlock_native_capacity(struct gendisk *disk);
static int  sd_probe(struct device *);
static int  sd_remove(struct device *);
static void sd_shutdown(struct device *);
static int sd_suspend(struct device *, pm_message_t state);
static int sd_resume(struct device *);
static void sd_rescan(struct device *);
static int sd_done(struct scsi_cmnd *);
static void sd_read_capacity(struct scsi_disk *sdkp, unsigned char *buffer);
static void scsi_disk_release(struct device *cdev);
static void sd_print_sense_hdr(struct scsi_disk *, struct scsi_sense_hdr *);
static void sd_print_result(struct scsi_disk *, int);
static DEFINE_SPINLOCK(sd_index_lock);
static DEFINE_IDA(sd_index_ida);
static DEFINE_MUTEX(sd_ref_mutex);
static struct kmem_cache *sd_cdb_cache;
static mempool_t *sd_cdb_pool;
static const char *sd_cache_types[] = ;
static ssize_t
sd_store_cache_type(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
sd_store_manage_start_stop(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
sd_store_allow_restart(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
sd_show_cache_type(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
sd_show_fua(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
sd_show_manage_start_stop(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
sd_show_allow_restart(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
sd_show_protection_type(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
sd_show_protection_mode(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
sd_show_app_tag_own(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
sd_show_thin_provisioning(struct device *dev, struct device_attribute *attr,
char *buf)
static const char *lbp_mode[] = ;
static ssize_t
sd_show_provisioning_mode(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
sd_store_provisioning_mode(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute sd_disk_attrs[] = ;
static struct class sd_disk_class = ;
static struct scsi_driver sd_template = ;
static int sd_major(int major_idx)
static struct scsi_disk *__scsi_disk_get(struct gendisk *disk)
static struct scsi_disk *scsi_disk_get(struct gendisk *disk)
static struct scsi_disk *scsi_disk_get_from_dev(struct device *dev)
static void scsi_disk_put(struct scsi_disk *sdkp)
static void sd_prot_op(struct scsi_cmnd *scmd, unsigned int dif)
static void sd_config_discard(struct scsi_disk *sdkp, unsigned int mode)
static int scsi_setup_discard_cmnd(struct scsi_device *sdp, struct request *rq)
static int scsi_setup_flush_cmnd(struct scsi_device *sdp, struct request *rq)
static void sd_unprep_fn(struct request_queue *q, struct request *rq)
static int sd_prep_fn(struct request_queue *q, struct request *rq)
static int sd_open(struct block_device *bdev, fmode_t mode)
static int sd_release(struct gendisk *disk, fmode_t mode)
static int sd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int sd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static void set_media_not_present(struct scsi_disk *sdkp)
static int media_not_present(struct scsi_disk *sdkp,
struct scsi_sense_hdr *sshdr)
static unsigned int sd_check_events(struct gendisk *disk, unsigned int clearing)
static int sd_sync_cache(struct scsi_disk *sdkp)
static void sd_rescan(struct device *dev)
static int sd_compat_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static const struct block_device_operations sd_fops = ;
static unsigned int sd_completed_bytes(struct scsi_cmnd *scmd)
static int sd_done(struct scsi_cmnd *SCpnt)
static void
sd_spinup_disk(struct scsi_disk *sdkp)
static void sd_read_protection_type(struct scsi_disk *sdkp, unsigned char *buffer)
static void read_capacity_error(struct scsi_disk *sdkp, struct scsi_device *sdp,
struct scsi_sense_hdr *sshdr, int sense_valid,
int the_result)
#define RC16_LEN 32
#if RC16_LEN > SD_BUF_SIZE
#error RC16_LEN must not be more than SD_BUF_SIZE
#define READ_CAPACITY_RETRIES_ON_RESET	10
static int read_capacity_16(struct scsi_disk *sdkp, struct scsi_device *sdp,
unsigned char *buffer)
static int read_capacity_10(struct scsi_disk *sdkp, struct scsi_device *sdp,
unsigned char *buffer)
static int sd_try_rc16_first(struct scsi_device *sdp)
static void
sd_read_capacity(struct scsi_disk *sdkp, unsigned char *buffer)
static inline int
sd_do_mode_sense(struct scsi_device *sdp, int dbd, int modepage,
unsigned char *buffer, int len, struct scsi_mode_data *data,
struct scsi_sense_hdr *sshdr)
static void
sd_read_write_protect_flag(struct scsi_disk *sdkp, unsigned char *buffer)
static void
sd_read_cache_type(struct scsi_disk *sdkp, unsigned char *buffer)
static void sd_read_app_tag_own(struct scsi_disk *sdkp, unsigned char *buffer)
static void sd_read_block_limits(struct scsi_disk *sdkp)
static void sd_read_block_characteristics(struct scsi_disk *sdkp)
static void sd_read_block_provisioning(struct scsi_disk *sdkp)
static int sd_try_extended_inquiry(struct scsi_device *sdp)
static int sd_revalidate_disk(struct gendisk *disk)
static void sd_unlock_native_capacity(struct gendisk *disk)
static int sd_format_disk_name(char *prefix, int index, char *buf, int buflen)
static void sd_probe_async(void *data, async_cookie_t cookie)
static int sd_probe(struct device *dev)
static int sd_remove(struct device *dev)
static void scsi_disk_release(struct device *dev)
static int sd_start_stop_device(struct scsi_disk *sdkp, int start)
static void sd_shutdown(struct device *dev)
static int sd_suspend(struct device *dev, pm_message_t mesg)
static int sd_resume(struct device *dev)
static int __init init_sd(void)
static void __exit exit_sd(void)
module_init(init_sd);
module_exit(exit_sd);
static void sd_print_sense_hdr(struct scsi_disk *sdkp,
struct scsi_sense_hdr *sshdr)
static void sd_print_result(struct scsi_disk *sdkp, int result)
