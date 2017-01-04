#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("Microcode Update Driver");
MODULE_AUTHOR("Tigran Aivazian <tigran@aivazian.fsnet.co.uk>");
MODULE_LICENSE("GPL");
#define MICROCODE_VERSION	"2.00"
static struct microcode_ops	*microcode_ops;
static DEFINE_MUTEX(microcode_mutex);
struct ucode_cpu_info		ucode_cpu_info[NR_CPUS];
EXPORT_SYMBOL_GPL(ucode_cpu_info);
struct cpu_info_ctx ;
static void collect_cpu_info_local(void *arg)
static int collect_cpu_info_on_target(int cpu, struct cpu_signature *cpu_sig)
static int collect_cpu_info(int cpu)
struct apply_microcode_ctx ;
static void apply_microcode_local(void *arg)
static int apply_microcode_on_target(int cpu)
static int do_microcode_update(const void __user *buf, size_t size)
static int microcode_open(struct inode *inode, struct file *file)
static ssize_t microcode_write(struct file *file, const char __user *buf,
size_t len, loff_t *ppos)
static const struct file_operations microcode_fops = ;
static struct miscdevice microcode_dev = ;
static int __init microcode_dev_init(void)
static void microcode_dev_exit(void)
MODULE_ALIAS_MISCDEV(MICROCODE_MINOR);
MODULE_ALIAS("devname:cpu/microcode");
#define microcode_dev_init()	0
#define microcode_dev_exit()	do  while (0)
static struct platform_device	*microcode_pdev;
static int reload_for_cpu(int cpu)
static ssize_t reload_store(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t size)
static ssize_t version_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t pf_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(reload, 0200, NULL, reload_store);
static SYSDEV_ATTR(version, 0400, version_show, NULL);
static SYSDEV_ATTR(processor_flags, 0400, pf_show, NULL);
static struct attribute *mc_default_attrs[] = ;
static struct attribute_group mc_attr_group = ;
static void microcode_fini_cpu(int cpu)
static enum ucode_state microcode_resume_cpu(int cpu)
static enum ucode_state microcode_init_cpu(int cpu)
static enum ucode_state microcode_update_cpu(int cpu)
static int mc_sysdev_add(struct sys_device *sys_dev)
static int mc_sysdev_remove(struct sys_device *sys_dev)
static struct sysdev_driver mc_sysdev_driver = ;
static void mc_bp_resume(void)
static struct syscore_ops mc_syscore_ops = ;
static __cpuinit int
mc_cpu_callback(struct notifier_block *nb, unsigned long action, void *hcpu)
static struct notifier_block __refdata mc_cpu_notifier = ;
static int __init microcode_init(void)
module_init(microcode_init);
static void __exit microcode_exit(void)
module_exit(microcode_exit);
