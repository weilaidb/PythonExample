static unsigned int timeout_cnt;
static unsigned int max_timeout_sec;
static unsigned int timeout_sec;
static int do_coundown;
static unsigned int countdown_reset;
static unsigned int per_cpu_countdown[NR_CPUS];
static cpumask_t irq_enabled_cpus;
#define WD_TIMO 60
static int heartbeat = WD_TIMO;
module_param(heartbeat, int, S_IRUGO);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat in seconds. (0 < heartbeat, default="
__MODULE_STRING(WD_TIMO) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, S_IRUGO);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static unsigned long octeon_wdt_is_open;
static char expect_close;
static u32 __initdata nmi_stage1_insns[64];
static struct uasm_label __initdata labels[5];
static struct uasm_reloc __initdata relocs[5];
enum lable_id ;
#define K0		26
#define C0_CVMMEMCTL 11, 7
#define C0_STATUS 12, 0
#define C0_EBASE 15, 1
#define C0_DESAVE 31, 0
void octeon_wdt_nmi_stage2(void);
static void __init octeon_wdt_build_stage1(void)
static int cpu2core(int cpu)
static int core2cpu(int coreid)
static irqreturn_t octeon_wdt_poke_irq(int cpl, void *dev_id)
extern int prom_putchar(char c);
static void octeon_wdt_write_string(const char *str)
static void octeon_wdt_write_hex(u64 value, int digits)
const char *reg_name[] = ;
void octeon_wdt_nmi_stage3(u64 reg[32])
static void octeon_wdt_disable_interrupt(int cpu)
static void octeon_wdt_setup_interrupt(int cpu)
static int octeon_wdt_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static void octeon_wdt_ping(void)
static void octeon_wdt_calc_parameters(int t)
static int octeon_wdt_set_heartbeat(int t)
static ssize_t octeon_wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long octeon_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int octeon_wdt_open(struct inode *inode, struct file *file)
static int octeon_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations octeon_wdt_fops = ;
static struct miscdevice octeon_wdt_miscdev = ;
static struct notifier_block octeon_wdt_cpu_notifier = ;
static int __init octeon_wdt_init(void)
static void __exit octeon_wdt_cleanup(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cavium Networks <support@caviumnetworks.com>");
MODULE_DESCRIPTION("Cavium Networks Octeon Watchdog driver.");
module_init(octeon_wdt_init);
module_exit(octeon_wdt_cleanup);
