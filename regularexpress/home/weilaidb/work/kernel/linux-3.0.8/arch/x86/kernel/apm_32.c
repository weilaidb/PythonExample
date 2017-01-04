#if defined(CONFIG_APM_DISPLAY_BLANK) && defined(CONFIG_VT)
extern int (*console_blank_hook)(int);
#define	APM_MINOR_DEV	134
#define ALWAYS_CALL_BUSY   1
#define APM_ZERO_SEGS
#undef INIT_TIMER_AFTER_SUSPEND
#define APM_CHECK_TIMEOUT	(HZ)
#define DEFAULT_BOUNCE_INTERVAL	(3 * HZ)
#define APM_MAX_EVENTS		20
struct apm_user ;
#define APM_BIOS_MAGIC		0x4101
#warning deprecated CONFIG_APM_CPU_IDLE will be deleted in 2012
#define DEFAULT_IDLE_THRESHOLD	95
#define DEFAULT_IDLE_THRESHOLD	100
#define DEFAULT_IDLE_PERIOD	(100 / 3)
static struct  apm_bios_entry;
static int clock_slowed;
static int idle_threshold __read_mostly = DEFAULT_IDLE_THRESHOLD;
static int idle_period __read_mostly = DEFAULT_IDLE_PERIOD;
static int set_pm_idle;
static int suspends_pending;
static int standbys_pending;
static int ignore_sys_suspend;
static int ignore_normal_resume;
static int bounce_interval __read_mostly = DEFAULT_BOUNCE_INTERVAL;
static int debug __read_mostly;
static int smp __read_mostly;
static int apm_disabled = -1;
static int power_off;
static int power_off = 1;
static int realmode_power_off;
static int allow_ints = 1;
static int allow_ints;
static int broken_psr;
static DECLARE_WAIT_QUEUE_HEAD(apm_waitqueue);
static DECLARE_WAIT_QUEUE_HEAD(apm_suspend_waitqueue);
static struct apm_user *user_list;
static DEFINE_SPINLOCK(user_list_lock);
static DEFINE_MUTEX(apm_mutex);
static struct desc_struct bad_bios_desc = GDT_ENTRY_INIT(0x4092,
(unsigned long)__va(0x400UL), PAGE_SIZE - 0x400 - 1);
static const char driver_version[] = "1.16ac";
static struct task_struct *kapmd_task;
static const char * const apm_event_name[] = ;
#define NR_APM_EVENT_NAME ARRAY_SIZE(apm_event_name)
typedef struct lookup_t  lookup_t;
static const lookup_t error_table[] = ;
#define ERROR_COUNT	ARRAY_SIZE(error_table)
static void apm_error(char *str, int err)
static inline unsigned long __apm_irq_save(void)
#define apm_irq_save(flags) \
do  while (0)
static inline void apm_irq_restore(unsigned long flags)
#	define APM_DECL_SEGS \
unsigned int saved_fs; unsigned int saved_gs;
#	define APM_DO_SAVE_SEGS \
savesegment(fs, saved_fs); savesegment(gs, saved_gs)
#	define APM_DO_RESTORE_SEGS \
loadsegment(fs, saved_fs); loadsegment(gs, saved_gs)
#	define APM_DECL_SEGS
#	define APM_DO_SAVE_SEGS
#	define APM_DO_RESTORE_SEGS
struct apm_bios_call ;
static long __apm_bios_call(void *_call)
static int on_cpu0(long (*fn)(void *), struct apm_bios_call *call)
static int apm_bios_call(struct apm_bios_call *call)
static long __apm_bios_call_simple(void *_call)
static int apm_bios_call_simple(u32 func, u32 ebx_in, u32 ecx_in, u32 *eax,
int *err)
static int apm_driver_version(u_short *val)
static int apm_get_event(apm_event_t *event, apm_eventinfo_t *info)
static int set_power_state(u_short what, u_short state)
static int set_system_power_state(u_short state)
static int apm_do_idle(void)
static void apm_do_busy(void)
#define IDLE_CALC_LIMIT	(HZ * 100)
#define IDLE_LEAKY_MAX	16
static void (*original_pm_idle)(void) __read_mostly;
static void apm_cpu_idle(void)
static void apm_power_off(void)
static int apm_enable_power_management(int enable)
static int apm_get_power_status(u_short *status, u_short *bat, u_short *life)
static int apm_engage_power_management(u_short device, int enable)
#if defined(CONFIG_APM_DISPLAY_BLANK) && defined(CONFIG_VT)
static int apm_console_blank(int blank)
static int queue_empty(struct apm_user *as)
static apm_event_t get_queued_event(struct apm_user *as)
static void queue_event(apm_event_t event, struct apm_user *sender)
static void reinit_timer(void)
static int suspend(int vetoable)
static void standby(void)
static apm_event_t get_event(void)
static void check_events(void)
static void apm_event_handler(void)
static void apm_mainloop(void)
static int check_apm_user(struct apm_user *as, const char *func)
static ssize_t do_read(struct file *fp, char __user *buf, size_t count, loff_t *ppos)
static unsigned int do_poll(struct file *fp, poll_table *wait)
static long do_ioctl(struct file *filp, u_int cmd, u_long arg)
static int do_release(struct inode *inode, struct file *filp)
static int do_open(struct inode *inode, struct file *filp)
static int proc_apm_show(struct seq_file *m, void *v)
static int proc_apm_open(struct inode *inode, struct file *file)
static const struct file_operations apm_file_ops = ;
static int apm(void *unused)
static int __init apm_setup(char *str)
__setup("apm=", apm_setup);
static const struct file_operations apm_bios_fops = ;
static struct miscdevice apm_device = ;
static int __init print_if_true(const struct dmi_system_id *d)
static int __init broken_ps2_resume(const struct dmi_system_id *d)
static int __init set_realmode_power_off(const struct dmi_system_id *d)
static int __init set_apm_ints(const struct dmi_system_id *d)
static int __init apm_is_horked(const struct dmi_system_id *d)
static int __init apm_is_horked_d850md(const struct dmi_system_id *d)
static int __init apm_likes_to_melt(const struct dmi_system_id *d)
static int __init broken_apm_power(const struct dmi_system_id *d)
static int __init swab_apm_power_in_minutes(const struct dmi_system_id *d)
static struct dmi_system_id __initdata apm_dmi_table[] = ;
static int __init apm_init(void)
static void __exit apm_exit(void)
module_init(apm_init);
module_exit(apm_exit);
MODULE_AUTHOR("Stephen Rothwell");
MODULE_DESCRIPTION("Advanced Power Management");
MODULE_LICENSE("GPL");
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Enable debug mode");
module_param(power_off, bool, 0444);
MODULE_PARM_DESC(power_off, "Enable power off");
module_param(bounce_interval, int, 0444);
MODULE_PARM_DESC(bounce_interval,
"Set the number of ticks to ignore suspend bounces");
module_param(allow_ints, bool, 0444);
MODULE_PARM_DESC(allow_ints, "Allow interrupts during BIOS calls");
module_param(broken_psr, bool, 0444);
MODULE_PARM_DESC(broken_psr, "BIOS has a broken GetPowerStatus call");
module_param(realmode_power_off, bool, 0444);
MODULE_PARM_DESC(realmode_power_off,
"Switch to real mode before powering off");
module_param(idle_threshold, int, 0444);
MODULE_PARM_DESC(idle_threshold,
"System idle percentage above which to make APM BIOS idle calls");
module_param(idle_period, int, 0444);
MODULE_PARM_DESC(idle_period,
"Period (in sec/100) over which to caculate the idle percentage");
module_param(smp, bool, 0444);
MODULE_PARM_DESC(smp,
"Set this to enable APM use on an SMP platform. Use with caution on older systems");
MODULE_ALIAS_MISCDEV(APM_MINOR_DEV);
