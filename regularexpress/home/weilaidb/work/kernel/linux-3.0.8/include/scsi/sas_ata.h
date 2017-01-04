#define _SAS_ATA_H_
static inline int dev_is_sata(struct domain_device *dev)
int sas_ata_init_host_and_port(struct domain_device *found_dev,
struct scsi_target *starget);
void sas_ata_task_abort(struct sas_task *task);
void sas_ata_strategy_handler(struct Scsi_Host *shost);
int sas_ata_timed_out(struct scsi_cmnd *cmd, struct sas_task *task,
enum blk_eh_timer_return *rtn);
int sas_ata_eh(struct Scsi_Host *shost, struct list_head *work_q,
struct list_head *done_q);
static inline int dev_is_sata(struct domain_device *dev)
static inline int sas_ata_init_host_and_port(struct domain_device *found_dev,
struct scsi_target *starget)
static inline void sas_ata_task_abort(struct sas_task *task)
static inline void sas_ata_strategy_handler(struct Scsi_Host *shost)
static inline int sas_ata_timed_out(struct scsi_cmnd *cmd,
struct sas_task *task,
enum blk_eh_timer_return *rtn)
static inline int sas_ata_eh(struct Scsi_Host *shost, struct list_head *work_q,
struct list_head *done_q)
