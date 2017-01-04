#define _IDE_CD_H
#define IDECD_DEBUG_LOG		0
#if IDECD_DEBUG_LOG
#define ide_debug_log(lvl, fmt, args...) __ide_debug_log(lvl, fmt, ## args)
#define ide_debug_log(lvl, fmt, args...) do  while (0)
#define ATAPI_WAIT_WRITE_BUSY	(10 * HZ)
#define SECTOR_BITS 		9
#define SECTOR_SIZE		(1 << SECTOR_BITS)
#define SECTORS_PER_FRAME	(CD_FRAMESIZE >> SECTOR_BITS)
#define SECTOR_BUFFER_SIZE	(CD_FRAMESIZE * 32)
#define ATAPI_CAPABILITIES_PAGE_SIZE		(8 + 20)
#define ATAPI_CAPABILITIES_PAGE_PAD_SIZE	4
struct atapi_msf ;
#define MAX_TRACKS 99
struct atapi_toc_header ;
struct atapi_toc_entry ;
struct atapi_toc ;
struct cdrom_info ;
void ide_cd_log_error(const char *, struct request *, struct request_sense *);
int ide_cd_queue_pc(ide_drive_t *, const unsigned char *, int, void *,
unsigned *, struct request_sense *, int, unsigned int);
int ide_cd_read_toc(ide_drive_t *, struct request_sense *);
int ide_cdrom_get_capabilities(ide_drive_t *, u8 *);
void ide_cdrom_update_speed(ide_drive_t *, u8 *);
int cdrom_check_status(ide_drive_t *, struct request_sense *);
int ide_cdrom_open_real(struct cdrom_device_info *, int);
void ide_cdrom_release_real(struct cdrom_device_info *);
int ide_cdrom_drive_status(struct cdrom_device_info *, int);
unsigned int ide_cdrom_check_events_real(struct cdrom_device_info *,
unsigned int clearing, int slot_nr);
int ide_cdrom_tray_move(struct cdrom_device_info *, int);
int ide_cdrom_lock_door(struct cdrom_device_info *, int);
int ide_cdrom_select_speed(struct cdrom_device_info *, int);
int ide_cdrom_get_last_session(struct cdrom_device_info *,
struct cdrom_multisession *);
int ide_cdrom_get_mcn(struct cdrom_device_info *, struct cdrom_mcn *);
int ide_cdrom_reset(struct cdrom_device_info *cdi);
int ide_cdrom_audio_ioctl(struct cdrom_device_info *, unsigned int, void *);
int ide_cdrom_packet(struct cdrom_device_info *, struct packet_command *);
