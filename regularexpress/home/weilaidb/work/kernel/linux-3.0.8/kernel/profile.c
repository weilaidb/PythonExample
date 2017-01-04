struct profile_hit ;
#define PROFILE_GRPSHIFT	3
#define PROFILE_GRPSZ		(1 << PROFILE_GRPSHIFT)
#define NR_PROFILE_HIT		(PAGE_SIZE/sizeof(struct profile_hit))
#define NR_PROFILE_GRP		(NR_PROFILE_HIT/PROFILE_GRPSZ)
static int (*timer_hook)(struct pt_regs *) __read_mostly;
static atomic_t *prof_buffer;
static unsigned long prof_len, prof_shift;
int prof_on __read_mostly;
EXPORT_SYMBOL_GPL(prof_on);
static cpumask_var_t prof_cpu_mask;
static DEFINE_PER_CPU(struct profile_hit *[2], cpu_profile_hits);
static DEFINE_PER_CPU(int, cpu_profile_flip);
static DEFINE_MUTEX(profile_flip_mutex);
int profile_setup(char *str)
__setup("profile=", profile_setup);
int __ref profile_init(void)
static BLOCKING_NOTIFIER_HEAD(task_exit_notifier);
static ATOMIC_NOTIFIER_HEAD(task_free_notifier);
static BLOCKING_NOTIFIER_HEAD(munmap_notifier);
void profile_task_exit(struct task_struct *task)
int profile_handoff_task(struct task_struct *task)
void profile_munmap(unsigned long addr)
int task_handoff_register(struct notifier_block *n)
EXPORT_SYMBOL_GPL(task_handoff_register);
int task_handoff_unregister(struct notifier_block *n)
EXPORT_SYMBOL_GPL(task_handoff_unregister);
int profile_event_register(enum profile_type type, struct notifier_block *n)
EXPORT_SYMBOL_GPL(profile_event_register);
int profile_event_unregister(enum profile_type type, struct notifier_block *n)
EXPORT_SYMBOL_GPL(profile_event_unregister);
int register_timer_hook(int (*hook)(struct pt_regs *))
EXPORT_SYMBOL_GPL(register_timer_hook);
void unregister_timer_hook(int (*hook)(struct pt_regs *))
EXPORT_SYMBOL_GPL(unregister_timer_hook);
static void __profile_flip_buffers(void *unused)
static void profile_flip_buffers(void)
static void profile_discard_flip_buffers(void)
static void do_profile_hits(int type, void *__pc, unsigned int nr_hits)
static int __cpuinit profile_cpu_callback(struct notifier_block *info,
unsigned long action, void *__cpu)
#define profile_flip_buffers()		do  while (0)
#define profile_discard_flip_buffers()	do  while (0)
#define profile_cpu_callback		NULL
static void do_profile_hits(int type, void *__pc, unsigned int nr_hits)
void profile_hits(int type, void *__pc, unsigned int nr_hits)
EXPORT_SYMBOL_GPL(profile_hits);
void profile_tick(int type)
static int prof_cpu_mask_proc_show(struct seq_file *m, void *v)
static int prof_cpu_mask_proc_open(struct inode *inode, struct file *file)
static ssize_t prof_cpu_mask_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations prof_cpu_mask_proc_fops = ;
void create_prof_cpu_mask(struct proc_dir_entry *root_irq_dir)
static ssize_t
read_profile(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static ssize_t write_profile(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_profile_operations = ;
static void profile_nop(void *unused)
static int create_hash_tables(void)
#define create_hash_tables()			()
int __ref create_proc_profile(void)
module_init(create_proc_profile);
