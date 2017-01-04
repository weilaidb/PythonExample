#define CMM_DRIVER_VERSION	"1.0.0"
#define CMM_DEFAULT_DELAY	1
#define CMM_HOTPLUG_DELAY	5
#define CMM_DEBUG			0
#define CMM_DISABLE		0
#define CMM_OOM_KB		1024
#define CMM_MIN_MEM_MB		256
#define KB2PAGES(_p)		((_p)>>(PAGE_SHIFT-10))
#define PAGES2KB(_p)		((_p)<<(PAGE_SHIFT-10))
#define CMM_MEM_HOTPLUG_PRI	1
#define CMM_MEM_ISOLATE_PRI	15
static unsigned int delay = CMM_DEFAULT_DELAY;
static unsigned int hotplug_delay = CMM_HOTPLUG_DELAY;
static unsigned int oom_kb = CMM_OOM_KB;
static unsigned int cmm_debug = CMM_DEBUG;
static unsigned int cmm_disabled = CMM_DISABLE;
static unsigned long min_mem_mb = CMM_MIN_MEM_MB;
static struct sys_device cmm_sysdev;
MODULE_AUTHOR("Brian King <brking@linux.vnet.ibm.com>");
MODULE_DESCRIPTION("IBM System p Collaborative Memory Manager");
MODULE_LICENSE("GPL");
MODULE_VERSION(CMM_DRIVER_VERSION);
module_param_named(delay, delay, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(delay, "Delay (in seconds) between polls to query hypervisor paging requests. "
"[Default=" __stringify(CMM_DEFAULT_DELAY) "]");
module_param_named(hotplug_delay, hotplug_delay, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(delay, "Delay (in seconds) after memory hotplug remove "
"before loaning resumes. "
"[Default=" __stringify(CMM_HOTPLUG_DELAY) "]");
module_param_named(oom_kb, oom_kb, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(oom_kb, "Amount of memory in kb to free on OOM. "
"[Default=" __stringify(CMM_OOM_KB) "]");
module_param_named(min_mem_mb, min_mem_mb, ulong, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(min_mem_mb, "Minimum amount of memory (in MB) to not balloon. "
"[Default=" __stringify(CMM_MIN_MEM_MB) "]");
module_param_named(debug, cmm_debug, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable module debugging logging. Set to 1 to enable. "
"[Default=" __stringify(CMM_DEBUG) "]");
#define CMM_NR_PAGES ((PAGE_SIZE - sizeof(void *) - sizeof(unsigned long)) / sizeof(unsigned long))
#define cmm_dbg(...) if (cmm_debug)
struct cmm_page_array ;
static unsigned long loaned_pages;
static unsigned long loaned_pages_target;
static unsigned long oom_freed_pages;
static struct cmm_page_array *cmm_page_list;
static DEFINE_SPINLOCK(cmm_lock);
static DEFINE_MUTEX(hotplug_mutex);
static int hotplug_occurred;
static struct task_struct *cmm_thread_ptr;
static long cmm_alloc_pages(long nr)
static long cmm_free_pages(long nr)
static int cmm_oom_notify(struct notifier_block *self,
unsigned long dummy, void *parm)
static void cmm_get_mpp(void)
static struct notifier_block cmm_oom_nb = ;
static int cmm_thread(void *dummy)
#define CMM_SHOW(name, format, args...)			\
static ssize_t show_##name(struct sys_device *dev,	\
struct sysdev_attribute *attr,	\
char *buf)			\
\
static SYSDEV_ATTR(name, S_IRUGO, show_##name, NULL)
CMM_SHOW(loaned_kb, "%lu\n", PAGES2KB(loaned_pages));
CMM_SHOW(loaned_target_kb, "%lu\n", PAGES2KB(loaned_pages_target));
static ssize_t show_oom_pages(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t store_oom_pages(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static SYSDEV_ATTR(oom_freed_kb, S_IWUSR| S_IRUGO,
show_oom_pages, store_oom_pages);
static struct sysdev_attribute *cmm_attrs[] = ;
static struct sysdev_class cmm_sysdev_class = ;
static int cmm_sysfs_register(struct sys_device *sysdev)
static void cmm_unregister_sysfs(struct sys_device *sysdev)
static int cmm_reboot_notifier(struct notifier_block *nb,
unsigned long action, void *unused)
static struct notifier_block cmm_reboot_nb = ;
static unsigned long cmm_count_pages(void *arg)
static int cmm_memory_isolate_cb(struct notifier_block *self,
unsigned long action, void *arg)
static struct notifier_block cmm_mem_isolate_nb = ;
static int cmm_mem_going_offline(void *arg)
static int cmm_memory_cb(struct notifier_block *self,
unsigned long action, void *arg)
static struct notifier_block cmm_mem_nb = ;
static int cmm_init(void)
static void cmm_exit(void)
static int cmm_set_disable(const char *val, struct kernel_param *kp)
module_param_call(disable, cmm_set_disable, param_get_uint,
&cmm_disabled, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(disable, "Disable CMM. Set to 1 to disable. "
"[Default=" __stringify(CMM_DISABLE) "]");
module_init(cmm_init);
module_exit(cmm_exit);
