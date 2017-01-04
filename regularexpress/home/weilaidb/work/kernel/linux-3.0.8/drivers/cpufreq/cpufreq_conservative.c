#define DEF_FREQUENCY_UP_THRESHOLD		(80)
#define DEF_FREQUENCY_DOWN_THRESHOLD		(20)
#define MIN_SAMPLING_RATE_RATIO			(2)
static unsigned int min_sampling_rate;
#define LATENCY_MULTIPLIER			(1000)
#define MIN_LATENCY_MULTIPLIER			(100)
#define DEF_SAMPLING_DOWN_FACTOR		(1)
#define MAX_SAMPLING_DOWN_FACTOR		(10)
#define TRANSITION_LATENCY_LIMIT		(10 * 1000 * 1000)
static void do_dbs_timer(struct work_struct *work);
struct cpu_dbs_info_s ;
static DEFINE_PER_CPU(struct cpu_dbs_info_s, cs_cpu_dbs_info);
static unsigned int dbs_enable;
static DEFINE_MUTEX(dbs_mutex);
static struct dbs_tuners  dbs_tuners_ins = ;
static inline cputime64_t get_cpu_idle_time_jiffy(unsigned int cpu,
cputime64_t *wall)
static inline cputime64_t get_cpu_idle_time(unsigned int cpu, cputime64_t *wall)
static int
dbs_cpufreq_notifier(struct notifier_block *nb, unsigned long val,
void *data)
static struct notifier_block dbs_cpufreq_notifier_block = ;
static ssize_t show_sampling_rate_min(struct kobject *kobj,
struct attribute *attr, char *buf)
define_one_global_ro(sampling_rate_min);
#define show_one(file_name, object)					\
static ssize_t show_##file_name						\
(struct kobject *kobj, struct attribute *attr, char *buf)		\
show_one(sampling_rate, sampling_rate);
show_one(sampling_down_factor, sampling_down_factor);
show_one(up_threshold, up_threshold);
show_one(down_threshold, down_threshold);
show_one(ignore_nice_load, ignore_nice);
show_one(freq_step, freq_step);
static ssize_t store_sampling_down_factor(struct kobject *a,
struct attribute *b,
const char *buf, size_t count)
static ssize_t store_sampling_rate(struct kobject *a, struct attribute *b,
const char *buf, size_t count)
static ssize_t store_up_threshold(struct kobject *a, struct attribute *b,
const char *buf, size_t count)
static ssize_t store_down_threshold(struct kobject *a, struct attribute *b,
const char *buf, size_t count)
static ssize_t store_ignore_nice_load(struct kobject *a, struct attribute *b,
const char *buf, size_t count)
static ssize_t store_freq_step(struct kobject *a, struct attribute *b,
const char *buf, size_t count)
define_one_global_rw(sampling_rate);
define_one_global_rw(sampling_down_factor);
define_one_global_rw(up_threshold);
define_one_global_rw(down_threshold);
define_one_global_rw(ignore_nice_load);
define_one_global_rw(freq_step);
static struct attribute *dbs_attributes[] = ;
static struct attribute_group dbs_attr_group = ;
static void dbs_check_cpu(struct cpu_dbs_info_s *this_dbs_info)
static void do_dbs_timer(struct work_struct *work)
static inline void dbs_timer_init(struct cpu_dbs_info_s *dbs_info)
static inline void dbs_timer_exit(struct cpu_dbs_info_s *dbs_info)
static int cpufreq_governor_dbs(struct cpufreq_policy *policy,
unsigned int event)
static
struct cpufreq_governor cpufreq_gov_conservative = ;
static int __init cpufreq_gov_dbs_init(void)
static void __exit cpufreq_gov_dbs_exit(void)
MODULE_AUTHOR("Alexander Clouter <alex@digriz.org.uk>");
MODULE_DESCRIPTION("'cpufreq_conservative' - A dynamic cpufreq governor for "
"Low Latency Frequency Transition capable processors "
"optimised for use in a battery environment");
MODULE_LICENSE("GPL");
fs_initcall(cpufreq_gov_dbs_init);
module_init(cpufreq_gov_dbs_init);
module_exit(cpufreq_gov_dbs_exit);
