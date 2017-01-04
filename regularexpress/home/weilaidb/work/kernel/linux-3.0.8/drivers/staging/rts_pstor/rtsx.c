#define DRIVER_VERSION 		"v1.10"
MODULE_DESCRIPTION("Realtek PCI-Express card reader driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
static unsigned int delay_use = 1;
module_param(delay_use, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(delay_use, "seconds to delay before using a new device");
static int ss_en;
module_param(ss_en, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ss_en, "enable selective suspend");
static int ss_interval = 50;
module_param(ss_interval, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ss_interval, "Interval to enter ss state in seconds");
static int auto_delink_en;
module_param(auto_delink_en, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(auto_delink_en, "enable auto delink");
static unsigned char aspm_l0s_l1_en;
module_param(aspm_l0s_l1_en, byte, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(aspm_l0s_l1_en, "enable device aspm");
static int msi_en;
module_param(msi_en, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(msi_en, "enable msi");
static atomic_t total_threads = ATOMIC_INIT(0);
static DECLARE_COMPLETION(threads_gone);
static irqreturn_t rtsx_interrupt(int irq, void *dev_id);
static const char *host_info(struct Scsi_Host *host)
static int slave_alloc (struct scsi_device *sdev)
static int slave_configure(struct scsi_device *sdev)
#undef SPRINTF
#define SPRINTF(args...) \
do  while (0)
static int proc_info (struct Scsi_Host *host, char *buffer,
char **start, off_t offset, int length, int inout)
static int queuecommand_lck(struct scsi_cmnd *srb,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(queuecommand)
static int command_abort(struct scsi_cmnd *srb)
static int device_reset(struct scsi_cmnd *srb)
static int bus_reset(struct scsi_cmnd *srb)
static struct scsi_host_template rtsx_host_template = ;
static int rtsx_acquire_irq(struct rtsx_dev *dev)
int rtsx_read_pci_cfg_byte(u8 bus, u8 dev, u8 func, u8 offset, u8 *val)
static int rtsx_suspend(struct pci_dev *pci, pm_message_t state)
static int rtsx_resume(struct pci_dev *pci)
static void rtsx_shutdown(struct pci_dev *pci)
static int rtsx_control_thread(void *__dev)
static int rtsx_polling_thread(void *__dev)
static irqreturn_t rtsx_interrupt(int irq, void *dev_id)
static void rtsx_release_resources(struct rtsx_dev *dev)
static void quiesce_and_remove_host(struct rtsx_dev *dev)
static void release_everything(struct rtsx_dev *dev)
static int rtsx_scan_thread(void *__dev)
static void rtsx_init_options(struct rtsx_chip *chip)
static int __devinit rtsx_probe(struct pci_dev *pci, const struct pci_device_id *pci_id)
static void __devexit rtsx_remove(struct pci_dev *pci)
static struct pci_device_id rtsx_ids[] = ;
MODULE_DEVICE_TABLE(pci, rtsx_ids);
static struct pci_driver driver = ;
static int __init rtsx_init(void)
static void __exit rtsx_exit(void)
module_init(rtsx_init)
module_exit(rtsx_exit)
