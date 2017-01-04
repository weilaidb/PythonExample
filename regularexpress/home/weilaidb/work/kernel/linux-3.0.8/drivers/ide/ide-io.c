int ide_end_rq(ide_drive_t *drive, struct request *rq, int error,
unsigned int nr_bytes)
EXPORT_SYMBOL_GPL(ide_end_rq);
void ide_complete_cmd(ide_drive_t *drive, struct ide_cmd *cmd, u8 stat, u8 err)
int ide_complete_rq(ide_drive_t *drive, int error, unsigned int nr_bytes)
EXPORT_SYMBOL(ide_complete_rq);
void ide_kill_rq(ide_drive_t *drive, struct request *rq)
static void ide_tf_set_specify_cmd(ide_drive_t *drive, struct ide_taskfile *tf)
static void ide_tf_set_restore_cmd(ide_drive_t *drive, struct ide_taskfile *tf)
static void ide_tf_set_setmult_cmd(ide_drive_t *drive, struct ide_taskfile *tf)
static ide_startstop_t do_special(ide_drive_t *drive)
void ide_map_sg(ide_drive_t *drive, struct ide_cmd *cmd)
EXPORT_SYMBOL_GPL(ide_map_sg);
void ide_init_sg_cmd(struct ide_cmd *cmd, unsigned int nr_bytes)
EXPORT_SYMBOL_GPL(ide_init_sg_cmd);
static ide_startstop_t execute_drive_cmd (ide_drive_t *drive,
struct request *rq)
static ide_startstop_t ide_special_rq(ide_drive_t *drive, struct request *rq)
static ide_startstop_t start_request (ide_drive_t *drive, struct request *rq)
void ide_stall_queue (ide_drive_t *drive, unsigned long timeout)
EXPORT_SYMBOL(ide_stall_queue);
static inline int ide_lock_port(ide_hwif_t *hwif)
static inline void ide_unlock_port(ide_hwif_t *hwif)
static inline int ide_lock_host(struct ide_host *host, ide_hwif_t *hwif)
static inline void ide_unlock_host(struct ide_host *host)
static void __ide_requeue_and_plug(struct request_queue *q, struct request *rq)
void ide_requeue_and_plug(ide_drive_t *drive, struct request *rq)
void do_ide_request(struct request_queue *q)
static int drive_is_ready(ide_drive_t *drive)
void ide_timer_expiry (unsigned long data)
static void unexpected_intr(int irq, ide_hwif_t *hwif)
irqreturn_t ide_intr (int irq, void *dev_id)
EXPORT_SYMBOL_GPL(ide_intr);
void ide_pad_transfer(ide_drive_t *drive, int write, int len)
EXPORT_SYMBOL_GPL(ide_pad_transfer);
