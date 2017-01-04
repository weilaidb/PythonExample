static struct class *cpuid_class;
struct cpuid_regs ;
static void cpuid_smp_cpuid(void *cmd_block)
static loff_t cpuid_seek(struct file *file, loff_t offset, int orig)
static ssize_t cpuid_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static int cpuid_open(struct inode *inode, struct file *file)
static const struct file_operations cpuid_fops = ;
static __cpuinit int cpuid_device_create(int cpu)
static void cpuid_device_destroy(int cpu)
static int __cpuinit cpuid_class_cpu_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
static struct notifier_block __refdata cpuid_class_cpu_notifier =
;
static char *cpuid_devnode(struct device *dev, mode_t *mode)
static int __init cpuid_init(void)
static void __exit cpuid_exit(void)
module_init(cpuid_init);
module_exit(cpuid_exit);
MODULE_AUTHOR("H. Peter Anvin <hpa@zytor.com>");
MODULE_DESCRIPTION("x86 generic CPUID driver");
MODULE_LICENSE("GPL");
