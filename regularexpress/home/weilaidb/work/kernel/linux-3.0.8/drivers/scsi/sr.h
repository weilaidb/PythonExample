#define _SR_H
#define MAX_RETRIES	3
#define SR_TIMEOUT	(30 * HZ)
struct scsi_device;
#define IOCTL_TIMEOUT 30*HZ
typedef struct scsi_cd  Scsi_CD;
int sr_do_ioctl(Scsi_CD *, struct packet_command *);
int sr_lock_door(struct cdrom_device_info *, int);
int sr_tray_move(struct cdrom_device_info *, int);
int sr_drive_status(struct cdrom_device_info *, int);
int sr_disk_status(struct cdrom_device_info *);
int sr_get_last_session(struct cdrom_device_info *, struct cdrom_multisession *);
int sr_get_mcn(struct cdrom_device_info *, struct cdrom_mcn *);
int sr_reset(struct cdrom_device_info *);
int sr_select_speed(struct cdrom_device_info *cdi, int speed);
int sr_audio_ioctl(struct cdrom_device_info *, unsigned int, void *);
int sr_is_xa(Scsi_CD *);
void sr_vendor_init(Scsi_CD *);
int sr_cd_check(struct cdrom_device_info *);
int sr_set_blocklength(Scsi_CD *, int blocklength);
