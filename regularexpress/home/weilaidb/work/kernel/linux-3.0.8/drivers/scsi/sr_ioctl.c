static int xa_test = 0;
module_param(xa_test, int, S_IRUGO | S_IWUSR);
#define SR_GFP_DMA(cd) (((cd)->device->host->unchecked_isa_dma) ? GFP_DMA : 0)
static int sr_read_tochdr(struct cdrom_device_info *cdi,
struct cdrom_tochdr *tochdr)
static int sr_read_tocentry(struct cdrom_device_info *cdi,
struct cdrom_tocentry *tocentry)
#define IOCTL_RETRIES 3
static int sr_fake_playtrkind(struct cdrom_device_info *cdi, struct cdrom_ti *ti)
static int sr_play_trkind(struct cdrom_device_info *cdi,
struct cdrom_ti *ti)
int sr_do_ioctl(Scsi_CD *cd, struct packet_command *cgc)
int sr_tray_move(struct cdrom_device_info *cdi, int pos)
int sr_lock_door(struct cdrom_device_info *cdi, int lock)
int sr_drive_status(struct cdrom_device_info *cdi, int slot)
int sr_disk_status(struct cdrom_device_info *cdi)
int sr_get_last_session(struct cdrom_device_info *cdi,
struct cdrom_multisession *ms_info)
int sr_get_mcn(struct cdrom_device_info *cdi, struct cdrom_mcn *mcn)
int sr_reset(struct cdrom_device_info *cdi)
int sr_select_speed(struct cdrom_device_info *cdi, int speed)
int sr_audio_ioctl(struct cdrom_device_info *cdi, unsigned int cmd, void *arg)
static int sr_read_cd(Scsi_CD *cd, unsigned char *dest, int lba, int format, int blksize)
static int sr_read_sector(Scsi_CD *cd, int lba, int blksize, unsigned char *dest)
int sr_is_xa(Scsi_CD *cd)
