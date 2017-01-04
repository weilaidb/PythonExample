MODULE_DESCRIPTION("SCSI cdrom (sr) driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_BLOCKDEV_MAJOR(SCSI_CDROM_MAJOR);
MODULE_ALIAS_SCSI_DEVICE(TYPE_ROM);
MODULE_ALIAS_SCSI_DEVICE(TYPE_WORM);
#define SR_DISKS	256
#define SR_CAPABILITIES \
(CDC_CLOSE_TRAY|CDC_OPEN_TRAY|CDC_LOCK|CDC_SELECT_SPEED| \
CDC_SELECT_DISC|CDC_MULTI_SESSION|CDC_MCN|CDC_MEDIA_CHANGED| \
CDC_PLAY_AUDIO|CDC_RESET|CDC_DRIVE_STATUS| \
CDC_CD_R|CDC_CD_RW|CDC_DVD|CDC_DVD_R|CDC_DVD_RAM|CDC_GENERIC_PACKET| \
CDC_MRW|CDC_MRW_W|CDC_RAM)
static DEFINE_MUTEX(sr_mutex);
static int sr_probe(struct device *);
static int sr_remove(struct device *);
static int sr_done(struct scsi_cmnd *);
static struct scsi_driver sr_template = ;
static unsigned long sr_index_bits[SR_DISKS / BITS_PER_LONG];
static DEFINE_SPINLOCK(sr_index_lock);
static DEFINE_MUTEX(sr_ref_mutex);
static int sr_open(struct cdrom_device_info *, int);
static void sr_release(struct cdrom_device_info *);
static void get_sectorsize(struct scsi_cd *);
static void get_capabilities(struct scsi_cd *);
static unsigned int sr_check_events(struct cdrom_device_info *cdi,
unsigned int clearing, int slot);
static int sr_packet(struct cdrom_device_info *, struct packet_command *);
static struct cdrom_device_ops sr_dops = ;
static void sr_kref_release(struct kref *kref);
static inline struct scsi_cd *scsi_cd(struct gendisk *disk)
static inline struct scsi_cd *scsi_cd_get(struct gendisk *disk)
static void scsi_cd_put(struct scsi_cd *cd)
static unsigned int sr_get_events(struct scsi_device *sdev)
static unsigned int sr_check_events(struct cdrom_device_info *cdi,
unsigned int clearing, int slot)
static int sr_done(struct scsi_cmnd *SCpnt)
static int sr_prep_fn(struct request_queue *q, struct request *rq)
static int sr_block_open(struct block_device *bdev, fmode_t mode)
static int sr_block_release(struct gendisk *disk, fmode_t mode)
static int sr_block_ioctl(struct block_device *bdev, fmode_t mode, unsigned cmd,
unsigned long arg)
static unsigned int sr_block_check_events(struct gendisk *disk,
unsigned int clearing)
static int sr_block_revalidate_disk(struct gendisk *disk)
static const struct block_device_operations sr_bdops =
;
static int sr_open(struct cdrom_device_info *cdi, int purpose)
static void sr_release(struct cdrom_device_info *cdi)
static int sr_probe(struct device *dev)
static void get_sectorsize(struct scsi_cd *cd)
static void get_capabilities(struct scsi_cd *cd)
static int sr_packet(struct cdrom_device_info *cdi,
struct packet_command *cgc)
static void sr_kref_release(struct kref *kref)
static int sr_remove(struct device *dev)
static int __init init_sr(void)
static void __exit exit_sr(void)
module_init(init_sr);
module_exit(exit_sr);
MODULE_LICENSE("GPL");
