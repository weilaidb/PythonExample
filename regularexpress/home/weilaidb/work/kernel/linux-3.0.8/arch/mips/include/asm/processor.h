#define _ASM_PROCESSOR_H
#define current_text_addr() ()
extern void (*cpu_wait)(void);
extern unsigned int vced_count, vcei_count;
#define HAVE_ARCH_PICK_MMAP_LAYOUT 1
#define SPECIAL_PAGES_SIZE PAGE_SIZE
#define TASK_SIZE	0x7fff8000UL
#define STACK_TOP_MAX	TASK_SIZE
#define TASK_IS_32BIT_ADDR 1
#define TASK_SIZE32	0x7fff8000UL
#define TASK_SIZE64	0x10000000000UL
#define TASK_SIZE (test_thread_flag(TIF_32BIT_ADDR) ? TASK_SIZE32 : TASK_SIZE64)
#define STACK_TOP_MAX	TASK_SIZE64
#define TASK_SIZE_OF(tsk)						\
(test_tsk_thread_flag(tsk, TIF_32BIT_ADDR) ? TASK_SIZE32 : TASK_SIZE64)
#define TASK_IS_32BIT_ADDR test_thread_flag(TIF_32BIT_ADDR)
#define STACK_TOP	((TASK_SIZE & PAGE_MASK) - SPECIAL_PAGES_SIZE)
#define TASK_UNMAPPED_BASE PAGE_ALIGN(TASK_SIZE / 3)
#define NUM_FPU_REGS	32
typedef __u64 fpureg_t;
struct mips_fpu_struct ;
#define NUM_DSP_REGS   6
typedef __u32 dspreg_t;
struct mips_dsp_state ;
#define INIT_CPUMASK
struct mips3264_watch_reg_state ;
union mips_watch_reg_state ;
struct octeon_cop2_state ;
#define INIT_OCTEON_COP2
struct octeon_cvmseg_state ;
typedef struct  mm_segment_t;
#define ARCH_MIN_TASKALIGN	8
struct mips_abi;
struct thread_struct ;
#define FPAFF_INIT						\
.emulated_fp			= 0,			\
.user_cpus_allowed		= INIT_CPUMASK,
#define FPAFF_INIT
#define OCTEON_INIT						\
.cp2			= INIT_OCTEON_COP2,
#define OCTEON_INIT
#define INIT_THREAD
struct task_struct;
#define release_thread(thread) do  while(0)
#define prepare_to_copy(tsk)	do  while (0)
extern long kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
extern unsigned long thread_saved_pc(struct task_struct *tsk);
extern void start_thread(struct pt_regs * regs, unsigned long pc, unsigned long sp);
unsigned long get_wchan(struct task_struct *p);
#define __KSTK_TOS(tsk) ((unsigned long)task_stack_page(tsk) + \
THREAD_SIZE - 32 - sizeof(struct pt_regs))
#define task_pt_regs(tsk) ((struct pt_regs *)__KSTK_TOS(tsk))
#define KSTK_EIP(tsk) (task_pt_regs(tsk)->cp0_epc)
#define KSTK_ESP(tsk) (task_pt_regs(tsk)->regs[29])
#define KSTK_STATUS(tsk) (task_pt_regs(tsk)->cp0_status)
#define cpu_relax()	barrier()
#define return_address() ()
#define ARCH_HAS_PREFETCH
#define prefetch(x) __builtin_prefetch((x), 0, 1)
#define ARCH_HAS_PREFETCHW
#define prefetchw(x) __builtin_prefetch((x), 1, 1)
