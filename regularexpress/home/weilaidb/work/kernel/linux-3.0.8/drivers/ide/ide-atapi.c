#define DRV_NAME "ide-atapi"
#define PFX DRV_NAME ": "
#define debug_log(fmt, args...) \
printk(KERN_INFO "ide: " fmt, ## args)
#define debug_log(fmt, args...) do  while (0)
#define ATAPI_MIN_CDB_BYTES	12
static inline int dev_is_idecd(ide_drive_t *drive)
int ide_check_atapi_device(ide_drive_t *drive, const char *s)
EXPORT_SYMBOL_GPL(ide_check_atapi_device);
void ide_init_pc(struct ide_atapi_pc *pc)
EXPORT_SYMBOL_GPL(ide_init_pc);
int ide_queue_pc_tail(ide_drive_t *drive, struct gendisk *disk,
struct ide_atapi_pc *pc, void *buf, unsigned int bufflen)
EXPORT_SYMBOL_GPL(ide_queue_pc_tail);
int ide_do_test_unit_ready(ide_drive_t *drive, struct gendisk *disk)
EXPORT_SYMBOL_GPL(ide_do_test_unit_ready);
int ide_do_start_stop(ide_drive_t *drive, struct gendisk *disk, int start)
EXPORT_SYMBOL_GPL(ide_do_start_stop);
int ide_set_media_lock(ide_drive_t *drive, struct gendisk *disk, int on)
EXPORT_SYMBOL_GPL(ide_set_media_lock);
void ide_create_request_sense_cmd(ide_drive_t *drive, struct ide_atapi_pc *pc)
EXPORT_SYMBOL_GPL(ide_create_request_sense_cmd);
void ide_prep_sense(ide_drive_t *drive, struct request *rq)
EXPORT_SYMBOL_GPL(ide_prep_sense);
int ide_queue_sense_rq(ide_drive_t *drive, void *special)
EXPORT_SYMBOL_GPL(ide_queue_sense_rq);
void ide_retry_pc(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_retry_pc);
int ide_cd_expiry(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_cd_expiry);
int ide_cd_get_xferlen(struct request *rq)
EXPORT_SYMBOL_GPL(ide_cd_get_xferlen);
void ide_read_bcount_and_ireason(ide_drive_t *drive, u16 *bcount, u8 *ireason)
EXPORT_SYMBOL_GPL(ide_read_bcount_and_ireason);
int ide_check_ireason(ide_drive_t *drive, struct request *rq, int len,
int ireason, int rw)
EXPORT_SYMBOL_GPL(ide_check_ireason);
static ide_startstop_t ide_pc_intr(ide_drive_t *drive)
static void ide_init_packet_cmd(struct ide_cmd *cmd, u8 valid_tf,
u16 bcount, u8 dma)
static u8 ide_read_ireason(ide_drive_t *drive)
static u8 ide_wait_ireason(ide_drive_t *drive, u8 ireason)
static int ide_delayed_transfer_pc(ide_drive_t *drive)
static ide_startstop_t ide_transfer_pc(ide_drive_t *drive)
ide_startstop_t ide_issue_pc(ide_drive_t *drive, struct ide_cmd *cmd)
EXPORT_SYMBOL_GPL(ide_issue_pc);
