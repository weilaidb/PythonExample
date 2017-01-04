asmlinkage void ret_from_fork(void);
void *current_l1_stack_save;
int nr_l1stack_tasks;
void *l1_stack_base;
unsigned long l1_stack_len;
void (*pm_idle)(void) = NULL;
EXPORT_SYMBOL(pm_idle);
void (*pm_power_off)(void) = NULL;
EXPORT_SYMBOL(pm_power_off);
static void default_idle(void)__attribute__((l1_text));
void cpu_idle(void)__attribute__((l1_text));
static void default_idle(void)
void cpu_idle(void)
void kernel_thread_helper(void);
__asm__(".section .text\n"
".align 4\n"
"_kernel_thread_helper:\n\t"
"\tsp += -12;\n\t"
"\tr0 = r1;\n\t" "\tcall (p1);\n\t" "\tcall _do_exit;\n" ".previous");
pid_t kernel_thread(int (*fn) (void *), void *arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void start_thread(struct pt_regs *regs, unsigned long new_ip, unsigned long new_sp)
EXPORT_SYMBOL_GPL(start_thread);
void flush_thread(void)
asmlinkage int bfin_vfork(struct pt_regs *regs)
asmlinkage int bfin_clone(struct pt_regs *regs)
int
copy_thread(unsigned long clone_flags,
unsigned long usp, unsigned long topstk,
struct task_struct *p, struct pt_regs *regs)
asmlinkage int sys_execve(const char __user *name,
const char __user *const __user *argv,
const char __user *const __user *envp)
unsigned long get_wchan(struct task_struct *p)
void finish_atomic_sections (struct pt_regs *regs)
static inline
int in_mem(unsigned long addr, unsigned long size,
unsigned long start, unsigned long end)
static inline
int in_mem_const_off(unsigned long addr, unsigned long size, unsigned long off,
unsigned long const_addr, unsigned long const_size)
static inline
int in_mem_const(unsigned long addr, unsigned long size,
unsigned long const_addr, unsigned long const_size)
#define ASYNC_ENABLED(bnum, bctlnum) \
()
static
int in_async(unsigned long addr, unsigned long size)
int bfin_mem_access_type(unsigned long addr, unsigned long size)
#if defined(CONFIG_ACCESS_CHECK)
__attribute__((l1_text))
int _access_ok(unsigned long addr, unsigned long size)
EXPORT_SYMBOL(_access_ok);
