#define _ASM_PROCESSOR_H
#define current_text_addr() ()
struct task_struct;
struct cpuinfo_frv  __cacheline_aligned;
extern struct cpuinfo_frv __nongprelbss boot_cpu_data;
#define cpu_data		(&boot_cpu_data)
#define current_cpu_data	boot_cpu_data
#define EISA_bus 0
#define MCA_bus 0
struct thread_struct  __attribute__((aligned(8)));
extern struct pt_regs *__kernel_frame0_ptr;
extern struct task_struct *__kernel_current_task;
#define INIT_THREAD_FRAME0 \
((struct pt_regs *) \
(sizeof(init_stack) + (unsigned long) init_stack - sizeof(struct user_context)))
#define INIT_THREAD
#define start_thread(_regs, _pc, _usp)			\
do  while(0)
extern void prepare_to_copy(struct task_struct *tsk);
static inline void release_thread(struct task_struct *dead_task)
extern asmlinkage int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
extern asmlinkage void save_user_regs(struct user_context *target);
extern asmlinkage void *restore_user_regs(const struct user_context *target, ...);
#define copy_segments(tsk, mm)		do  while (0)
#define release_segments(mm)		do  while (0)
#define forget_segments()		do  while (0)
static inline void exit_thread(void)
extern unsigned long thread_saved_pc(struct task_struct *tsk);
unsigned long get_wchan(struct task_struct *p);
#define	KSTK_EIP(tsk)	((tsk)->thread.frame0->pc)
#define	KSTK_ESP(tsk)	((tsk)->thread.frame0->sp)
extern struct task_struct *alloc_task_struct_node(int node);
extern void free_task_struct(struct task_struct *p);
#define cpu_relax()    barrier()
#define ARCH_HAS_PREFETCH
static inline void prefetch(const void *x)
