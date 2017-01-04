#define NORMAL_RETRIES			5
#define IOCTL_NORMAL_TIMEOUT			(10 * HZ)
#define MAX_BUF PAGE_SIZE
static int ioctl_probe(struct Scsi_Host *host, void __user *buffer)
static int ioctl_internal_command(struct scsi_device *sdev, char *cmd,
int timeout, int retries)
int scsi_set_medium_removal(struct scsi_device *sdev, char state)
EXPORT_SYMBOL(scsi_set_medium_removal);
static int scsi_ioctl_get_pci(struct scsi_device *sdev, void __user *arg)
int scsi_ioctl(struct scsi_device *sdev, int cmd, void __user *arg)
EXPORT_SYMBOL(scsi_ioctl);
int scsi_nonblockable_ioctl(struct scsi_device *sdev, int cmd,
void __user *arg, int ndelay)
EXPORT_SYMBOL(scsi_nonblockable_ioctl);
