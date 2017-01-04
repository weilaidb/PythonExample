#define __ASM_SPARC_PROCESSOR_H
#define current_text_addr() ()
#define wp_works_ok 1
#define wp_works_ok__is_a_macro
#define TASK_SIZE	PAGE_OFFSET
#define STACK_TOP	(PAGE_OFFSET - PAGE_SIZE)
#define STACK_TOP_MAX	STACK_TOP
struct task_struct;
struct fpq ;
typedef struct  mm_segment_t;
struct thread_struct ;
#define SPARC_FLAG_KTHREAD      0x1
#define SPARC_FLAG_UNALIGNED    0x2
#define INIT_THREAD
extern unsigned long thread_saved_pc(struct task_struct *t);
static inline void start_thread(struct pt_regs * regs, unsigned long pc,
unsigned long sp)
#define release_thread(tsk)		do  while(0)
extern pid_t kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
#define prepare_to_copy(tsk)	do  while (0)
extern unsigned long get_wchan(struct task_struct *);
#define task_pt_regs(tsk) ((tsk)->thread.kregs)
#define KSTK_EIP(tsk)  ((tsk)->thread.kregs->pc)
#define KSTK_ESP(tsk)  ((tsk)->thread.kregs->u_regs[UREG_FP])
extern struct task_struct *last_task_used_math;
#define cpu_relax()	barrier()
