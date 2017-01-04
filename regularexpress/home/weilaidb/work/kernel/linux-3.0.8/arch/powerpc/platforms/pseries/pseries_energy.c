#define MODULE_VERS "1.0"
#define MODULE_NAME "pseries_energy"
static int sysfs_entries;
static int check_for_h_best_energy(void)
static u32 cpu_to_drc_index(int cpu)
static int drc_index_to_cpu(u32 drc_index)
#define FLAGS_MODE1	0x004E200000080E01
#define FLAGS_MODE2	0x004E200000080401
#define FLAGS_ACTIVATE  0x100
static ssize_t get_best_energy_list(char *page, int activate)
static ssize_t get_best_energy_data(struct sys_device *dev,
char *page, int activate)
static ssize_t cpu_activate_hint_list_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr, char *page)
static ssize_t cpu_deactivate_hint_list_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr, char *page)
static ssize_t percpu_activate_hint_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *page)
static ssize_t percpu_deactivate_hint_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *page)
struct sysdev_class_attribute attr_cpu_activate_hint_list =
_SYSDEV_CLASS_ATTR(pseries_activate_hint_list, 0444,
cpu_activate_hint_list_show, NULL);
struct sysdev_class_attribute attr_cpu_deactivate_hint_list =
_SYSDEV_CLASS_ATTR(pseries_deactivate_hint_list, 0444,
cpu_deactivate_hint_list_show, NULL);
struct sysdev_attribute attr_percpu_activate_hint =
_SYSDEV_ATTR(pseries_activate_hint, 0444,
percpu_activate_hint_show, NULL);
struct sysdev_attribute attr_percpu_deactivate_hint =
_SYSDEV_ATTR(pseries_deactivate_hint, 0444,
percpu_deactivate_hint_show, NULL);
static int __init pseries_energy_init(void)
static void __exit pseries_energy_cleanup(void)
module_init(pseries_energy_init);
module_exit(pseries_energy_cleanup);
MODULE_DESCRIPTION("Driver for pSeries platform energy management");
MODULE_AUTHOR("Vaidyanathan Srinivasan");
MODULE_LICENSE("GPL");
