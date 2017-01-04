struct cpu_task cpu_tasks[NR_CPUS] = ;
static inline int external_pid(void)
int pid_to_processor_id(int pid)
void free_stack(unsigned long stack, int order)
unsigned long alloc_stack(int order, int atomic)
int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
static inline void set_current(struct task_struct *task)
extern void arch_switch_to(struct task_struct *to);
void *_switch_to(void *prev, void *next, void *last)
void interrupt_end(void)
void exit_thread(void)
void *get_current(void)
void new_thread_handler(void)
void fork_handler(void)
int copy_thread(unsigned long clone_flags, unsigned long sp,
unsigned long stack_top, struct task_struct * p,
struct pt_regs *regs)
void initial_thread_cb(void (*proc)(void *), void *arg)
void default_idle(void)
void cpu_idle(void)
int __cant_sleep(void)
int user_context(unsigned long sp)
extern exitcall_t __uml_exitcall_begin, __uml_exitcall_end;
void do_uml_exitcalls(void)
char *uml_strdup(const char *string)
int copy_to_user_proc(void __user *to, void *from, int size)
int copy_from_user_proc(void *to, void __user *from, int size)
int clear_user_proc(void __user *buf, int size)
int strlen_user_proc(char __user *str)
int smp_sigio_handler(void)
int cpu(void)
static atomic_t using_sysemu = ATOMIC_INIT(0);
int sysemu_supported;
void set_using_sysemu(int value)
int get_using_sysemu(void)
static int sysemu_proc_show(struct seq_file *m, void *v)
static int sysemu_proc_open(struct inode *inode, struct file *file)
static ssize_t sysemu_proc_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static const struct file_operations sysemu_proc_fops = ;
int __init make_proc_sysemu(void)
late_initcall(make_proc_sysemu);
int singlestepping(void * t)
unsigned long arch_align_stack(unsigned long sp)
unsigned long get_wchan(struct task_struct *p)
int elf_core_copy_fpregs(struct task_struct *t, elf_fpregset_t *fpu)
