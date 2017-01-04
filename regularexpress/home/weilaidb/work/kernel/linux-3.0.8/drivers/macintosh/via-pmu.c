#undef DEBUG_SLEEP
#define PMU_MINOR		154
#define BATTERY_POLLING_COUNT	2
static DEFINE_MUTEX(pmu_info_proc_mutex);
static volatile unsigned char __iomem *via;
#define RS		0x200
#define B		0
#define A		RS
#define DIRB		(2*RS)
#define DIRA		(3*RS)
#define T1CL		(4*RS)
#define T1CH		(5*RS)
#define T1LL		(6*RS)
#define T1LH		(7*RS)
#define T2CL		(8*RS)
#define T2CH		(9*RS)
#define SR		(10*RS)
#define ACR		(11*RS)
#define PCR		(12*RS)
#define IFR		(13*RS)
#define IER		(14*RS)
#define ANH		(15*RS)
#define TACK		0x08
#define TREQ		0x10
#define SR_CTRL		0x1c
#define SR_EXT		0x0c
#define SR_OUT		0x10
#define IER_SET		0x80
#define IER_CLR		0
#define SR_INT		0x04
#define CB2_INT		0x08
#define CB1_INT		0x10
static volatile enum pmu_state  pmu_state;
static volatile enum int_data_state  int_data_state[2] = ;
static struct adb_request *current_req;
static struct adb_request *last_req;
static struct adb_request *req_awaiting_reply;
static unsigned char interrupt_data[2][32];
static int interrupt_data_len[2];
static int int_data_last;
static unsigned char *reply_ptr;
static int data_index;
static int data_len;
static volatile int adb_int_pending;
static volatile int disable_poll;
static struct device_node *vias;
static int pmu_kind = PMU_UNKNOWN;
static int pmu_fully_inited;
static int pmu_has_adb;
static struct device_node *gpio_node;
static unsigned char __iomem *gpio_reg;
static int gpio_irq = NO_IRQ;
static int gpio_irq_enabled = -1;
static volatile int pmu_suspended;
static spinlock_t pmu_lock;
static u8 pmu_intr_mask;
static int pmu_version;
static int drop_interrupts;
#if defined(CONFIG_SUSPEND) && defined(CONFIG_PPC32)
static int option_lid_wakeup = 1;
static unsigned long async_req_locks;
static unsigned int pmu_irq_stats[11];
static struct proc_dir_entry *proc_pmu_root;
static struct proc_dir_entry *proc_pmu_info;
static struct proc_dir_entry *proc_pmu_irqstats;
static struct proc_dir_entry *proc_pmu_options;
static int option_server_mode;
int pmu_battery_count;
int pmu_cur_battery;
unsigned int pmu_power_flags = PMU_PWR_AC_PRESENT;
struct pmu_battery_info pmu_batteries[PMU_MAX_BATTERIES];
static int query_batt_timer = BATTERY_POLLING_COUNT;
static struct adb_request batt_req;
static struct proc_dir_entry *proc_pmu_batt[PMU_MAX_BATTERIES];
int __fake_sleep;
int asleep;
static int adb_dev_map;
static int pmu_adb_flags;
static int pmu_probe(void);
static int pmu_init(void);
static int pmu_send_request(struct adb_request *req, int sync);
static int pmu_adb_autopoll(int devs);
static int pmu_adb_reset_bus(void);
static int init_pmu(void);
static void pmu_start(void);
static irqreturn_t via_pmu_interrupt(int irq, void *arg);
static irqreturn_t gpio1_interrupt(int irq, void *arg);
static const struct file_operations pmu_info_proc_fops;
static const struct file_operations pmu_irqstats_proc_fops;
static void pmu_pass_intr(unsigned char *data, int len);
static const struct file_operations pmu_battery_proc_fops;
static const struct file_operations pmu_options_proc_fops;
struct adb_driver via_pmu_driver = ;
extern void low_sleep_handler(void);
extern void enable_kernel_altivec(void);
extern void enable_kernel_fp(void);
int pmu_polled_request(struct adb_request *req);
void pmu_blink(int n);
static const s8 pmu_data_len[256][2] = ;
static char *pbook_type[] = ;
int __init find_via_pmu(void)
static int pmu_probe(void)
static int __init pmu_init(void)
static int __init via_pmu_start(void)
arch_initcall(via_pmu_start);
static int __init via_pmu_dev_init(void)
device_initcall(via_pmu_dev_init);
static int
init_pmu(void)
int
pmu_get_model(void)
static void pmu_set_server_mode(int server_mode)
static void
done_battery_state_ohare(struct adb_request* req)
static void
done_battery_state_smart(struct adb_request* req)
static void
query_battery_state(void)
static int pmu_info_proc_show(struct seq_file *m, void *v)
static int pmu_info_proc_open(struct inode *inode, struct file *file)
static const struct file_operations pmu_info_proc_fops = ;
static int pmu_irqstats_proc_show(struct seq_file *m, void *v)
static int pmu_irqstats_proc_open(struct inode *inode, struct file *file)
static const struct file_operations pmu_irqstats_proc_fops = ;
static int pmu_battery_proc_show(struct seq_file *m, void *v)
static int pmu_battery_proc_open(struct inode *inode, struct file *file)
static const struct file_operations pmu_battery_proc_fops = ;
static int pmu_options_proc_show(struct seq_file *m, void *v)
static int pmu_options_proc_open(struct inode *inode, struct file *file)
static ssize_t pmu_options_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations pmu_options_proc_fops = ;
static int pmu_send_request(struct adb_request *req, int sync)
static int __pmu_adb_autopoll(int devs)
static int pmu_adb_autopoll(int devs)
static int pmu_adb_reset_bus(void)
int
pmu_request(struct adb_request *req, void (*done)(struct adb_request *),
int nbytes, ...)
int
pmu_queue_request(struct adb_request *req)
static inline void
wait_for_ack(void)
static inline void
send_byte(int x)
static inline void
recv_byte(void)
static inline void
pmu_done(struct adb_request *req)
static void
pmu_start(void)
void
pmu_poll(void)
void
pmu_poll_adb(void)
void
pmu_wait_complete(struct adb_request *req)
void
pmu_suspend(void)
void
pmu_resume(void)
static void
pmu_handle_data(unsigned char *data, int len)
static struct adb_request*
pmu_sr_intr(void)
static irqreturn_t
via_pmu_interrupt(int irq, void *arg)
void
pmu_unlock(void)
static irqreturn_t
gpio1_interrupt(int irq, void *arg)
void
pmu_enable_irled(int on)
void
pmu_restart(void)
void
pmu_shutdown(void)
int
pmu_present(void)
#if defined(CONFIG_SUSPEND) && defined(CONFIG_PPC32)
static u32 save_via[8];
static void
save_via_state(void)
static void
restore_via_state(void)
#define	GRACKLE_PM	(1<<7)
#define GRACKLE_DOZE	(1<<5)
#define	GRACKLE_NAP	(1<<4)
#define	GRACKLE_SLEEP	(1<<3)
static int powerbook_sleep_grackle(void)
static int
powerbook_sleep_Core99(void)
#define PB3400_MEM_CTRL		0xf8000000
#define PB3400_MEM_CTRL_SLEEP	0x70
static void __iomem *pb3400_mem_ctrl;
static void powerbook_sleep_init_3400(void)
static int powerbook_sleep_3400(void)
#define RB_SIZE		0x10
struct pmu_private ;
static LIST_HEAD(all_pmu_pvt);
static DEFINE_SPINLOCK(all_pvt_lock);
static void
pmu_pass_intr(unsigned char *data, int len)
static int
pmu_open(struct inode *inode, struct file *file)
static ssize_t
pmu_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t
pmu_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static unsigned int
pmu_fpoll(struct file *filp, poll_table *wait)
static int
pmu_release(struct inode *inode, struct file *file)
#if defined(CONFIG_SUSPEND) && defined(CONFIG_PPC32)
static void pmac_suspend_disable_irqs(void)
static int powerbook_sleep(suspend_state_t state)
static void pmac_suspend_enable_irqs(void)
static int pmu_sleep_valid(suspend_state_t state)
static const struct platform_suspend_ops pmu_pm_ops = ;
static int register_pmu_pm_ops(void)
device_initcall(register_pmu_pm_ops);
static int pmu_ioctl(struct file *filp,
u_int cmd, u_long arg)
static long pmu_unlocked_ioctl(struct file *filp,
u_int cmd, u_long arg)
#define PMU_IOC_GET_BACKLIGHT32	_IOR('B', 1, compat_size_t)
#define PMU_IOC_SET_BACKLIGHT32	_IOW('B', 2, compat_size_t)
#define PMU_IOC_GET_MODEL32	_IOR('B', 3, compat_size_t)
#define PMU_IOC_HAS_ADB32	_IOR('B', 4, compat_size_t)
#define PMU_IOC_CAN_SLEEP32	_IOR('B', 5, compat_size_t)
#define PMU_IOC_GRAB_BACKLIGHT32 _IOR('B', 6, compat_size_t)
static long compat_pmu_ioctl (struct file *filp, u_int cmd, u_long arg)
static const struct file_operations pmu_device_fops = ;
static struct miscdevice pmu_device = ;
static int pmu_device_init(void)
device_initcall(pmu_device_init);
static inline void
polled_handshake(volatile unsigned char __iomem *via)
static inline void
polled_send_byte(volatile unsigned char __iomem *via, int x)
static inline int
polled_recv_byte(volatile unsigned char __iomem *via)
int
pmu_polled_request(struct adb_request *req)
void pmu_blink(int n)
#if defined(CONFIG_SUSPEND) && defined(CONFIG_PPC32)
int pmu_sys_suspended;
static int pmu_syscore_suspend(void)
static void pmu_syscore_resume(void)
static struct syscore_ops pmu_syscore_ops = ;
static int pmu_syscore_register(void)
subsys_initcall(pmu_syscore_register);
EXPORT_SYMBOL(pmu_request);
EXPORT_SYMBOL(pmu_queue_request);
EXPORT_SYMBOL(pmu_poll);
EXPORT_SYMBOL(pmu_poll_adb);
EXPORT_SYMBOL(pmu_wait_complete);
EXPORT_SYMBOL(pmu_suspend);
EXPORT_SYMBOL(pmu_resume);
EXPORT_SYMBOL(pmu_unlock);
#if defined(CONFIG_PPC32)
EXPORT_SYMBOL(pmu_enable_irled);
EXPORT_SYMBOL(pmu_battery_count);
EXPORT_SYMBOL(pmu_batteries);
EXPORT_SYMBOL(pmu_power_flags);
