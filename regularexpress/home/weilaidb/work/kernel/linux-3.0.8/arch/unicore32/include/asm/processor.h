#define __UNICORE_PROCESSOR_H__
#define current_text_addr() ()
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	TASK_SIZE
struct debug_entry ;
struct debug_info ;
struct thread_struct ;
#define INIT_THREAD
#define start_thread(regs, pc, sp)					\
()
struct task_struct;
extern void release_thread(struct task_struct *);
#define prepare_to_copy(tsk)	do  while (0)
unsigned long get_wchan(struct task_struct *p);
#define cpu_relax()			barrier()
extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
#define task_pt_regs(p) \
((struct pt_regs *)(THREAD_START_SP + task_stack_page(p)) - 1)
#define KSTK_EIP(tsk)	(task_pt_regs(tsk)->UCreg_pc)
#define KSTK_ESP(tsk)	(task_pt_regs(tsk)->UCreg_sp)
