int ide_cdrom_open_real(struct cdrom_device_info *cdi, int purpose)
void ide_cdrom_release_real(struct cdrom_device_info *cdi)
int ide_cdrom_drive_status(struct cdrom_device_info *cdi, int slot_nr)
unsigned int ide_cdrom_check_events_real(struct cdrom_device_info *cdi,
unsigned int clearing, int slot_nr)
static
int cdrom_eject(ide_drive_t *drive, int ejectflag,
struct request_sense *sense)
static
int ide_cd_lockdoor(ide_drive_t *drive, int lockflag,
struct request_sense *sense)
int ide_cdrom_tray_move(struct cdrom_device_info *cdi, int position)
int ide_cdrom_lock_door(struct cdrom_device_info *cdi, int lock)
int ide_cdrom_select_speed(struct cdrom_device_info *cdi, int speed)
int ide_cdrom_get_last_session(struct cdrom_device_info *cdi,
struct cdrom_multisession *ms_info)
int ide_cdrom_get_mcn(struct cdrom_device_info *cdi,
struct cdrom_mcn *mcn_info)
int ide_cdrom_reset(struct cdrom_device_info *cdi)
static int ide_cd_get_toc_entry(ide_drive_t *drive, int track,
struct atapi_toc_entry **ent)
static int ide_cd_fake_play_trkind(ide_drive_t *drive, void *arg)
static int ide_cd_read_tochdr(ide_drive_t *drive, void *arg)
static int ide_cd_read_tocentry(ide_drive_t *drive, void *arg)
int ide_cdrom_audio_ioctl(struct cdrom_device_info *cdi,
unsigned int cmd, void *arg)
int ide_cdrom_packet(struct cdrom_device_info *cdi,
struct packet_command *cgc)
