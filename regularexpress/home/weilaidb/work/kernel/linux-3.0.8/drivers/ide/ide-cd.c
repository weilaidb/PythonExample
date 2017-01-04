#define DRV_NAME "ide-cd"
#define PFX DRV_NAME ": "
#define IDECD_VERSION "5.00"
static DEFINE_MUTEX(ide_cd_mutex);
static DEFINE_MUTEX(idecd_ref_mutex);
static void ide_cd_release(struct device *);
static struct cdrom_info *ide_cd_get(struct gendisk *disk)
static void ide_cd_put(struct cdrom_info *cd)
static void cdrom_saw_media_change(ide_drive_t *drive)
static int cdrom_log_sense(ide_drive_t *drive, struct request *rq)
static void cdrom_analyze_sense_data(ide_drive_t *drive,
struct request *failed_command)
static void ide_cd_complete_failed_rq(ide_drive_t *drive, struct request *rq)
static int ide_cd_breathe(ide_drive_t *drive, struct request *rq)
static int cdrom_decode_status(ide_drive_t *drive, u8 stat)
static void ide_cd_request_sense_fixup(ide_drive_t *drive, struct ide_cmd *cmd)
int ide_cd_queue_pc(ide_drive_t *drive, const unsigned char *cmd,
int write, void *buffer, unsigned *bufflen,
struct request_sense *sense, int timeout,
unsigned int cmd_flags)
static bool ide_cd_error_cmd(ide_drive_t *drive, struct ide_cmd *cmd)
static ide_startstop_t cdrom_newpc_intr(ide_drive_t *drive)
static ide_startstop_t cdrom_start_rw(ide_drive_t *drive, struct request *rq)
static void cdrom_do_block_pc(ide_drive_t *drive, struct request *rq)
static ide_startstop_t ide_cd_do_request(ide_drive_t *drive, struct request *rq,
sector_t block)
static void msf_from_bcd(struct atapi_msf *msf)
int cdrom_check_status(ide_drive_t *drive, struct request_sense *sense)
static int cdrom_read_capacity(ide_drive_t *drive, unsigned long *capacity,
unsigned long *sectors_per_frame,
struct request_sense *sense)
static int cdrom_read_tocentry(ide_drive_t *drive, int trackno, int msf_flag,
int format, char *buf, int buflen,
struct request_sense *sense)
int ide_cd_read_toc(ide_drive_t *drive, struct request_sense *sense)
int ide_cdrom_get_capabilities(ide_drive_t *drive, u8 *buf)
void ide_cdrom_update_speed(ide_drive_t *drive, u8 *buf)
#define IDE_CD_CAPABILITIES \
(CDC_CLOSE_TRAY | CDC_OPEN_TRAY | CDC_LOCK | CDC_SELECT_SPEED | \
CDC_SELECT_DISC | CDC_MULTI_SESSION | CDC_MCN | CDC_MEDIA_CHANGED | \
CDC_PLAY_AUDIO | CDC_RESET | CDC_DRIVE_STATUS | CDC_CD_R | \
CDC_CD_RW | CDC_DVD | CDC_DVD_R | CDC_DVD_RAM | CDC_GENERIC_PACKET | \
CDC_MO_DRIVE | CDC_MRW | CDC_MRW_W | CDC_RAM)
static struct cdrom_device_ops ide_cdrom_dops = ;
static int ide_cdrom_register(ide_drive_t *drive, int nslots)
static int ide_cdrom_probe_capabilities(ide_drive_t *drive)
static int ide_cdrom_prep_fs(struct request_queue *q, struct request *rq)
static int ide_cdrom_prep_pc(struct request *rq)
static int ide_cdrom_prep_fn(struct request_queue *q, struct request *rq)
struct cd_list_entry ;
static sector_t ide_cdrom_capacity(ide_drive_t *drive)
static int idecd_capacity_proc_show(struct seq_file *m, void *v)
static int idecd_capacity_proc_open(struct inode *inode, struct file *file)
static const struct file_operations idecd_capacity_proc_fops = ;
static ide_proc_entry_t idecd_proc[] = ;
static ide_proc_entry_t *ide_cd_proc_entries(ide_drive_t *drive)
static const struct ide_proc_devset *ide_cd_proc_devsets(ide_drive_t *drive)
static const struct cd_list_entry ide_cd_quirks_list[] = ;
static unsigned int ide_cd_flags(u16 *id)
static int ide_cdrom_setup(ide_drive_t *drive)
static void ide_cd_remove(ide_drive_t *drive)
static void ide_cd_release(struct device *dev)
static int ide_cd_probe(ide_drive_t *);
static struct ide_driver ide_cdrom_driver = ;
static int idecd_open(struct block_device *bdev, fmode_t mode)
static int idecd_release(struct gendisk *disk, fmode_t mode)
static int idecd_set_spindown(struct cdrom_device_info *cdi, unsigned long arg)
static int idecd_get_spindown(struct cdrom_device_info *cdi, unsigned long arg)
static int idecd_locked_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int idecd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static unsigned int idecd_check_events(struct gendisk *disk,
unsigned int clearing)
static int idecd_revalidate_disk(struct gendisk *disk)
static const struct block_device_operations idecd_ops = ;
static unsigned long debug_mask;
module_param(debug_mask, ulong, 0644);
MODULE_DESCRIPTION("ATAPI CD-ROM Driver");
static int ide_cd_probe(ide_drive_t *drive)
static void __exit ide_cdrom_exit(void)
static int __init ide_cdrom_init(void)
MODULE_ALIAS("ide:*m-cdrom*");
MODULE_ALIAS("ide-cd");
module_init(ide_cdrom_init);
module_exit(ide_cdrom_exit);
MODULE_LICENSE("GPL");
