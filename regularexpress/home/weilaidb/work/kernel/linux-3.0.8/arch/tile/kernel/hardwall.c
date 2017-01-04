struct hardwall_info ;
static LIST_HEAD(rectangles);
static struct proc_dir_entry *hardwall_proc_dir;
static void hardwall_add_proc(struct hardwall_info *rect);
static void hardwall_remove_proc(struct hardwall_info *rect);
static DEFINE_SPINLOCK(hardwall_lock);
static int udn_disabled;
static int __init noudn(char *str)
early_param("noudn", noudn);
#define cpu_online_set(cpu, dst) do  while (0)
static int contains(struct hardwall_info *r, int x, int y)
static int setup_rectangle(struct hardwall_info *r, struct cpumask *mask)
static int overlaps(struct hardwall_info *a, struct hardwall_info *b)
enum direction_protect ;
static void enable_firewall_interrupts(void)
static void disable_firewall_interrupts(void)
static void hardwall_setup_ipi_func(void *info)
static void hardwall_setup(struct hardwall_info *r)
void __kprobes do_hardwall_trap(struct pt_regs* regs, int fault_num)
void grant_network_mpls(void)
void restrict_network_mpls(void)
static struct hardwall_info *hardwall_create(
size_t size, const unsigned char __user *bits)
static int hardwall_activate(struct hardwall_info *rect)
static void _hardwall_deactivate(struct task_struct *task)
int hardwall_deactivate(struct task_struct *task)
static void stop_udn_switch(void *ignored)
static void drain_udn_switch(void *ignored)
void reset_network_state(void)
static void restart_udn_switch(void *ignored)
static void fill_mask(struct hardwall_info *r, struct cpumask *result)
static void hardwall_destroy(struct hardwall_info *rect)
static int hardwall_proc_show(struct seq_file *sf, void *v)
static int hardwall_proc_open(struct inode *inode,
struct file *file)
static const struct file_operations hardwall_proc_fops = ;
static void hardwall_add_proc(struct hardwall_info *rect)
static void hardwall_remove_proc(struct hardwall_info *rect)
int proc_pid_hardwall(struct task_struct *task, char *buffer)
void proc_tile_hardwall_init(struct proc_dir_entry *root)
static long hardwall_ioctl(struct file *file, unsigned int a, unsigned long b)
static long hardwall_compat_ioctl(struct file *file,
unsigned int a, unsigned long b)
static int hardwall_flush(struct file *file, fl_owner_t owner)
static int hardwall_release(struct inode *inode, struct file *file)
static const struct file_operations dev_hardwall_fops = ;
static struct cdev hardwall_dev;
static int __init dev_hardwall_init(void)
late_initcall(dev_hardwall_init);
