MODULE_AUTHOR("Jesse Barnes <jbarnes@sgi.com>");
MODULE_DESCRIPTION("SGI Altix RTC Timer");
MODULE_LICENSE("GPL");
#define MMTIMER_NAME "mmtimer"
#define MMTIMER_DESC "SGI Altix RTC Timer"
#define MMTIMER_VERSION "2.1"
#define RTC_BITS 55
static struct k_clock sgi_clock;
extern unsigned long sn_rtc_cycles_per_second;
#define RTC_COUNTER_ADDR        ((long *)LOCAL_MMR_ADDR(SH_RTC))
#define rtc_time()              (*RTC_COUNTER_ADDR)
static DEFINE_MUTEX(mmtimer_mutex);
static long mmtimer_ioctl(struct file *file, unsigned int cmd,
unsigned long arg);
static int mmtimer_mmap(struct file *file, struct vm_area_struct *vma);
static unsigned long mmtimer_femtoperiod = 0;
static const struct file_operations mmtimer_fops = ;
static int mmtimer_int_pending(int comparator)
static void mmtimer_clr_int_pending(int comparator)
static void mmtimer_setup_int_0(int cpu, u64 expires)
static void mmtimer_setup_int_1(int cpu, u64 expires)
static void mmtimer_setup_int_2(int cpu, u64 expires)
static int mmtimer_setup(int cpu, int comparator, unsigned long expires,
u64 *set_completion_time)
static int mmtimer_disable_int(long nasid, int comparator)
#define COMPARATOR	1
#define TIMER_OFF	0xbadcabLL
#define TIMER_SET	0
#define MMTIMER_INTERVAL_RETRY_INCREMENT_DEFAULT 40
struct mmtimer ;
struct mmtimer_node ;
static struct mmtimer_node *timers;
static unsigned mmtimer_interval_retry_increment =
MMTIMER_INTERVAL_RETRY_INCREMENT_DEFAULT;
module_param(mmtimer_interval_retry_increment, uint, 0644);
MODULE_PARM_DESC(mmtimer_interval_retry_increment,
"RTC ticks to add to expiration on interval retry (default 40)");
static void mmtimer_add_list(struct mmtimer *n)
static void mmtimer_set_next_timer(int nodeid)
static long mmtimer_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int mmtimer_mmap(struct file *file, struct vm_area_struct *vma)
static struct miscdevice mmtimer_miscdev = ;
static struct timespec sgi_clock_offset;
static int sgi_clock_period;
static struct timespec sgi_clock_offset;
static int sgi_clock_period;
static int sgi_clock_get(clockid_t clockid, struct timespec *tp)
;
static int sgi_clock_set(const clockid_t clockid, const struct timespec *tp)
static irqreturn_t
mmtimer_interrupt(int irq, void *dev_id)
static void mmtimer_tasklet(unsigned long data)
static int sgi_timer_create(struct k_itimer *timer)
static int sgi_timer_del(struct k_itimer *timr)
static void sgi_timer_get(struct k_itimer *timr, struct itimerspec *cur_setting)
static int sgi_timer_set(struct k_itimer *timr, int flags,
struct itimerspec * new_setting,
struct itimerspec * old_setting)
static int sgi_clock_getres(const clockid_t which_clock, struct timespec *tp)
static struct k_clock sgi_clock = ;
static int __init mmtimer_init(void)
module_init(mmtimer_init);
