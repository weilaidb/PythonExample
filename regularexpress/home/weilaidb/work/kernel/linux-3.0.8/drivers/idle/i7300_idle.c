#define I7300_IDLE_DRIVER_VERSION	"1.55"
#define I7300_PRINT			"i7300_idle:"
#define MAX_STOP_RETRIES	10
static int debug;
module_param_named(debug, debug, uint, 0644);
MODULE_PARM_DESC(debug, "Enable debug printks in this driver");
static int forceload;
module_param_named(forceload, forceload, uint, 0644);
MODULE_PARM_DESC(debug, "Enable driver testing on unvalidated i5000");
#define dprintk(fmt, arg...) \
do  while (0)
#define MAX_THROTTLE_LOW_LIMIT		168
static uint throttle_low_limit = 1;
module_param_named(throttle_low_limit, throttle_low_limit, uint, 0644);
MODULE_PARM_DESC(throttle_low_limit,
"Value for THRTLOWLM activation field "
"(0 = disable throttle, 1 = Max throttle, 168 = Min throttle)");
static unsigned long total_starts;
static unsigned long total_us;
static unsigned long past_skip;
static struct pci_dev *fbd_dev;
static spinlock_t i7300_idle_lock;
static int i7300_idle_active;
static u8 i7300_idle_thrtctl_saved;
static u8 i7300_idle_thrtlow_saved;
static u32 i7300_idle_mc_saved;
static cpumask_var_t idle_cpumask;
static ktime_t start_ktime;
static unsigned long avg_idle_us;
static struct dentry *debugfs_dir;
#define IOAT_CHANBASE(ioat_ctl, chan) (ioat_ctl + 0x80 + 0x80 * chan)
#define IOAT_DESC_SADDR_SNP_CTL (1UL << 1)
#define IOAT_DESC_DADDR_SNP_CTL (1UL << 2)
static struct pci_dev *ioat_dev;
static struct ioat_dma_descriptor *ioat_desc;
static unsigned long ioat_desc_phys;
static u8 *ioat_iomap;
static u8 *ioat_chanbase;
static int i7300_idle_ioat_start(void)
static void i7300_idle_ioat_stop(void)
static int __init i7300_idle_ioat_selftest(u8 *ctl,
struct ioat_dma_descriptor *desc, unsigned long desc_phys)
static struct device dummy_dma_dev = ;
static int __init i7300_idle_ioat_init(void)
static void __exit i7300_idle_ioat_exit(void)
#define DIMM_THRTLOW 0x64
#define DIMM_THRTCTL 0x67
#define DIMM_THRTCTL_THRMHUNT (1UL << 0)
#define DIMM_MC 0x40
#define DIMM_GTW_MODE (1UL << 17)
#define DIMM_GBLACT 0x60
#define DURATION_WEIGHT_PCT 55
#define DURATION_THRESHOLD_US 100
static int i7300_idle_thrt_save(void)
static void i7300_idle_thrt_restore(void)
static void i7300_idle_start(void)
static void i7300_idle_stop(void)
static int i7300_avg_duration_check(void)
static int i7300_idle_notifier(struct notifier_block *nb, unsigned long val,
void *data)
static struct notifier_block i7300_idle_nb = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
int stats_open_generic(struct inode *inode, struct file *fp)
static ssize_t stats_read_ul(struct file *fp, char __user *ubuf, size_t count,
loff_t *off)
static const struct file_operations idle_fops = ;
struct debugfs_file_info  debugfs_file_list[] = ;
static int __init i7300_idle_init(void)
static void __exit i7300_idle_exit(void)
module_init(i7300_idle_init);
module_exit(i7300_idle_exit);
MODULE_AUTHOR("Andy Henroid <andrew.d.henroid@intel.com>");
MODULE_DESCRIPTION("Intel Chipset DIMM Idle Power Saving Driver v"
I7300_IDLE_DRIVER_VERSION);
MODULE_LICENSE("GPL");
