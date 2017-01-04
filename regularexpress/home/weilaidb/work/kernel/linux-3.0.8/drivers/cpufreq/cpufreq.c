static struct cpufreq_driver *cpufreq_driver;
static DEFINE_PER_CPU(struct cpufreq_policy *, cpufreq_cpu_data);
static DEFINE_PER_CPU(char[CPUFREQ_NAME_LEN], cpufreq_cpu_governor);
static DEFINE_SPINLOCK(cpufreq_driver_lock);
static DEFINE_PER_CPU(int, cpufreq_policy_cpu);
static DEFINE_PER_CPU(struct rw_semaphore, cpu_policy_rwsem);
#define lock_policy_rwsem(mode, cpu)					\
static int lock_policy_rwsem_##mode					\
(int cpu)								\
lock_policy_rwsem(read, cpu);
lock_policy_rwsem(write, cpu);
static void unlock_policy_rwsem_read(int cpu)
static void unlock_policy_rwsem_write(int cpu)
static int __cpufreq_governor(struct cpufreq_policy *policy,
unsigned int event);
static unsigned int __cpufreq_get(unsigned int cpu);
static void handle_update(struct work_struct *work);
static BLOCKING_NOTIFIER_HEAD(cpufreq_policy_notifier_list);
static struct srcu_notifier_head cpufreq_transition_notifier_list;
static bool init_cpufreq_transition_notifier_list_called;
static int __init init_cpufreq_transition_notifier_list(void)
pure_initcall(init_cpufreq_transition_notifier_list);
static LIST_HEAD(cpufreq_governor_list);
static DEFINE_MUTEX(cpufreq_governor_mutex);
struct cpufreq_policy *cpufreq_cpu_get(unsigned int cpu)
EXPORT_SYMBOL_GPL(cpufreq_cpu_get);
void cpufreq_cpu_put(struct cpufreq_policy *data)
EXPORT_SYMBOL_GPL(cpufreq_cpu_put);
static unsigned long l_p_j_ref;
static unsigned int  l_p_j_ref_freq;
static void adjust_jiffies(unsigned long val, struct cpufreq_freqs *ci)
static inline void adjust_jiffies(unsigned long val, struct cpufreq_freqs *ci)
void cpufreq_notify_transition(struct cpufreq_freqs *freqs, unsigned int state)
EXPORT_SYMBOL_GPL(cpufreq_notify_transition);
static struct cpufreq_governor *__find_governor(const char *str_governor)
static int cpufreq_parse_governor(char *str_governor, unsigned int *policy,
struct cpufreq_governor **governor)
#define show_one(file_name, object)			\
static ssize_t show_##file_name				\
(struct cpufreq_policy *policy, char *buf)		\
show_one(cpuinfo_min_freq, cpuinfo.min_freq);
show_one(cpuinfo_max_freq, cpuinfo.max_freq);
show_one(cpuinfo_transition_latency, cpuinfo.transition_latency);
show_one(scaling_min_freq, min);
show_one(scaling_max_freq, max);
show_one(scaling_cur_freq, cur);
static int __cpufreq_set_policy(struct cpufreq_policy *data,
struct cpufreq_policy *policy);
#define store_one(file_name, object)			\
static ssize_t store_##file_name					\
(struct cpufreq_policy *policy, const char *buf, size_t count)		\
store_one(scaling_min_freq, min);
store_one(scaling_max_freq, max);
static ssize_t show_cpuinfo_cur_freq(struct cpufreq_policy *policy,
char *buf)
static ssize_t show_scaling_governor(struct cpufreq_policy *policy, char *buf)
static ssize_t store_scaling_governor(struct cpufreq_policy *policy,
const char *buf, size_t count)
static ssize_t show_scaling_driver(struct cpufreq_policy *policy, char *buf)
static ssize_t show_scaling_available_governors(struct cpufreq_policy *policy,
char *buf)
static ssize_t show_cpus(const struct cpumask *mask, char *buf)
static ssize_t show_related_cpus(struct cpufreq_policy *policy, char *buf)
static ssize_t show_affected_cpus(struct cpufreq_policy *policy, char *buf)
static ssize_t store_scaling_setspeed(struct cpufreq_policy *policy,
const char *buf, size_t count)
static ssize_t show_scaling_setspeed(struct cpufreq_policy *policy, char *buf)
static ssize_t show_bios_limit(struct cpufreq_policy *policy, char *buf)
cpufreq_freq_attr_ro_perm(cpuinfo_cur_freq, 0400);
cpufreq_freq_attr_ro(cpuinfo_min_freq);
cpufreq_freq_attr_ro(cpuinfo_max_freq);
cpufreq_freq_attr_ro(cpuinfo_transition_latency);
cpufreq_freq_attr_ro(scaling_available_governors);
cpufreq_freq_attr_ro(scaling_driver);
cpufreq_freq_attr_ro(scaling_cur_freq);
cpufreq_freq_attr_ro(bios_limit);
cpufreq_freq_attr_ro(related_cpus);
cpufreq_freq_attr_ro(affected_cpus);
cpufreq_freq_attr_rw(scaling_min_freq);
cpufreq_freq_attr_rw(scaling_max_freq);
cpufreq_freq_attr_rw(scaling_governor);
cpufreq_freq_attr_rw(scaling_setspeed);
static struct attribute *default_attrs[] = ;
struct kobject *cpufreq_global_kobject;
EXPORT_SYMBOL(cpufreq_global_kobject);
#define to_policy(k) container_of(k, struct cpufreq_policy, kobj)
#define to_attr(a) container_of(a, struct freq_attr, attr)
static ssize_t show(struct kobject *kobj, struct attribute *attr, char *buf)
static ssize_t store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static void cpufreq_sysfs_release(struct kobject *kobj)
static const struct sysfs_ops sysfs_ops = ;
static struct kobj_type ktype_cpufreq = ;
static int cpufreq_add_dev_policy(unsigned int cpu,
struct cpufreq_policy *policy,
struct sys_device *sys_dev)
static int cpufreq_add_dev_symlink(unsigned int cpu,
struct cpufreq_policy *policy)
static int cpufreq_add_dev_interface(unsigned int cpu,
struct cpufreq_policy *policy,
struct sys_device *sys_dev)
static int cpufreq_add_dev(struct sys_device *sys_dev)
static int __cpufreq_remove_dev(struct sys_device *sys_dev)
static int cpufreq_remove_dev(struct sys_device *sys_dev)
static void handle_update(struct work_struct *work)
static void cpufreq_out_of_sync(unsigned int cpu, unsigned int old_freq,
unsigned int new_freq)
unsigned int cpufreq_quick_get(unsigned int cpu)
EXPORT_SYMBOL(cpufreq_quick_get);
static unsigned int __cpufreq_get(unsigned int cpu)
unsigned int cpufreq_get(unsigned int cpu)
EXPORT_SYMBOL(cpufreq_get);
static struct sysdev_driver cpufreq_sysdev_driver = ;
static int cpufreq_bp_suspend(void)
static void cpufreq_bp_resume(void)
static struct syscore_ops cpufreq_syscore_ops = ;
int cpufreq_register_notifier(struct notifier_block *nb, unsigned int list)
EXPORT_SYMBOL(cpufreq_register_notifier);
int cpufreq_unregister_notifier(struct notifier_block *nb, unsigned int list)
EXPORT_SYMBOL(cpufreq_unregister_notifier);
int __cpufreq_driver_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
EXPORT_SYMBOL_GPL(__cpufreq_driver_target);
int cpufreq_driver_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
EXPORT_SYMBOL_GPL(cpufreq_driver_target);
int __cpufreq_driver_getavg(struct cpufreq_policy *policy, unsigned int cpu)
EXPORT_SYMBOL_GPL(__cpufreq_driver_getavg);
static int __cpufreq_governor(struct cpufreq_policy *policy,
unsigned int event)
int cpufreq_register_governor(struct cpufreq_governor *governor)
EXPORT_SYMBOL_GPL(cpufreq_register_governor);
void cpufreq_unregister_governor(struct cpufreq_governor *governor)
EXPORT_SYMBOL_GPL(cpufreq_unregister_governor);
int cpufreq_get_policy(struct cpufreq_policy *policy, unsigned int cpu)
EXPORT_SYMBOL(cpufreq_get_policy);
static int __cpufreq_set_policy(struct cpufreq_policy *data,
struct cpufreq_policy *policy)
int cpufreq_update_policy(unsigned int cpu)
EXPORT_SYMBOL(cpufreq_update_policy);
static int __cpuinit cpufreq_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block __refdata cpufreq_cpu_notifier = ;
int cpufreq_register_driver(struct cpufreq_driver *driver_data)
EXPORT_SYMBOL_GPL(cpufreq_register_driver);
int cpufreq_unregister_driver(struct cpufreq_driver *driver)
EXPORT_SYMBOL_GPL(cpufreq_unregister_driver);
static int __init cpufreq_core_init(void)
core_initcall(cpufreq_core_init);
