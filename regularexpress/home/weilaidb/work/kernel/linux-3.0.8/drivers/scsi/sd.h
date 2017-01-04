#define _SCSI_DISK_H
#define SD_MAJORS	16
#define SD_MAX_DISKS	(((26 * 26) + 26 + 1) * 26)
#define SD_TIMEOUT		(30 * HZ)
#define SD_MOD_TIMEOUT		(75 * HZ)
#define SD_FLUSH_TIMEOUT	(60 * HZ)
#define SD_MAX_RETRIES		5
#define SD_PASSTHROUGH_RETRIES	1
#define SD_BUF_SIZE		512
#define SD_LAST_BUGGY_SECTORS	8
enum ;
enum ;
struct scsi_disk ;
#define to_scsi_disk(obj) container_of(obj,struct scsi_disk,dev)
static inline struct scsi_disk *scsi_disk(struct gendisk *disk)
#define sd_printk(prefix, sdsk, fmt, a...)				\
(sdsk)->disk ?							\
sdev_printk(prefix, (sdsk)->device, "[%s] " fmt,		\
(sdsk)->disk->disk_name, ##a) :			\
sdev_printk(prefix, (sdsk)->device, fmt, ##a)
enum sd_dif_target_protection_types ;
struct sd_dif_tuple ;
extern void sd_dif_config_host(struct scsi_disk *);
extern int sd_dif_prepare(struct request *rq, sector_t, unsigned int);
extern void sd_dif_complete(struct scsi_cmnd *, unsigned int);
static inline void sd_dif_config_host(struct scsi_disk *disk)
static inline int sd_dif_prepare(struct request *rq, sector_t s, unsigned int a)
static inline void sd_dif_complete(struct scsi_cmnd *cmd, unsigned int a)
