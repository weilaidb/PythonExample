static enum ata_completion_errors sas_to_ata_err(struct task_status_struct *ts)
static void sas_ata_task_done(struct sas_task *task)
static unsigned int sas_ata_qc_issue(struct ata_queued_cmd *qc)
static bool sas_ata_qc_fill_rtf(struct ata_queued_cmd *qc)
static int sas_ata_hard_reset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static int sas_ata_soft_reset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static void sas_ata_post_internal(struct ata_queued_cmd *qc)
static struct ata_port_operations sas_sata_ops = ;
static struct ata_port_info sata_port_info = ;
int sas_ata_init_host_and_port(struct domain_device *found_dev,
struct scsi_target *starget)
void sas_ata_task_abort(struct sas_task *task)
static void sas_task_timedout(unsigned long _task)
static void sas_disc_task_done(struct sas_task *task)
#define SAS_DEV_TIMEOUT 10
static int sas_execute_task(struct sas_task *task, void *buffer, int size,
enum dma_data_direction dma_dir)
static void sas_get_ata_command_set(struct domain_device *dev)
static int sas_issue_ata_cmd(struct domain_device *dev, u8 command,
u8 features, void *buffer, int size,
enum dma_data_direction dma_dir)
#define ATA_IDENTIFY_DEV         0xEC
#define ATA_IDENTIFY_PACKET_DEV  0xA1
#define ATA_SET_FEATURES         0xEF
#define ATA_FEATURE_PUP_STBY_SPIN_UP 0x07
static int sas_discover_sata_dev(struct domain_device *dev)
static int sas_discover_sata_pm(struct domain_device *dev)
int sas_discover_sata(struct domain_device *dev)
void sas_ata_strategy_handler(struct Scsi_Host *shost)
int sas_ata_timed_out(struct scsi_cmnd *cmd, struct sas_task *task,
enum blk_eh_timer_return *rtn)
int sas_ata_eh(struct Scsi_Host *shost, struct list_head *work_q,
struct list_head *done_q)
