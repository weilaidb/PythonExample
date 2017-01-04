#define _ASM_PROCESSOR_H
struct task_struct;
struct mm_struct;
#define current_text_addr()			\
()
extern void get_mem_info(unsigned long *mem_base, unsigned long *mem_size);
extern void show_registers(struct pt_regs *regs);
struct mn10300_cpuinfo ;
extern struct mn10300_cpuinfo boot_cpu_data;
#if CONFIG_NR_CPUS < 2 || CONFIG_NR_CPUS > 8
# error Sorry, NR_CPUS should be 2 to 8
extern struct mn10300_cpuinfo cpu_data[];
#define current_cpu_data cpu_data[smp_processor_id()]
#define cpu_data &boot_cpu_data
#define current_cpu_data boot_cpu_data
extern void identify_cpu(struct mn10300_cpuinfo *);
extern void print_cpu_info(struct mn10300_cpuinfo *);
extern void dodgy_tsc(void);
#define cpu_relax() barrier()
#define TASK_SIZE		0x70000000
#define STACK_TOP		0x70000000
#define STACK_TOP_MAX		STACK_TOP
#define TASK_UNMAPPED_BASE	0x30000000
struct fpu_state_struct ;
struct thread_struct ;
#define INIT_THREAD		\
#define INIT_MMAP \
static inline void start_thread(struct pt_regs *regs,
unsigned long new_pc, unsigned long new_sp)
extern void release_thread(struct task_struct *);
extern void prepare_to_copy(struct task_struct *tsk);
extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
extern unsigned long thread_saved_pc(struct task_struct *tsk);
unsigned long get_wchan(struct task_struct *p);
#define task_pt_regs(task) ((task)->thread.uregs)
#define KSTK_EIP(task) (task_pt_regs(task)->pc)
#define KSTK_ESP(task) (task_pt_regs(task)->sp)
#define KSTK_TOP(info)				\
()
#define ARCH_HAS_PREFETCH
#define ARCH_HAS_PREFETCHW
static inline void prefetch(const void *x)
static inline void prefetchw(const void *x)
