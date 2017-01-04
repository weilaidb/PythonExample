#define __ASM_M68K_PROCESSOR_H
#define current_text_addr() ()
static inline unsigned long rdusp(void)
static inline void wrusp(unsigned long usp)
#define TASK_SIZE	(0xF0000000UL)
#define TASK_SIZE	(0x0E000000UL)
#define TASK_SIZE	(0xFFFFFFFFUL)
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	STACK_TOP
#define TASK_UNMAPPED_BASE	0xC0000000UL
#define TASK_UNMAPPED_BASE	0x0A000000UL
#define TASK_UNMAPPED_ALIGN(addr, off)	PAGE_ALIGN(addr)
#define TASK_UNMAPPED_BASE	0
struct thread_struct ;
#define INIT_THREAD
static inline void start_thread(struct pt_regs * regs, unsigned long pc,
unsigned long usp)
extern int handle_kernel_fault(struct pt_regs *regs);
#define reformat(_regs)		do  while(0)
#define reformat(_regs)		do  while (0)
#define start_thread(_regs, _pc, _usp)                  \
do  while(0)
struct task_struct;
static inline void release_thread(struct task_struct *dead_task)
#define prepare_to_copy(tsk)	do  while (0)
extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
static inline void exit_thread(void)
extern unsigned long thread_saved_pc(struct task_struct *tsk);
unsigned long get_wchan(struct task_struct *p);
#define	KSTK_EIP(tsk)	\
()
#define	KSTK_ESP(tsk)	((tsk) == current ? rdusp() : (tsk)->thread.usp)
#define task_pt_regs(tsk)	((struct pt_regs *) ((tsk)->thread.esp0))
#define cpu_relax()	barrier()
