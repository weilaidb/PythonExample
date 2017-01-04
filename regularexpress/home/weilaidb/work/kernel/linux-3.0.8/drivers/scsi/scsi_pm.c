static int scsi_dev_type_suspend(struct device *dev, pm_message_t msg)
static int scsi_dev_type_resume(struct device *dev)
static int scsi_bus_suspend_common(struct device *dev, pm_message_t msg)
static int scsi_bus_resume_common(struct device *dev)
static int scsi_bus_suspend(struct device *dev)
static int scsi_bus_freeze(struct device *dev)
static int scsi_bus_poweroff(struct device *dev)
#define scsi_bus_resume_common		NULL
#define scsi_bus_suspend		NULL
#define scsi_bus_freeze			NULL
#define scsi_bus_poweroff		NULL
static int scsi_runtime_suspend(struct device *dev)
static int scsi_runtime_resume(struct device *dev)
static int scsi_runtime_idle(struct device *dev)
int scsi_autopm_get_device(struct scsi_device *sdev)
EXPORT_SYMBOL_GPL(scsi_autopm_get_device);
void scsi_autopm_put_device(struct scsi_device *sdev)
EXPORT_SYMBOL_GPL(scsi_autopm_put_device);
void scsi_autopm_get_target(struct scsi_target *starget)
void scsi_autopm_put_target(struct scsi_target *starget)
int scsi_autopm_get_host(struct Scsi_Host *shost)
void scsi_autopm_put_host(struct Scsi_Host *shost)
#define scsi_runtime_suspend	NULL
#define scsi_runtime_resume	NULL
#define scsi_runtime_idle	NULL
const struct dev_pm_ops scsi_bus_pm_ops = ;
