#define _ASM_SCORE_PROCESSOR_H
struct task_struct;
extern void (*cpu_wait)(void);
extern long kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
extern unsigned long thread_saved_pc(struct task_struct *tsk);
extern void start_thread(struct pt_regs *regs,
unsigned long pc, unsigned long sp);
extern unsigned long get_wchan(struct task_struct *p);
#define current_text_addr() ()
#define cpu_relax()		barrier()
#define release_thread(thread)	do  while (0)
#define prepare_to_copy(tsk)	do  while (0)
#define TASK_SIZE	0x7fff8000UL
#define TASK_UNMAPPED_BASE	((TASK_SIZE / 3) & ~(PAGE_SIZE))
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	TASK_SIZE
struct thread_struct ;
#define INIT_THREAD
#define kstk_tos(tsk)		\
((unsigned long)task_stack_page(tsk) + THREAD_SIZE - 32)
#define task_pt_regs(tsk)	((struct pt_regs *)kstk_tos(tsk) - 1)
#define KSTK_EIP(tsk)		(task_pt_regs(tsk)->cp0_epc)
#define KSTK_ESP(tsk)		(task_pt_regs(tsk)->regs[29])
