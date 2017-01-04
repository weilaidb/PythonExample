static void sas_scsi_task_done(struct sas_task *task)
static struct sas_task *sas_create_task(struct scsi_cmnd *cmd,
struct domain_device *dev,
gfp_t gfp_flags)
int sas_queue_up(struct sas_task *task)
static int sas_queuecommand_lck(struct scsi_cmnd *cmd,
void (*scsi_done)(struct scsi_cmnd *))
__releases(host->host_lock)
__acquires(dev->sata_dev.ap->lock)
__releases(dev->sata_dev.ap->lock)
__acquires(host->host_lock)
DEF_SCSI_QCMD(sas_queuecommand)
static void sas_eh_finish_cmd(struct scsi_cmnd *cmd)
static void sas_scsi_clear_queue_lu(struct list_head *error_q, struct scsi_cmnd *my_cmd)
static void sas_scsi_clear_queue_I_T(struct list_head *error_q,
struct domain_device *dev)
static void sas_scsi_clear_queue_port(struct list_head *error_q,
struct asd_sas_port *port)
enum task_disposition ;
static enum task_disposition sas_scsi_find_task(struct sas_task *task)
static int sas_recover_lu(struct domain_device *dev, struct scsi_cmnd *cmd)
static int sas_recover_I_T(struct domain_device *dev)
struct sas_phy *sas_find_local_phy(struct domain_device *dev)
EXPORT_SYMBOL_GPL(sas_find_local_phy);
int sas_eh_device_reset_handler(struct scsi_cmnd *cmd)
int sas_eh_bus_reset_handler(struct scsi_cmnd *cmd)
static int try_to_reset_cmd_device(struct scsi_cmnd *cmd)
static int sas_eh_handle_sas_errors(struct Scsi_Host *shost,
struct list_head *work_q,
struct list_head *done_q)
void sas_scsi_recover_host(struct Scsi_Host *shost)
enum blk_eh_timer_return sas_scsi_timed_out(struct scsi_cmnd *cmd)
int sas_ioctl(struct scsi_device *sdev, int cmd, void __user *arg)
struct domain_device *sas_find_dev_by_rphy(struct sas_rphy *rphy)
static inline struct domain_device *sas_find_target(struct scsi_target *starget)
int sas_target_alloc(struct scsi_target *starget)
#define SAS_DEF_QD 32
#define SAS_MAX_QD 64
int sas_slave_configure(struct scsi_device *scsi_dev)
void sas_slave_destroy(struct scsi_device *scsi_dev)
int sas_change_queue_depth(struct scsi_device *scsi_dev, int new_depth,
int reason)
int sas_change_queue_type(struct scsi_device *scsi_dev, int qt)
int sas_bios_param(struct scsi_device *scsi_dev,
struct block_device *bdev,
sector_t capacity, int *hsc)
static void sas_queue(struct sas_ha_struct *sas_ha)
static int sas_queue_thread(void *_sas_ha)
int sas_init_queue(struct sas_ha_struct *sas_ha)
void sas_shutdown_queue(struct sas_ha_struct *sas_ha)
int __sas_task_abort(struct sas_task *task)
void sas_task_abort(struct sas_task *task)
int sas_slave_alloc(struct scsi_device *scsi_dev)
void sas_target_destroy(struct scsi_target *starget)
static void sas_parse_addr(u8 *sas_addr, const char *p)
#define SAS_STRING_ADDR_SIZE	16
int sas_request_addr(struct Scsi_Host *shost, u8 *addr)
EXPORT_SYMBOL_GPL(sas_request_addr);
EXPORT_SYMBOL_GPL(sas_queuecommand);
EXPORT_SYMBOL_GPL(sas_target_alloc);
EXPORT_SYMBOL_GPL(sas_slave_configure);
EXPORT_SYMBOL_GPL(sas_slave_destroy);
EXPORT_SYMBOL_GPL(sas_change_queue_depth);
EXPORT_SYMBOL_GPL(sas_change_queue_type);
EXPORT_SYMBOL_GPL(sas_bios_param);
EXPORT_SYMBOL_GPL(__sas_task_abort);
EXPORT_SYMBOL_GPL(sas_task_abort);
EXPORT_SYMBOL_GPL(sas_phy_reset);
EXPORT_SYMBOL_GPL(sas_phy_enable);
EXPORT_SYMBOL_GPL(sas_eh_device_reset_handler);
EXPORT_SYMBOL_GPL(sas_eh_bus_reset_handler);
EXPORT_SYMBOL_GPL(sas_slave_alloc);
EXPORT_SYMBOL_GPL(sas_target_destroy);
EXPORT_SYMBOL_GPL(sas_ioctl);
