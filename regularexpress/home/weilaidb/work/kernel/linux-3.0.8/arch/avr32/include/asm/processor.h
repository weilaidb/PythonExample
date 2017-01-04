#define __ASM_AVR32_PROCESSOR_H
#define TASK_SIZE	0x80000000
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	STACK_TOP
static inline void *current_text_addr(void)
enum arch_type ;
enum cpu_type ;
enum tlb_config ;
#define AVR32_FEATURE_RMW	(1 << 0)
#define AVR32_FEATURE_DSP	(1 << 1)
#define AVR32_FEATURE_SIMD	(1 << 2)
#define AVR32_FEATURE_OCD	(1 << 3)
#define AVR32_FEATURE_PCTR	(1 << 4)
#define AVR32_FEATURE_JAVA	(1 << 5)
#define AVR32_FEATURE_FPU	(1 << 6)
struct avr32_cpuinfo ;
static inline unsigned int avr32_get_manufacturer_id(struct avr32_cpuinfo *cpu)
static inline unsigned int avr32_get_product_number(struct avr32_cpuinfo *cpu)
static inline unsigned int avr32_get_chip_revision(struct avr32_cpuinfo *cpu)
extern struct avr32_cpuinfo boot_cpu_data;
extern struct avr32_cpuinfo cpu_data[];
#define current_cpu_data cpu_data[smp_processor_id()]
#define cpu_data (&boot_cpu_data)
#define current_cpu_data boot_cpu_data
#define TASK_UNMAPPED_BASE	(PAGE_ALIGN(TASK_SIZE / 3))
#define cpu_relax()		barrier()
#define cpu_sync_pipeline()	asm volatile("sub pc, -2" : : : "memory")
struct cpu_context ;
struct thread_struct ;
#define INIT_THREAD
#define start_thread(regs, new_pc, new_sp)	 \
do  while(0)
struct task_struct;
extern void release_thread(struct task_struct *);
extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
#define prepare_to_copy(tsk) do  while(0)
#define thread_saved_pc(tsk)    ((tsk)->thread.cpu_context.pc)
struct pt_regs;
extern unsigned long get_wchan(struct task_struct *p);
extern void show_regs_log_lvl(struct pt_regs *regs, const char *log_lvl);
extern void show_stack_log_lvl(struct task_struct *tsk, unsigned long sp,
struct pt_regs *regs, const char *log_lvl);
#define task_pt_regs(p) \
((struct pt_regs *)(THREAD_SIZE + task_stack_page(p)) - 1)
#define KSTK_EIP(tsk)	((tsk)->thread.cpu_context.pc)
#define KSTK_ESP(tsk)	((tsk)->thread.cpu_context.ksp)
#define ARCH_HAS_PREFETCH
static inline void prefetch(const void *x)
#define PREFETCH_STRIDE	L1_CACHE_BYTES
