#define __ASM_PARISC_PROCESSOR_H
#define KERNEL_STACK_SIZE 	(4*PAGE_SIZE)
#define current_ia(x)	__asm__("mfia %0" : "=r"(x))
#define current_ia(x)	__asm__("blr 0,%0\n\tnop" : "=r"(x))
#define current_text_addr() ()
#define TASK_SIZE_OF(tsk)       ((tsk)->thread.task_size)
#define TASK_SIZE	        TASK_SIZE_OF(current)
#define TASK_UNMAPPED_BASE      (current->thread.map_base)
#define DEFAULT_TASK_SIZE32	(0xFFF00000UL)
#define DEFAULT_MAP_BASE32	(0x40000000UL)
#define DEFAULT_TASK_SIZE       (MAX_ADDRESS-0xf000000)
#define DEFAULT_MAP_BASE        (0x200000000UL)
#define DEFAULT_TASK_SIZE	DEFAULT_TASK_SIZE32
#define DEFAULT_MAP_BASE	DEFAULT_MAP_BASE32
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	DEFAULT_TASK_SIZE
struct system_cpuinfo_parisc ;
struct cpuinfo_parisc ;
extern struct system_cpuinfo_parisc boot_cpu_data;
DECLARE_PER_CPU(struct cpuinfo_parisc, cpu_data);
#define CPU_HVERSION ((boot_cpu_data.hversion >> 4) & 0x0FFF)
typedef struct  mm_segment_t;
#define ARCH_MIN_TASKALIGN	8
struct thread_struct ;
#define task_pt_regs(tsk) ((struct pt_regs *)&((tsk)->thread.regs))
#define PARISC_UAC_NOPRINT	(1UL << 0)
#define PARISC_UAC_SIGBUS	(1UL << 1)
#define PARISC_KERNEL_DEATH	(1UL << 31)
#define PARISC_UAC_SHIFT	0
#define PARISC_UAC_MASK		(PARISC_UAC_NOPRINT|PARISC_UAC_SIGBUS)
#define SET_UNALIGN_CTL(task,value)                                       \
()
#define GET_UNALIGN_CTL(task,addr)                                        \
()
#define INIT_THREAD
unsigned long thread_saved_pc(struct task_struct *t);
void show_trace(struct task_struct *task, unsigned long *stack);
typedef unsigned int elf_caddr_t;
#define start_thread_som(regs, new_pc, new_sp) do  while(0)
#define USER_WIDE_MODE	(!test_thread_flag(TIF_32BIT))
#define USER_WIDE_MODE	0
#define start_thread(regs, new_pc, new_sp) do  while(0)
struct task_struct;
struct mm_struct;
extern void release_thread(struct task_struct *);
extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
#define prepare_to_copy(tsk)	do  while (0)
extern void map_hpux_gateway_page(struct task_struct *tsk, struct mm_struct *mm);
extern unsigned long get_wchan(struct task_struct *p);
#define KSTK_EIP(tsk)	((tsk)->thread.regs.iaoq[0])
#define KSTK_ESP(tsk)	((tsk)->thread.regs.gr[30])
#define cpu_relax()	barrier()
static inline int parisc_requires_coherency(void)
