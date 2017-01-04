#define DEFAULT_COUNT 10
#define REC_NUM_DEFAULT 10
enum cname ;
enum ctype ;
static char* cp_name[] = ;
static char* cp_type[] = ;
static struct jprobe lkdtm;
static int lkdtm_parse_commandline(void);
static void lkdtm_handler(void);
static char* cpoint_name;
static char* cpoint_type;
static int cpoint_count = DEFAULT_COUNT;
static int recur_count = REC_NUM_DEFAULT;
static enum cname cpoint = CN_INVALID;
static enum ctype cptype = CT_NONE;
static int count = DEFAULT_COUNT;
static DEFINE_SPINLOCK(count_lock);
module_param(recur_count, int, 0644);
MODULE_PARM_DESC(recur_count, " Recursion level for the stack overflow test, "\
"default is 10");
module_param(cpoint_name, charp, 0444);
MODULE_PARM_DESC(cpoint_name, " Crash Point, where kernel is to be crashed");
module_param(cpoint_type, charp, 0444);
MODULE_PARM_DESC(cpoint_type, " Crash Point Type, action to be taken on "\
"hitting the crash point");
module_param(cpoint_count, int, 0644);
MODULE_PARM_DESC(cpoint_count, " Crash Point Count, number of times the "\
"crash point is to be hit to trigger action");
static unsigned int jp_do_irq(unsigned int irq)
static irqreturn_t jp_handle_irq_event(unsigned int irq,
struct irqaction *action)
static void jp_tasklet_action(struct softirq_action *a)
static void jp_ll_rw_block(int rw, int nr, struct buffer_head *bhs[])
struct scan_control;
static unsigned long jp_shrink_inactive_list(unsigned long max_scan,
struct zone *zone,
struct scan_control *sc)
static int jp_hrtimer_start(struct hrtimer *timer, ktime_t tim,
const enum hrtimer_mode mode)
static int jp_scsi_dispatch_cmd(struct scsi_cmnd *cmd)
int jp_generic_ide_ioctl(ide_drive_t *drive, struct file *file,
struct block_device *bdev, unsigned int cmd,
unsigned long arg)
static enum ctype parse_cp_type(const char *what, size_t count)
static const char *cp_type_to_str(enum ctype type)
static const char *cp_name_to_str(enum cname name)
static int lkdtm_parse_commandline(void)
static int recursive_loop(int a)
static void lkdtm_do_action(enum ctype which)
static void lkdtm_handler(void)
static int lkdtm_register_cpoint(enum cname which)
static ssize_t do_register_entry(enum cname which, struct file *f,
const char __user *user_buf, size_t count, loff_t *off)
static ssize_t lkdtm_debugfs_read(struct file *f, char __user *user_buf,
size_t count, loff_t *off)
static int lkdtm_debugfs_open(struct inode *inode, struct file *file)
static ssize_t int_hardware_entry(struct file *f, const char __user *buf,
size_t count, loff_t *off)
static ssize_t int_hw_irq_en(struct file *f, const char __user *buf,
size_t count, loff_t *off)
static ssize_t int_tasklet_entry(struct file *f, const char __user *buf,
size_t count, loff_t *off)
static ssize_t fs_devrw_entry(struct file *f, const char __user *buf,
size_t count, loff_t *off)
static ssize_t mem_swapout_entry(struct file *f, const char __user *buf,
size_t count, loff_t *off)
static ssize_t timeradd_entry(struct file *f, const char __user *buf,
size_t count, loff_t *off)
static ssize_t scsi_dispatch_cmd_entry(struct file *f,
const char __user *buf, size_t count, loff_t *off)
static ssize_t ide_core_cp_entry(struct file *f, const char __user *buf,
size_t count, loff_t *off)
static ssize_t direct_entry(struct file *f, const char __user *user_buf,
size_t count, loff_t *off)
struct crash_entry ;
static const struct crash_entry crash_entries[] = ;
static struct dentry *lkdtm_debugfs_root;
static int __init lkdtm_module_init(void)
static void __exit lkdtm_module_exit(void)
module_init(lkdtm_module_init);
module_exit(lkdtm_module_exit);
MODULE_LICENSE("GPL");
