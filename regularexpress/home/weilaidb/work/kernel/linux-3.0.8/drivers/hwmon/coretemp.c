#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRVNAME	"coretemp"
#define BASE_SYSFS_ATTR_NO	2
#define NUM_REAL_CORES		16
#define CORETEMP_NAME_LENGTH	17
#define MAX_ATTRS		5
#define MAX_CORE_DATA		(NUM_REAL_CORES + BASE_SYSFS_ATTR_NO)
#define TO_PHYS_ID(cpu)		cpu_data(cpu).phys_proc_id
#define TO_CORE_ID(cpu)		cpu_data(cpu).cpu_core_id
#define TO_ATTR_NO(cpu)		(TO_CORE_ID(cpu) + BASE_SYSFS_ATTR_NO)
#define for_each_sibling(i, cpu)	for_each_cpu(i, cpu_sibling_mask(cpu))
#define TO_PHYS_ID(cpu)		(cpu)
#define TO_CORE_ID(cpu)		(cpu)
#define TO_ATTR_NO(cpu)		(cpu)
#define for_each_sibling(i, cpu)	for (i = 0; false; )
struct temp_data ;
struct platform_data ;
struct pdev_entry ;
static LIST_HEAD(pdev_list);
static DEFINE_MUTEX(pdev_list_mutex);
static ssize_t show_name(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_label(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_crit_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_tjmax(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_ttarget(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp(struct device *dev,
struct device_attribute *devattr, char *buf)
static int adjust_tjmax(struct cpuinfo_x86 *c, u32 id, struct device *dev)
static int get_tjmax(struct cpuinfo_x86 *c, u32 id, struct device *dev)
static void __devinit get_ucode_rev_on_cpu(void *edx)
static int get_pkg_tjmax(unsigned int cpu, struct device *dev)
static int create_name_attr(struct platform_data *pdata, struct device *dev)
static int create_core_attrs(struct temp_data *tdata, struct device *dev,
int attr_no)
static void update_ttarget(__u8 cpu_model, struct temp_data *tdata,
struct device *dev)
static int __devinit chk_ucode_version(struct platform_device *pdev)
static struct platform_device *coretemp_get_pdev(unsigned int cpu)
static struct temp_data *init_temp_data(unsigned int cpu, int pkg_flag)
static int create_core_data(struct platform_data *pdata,
struct platform_device *pdev,
unsigned int cpu, int pkg_flag)
static void coretemp_add_core(unsigned int cpu, int pkg_flag)
static void coretemp_remove_core(struct platform_data *pdata,
struct device *dev, int indx)
static int __devinit coretemp_probe(struct platform_device *pdev)
static int __devexit coretemp_remove(struct platform_device *pdev)
static struct platform_driver coretemp_driver = ;
static int __cpuinit coretemp_device_add(unsigned int cpu)
static void coretemp_device_remove(unsigned int cpu)
static bool is_any_core_online(struct platform_data *pdata)
static void __cpuinit get_core_online(unsigned int cpu)
static void __cpuinit put_core_offline(unsigned int cpu)
static int __cpuinit coretemp_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block coretemp_cpu_notifier __refdata = ;
static int __init coretemp_init(void)
static void __exit coretemp_exit(void)
MODULE_AUTHOR("Rudolf Marek <r.marek@assembler.cz>");
MODULE_DESCRIPTION("Intel Core temperature monitor");
MODULE_LICENSE("GPL");
module_init(coretemp_init)
module_exit(coretemp_exit)
