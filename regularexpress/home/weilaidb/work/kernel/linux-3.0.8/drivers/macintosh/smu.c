#define VERSION "0.7"
#define AUTHOR  "(c) 2005 Benjamin Herrenschmidt, IBM Corp."
#undef DEBUG_SMU
#define DPRINTK(fmt, args...) do  while (0)
#define DPRINTK(fmt, args...) do  while (0)
#define SMU_MAX_DATA	254
struct smu_cmd_buf ;
struct smu_device ;
static DEFINE_MUTEX(smu_mutex);
static struct smu_device	*smu;
static DEFINE_MUTEX(smu_part_access);
static int smu_irq_inited;
static void smu_i2c_retry(unsigned long data);
static void smu_start_cmd(void)
static irqreturn_t smu_db_intr(int irq, void *arg)
static irqreturn_t smu_msg_intr(int irq, void *arg)
int smu_queue_cmd(struct smu_cmd *cmd)
EXPORT_SYMBOL(smu_queue_cmd);
int smu_queue_simple(struct smu_simple_cmd *scmd, u8 command,
unsigned int data_len,
void (*done)(struct smu_cmd *cmd, void *misc),
void *misc, ...)
EXPORT_SYMBOL(smu_queue_simple);
void smu_poll(void)
EXPORT_SYMBOL(smu_poll);
void smu_done_complete(struct smu_cmd *cmd, void *misc)
EXPORT_SYMBOL(smu_done_complete);
void smu_spinwait_cmd(struct smu_cmd *cmd)
EXPORT_SYMBOL(smu_spinwait_cmd);
static inline int bcd2hex (int n)
static inline int hex2bcd (int n)
static inline void smu_fill_set_rtc_cmd(struct smu_cmd_buf *cmd_buf,
struct rtc_time *time)
int smu_get_rtc_time(struct rtc_time *time, int spinwait)
int smu_set_rtc_time(struct rtc_time *time, int spinwait)
void smu_shutdown(void)
void smu_restart(void)
int smu_present(void)
EXPORT_SYMBOL(smu_present);
int __init smu_init (void)
static int smu_late_init(void)
core_initcall(smu_late_init);
static void smu_expose_childs(struct work_struct *unused)
static DECLARE_WORK(smu_expose_childs_work, smu_expose_childs);
static int smu_platform_probe(struct platform_device* dev)
static const struct of_device_id smu_platform_match[] =
;
static struct platform_driver smu_of_platform_driver =
;
static int __init smu_init_sysfs(void)
device_initcall(smu_init_sysfs);
struct platform_device *smu_get_ofdev(void)
EXPORT_SYMBOL_GPL(smu_get_ofdev);
static void smu_i2c_complete_command(struct smu_i2c_cmd *cmd, int fail)
static void smu_i2c_retry(unsigned long data)
static void smu_i2c_low_completion(struct smu_cmd *scmd, void *misc)
int smu_queue_i2c(struct smu_i2c_cmd *cmd)
static int smu_read_datablock(u8 *dest, unsigned int addr, unsigned int len)
static struct smu_sdbp_header *smu_create_sdb_partition(int id)
const struct smu_sdbp_header *__smu_get_sdb_partition(int id,
unsigned int *size, int interruptible)
const struct smu_sdbp_header *smu_get_sdb_partition(int id, unsigned int *size)
EXPORT_SYMBOL(smu_get_sdb_partition);
static LIST_HEAD(smu_clist);
static DEFINE_SPINLOCK(smu_clist_lock);
enum smu_file_mode ;
struct smu_private
;
static int smu_open(struct inode *inode, struct file *file)
static void smu_user_cmd_done(struct smu_cmd *cmd, void *misc)
static ssize_t smu_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t smu_read_command(struct file *file, struct smu_private *pp,
char __user *buf, size_t count)
static ssize_t smu_read_events(struct file *file, struct smu_private *pp,
char __user *buf, size_t count)
static ssize_t smu_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int smu_fpoll(struct file *file, poll_table *wait)
static int smu_release(struct inode *inode, struct file *file)
static const struct file_operations smu_device_fops = ;
static struct miscdevice pmu_device = ;
static int smu_device_init(void)
device_initcall(smu_device_init);
