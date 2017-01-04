#define _ASM_TILE_PROCESSOR_H
struct task_struct;
struct thread_struct;
typedef struct  mm_segment_t;
void *current_text_addr(void);
#if CHIP_HAS_TILE_DMA()
struct tile_dma_state ;
#define DMA_STATUS_MASK \
(SPR_DMA_STATUS__RUNNING_MASK | SPR_DMA_STATUS__DONE_MASK)
struct async_tlb ;
struct hardwall_info;
struct thread_struct ;
#define STACK_TOP_DELTA 8
#define KSTK_PTREGS_GAP  48
#define KSTK_PTREGS_GAP  56
#define TASK_SIZE_MAX		(MEM_LOW_END + 1)
#define TASK_SIZE_MAX		PAGE_OFFSET
#define COMPAT_TASK_SIZE	(1UL << 31)
#define TASK_SIZE		((current_thread_info()->status & TS_COMPAT) ?\
COMPAT_TASK_SIZE : TASK_SIZE_MAX)
#define TASK_SIZE		TASK_SIZE_MAX
#define VDSO_BASE		(TASK_SIZE - PAGE_SIZE)
#define STACK_TOP		VDSO_BASE
#define STACK_TOP_MAX		TASK_SIZE_MAX
#define TASK_UNMAPPED_BASE	(PAGE_ALIGN(TASK_SIZE / 3))
#define HAVE_ARCH_PICK_MMAP_LAYOUT
#define INIT_THREAD
DECLARE_PER_CPU(unsigned long, boot_sp);
DECLARE_PER_CPU(unsigned long, boot_pc);
static inline void start_thread(struct pt_regs *regs,
unsigned long pc, unsigned long usp)
static inline void release_thread(struct task_struct *dead_task)
#define prepare_to_copy(tsk)	do  while (0)
extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
extern int do_work_pending(struct pt_regs *regs, u32 flags);
#define thread_saved_pc(t)   ((t)->thread.pc)
unsigned long get_wchan(struct task_struct *p);
#define task_ksp0(task) ((unsigned long)(task)->stack + THREAD_SIZE)
#define KSTK_TOP(task)	(task_ksp0(task) - STACK_TOP_DELTA)
#define task_pt_regs(task) \
((struct pt_regs *)(task_ksp0(task) - KSTK_PTREGS_GAP) - 1)
#define task_sp(task)	(task_pt_regs(task)->sp)
#define task_pc(task)	(task_pt_regs(task)->pc)
#define KSTK_EIP(task)	task_pc(task)
#define KSTK_ESP(task)	task_sp(task)
# define REGFMT "0x%016lx"
# define REGFMT "0x%08lx"
static inline void cpu_relax(void)
struct seq_operations;
extern const struct seq_operations cpuinfo_op;
extern char chip_model[64];
extern int node_controller[];
#if CHIP_HAS_CBOX_HOME_MAP()
extern int hash_default;
extern int kstack_hash;
#define uheap_hash hash_default
#define hash_default 0
#define kstack_hash 0
#define uheap_hash 0
extern int kdata_huge;
#define ARCH_HAS_PREFETCH
#define prefetch(x) __builtin_prefetch(x)
#define PREFETCH_STRIDE CHIP_L2_LINE_SIZE()
#define prefetch_L1(x) __insn_prefetch_l1_fault((void *)(x))
#define prefetch_L1(x) __insn_prefetch_L1((void *)(x))
#define CPU_RELAX       mfspr zero, SPR_PASS
#if SPR_EX_CONTEXT_1_1__PL_SHIFT != 0
# error Fix assembly assumptions about PL
#if SPR_EX_CONTEXT_1_1__PL_SHIFT != SPR_EX_CONTEXT_0_1__PL_SHIFT || \
SPR_EX_CONTEXT_1_1__PL_RMASK != SPR_EX_CONTEXT_0_1__PL_RMASK || \
SPR_EX_CONTEXT_1_1__ICS_SHIFT != SPR_EX_CONTEXT_0_1__ICS_SHIFT || \
SPR_EX_CONTEXT_1_1__ICS_RMASK != SPR_EX_CONTEXT_0_1__ICS_RMASK
# error Fix assumptions that EX1 macros work for both PL0 and PL1
#define EX1_PL(ex1) \
(((ex1) >> SPR_EX_CONTEXT_1_1__PL_SHIFT) & SPR_EX_CONTEXT_1_1__PL_RMASK)
#define EX1_ICS(ex1) \
(((ex1) >> SPR_EX_CONTEXT_1_1__ICS_SHIFT) & SPR_EX_CONTEXT_1_1__ICS_RMASK)
#define PL_ICS_EX1(pl, ics) \
(((pl) << SPR_EX_CONTEXT_1_1__PL_SHIFT) | \
((ics) << SPR_EX_CONTEXT_1_1__ICS_SHIFT))
#define USER_PL 0
#if CONFIG_KERNEL_PL == 2
#define GUEST_PL 1
#define KERNEL_PL CONFIG_KERNEL_PL
#define CPU_LOG_MASK_VALUE 12
#define CPU_MASK_VALUE ((1 << CPU_LOG_MASK_VALUE) - 1)
#if CONFIG_NR_CPUS > CPU_MASK_VALUE
# error Too many cpus!
#define raw_smp_processor_id() \
((int)__insn_mfspr(SPR_SYSTEM_SAVE_K_0) & CPU_MASK_VALUE)
#define get_current_ksp0() \
(__insn_mfspr(SPR_SYSTEM_SAVE_K_0) & ~CPU_MASK_VALUE)
#define next_current_ksp0(task) ()
