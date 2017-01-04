static LIST_HEAD(dying_tasks);
static LIST_HEAD(dead_tasks);
static cpumask_var_t marked_cpus;
static DEFINE_SPINLOCK(task_mortuary);
static void process_task_mortuary(void);
static int
task_free_notify(struct notifier_block *self, unsigned long val, void *data)
static int
task_exit_notify(struct notifier_block *self, unsigned long val, void *data)
static int
munmap_notify(struct notifier_block *self, unsigned long val, void *data)
static int
module_load_notify(struct notifier_block *self, unsigned long val, void *data)
static struct notifier_block task_free_nb = ;
static struct notifier_block task_exit_nb = ;
static struct notifier_block munmap_nb = ;
static struct notifier_block module_load_nb = ;
static void free_all_tasks(void)
int sync_start(void)
void sync_stop(void)
static inline unsigned long fast_get_dcookie(struct path *path)
static unsigned long get_exec_dcookie(struct mm_struct *mm)
static unsigned long
lookup_dcookie(struct mm_struct *mm, unsigned long addr, off_t *offset)
static unsigned long last_cookie = INVALID_COOKIE;
static void add_cpu_switch(int i)
static void add_kernel_ctx_switch(unsigned int in_kernel)
static void
add_user_ctx_switch(struct task_struct const *task, unsigned long cookie)
static void add_cookie_switch(unsigned long cookie)
static void add_trace_begin(void)
static void add_data(struct op_entry *entry, struct mm_struct *mm)
static inline void add_sample_entry(unsigned long offset, unsigned long event)
static int
add_sample(struct mm_struct *mm, struct op_sample *s, int in_kernel)
static void release_mm(struct mm_struct *mm)
static struct mm_struct *take_tasks_mm(struct task_struct *task)
static inline int is_code(unsigned long val)
static void process_task_mortuary(void)
static void mark_done(int cpu)
typedef enum  sync_buffer_state;
void sync_buffer(int cpu)
void oprofile_put_buff(unsigned long *buf, unsigned int start,
unsigned int stop, unsigned int max)
