#define __ASM_SH_PROCESSOR_64_H
#define current_text_addr() ()
#define TASK_SIZE	0x7ffff000UL
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	STACK_TOP
#define TASK_UNMAPPED_BASE	(TASK_SIZE / 3)
#if defined(CONFIG_SH64_SR_WATCH)
#define SR_MMU   0x84000000
#define SR_MMU   0x80000000
#define SR_IMASK 0x000000f0
#define SR_FD    0x00008000
#define SR_SSTEP 0x08000000
struct sh_fpu_hard_struct ;
struct sh_fpu_soft_struct ;
union thread_xstate ;
struct thread_struct ;
#define INIT_MMAP \
#define INIT_THREAD
#define SR_USER (SR_MMU | SR_FD)
#define start_thread(_regs, new_pc, new_sp)			\
_regs->sr = SR_USER;		\
_regs->pc = new_pc - 4;	\
_regs->pc |= 1;		\
_regs->regs[18] = 0;					\
_regs->regs[15] = new_sp
struct task_struct;
struct mm_struct;
extern void release_thread(struct task_struct *);
extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
#define copy_segments(p, mm)	do  while (0)
#define release_segments(mm)	do  while (0)
#define forget_segments()	do  while (0)
#define prepare_to_copy(tsk)	do  while (0)
static inline void disable_fpu(void)
static inline void enable_fpu(void)
#if defined(CONFIG_SH64_FPU_DENORM_FLUSH)
#define FPSCR_INIT  0x00040000
#define FPSCR_INIT  0x00000000
void fpinit(struct sh_fpu_hard_struct *fpregs);
#define fpinit(fpregs)	do  while (0)
extern struct task_struct *last_task_used_math;
#define thread_saved_pc(tsk)	(tsk->thread.pc)
extern unsigned long get_wchan(struct task_struct *p);
#define KSTK_EIP(tsk)  ((tsk)->thread.pc)
#define KSTK_ESP(tsk)  ((tsk)->thread.sp)
