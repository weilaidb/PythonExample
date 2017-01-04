#define ATA_SCSI_RBUF_SIZE	4096
static DEFINE_SPINLOCK(ata_scsi_rbuf_lock);
static u8 ata_scsi_rbuf[ATA_SCSI_RBUF_SIZE];
typedef unsigned int (*ata_xlat_func_t)(struct ata_queued_cmd *qc);
static struct ata_device *__ata_scsi_find_dev(struct ata_port *ap,
const struct scsi_device *scsidev);
static struct ata_device *ata_scsi_find_dev(struct ata_port *ap,
const struct scsi_device *scsidev);
#define RW_RECOVERY_MPAGE 0x1
#define RW_RECOVERY_MPAGE_LEN 12
#define CACHE_MPAGE 0x8
#define CACHE_MPAGE_LEN 20
#define CONTROL_MPAGE 0xa
#define CONTROL_MPAGE_LEN 12
#define ALL_MPAGES 0x3f
#define ALL_SUB_MPAGES 0xff
static const u8 def_rw_recovery_mpage[RW_RECOVERY_MPAGE_LEN] = ;
static const u8 def_cache_mpage[CACHE_MPAGE_LEN] = ;
static const u8 def_control_mpage[CONTROL_MPAGE_LEN] = ;
static const char *ata_lpm_policy_names[] = ;
static ssize_t ata_scsi_lpm_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t ata_scsi_lpm_show(struct device *dev,
struct device_attribute *attr, char *buf)
DEVICE_ATTR(link_power_management_policy, S_IRUGO | S_IWUSR,
ata_scsi_lpm_show, ata_scsi_lpm_store);
EXPORT_SYMBOL_GPL(dev_attr_link_power_management_policy);
static ssize_t ata_scsi_park_show(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t ata_scsi_park_store(struct device *device,
struct device_attribute *attr,
const char *buf, size_t len)
DEVICE_ATTR(unload_heads, S_IRUGO | S_IWUSR,
ata_scsi_park_show, ata_scsi_park_store);
EXPORT_SYMBOL_GPL(dev_attr_unload_heads);
static void ata_scsi_set_sense(struct scsi_cmnd *cmd, u8 sk, u8 asc, u8 ascq)
static ssize_t
ata_scsi_em_message_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
ata_scsi_em_message_show(struct device *dev, struct device_attribute *attr,
char *buf)
DEVICE_ATTR(em_message, S_IRUGO | S_IWUSR,
ata_scsi_em_message_show, ata_scsi_em_message_store);
EXPORT_SYMBOL_GPL(dev_attr_em_message);
static ssize_t
ata_scsi_em_message_type_show(struct device *dev, struct device_attribute *attr,
char *buf)
DEVICE_ATTR(em_message_type, S_IRUGO,
ata_scsi_em_message_type_show, NULL);
EXPORT_SYMBOL_GPL(dev_attr_em_message_type);
static ssize_t
ata_scsi_activity_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
ata_scsi_activity_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
DEVICE_ATTR(sw_activity, S_IWUSR | S_IRUGO, ata_scsi_activity_show,
ata_scsi_activity_store);
EXPORT_SYMBOL_GPL(dev_attr_sw_activity);
struct device_attribute *ata_common_sdev_attrs[] = ;
EXPORT_SYMBOL_GPL(ata_common_sdev_attrs);
static void ata_scsi_invalid_field(struct scsi_cmnd *cmd)
int ata_std_bios_param(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[])
void ata_scsi_unlock_native_capacity(struct scsi_device *sdev)
static int ata_get_identity(struct ata_port *ap, struct scsi_device *sdev,
void __user *arg)
int ata_cmd_ioctl(struct scsi_device *scsidev, void __user *arg)
int ata_task_ioctl(struct scsi_device *scsidev, void __user *arg)
static int ata_ioc32(struct ata_port *ap)
int ata_sas_scsi_ioctl(struct ata_port *ap, struct scsi_device *scsidev,
int cmd, void __user *arg)
EXPORT_SYMBOL_GPL(ata_sas_scsi_ioctl);
int ata_scsi_ioctl(struct scsi_device *scsidev, int cmd, void __user *arg)
EXPORT_SYMBOL_GPL(ata_scsi_ioctl);
static struct ata_queued_cmd *ata_scsi_qc_new(struct ata_device *dev,
struct scsi_cmnd *cmd)
static void ata_qc_set_pc_nbytes(struct ata_queued_cmd *qc)
static void ata_dump_status(unsigned id, struct ata_taskfile *tf)
}
static void ata_to_sense_error(unsigned id, u8 drv_stat, u8 drv_err, u8 *sk,
u8 *asc, u8 *ascq, int verbose)
static void ata_gen_passthru_sense(struct ata_queued_cmd *qc)
static void ata_gen_ata_sense(struct ata_queued_cmd *qc)
static void ata_scsi_sdev_config(struct scsi_device *sdev)
static int atapi_drain_needed(struct request *rq)
static int ata_scsi_dev_config(struct scsi_device *sdev,
struct ata_device *dev)
int ata_scsi_slave_config(struct scsi_device *sdev)
void ata_scsi_slave_destroy(struct scsi_device *sdev)
int ata_scsi_change_queue_depth(struct scsi_device *sdev, int queue_depth,
int reason)
static unsigned int ata_scsi_start_stop_xlat(struct ata_queued_cmd *qc)
static unsigned int ata_scsi_flush_xlat(struct ata_queued_cmd *qc)
static void scsi_6_lba_len(const u8 *cdb, u64 *plba, u32 *plen)
static void scsi_10_lba_len(const u8 *cdb, u64 *plba, u32 *plen)
static void scsi_16_lba_len(const u8 *cdb, u64 *plba, u32 *plen)
static unsigned int ata_scsi_verify_xlat(struct ata_queued_cmd *qc)
static unsigned int ata_scsi_rw_xlat(struct ata_queued_cmd *qc)
static void ata_scsi_qc_complete(struct ata_queued_cmd *qc)
static int ata_scsi_translate(struct ata_device *dev, struct scsi_cmnd *cmd,
ata_xlat_func_t xlat_func)
static void *ata_scsi_rbuf_get(struct scsi_cmnd *cmd, bool copy_in,
unsigned long *flags)
static inline void ata_scsi_rbuf_put(struct scsi_cmnd *cmd, bool copy_out,
unsigned long *flags)
static void ata_scsi_rbuf_fill(struct ata_scsi_args *args,
unsigned int (*actor)(struct ata_scsi_args *args, u8 *rbuf))
static unsigned int ata_scsiop_inq_std(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_inq_00(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_inq_80(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_inq_83(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_inq_89(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_inq_b0(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_inq_b1(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_inq_b2(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_noop(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_msense_caching(u16 *id, u8 *buf)
static unsigned int ata_msense_ctl_mode(u8 *buf)
static unsigned int ata_msense_rw_recovery(u8 *buf)
static int ata_dev_supports_fua(u16 *id)
static unsigned int ata_scsiop_mode_sense(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_read_cap(struct ata_scsi_args *args, u8 *rbuf)
static unsigned int ata_scsiop_report_luns(struct ata_scsi_args *args, u8 *rbuf)
static void atapi_sense_complete(struct ata_queued_cmd *qc)
static inline int ata_pio_use_silly(struct ata_port *ap)
static void atapi_request_sense(struct ata_queued_cmd *qc)
static void atapi_qc_complete(struct ata_queued_cmd *qc)
static unsigned int atapi_xlat(struct ata_queued_cmd *qc)
static struct ata_device *ata_find_dev(struct ata_port *ap, int devno)
static struct ata_device *__ata_scsi_find_dev(struct ata_port *ap,
const struct scsi_device *scsidev)
static struct ata_device *
ata_scsi_find_dev(struct ata_port *ap, const struct scsi_device *scsidev)
static u8
ata_scsi_map_proto(u8 byte1)
static unsigned int ata_scsi_pass_thru(struct ata_queued_cmd *qc)
static unsigned int ata_scsi_write_same_xlat(struct ata_queued_cmd *qc)
static inline ata_xlat_func_t ata_get_xlat_func(struct ata_device *dev, u8 cmd)
static inline void ata_scsi_dump_cdb(struct ata_port *ap,
struct scsi_cmnd *cmd)
static inline int __ata_scsi_queuecmd(struct scsi_cmnd *scmd,
struct ata_device *dev)
int ata_scsi_queuecmd(struct Scsi_Host *shost, struct scsi_cmnd *cmd)
void ata_scsi_simulate(struct ata_device *dev, struct scsi_cmnd *cmd)
int ata_scsi_add_hosts(struct ata_host *host, struct scsi_host_template *sht)
void ata_scsi_scan_host(struct ata_port *ap, int sync)
int ata_scsi_offline_dev(struct ata_device *dev)
static void ata_scsi_remove_dev(struct ata_device *dev)
static void ata_scsi_handle_link_detach(struct ata_link *link)
void ata_scsi_media_change_notify(struct ata_device *dev)
void ata_scsi_hotplug(struct work_struct *work)
int ata_scsi_user_scan(struct Scsi_Host *shost, unsigned int channel,
unsigned int id, unsigned int lun)
void ata_scsi_dev_rescan(struct work_struct *work)
struct ata_port *ata_sas_port_alloc(struct ata_host *host,
struct ata_port_info *port_info,
struct Scsi_Host *shost)
EXPORT_SYMBOL_GPL(ata_sas_port_alloc);
int ata_sas_port_start(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sas_port_start);
void ata_sas_port_stop(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sas_port_stop);
int ata_sas_port_init(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sas_port_init);
void ata_sas_port_destroy(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sas_port_destroy);
int ata_sas_slave_configure(struct scsi_device *sdev, struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sas_slave_configure);
int ata_sas_queuecmd(struct scsi_cmnd *cmd, struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sas_queuecmd);
