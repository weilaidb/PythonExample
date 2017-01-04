#define DRV_NAME "nmi-wdt"
#define NMI_WDT_TIMEOUT 5
#define NMI_CHECK_TIMEOUT (4 * HZ)
static int nmi_wdt_cpu = 1;
static unsigned int timeout = NMI_WDT_TIMEOUT;
static int nmi_active;
static unsigned short wdoga_ctl;
static unsigned int wdoga_cnt;
static struct corelock_slot saved_corelock;
static atomic_t nmi_touched[NR_CPUS];
static struct timer_list ntimer;
enum ;
static unsigned long nmi_event __attribute__ ((__section__(".l2.bss")));
static inline void set_nmi_event(int event)
static inline void wait_nmi_event(int event)
static inline void send_corea_nmi(void)
static inline void restore_corea_nmi(void)
static inline void save_corelock(void)
static inline void restore_corelock(void)
static inline void nmi_wdt_keepalive(void)
static inline void nmi_wdt_stop(void)
static inline void nmi_wdt_clear(void)
static inline void nmi_wdt_start(void)
static inline int nmi_wdt_running(void)
static inline int nmi_wdt_set_timeout(unsigned long t)
int check_nmi_wdt_touched(void)
static void nmi_wdt_timer(unsigned long data)
static int __init init_nmi_wdt(void)
device_initcall(init_nmi_wdt);
void touch_nmi_watchdog(void)
static int nmi_wdt_suspend(void)
static void nmi_wdt_resume(void)
static struct syscore_ops nmi_syscore_ops = ;
static int __init init_nmi_wdt_syscore(void)
late_initcall(init_nmi_wdt_syscore);
asmlinkage notrace void do_nmi(struct pt_regs *fp)
