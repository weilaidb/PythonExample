#define _ASM_M32R_PROCESSOR_H
#define current_text_addr() ()
struct cpuinfo_m32r ;
extern struct cpuinfo_m32r boot_cpu_data;
extern struct cpuinfo_m32r cpu_data[];
#define current_cpu_data cpu_data[smp_processor_id()]
#define cpu_data (&boot_cpu_data)
#define current_cpu_data boot_cpu_data
#define TASK_SIZE  (0x80000000UL)
#define TASK_SIZE  (0x00400000UL)
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	STACK_TOP
#define TASK_UNMAPPED_BASE	PAGE_ALIGN(TASK_SIZE / 3)
typedef struct  mm_segment_t;
#define MAX_TRAPS 10
struct debug_trap ;
struct thread_struct ;
#define INIT_SP	(sizeof(init_stack) + (unsigned long) &init_stack)
#define INIT_THREAD
#define USERPS_BPSW (M32R_PSW_BSM|M32R_PSW_BIE|M32R_PSW_BPM)
#define start_thread(regs, new_pc, new_spu) 				\
do  while (0)
struct task_struct;
struct mm_struct;
extern void release_thread(struct task_struct *);
#define prepare_to_copy(tsk)	do  while (0)
extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
extern void copy_segments(struct task_struct *p, struct mm_struct * mm);
extern void release_segments(struct mm_struct * mm);
extern unsigned long thread_saved_pc(struct task_struct *);
#define copy_segments(p, mm)  do  while (0)
#define release_segments(mm)  do  while (0)
unsigned long get_wchan(struct task_struct *p);
#define KSTK_EIP(tsk)  ((tsk)->thread.lr)
#define KSTK_ESP(tsk)  ((tsk)->thread.sp)
#define cpu_relax()	barrier()
