#define KMSG_COMPONENT "time"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define USECS_PER_JIFFY     ((unsigned long) 1000000/HZ)
#define CLK_TICKS_PER_JIFFY ((unsigned long) USECS_PER_JIFFY << 12)
u64 sched_clock_base_cc = -1;
EXPORT_SYMBOL_GPL(sched_clock_base_cc);
static DEFINE_PER_CPU(struct clock_event_device, comparators);
unsigned long long notrace __kprobes sched_clock(void)
unsigned long long monotonic_clock(void)
EXPORT_SYMBOL(monotonic_clock);
void tod_to_timeval(__u64 todval, struct timespec *xt)
EXPORT_SYMBOL(tod_to_timeval);
void clock_comparator_work(void)
static void fixup_clock_comparator(unsigned long long delta)
static int s390_next_event(unsigned long delta,
struct clock_event_device *evt)
static void s390_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
void init_cpu_timer(void)
static void clock_comparator_interrupt(unsigned int ext_int_code,
unsigned int param32,
unsigned long param64)
static void etr_timing_alert(struct etr_irq_parm *);
static void stp_timing_alert(struct stp_irq_parm *);
static void timing_alert_interrupt(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static void etr_reset(void);
static void stp_reset(void);
void read_persistent_clock(struct timespec *ts)
void read_boot_clock(struct timespec *ts)
static cycle_t read_tod_clock(struct clocksource *cs)
static struct clocksource clocksource_tod = ;
struct clocksource * __init clocksource_default_clock(void)
void update_vsyscall(struct timespec *wall_time, struct timespec *wtm,
struct clocksource *clock, u32 mult)
extern struct timezone sys_tz;
void update_vsyscall_tz(void)
void __init time_init(void)
static unsigned long long adjust_time(unsigned long long old,
unsigned long long clock,
unsigned long long delay)
static DEFINE_PER_CPU(atomic_t, clock_sync_word);
static DEFINE_MUTEX(clock_sync_mutex);
static unsigned long clock_sync_flags;
#define CLOCK_SYNC_HAS_ETR	0
#define CLOCK_SYNC_HAS_STP	1
#define CLOCK_SYNC_ETR		2
#define CLOCK_SYNC_STP		3
int get_sync_clock(unsigned long long *clock)
EXPORT_SYMBOL(get_sync_clock);
static void disable_sync_clock(void *dummy)
static void enable_sync_clock(void)
static inline int check_sync_clock(void)
static struct workqueue_struct *time_sync_wq;
static void __init time_init_wq(void)
static int etr_port0_online;
static int etr_port1_online;
static int etr_steai_available;
static int __init early_parse_etr(char *p)
early_param("etr", early_parse_etr);
enum etr_event ;
static struct etr_eacr etr_eacr;
static u64 etr_tolec;
static struct etr_aib etr_port0;
static int etr_port0_uptodate;
static struct etr_aib etr_port1;
static int etr_port1_uptodate;
static unsigned long etr_events;
static struct timer_list etr_timer;
static void etr_timeout(unsigned long dummy);
static void etr_work_fn(struct work_struct *work);
static DEFINE_MUTEX(etr_work_mutex);
static DECLARE_WORK(etr_work, etr_work_fn);
static void etr_reset(void)
static int __init etr_init(void)
arch_initcall(etr_init);
void etr_switch_to_local(void)
void etr_sync_check(void)
static void etr_timing_alert(struct etr_irq_parm *intparm)
static void etr_timeout(unsigned long dummy)
static inline int etr_mode_is_pps(struct etr_eacr eacr)
static inline int etr_mode_is_etr(struct etr_eacr eacr)
static int etr_port_valid(struct etr_aib *aib, int port)
static int etr_compare_network(struct etr_aib *aib1, struct etr_aib *aib2)
static void etr_steai_cv(struct etr_aib *aib, unsigned int func)
static int etr_aib_follows(struct etr_aib *a1, struct etr_aib *a2, int p)
struct clock_sync_data ;
static void clock_sync_cpu(struct clock_sync_data *sync)
static int etr_sync_clock(void *data)
static int etr_sync_clock_stop(struct etr_aib *aib, int port)
static struct etr_eacr etr_handle_events(struct etr_eacr eacr)
static void etr_set_tolec_timeout(unsigned long long now)
static void etr_set_sync_timeout(void)
static struct etr_eacr etr_handle_update(struct etr_aib *aib,
struct etr_eacr eacr)
static void etr_update_eacr(struct etr_eacr eacr)
static void etr_work_fn(struct work_struct *work)
static struct sysdev_class etr_sysclass = ;
static struct sys_device etr_port0_dev = ;
static struct sys_device etr_port1_dev = ;
static ssize_t etr_stepping_port_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(stepping_port, 0400, etr_stepping_port_show, NULL);
static ssize_t etr_stepping_mode_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(stepping_mode, 0400, etr_stepping_mode_show, NULL);
static inline struct etr_aib *etr_aib_from_dev(struct sys_device *dev)
static ssize_t etr_online_show(struct sys_device *dev,
struct sysdev_attribute *attr,
char *buf)
static ssize_t etr_online_store(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static SYSDEV_ATTR(online, 0600, etr_online_show, etr_online_store);
static ssize_t etr_stepping_control_show(struct sys_device *dev,
struct sysdev_attribute *attr,
char *buf)
static SYSDEV_ATTR(stepping_control, 0400, etr_stepping_control_show, NULL);
static ssize_t etr_mode_code_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(state_code, 0400, etr_mode_code_show, NULL);
static ssize_t etr_untuned_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(untuned, 0400, etr_untuned_show, NULL);
static ssize_t etr_network_id_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(network, 0400, etr_network_id_show, NULL);
static ssize_t etr_id_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(id, 0400, etr_id_show, NULL);
static ssize_t etr_port_number_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(port, 0400, etr_port_number_show, NULL);
static ssize_t etr_coupled_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(coupled, 0400, etr_coupled_show, NULL);
static ssize_t etr_local_time_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(local_time, 0400, etr_local_time_show, NULL);
static ssize_t etr_utc_offset_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(utc_offset, 0400, etr_utc_offset_show, NULL);
static struct sysdev_attribute *etr_port_attributes[] = ;
static int __init etr_register_port(struct sys_device *dev)
static void __init etr_unregister_port(struct sys_device *dev)
static int __init etr_init_sysfs(void)
device_initcall(etr_init_sysfs);
static int stp_online;
static struct stp_sstpi stp_info;
static void *stp_page;
static void stp_work_fn(struct work_struct *work);
static DEFINE_MUTEX(stp_work_mutex);
static DECLARE_WORK(stp_work, stp_work_fn);
static struct timer_list stp_timer;
static int __init early_parse_stp(char *p)
early_param("stp", early_parse_stp);
static void __init stp_reset(void)
static void stp_timeout(unsigned long dummy)
static int __init stp_init(void)
arch_initcall(stp_init);
static void stp_timing_alert(struct stp_irq_parm *intparm)
void stp_sync_check(void)
void stp_island_check(void)
static int stp_sync_clock(void *data)
static void stp_work_fn(struct work_struct *work)
static struct sysdev_class stp_sysclass = ;
static ssize_t stp_ctn_id_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(ctn_id, 0400, stp_ctn_id_show, NULL);
static ssize_t stp_ctn_type_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(ctn_type, 0400, stp_ctn_type_show, NULL);
static ssize_t stp_dst_offset_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(dst_offset, 0400, stp_dst_offset_show, NULL);
static ssize_t stp_leap_seconds_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(leap_seconds, 0400, stp_leap_seconds_show, NULL);
static ssize_t stp_stratum_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(stratum, 0400, stp_stratum_show, NULL);
static ssize_t stp_time_offset_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(time_offset, 0400, stp_time_offset_show, NULL);
static ssize_t stp_time_zone_offset_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(time_zone_offset, 0400,
stp_time_zone_offset_show, NULL);
static ssize_t stp_timing_mode_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(timing_mode, 0400, stp_timing_mode_show, NULL);
static ssize_t stp_timing_state_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(timing_state, 0400, stp_timing_state_show, NULL);
static ssize_t stp_online_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static ssize_t stp_online_store(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
const char *buf, size_t count)
static struct sysdev_class_attribute attr_stp_online = ;
static struct sysdev_class_attribute *stp_attributes[] = ;
static int __init stp_init_sysfs(void)
device_initcall(stp_init_sysfs);
