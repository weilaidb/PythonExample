#define __ASM_S390_PROCESSOR_H
#define current_text_addr() ()
static inline void get_cpu_id(struct cpuid *ptr)
extern void s390_adjust_jiffies(void);
extern int get_cpu_capability(unsigned int *);
#define TASK_SIZE		(1UL << 31)
#define TASK_UNMAPPED_BASE	(1UL << 30)
#define TASK_SIZE_OF(tsk)	((tsk)->mm->context.asce_limit)
#define TASK_UNMAPPED_BASE	(test_thread_flag(TIF_31BIT) ? \
(1UL << 30) : (1UL << 41))
#define TASK_SIZE		TASK_SIZE_OF(current)
#define STACK_TOP		(1UL << 31)
#define STACK_TOP_MAX		(1UL << 31)
#define STACK_TOP		(1UL << (test_thread_flag(TIF_31BIT) ? 31:42))
#define STACK_TOP_MAX		(1UL << 42)
#define HAVE_ARCH_PICK_MMAP_LAYOUT
typedef struct  mm_segment_t;
struct thread_struct ;
typedef struct thread_struct thread_struct;
struct stack_frame ;
struct stack_frame ;
#define ARCH_MIN_TASKALIGN	8
#define INIT_THREAD
#define start_thread(regs, new_psw, new_stackp) do  while (0)
#define start_thread31(regs, new_psw, new_stackp) do  while (0)
struct task_struct;
struct mm_struct;
struct seq_file;
extern void release_thread(struct task_struct *);
extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
#define prepare_to_copy(tsk)	do  while (0)
extern unsigned long thread_saved_pc(struct task_struct *t);
extern void show_code(struct pt_regs *regs);
unsigned long get_wchan(struct task_struct *p);
#define task_pt_regs(tsk) ((struct pt_regs *) \
(task_stack_page(tsk) + THREAD_SIZE) - 1)
#define KSTK_EIP(tsk)	(task_pt_regs(tsk)->psw.addr)
#define KSTK_ESP(tsk)	(task_pt_regs(tsk)->gprs[15])
static inline void cpu_relax(void)
static inline void psw_set_key(unsigned int key)
static inline void __load_psw(psw_t psw)
static inline void __load_psw_mask (unsigned long mask)
static inline void enabled_wait(void)
static inline void ATTRIB_NORET disabled_wait(unsigned long code)
extern void s390_base_mcck_handler(void);
extern void s390_base_pgm_handler(void);
extern void s390_base_ext_handler(void);
extern void (*s390_base_mcck_handler_fn)(void);
extern void (*s390_base_pgm_handler_fn)(void);
extern void (*s390_base_ext_handler_fn)(void);
#define ARCH_LOW_ADDRESS_LIMIT	0x7fffffffUL
#define EX_TABLE(_fault,_target)			\
".section __ex_table,\"a\"\n"			\
"	.align 4\n"				\
"	.long  " #_fault "," #_target "\n"	\
".previous\n"
#define EX_TABLE(_fault,_target)			\
".section __ex_table,\"a\"\n"			\
"	.align 8\n"				\
"	.quad  " #_fault "," #_target "\n"	\
".previous\n"
