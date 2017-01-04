#define _ASM_MICROBLAZE_PROCESSOR_H
# ifndef __ASSEMBLY__
extern const struct seq_operations cpuinfo_op;
# define cpu_relax()		barrier()
# define cpu_sleep()		do  while (0)
# define prepare_to_copy(tsk)	do  while (0)
#define task_pt_regs(tsk) \
(((struct pt_regs *)(THREAD_SIZE + task_stack_page(tsk))) - 1)
void start_thread(struct pt_regs *regs, unsigned long pc, unsigned long usp);
# endif
# ifndef CONFIG_MMU
# define TASK_SIZE	(0x81000000 - 0x80000000)
# define current_text_addr() ()
# define TASK_UNMAPPED_BASE	0
struct task_struct;
struct thread_struct ;
# define INIT_THREAD
static inline void release_thread(struct task_struct *dead_task)
static inline void exit_thread(void)
extern unsigned long thread_saved_pc(struct task_struct *t);
extern unsigned long get_wchan(struct task_struct *p);
extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
# define KSTK_EIP(tsk)	(0)
# define KSTK_ESP(tsk)	(0)
# else
# define TASK_SIZE	(CONFIG_KERNEL_START)
# define TASK_UNMAPPED_BASE	(TASK_SIZE / 8 * 3)
# define THREAD_KSP	0
#  ifndef __ASSEMBLY__
#  define current_text_addr()	()
struct thread_struct ;
#  define INIT_THREAD
void start_thread(struct pt_regs *regs,
unsigned long pc, unsigned long usp);
extern inline void release_thread(struct task_struct *dead_task)
extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
static inline void exit_thread(void)
#  define thread_saved_pc(tsk)	\
((tsk)->thread.regs ? (tsk)->thread.regs->r15 : 0)
unsigned long get_wchan(struct task_struct *p);
# define KERNEL_STACK_SIZE	0x2000
#  define task_tos(task)	((unsigned long)(task) + KERNEL_STACK_SIZE)
#  define task_regs(task) ((struct pt_regs *)task_tos(task) - 1)
#  define task_pt_regs_plus_args(tsk) \
((void *)task_pt_regs(tsk))
#  define task_sp(task)	(task_regs(task)->r1)
#  define task_pc(task)	(task_regs(task)->pc)
#  define KSTK_EIP(task)	(task_pc(task))
#  define KSTK_ESP(task)	(task_sp(task))
#  define deactivate_mm(tsk, mm)	do  while (0)
#  define STACK_TOP	TASK_SIZE
#  define STACK_TOP_MAX	STACK_TOP
#  endif
# endif
