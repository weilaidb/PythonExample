#define __ASM_H8300_PROCESSOR_H
#define current_text_addr() ()
static inline unsigned long rdusp(void)
static inline void wrusp(unsigned long usp)
#define TASK_SIZE	(0xFFFFFFFFUL)
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	STACK_TOP
#define TASK_UNMAPPED_BASE	0
struct thread_struct ;
#define INIT_THREAD
#if defined(__H8300H__)
#define start_thread(_regs, _pc, _usp)			        \
do  while(0)
#if defined(__H8300S__)
#define start_thread(_regs, _pc, _usp)			        \
do  while(0)
struct task_struct;
static inline void release_thread(struct task_struct *dead_task)
extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
#define prepare_to_copy(tsk)	do  while (0)
static inline void exit_thread(void)
unsigned long thread_saved_pc(struct task_struct *tsk);
unsigned long get_wchan(struct task_struct *p);
#define	KSTK_EIP(tsk)	\
()
#define	KSTK_ESP(tsk)	((tsk) == current ? rdusp() : (tsk)->thread.usp)
#define cpu_relax()    barrier()
