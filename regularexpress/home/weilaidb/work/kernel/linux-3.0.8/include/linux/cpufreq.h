#define _LINUX_CPUFREQ_H
#define CPUFREQ_NAME_LEN 16
#define CPUFREQ_TRANSITION_NOTIFIER	(0)
#define CPUFREQ_POLICY_NOTIFIER		(1)
int cpufreq_register_notifier(struct notifier_block *nb, unsigned int list);
int cpufreq_unregister_notifier(struct notifier_block *nb, unsigned int list);
static inline int cpufreq_register_notifier(struct notifier_block *nb,
unsigned int list)
static inline int cpufreq_unregister_notifier(struct notifier_block *nb,
unsigned int list)
#define CPUFREQ_POLICY_POWERSAVE	(1)
#define CPUFREQ_POLICY_PERFORMANCE	(2)
struct cpufreq_governor;
extern struct kobject *cpufreq_global_kobject;
#define CPUFREQ_ETERNAL			(-1)
struct cpufreq_cpuinfo ;
struct cpufreq_real_policy ;
struct cpufreq_policy ;
#define CPUFREQ_ADJUST		(0)
#define CPUFREQ_INCOMPATIBLE	(1)
#define CPUFREQ_NOTIFY		(2)
#define CPUFREQ_START		(3)
#define CPUFREQ_SHARED_TYPE_NONE (0)
#define CPUFREQ_SHARED_TYPE_HW	 (1)
#define CPUFREQ_SHARED_TYPE_ALL	 (2)
#define CPUFREQ_SHARED_TYPE_ANY	 (3)
#define CPUFREQ_PRECHANGE	(0)
#define CPUFREQ_POSTCHANGE	(1)
#define CPUFREQ_RESUMECHANGE	(8)
#define CPUFREQ_SUSPENDCHANGE	(9)
struct cpufreq_freqs ;
static inline unsigned long cpufreq_scale(unsigned long old, u_int div, u_int mult)
;
#define CPUFREQ_GOV_START  1
#define CPUFREQ_GOV_STOP   2
#define CPUFREQ_GOV_LIMITS 3
struct cpufreq_governor ;
extern int cpufreq_driver_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation);
extern int __cpufreq_driver_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation);
extern int __cpufreq_driver_getavg(struct cpufreq_policy *policy,
unsigned int cpu);
int cpufreq_register_governor(struct cpufreq_governor *governor);
void cpufreq_unregister_governor(struct cpufreq_governor *governor);
#define CPUFREQ_RELATION_L 0
#define CPUFREQ_RELATION_H 1
struct freq_attr;
struct cpufreq_driver ;
#define CPUFREQ_STICKY		0x01
#define CPUFREQ_CONST_LOOPS	0x02
#define CPUFREQ_PM_NO_WARN	0x04
int cpufreq_register_driver(struct cpufreq_driver *driver_data);
int cpufreq_unregister_driver(struct cpufreq_driver *driver_data);
void cpufreq_notify_transition(struct cpufreq_freqs *freqs, unsigned int state);
static inline void cpufreq_verify_within_limits(struct cpufreq_policy *policy, unsigned int min, unsigned int max)
struct freq_attr ;
#define cpufreq_freq_attr_ro(_name)		\
static struct freq_attr _name =			\
__ATTR(_name, 0444, show_##_name, NULL)
#define cpufreq_freq_attr_ro_perm(_name, _perm)	\
static struct freq_attr _name =			\
__ATTR(_name, _perm, show_##_name, NULL)
#define cpufreq_freq_attr_rw(_name)		\
static struct freq_attr _name =			\
__ATTR(_name, 0644, show_##_name, store_##_name)
struct global_attr ;
#define define_one_global_ro(_name)		\
static struct global_attr _name =		\
__ATTR(_name, 0444, show_##_name, NULL)
#define define_one_global_rw(_name)		\
static struct global_attr _name =		\
__ATTR(_name, 0644, show_##_name, store_##_name)
int cpufreq_get_policy(struct cpufreq_policy *policy, unsigned int cpu);
int cpufreq_update_policy(unsigned int cpu);
unsigned int cpufreq_get(unsigned int cpu);
static inline unsigned int cpufreq_get(unsigned int cpu)
unsigned int cpufreq_quick_get(unsigned int cpu);
static inline unsigned int cpufreq_quick_get(unsigned int cpu)
extern struct cpufreq_governor cpufreq_gov_performance;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_performance)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_POWERSAVE)
extern struct cpufreq_governor cpufreq_gov_powersave;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_powersave)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_USERSPACE)
extern struct cpufreq_governor cpufreq_gov_userspace;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_userspace)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_ONDEMAND)
extern struct cpufreq_governor cpufreq_gov_ondemand;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_ondemand)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_CONSERVATIVE)
extern struct cpufreq_governor cpufreq_gov_conservative;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_conservative)
#define CPUFREQ_ENTRY_INVALID ~0
#define CPUFREQ_TABLE_END     ~1
struct cpufreq_frequency_table ;
int cpufreq_frequency_table_cpuinfo(struct cpufreq_policy *policy,
struct cpufreq_frequency_table *table);
int cpufreq_frequency_table_verify(struct cpufreq_policy *policy,
struct cpufreq_frequency_table *table);
int cpufreq_frequency_table_target(struct cpufreq_policy *policy,
struct cpufreq_frequency_table *table,
unsigned int target_freq,
unsigned int relation,
unsigned int *index);
struct cpufreq_frequency_table *cpufreq_frequency_get_table(unsigned int cpu);
struct cpufreq_policy *cpufreq_cpu_get(unsigned int cpu);
void   cpufreq_cpu_put(struct cpufreq_policy *data);
extern struct freq_attr cpufreq_freq_attr_scaling_available_freqs;
void cpufreq_frequency_table_get_attr(struct cpufreq_frequency_table *table,
unsigned int cpu);
void cpufreq_frequency_table_put_attr(unsigned int cpu);
