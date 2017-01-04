#define __ASM_BFIN_PROCESSOR_H
#define current_text_addr() ()
static inline unsigned long rdusp(void)
static inline void wrusp(unsigned long usp)
static inline unsigned long __get_SP(void)
#define TASK_SIZE	0xFFFFFFFF
#define STACK_TOP	TASK_SIZE
#define TASK_UNMAPPED_BASE	0
struct thread_struct ;
#define INIT_THREAD
extern void start_thread(struct pt_regs *regs, unsigned long new_ip,
unsigned long new_sp);
struct task_struct;
static inline void release_thread(struct task_struct *dead_task)
#define prepare_to_copy(tsk)	do  while (0)
extern int kernel_thread(int (*fn) (void *), void *arg, unsigned long flags);
static inline void exit_thread(void)
#define thread_saved_pc(tsk)	(tsk->thread.pc)
unsigned long get_wchan(struct task_struct *p);
#define	KSTK_EIP(tsk)							\
()
#define	KSTK_ESP(tsk)	((tsk) == current ? rdusp() : (tsk)->thread.usp)
#define cpu_relax()    	smp_mb()
static inline uint32_t __pure bfin_revid(void)
static inline uint16_t __pure bfin_cpuid(void)
static inline uint32_t __pure bfin_dspid(void)
#define blackfin_core_id() (bfin_dspid() & 0xff)
static inline uint32_t __pure bfin_compiled_revid(void)
