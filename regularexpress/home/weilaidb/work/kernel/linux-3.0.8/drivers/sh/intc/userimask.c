#define pr_fmt(fmt) "intc: " fmt
static void __iomem *uimask;
static ssize_t
show_intc_userimask(struct sysdev_class *cls,
struct sysdev_class_attribute *attr, char *buf)
static ssize_t
store_intc_userimask(struct sysdev_class *cls,
struct sysdev_class_attribute *attr,
const char *buf, size_t count)
static SYSDEV_CLASS_ATTR(userimask, S_IRUSR | S_IWUSR,
show_intc_userimask, store_intc_userimask);
static int __init userimask_sysdev_init(void)
late_initcall(userimask_sysdev_init);
int register_intc_userimask(unsigned long addr)
