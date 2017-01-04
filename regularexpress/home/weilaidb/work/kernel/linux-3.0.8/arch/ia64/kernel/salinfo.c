MODULE_AUTHOR("Jesse Barnes <jbarnes@sgi.com>");
MODULE_DESCRIPTION("/proc interface to IA-64 SAL features");
MODULE_LICENSE("GPL");
static int salinfo_read(char *page, char **start, off_t off, int count, int *eof, void *data);
typedef struct  salinfo_entry_t;
static salinfo_entry_t salinfo_entries[]=;
#define NR_SALINFO_ENTRIES ARRAY_SIZE(salinfo_entries)
static char *salinfo_log_name[] = ;
static struct proc_dir_entry *salinfo_proc_entries[
ARRAY_SIZE(salinfo_entries) +
ARRAY_SIZE(salinfo_log_name) +
(2 * ARRAY_SIZE(salinfo_log_name)) +
1];
struct salinfo_data_saved ;
enum salinfo_state ;
struct salinfo_data ;
static struct salinfo_data salinfo_data[ARRAY_SIZE(salinfo_log_name)];
static DEFINE_SPINLOCK(data_lock);
static DEFINE_SPINLOCK(data_saved_lock);
int (*salinfo_platform_oemdata)(const u8 *sect_header, u8 **oemdata, u64 *oemdata_size);
struct salinfo_platform_oemdata_parms ;
static void
salinfo_work_to_do(struct salinfo_data *data)
static void
salinfo_platform_oemdata_cpu(void *context)
static void
shift1_data_saved (struct salinfo_data *data, int shift)
void
salinfo_log_wakeup(int type, u8 *buffer, u64 size, int irqsafe)
#define SALINFO_TIMER_DELAY (60*HZ)
static struct timer_list salinfo_timer;
extern void ia64_mlogbuf_dump(void);
static void
salinfo_timeout_check(struct salinfo_data *data)
static void
salinfo_timeout (unsigned long arg)
static int
salinfo_event_open(struct inode *inode, struct file *file)
static ssize_t
salinfo_event_read(struct file *file, char __user *buffer, size_t count, loff_t *ppos)
static const struct file_operations salinfo_event_fops = ;
static int
salinfo_log_open(struct inode *inode, struct file *file)
static int
salinfo_log_release(struct inode *inode, struct file *file)
static void
call_on_cpu(int cpu, void (*fn)(void *), void *arg)
static void
salinfo_log_read_cpu(void *context)
static void
salinfo_log_new_read(int cpu, struct salinfo_data *data)
static ssize_t
salinfo_log_read(struct file *file, char __user *buffer, size_t count, loff_t *ppos)
static void
salinfo_log_clear_cpu(void *context)
static int
salinfo_log_clear(struct salinfo_data *data, int cpu)
static ssize_t
salinfo_log_write(struct file *file, const char __user *buffer, size_t count, loff_t *ppos)
static const struct file_operations salinfo_data_fops = ;
static int __cpuinit
salinfo_cpu_callback(struct notifier_block *nb, unsigned long action, void *hcpu)
static struct notifier_block salinfo_cpu_notifier __cpuinitdata =
;
static int __init
salinfo_init(void)
static int
salinfo_read(char *page, char **start, off_t off, int count, int *eof, void *data)
module_init(salinfo_init);
