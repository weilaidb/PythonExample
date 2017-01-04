#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRVNAME	"via_cputemp"
enum ;
struct via_cputemp_data ;
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp(struct device *dev,
struct device_attribute *devattr, char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL,
SHOW_TEMP);
static SENSOR_DEVICE_ATTR(temp1_label, S_IRUGO, show_name, NULL, SHOW_LABEL);
static SENSOR_DEVICE_ATTR(name, S_IRUGO, show_name, NULL, SHOW_NAME);
static struct attribute *via_cputemp_attributes[] = ;
static const struct attribute_group via_cputemp_group = ;
static int __devinit via_cputemp_probe(struct platform_device *pdev)
static int __devexit via_cputemp_remove(struct platform_device *pdev)
static struct platform_driver via_cputemp_driver = ;
struct pdev_entry ;
static LIST_HEAD(pdev_list);
static DEFINE_MUTEX(pdev_list_mutex);
static int __cpuinit via_cputemp_device_add(unsigned int cpu)
static void __cpuinit via_cputemp_device_remove(unsigned int cpu)
static int __cpuinit via_cputemp_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block via_cputemp_cpu_notifier __refdata = ;
static int __init via_cputemp_init(void)
static void __exit via_cputemp_exit(void)
MODULE_AUTHOR("Harald Welte <HaraldWelte@viatech.com>");
MODULE_DESCRIPTION("VIA CPU temperature monitor");
MODULE_LICENSE("GPL");
module_init(via_cputemp_init)
module_exit(via_cputemp_exit)
