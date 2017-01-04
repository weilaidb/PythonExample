#define __UM_PROCESSOR_GENERIC_H
struct pt_regs;
struct task_struct;
struct mm_struct;
struct thread_struct ;
#define INIT_THREAD \
extern struct task_struct *alloc_task_struct_node(int node);
static inline void release_thread(struct task_struct *task)
extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
static inline void prepare_to_copy(struct task_struct *tsk)
extern unsigned long thread_saved_pc(struct task_struct *t);
static inline void mm_copy_segments(struct mm_struct *from_mm,
struct mm_struct *new_mm)
#define init_stack	(init_thread_union.stack)
extern unsigned long task_size;
#define TASK_SIZE (task_size)
#undef STACK_TOP
#undef STACK_TOP_MAX
extern unsigned long stacksizelim;
#define STACK_ROOM	(stacksizelim)
#define STACK_TOP	(TASK_SIZE - 2 * PAGE_SIZE)
#define STACK_TOP_MAX	STACK_TOP
#define TASK_UNMAPPED_BASE	(0x40000000)
extern void start_thread(struct pt_regs *regs, unsigned long entry,
unsigned long stack);
struct cpuinfo_um ;
extern struct cpuinfo_um boot_cpu_data;
#define my_cpu_data		cpu_data[smp_processor_id()]
extern struct cpuinfo_um cpu_data[];
#define current_cpu_data cpu_data[smp_processor_id()]
#define cpu_data (&boot_cpu_data)
#define current_cpu_data boot_cpu_data
#define KSTK_REG(tsk, reg) get_thread_reg(reg, &tsk->thread.switch_buf)
extern unsigned long get_wchan(struct task_struct *p);
