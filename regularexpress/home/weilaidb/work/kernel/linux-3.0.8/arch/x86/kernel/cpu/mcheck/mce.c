static DEFINE_MUTEX(mce_read_mutex);
#define rcu_dereference_check_mce(p) \
rcu_dereference_index_check((p), \
rcu_read_lock_sched_held() || \
lockdep_is_held(&mce_read_mutex))
#define CREATE_TRACE_POINTS
int mce_disabled __read_mostly;
#define MISC_MCELOG_MINOR	227
#define SPINUNIT 100
atomic_t mce_entry;
DEFINE_PER_CPU(unsigned, mce_exception_count);
static int			tolerant		__read_mostly = 1;
static int			banks			__read_mostly;
static int			rip_msr			__read_mostly;
static int			mce_bootlog		__read_mostly = -1;
static int			monarch_timeout		__read_mostly = -1;
static int			mce_panic_timeout	__read_mostly;
static int			mce_dont_log_ce		__read_mostly;
int				mce_cmci_disabled	__read_mostly;
int				mce_ignore_ce		__read_mostly;
int				mce_ser			__read_mostly;
struct mce_bank                *mce_banks		__read_mostly;
static unsigned long		mce_need_notify;
static char			mce_helper[128];
static char			*mce_helper_argv[2] = ;
static DECLARE_WAIT_QUEUE_HEAD(mce_wait);
static DEFINE_PER_CPU(struct mce, mces_seen);
static int			cpu_missing;
ATOMIC_NOTIFIER_HEAD(x86_mce_decoder_chain);
EXPORT_SYMBOL_GPL(x86_mce_decoder_chain);
DEFINE_PER_CPU(mce_banks_t, mce_poll_banks) = ;
static DEFINE_PER_CPU(struct work_struct, mce_work);
void mce_setup(struct mce *m)
DEFINE_PER_CPU(struct mce, injectm);
EXPORT_PER_CPU_SYMBOL_GPL(injectm);
static struct mce_log mcelog = ;
void mce_log(struct mce *mce)
static void print_mce(struct mce *m)
#define PANIC_TIMEOUT 5
static atomic_t mce_paniced;
static int fake_panic;
static atomic_t mce_fake_paniced;
static void wait_for_panic(void)
static void mce_panic(char *msg, struct mce *final, char *exp)
static int msr_to_offset(u32 msr)
static u64 mce_rdmsrl(u32 msr)
static void mce_wrmsrl(u32 msr, u64 v)
#define MCE_RING_SIZE 16
struct mce_ring ;
static DEFINE_PER_CPU(struct mce_ring, mce_ring);
static int mce_ring_empty(void)
static int mce_ring_get(unsigned long *pfn)
static int mce_ring_add(unsigned long pfn)
int mce_available(struct cpuinfo_x86 *c)
static void mce_schedule_work(void)
static inline void mce_get_rip(struct mce *m, struct pt_regs *regs)
asmlinkage void smp_mce_self_interrupt(struct pt_regs *regs)
static void mce_report_event(struct pt_regs *regs)
DEFINE_PER_CPU(unsigned, mce_poll_count);
void machine_check_poll(enum mcp_flags flags, mce_banks_t *b)
EXPORT_SYMBOL_GPL(machine_check_poll);
static int mce_no_way_out(struct mce *m, char **msg)
static atomic_t mce_executing;
static atomic_t mce_callin;
static int mce_timed_out(u64 *t)
static void mce_reign(void)
static atomic_t global_nwo;
static int mce_start(int *no_way_out)
static int mce_end(int order)
static int mce_usable_address(struct mce *m)
static void mce_clear_state(unsigned long *toclear)
void do_machine_check(struct pt_regs *regs, long error_code)
EXPORT_SYMBOL_GPL(do_machine_check);
void __attribute__((weak)) memory_failure(unsigned long pfn, int vector)
void mce_notify_process(void)
static void mce_process_work(struct work_struct *dummy)
void mce_log_therm_throt_event(__u64 status)
static int check_interval = 5 * 60;
static DEFINE_PER_CPU(int, mce_next_interval);
static DEFINE_PER_CPU(struct timer_list, mce_timer);
static void mce_start_timer(unsigned long data)
static void mce_do_trigger(struct work_struct *work)
static DECLARE_WORK(mce_trigger_work, mce_do_trigger);
int mce_notify_irq(void)
EXPORT_SYMBOL_GPL(mce_notify_irq);
static int __cpuinit __mcheck_cpu_mce_banks_init(void)
static int __cpuinit __mcheck_cpu_cap_init(void)
static void __mcheck_cpu_init_generic(void)
static int __cpuinit __mcheck_cpu_apply_quirks(struct cpuinfo_x86 *c)
static void __cpuinit __mcheck_cpu_ancient_init(struct cpuinfo_x86 *c)
static void __mcheck_cpu_init_vendor(struct cpuinfo_x86 *c)
static void __mcheck_cpu_init_timer(void)
static void unexpected_machine_check(struct pt_regs *regs, long error_code)
void (*machine_check_vector)(struct pt_regs *, long error_code) =
unexpected_machine_check;
void __cpuinit mcheck_cpu_init(struct cpuinfo_x86 *c)
static DEFINE_SPINLOCK(mce_state_lock);
static int		open_count;
static int		open_exclu;
static int mce_open(struct inode *inode, struct file *file)
static int mce_release(struct inode *inode, struct file *file)
static void collect_tscs(void *data)
static int mce_apei_read_done;
static int __mce_read_apei(char __user **ubuf, size_t usize)
static ssize_t mce_read(struct file *filp, char __user *ubuf, size_t usize,
loff_t *off)
static unsigned int mce_poll(struct file *file, poll_table *wait)
static long mce_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
struct file_operations mce_chrdev_ops = ;
EXPORT_SYMBOL_GPL(mce_chrdev_ops);
static struct miscdevice mce_log_device = ;
static int __init mcheck_enable(char *str)
__setup("mce", mcheck_enable);
int __init mcheck_init(void)
static int mce_disable_error_reporting(void)
static int mce_suspend(void)
static void mce_shutdown(void)
static void mce_resume(void)
static struct syscore_ops mce_syscore_ops = ;
static void mce_cpu_restart(void *data)
static void mce_restart(void)
static void mce_disable_ce(void *all)
static void mce_enable_ce(void *all)
static struct sysdev_class mce_sysclass = ;
DEFINE_PER_CPU(struct sys_device, mce_dev);
__cpuinitdata
void (*threshold_cpu_callback)(unsigned long action, unsigned int cpu);
static inline struct mce_bank *attr_to_bank(struct sysdev_attribute *attr)
static ssize_t show_bank(struct sys_device *s, struct sysdev_attribute *attr,
char *buf)
static ssize_t set_bank(struct sys_device *s, struct sysdev_attribute *attr,
const char *buf, size_t size)
static ssize_t
show_trigger(struct sys_device *s, struct sysdev_attribute *attr, char *buf)
static ssize_t set_trigger(struct sys_device *s, struct sysdev_attribute *attr,
const char *buf, size_t siz)
static ssize_t set_ignore_ce(struct sys_device *s,
struct sysdev_attribute *attr,
const char *buf, size_t size)
static ssize_t set_cmci_disabled(struct sys_device *s,
struct sysdev_attribute *attr,
const char *buf, size_t size)
static ssize_t store_int_with_restart(struct sys_device *s,
struct sysdev_attribute *attr,
const char *buf, size_t size)
static SYSDEV_ATTR(trigger, 0644, show_trigger, set_trigger);
static SYSDEV_INT_ATTR(tolerant, 0644, tolerant);
static SYSDEV_INT_ATTR(monarch_timeout, 0644, monarch_timeout);
static SYSDEV_INT_ATTR(dont_log_ce, 0644, mce_dont_log_ce);
static struct sysdev_ext_attribute attr_check_interval = ;
static struct sysdev_ext_attribute attr_ignore_ce = ;
static struct sysdev_ext_attribute attr_cmci_disabled = ;
static struct sysdev_attribute *mce_attrs[] = ;
static cpumask_var_t mce_dev_initialized;
static __cpuinit int mce_create_device(unsigned int cpu)
static __cpuinit void mce_remove_device(unsigned int cpu)
static void __cpuinit mce_disable_cpu(void *h)
static void __cpuinit mce_reenable_cpu(void *h)
static int __cpuinit
mce_cpu_callback(struct notifier_block *nfb, unsigned long action, void *hcpu)
static struct notifier_block mce_cpu_notifier __cpuinitdata = ;
static __init void mce_init_banks(void)
static __init int mcheck_init_device(void)
device_initcall(mcheck_init_device);
static int __init mcheck_disable(char *str)
__setup("nomce", mcheck_disable);
struct dentry *mce_get_debugfs_dir(void)
static void mce_reset(void)
static int fake_panic_get(void *data, u64 *val)
static int fake_panic_set(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(fake_panic_fops, fake_panic_get,
fake_panic_set, "%llu\n");
static int __init mcheck_debugfs_init(void)
late_initcall(mcheck_debugfs_init);
