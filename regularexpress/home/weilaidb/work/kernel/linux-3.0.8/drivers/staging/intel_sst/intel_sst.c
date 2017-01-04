#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Vinod Koul <vinod.koul@intel.com>");
MODULE_AUTHOR("Harsha Priya <priya.harsha@intel.com>");
MODULE_AUTHOR("Dharageswari R <dharageswari.r@intel.com>");
MODULE_AUTHOR("KP Jeeja <jeeja.kp@intel.com>");
MODULE_DESCRIPTION("Intel (R) SST(R) Audio Engine Driver");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(SST_DRIVER_VERSION);
struct intel_sst_drv *sst_drv_ctx;
static struct mutex drv_ctx_lock;
struct class *sst_class;
static const struct file_operations intel_sst_fops = ;
static const struct file_operations intel_sst_fops_cntrl = ;
static struct miscdevice lpe_dev = ;
static struct miscdevice lpe_ctrl = ;
static irqreturn_t intel_sst_interrupt(int irq, void *context)
static int __devinit intel_sst_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit intel_sst_remove(struct pci_dev *pci)
void sst_save_dsp_context(void)
int intel_sst_suspend(struct pci_dev *pci, pm_message_t state)
int intel_sst_resume(struct pci_dev *pci)
static int intel_sst_runtime_suspend(struct device *dev)
static int intel_sst_runtime_resume(struct device *dev)
static int intel_sst_runtime_idle(struct device *dev)
static const struct dev_pm_ops intel_sst_pm = ;
static struct pci_device_id intel_sst_ids[] = ;
MODULE_DEVICE_TABLE(pci, intel_sst_ids);
static struct pci_driver driver = ;
static int __init intel_sst_init(void)
static void __exit intel_sst_exit(void)
module_init(intel_sst_init);
module_exit(intel_sst_exit);
