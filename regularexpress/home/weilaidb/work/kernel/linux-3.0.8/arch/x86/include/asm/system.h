#define _ASM_X86_SYSTEM_H
#if defined(CONFIG_IA32_EMULATION) || !defined(CONFIG_X86_64)
# define AT_VECTOR_SIZE_ARCH 2
# define AT_VECTOR_SIZE_ARCH 1
struct task_struct;
struct task_struct *__switch_to(struct task_struct *prev,
struct task_struct *next);
struct tss_struct;
void __switch_to_xtra(struct task_struct *prev_p, struct task_struct *next_p,
struct tss_struct *tss);
extern void show_regs_common(void);
#define __switch_canary							\
"movl %P[task_canary](%[next]), %%ebx\n\t"			\
"movl %%ebx, "__percpu_arg([stack_canary])"\n\t"
#define __switch_canary_oparam						\
, [stack_canary] "=m" (stack_canary.canary)
#define __switch_canary_iparam						\
, [task_canary] "i" (offsetof(struct task_struct, stack_canary))
#define __switch_canary
#define __switch_canary_oparam
#define __switch_canary_iparam
#define switch_to(prev, next, last)					\
do  while (0)
#define HAVE_DISABLE_HLT
#define SAVE_CONTEXT    "pushf ; pushq %%rbp ; movq %%rsi,%%rbp\n\t"
#define RESTORE_CONTEXT "movq %%rbp,%%rsi ; popq %%rbp ; popf\t"
#define __EXTRA_CLOBBER  \
, "rcx", "rbx", "rdx", "r8", "r9", "r10", "r11", \
"r12", "r13", "r14", "r15"
#define __switch_canary							  \
"movq %P[task_canary](%%rsi),%%r8\n\t"				  \
"movq %%r8,"__percpu_arg([gs_canary])"\n\t"
#define __switch_canary_oparam						  \
, [gs_canary] "=m" (irq_stack_union.stack_canary)
#define __switch_canary_iparam						  \
, [task_canary] "i" (offsetof(struct task_struct, stack_canary))
#define __switch_canary
#define __switch_canary_oparam
#define __switch_canary_iparam
#define switch_to(prev, next, last) \
asm volatile(SAVE_CONTEXT					  \
"movq %%rsp,%P[threadrsp](%[prev])\n\t"	  \
"movq %P[threadrsp](%[next]),%%rsp\n\t"	  \
"call __switch_to\n\t"					  \
"movq "__percpu_arg([current_task])",%%rsi\n\t"		  \
__switch_canary						  \
"movq %P[thread_info](%%rsi),%%r8\n\t"			  \
"movq %%rax,%%rdi\n\t" 					  \
"testl  %[_tif_fork],%P[ti_flags](%%r8)\n\t"		  \
"jnz   ret_from_fork\n\t"					  \
RESTORE_CONTEXT						  \
: "=a" (last)					  	  \
__switch_canary_oparam					  \
: [next] "S" (next), [prev] "D" (prev),			  \
[threadrsp] "i" (offsetof(struct task_struct, thread.sp)), \
[ti_flags] "i" (offsetof(struct thread_info, flags)),	  \
[_tif_fork] "i" (_TIF_FORK),			  	  \
[thread_info] "i" (offsetof(struct task_struct, stack)),   \
[current_task] "m" (current_task)			  \
__switch_canary_iparam					  \
: "memory", "cc" __EXTRA_CLOBBER)
extern void native_load_gs_index(unsigned);
#define loadsegment(seg, value)						\
do  while (0)
#define savesegment(seg, value)				\
asm("mov %%" #seg ",%0":"=r" (value) : : "memory")
#define get_user_gs(regs)	(u16)()
#define set_user_gs(regs, v)	loadsegment(gs, (unsigned long)(v))
#define task_user_gs(tsk)	((tsk)->thread.gs)
#define lazy_save_gs(v)		savesegment(gs, (v))
#define lazy_load_gs(v)		loadsegment(gs, (v))
#define get_user_gs(regs)	(u16)((regs)->gs)
#define set_user_gs(regs, v)	do  while (0)
#define task_user_gs(tsk)	(task_pt_regs(tsk)->gs)
#define lazy_save_gs(v)		do  while (0)
#define lazy_load_gs(v)		do  while (0)
static inline unsigned long get_limit(unsigned long segment)
static inline void native_clts(void)
static unsigned long __force_order;
static inline unsigned long native_read_cr0(void)
static inline void native_write_cr0(unsigned long val)
static inline unsigned long native_read_cr2(void)
static inline void native_write_cr2(unsigned long val)
static inline unsigned long native_read_cr3(void)
static inline void native_write_cr3(unsigned long val)
static inline unsigned long native_read_cr4(void)
static inline unsigned long native_read_cr4_safe(void)
static inline void native_write_cr4(unsigned long val)
static inline unsigned long native_read_cr8(void)
static inline void native_write_cr8(unsigned long val)
static inline void native_wbinvd(void)
static inline unsigned long read_cr0(void)
static inline void write_cr0(unsigned long x)
static inline unsigned long read_cr2(void)
static inline void write_cr2(unsigned long x)
static inline unsigned long read_cr3(void)
static inline void write_cr3(unsigned long x)
static inline unsigned long read_cr4(void)
static inline unsigned long read_cr4_safe(void)
static inline void write_cr4(unsigned long x)
static inline void wbinvd(void)
static inline unsigned long read_cr8(void)
static inline void write_cr8(unsigned long x)
static inline void load_gs_index(unsigned selector)
static inline void clts(void)
#define stts() write_cr0(read_cr0() | X86_CR0_TS)
static inline void clflush(volatile void *__p)
#define nop() asm volatile ("nop")
void disable_hlt(void);
void enable_hlt(void);
void cpu_idle_wait(void);
extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);
void default_idle(void);
void stop_this_cpu(void *dummy);
#define mb() alternative("lock; addl $0,0(%%esp)", "mfence", X86_FEATURE_XMM2)
#define rmb() alternative("lock; addl $0,0(%%esp)", "lfence", X86_FEATURE_XMM2)
#define wmb() alternative("lock; addl $0,0(%%esp)", "sfence", X86_FEATURE_XMM)
#define mb() 	asm volatile("mfence":::"memory")
#define rmb()	asm volatile("lfence":::"memory")
#define wmb()	asm volatile("sfence" ::: "memory")
#define read_barrier_depends()	do  while (0)
#define smp_mb()	mb()
# define smp_rmb()	rmb()
# define smp_rmb()	barrier()
# define smp_wmb() 	wmb()
# define smp_wmb()	barrier()
#define smp_read_barrier_depends()	read_barrier_depends()
#define set_mb(var, value) do  while (0)
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do  while (0)
#define set_mb(var, value) do  while (0)
static __always_inline void rdtsc_barrier(void)
#define NET_IP_ALIGN	0
