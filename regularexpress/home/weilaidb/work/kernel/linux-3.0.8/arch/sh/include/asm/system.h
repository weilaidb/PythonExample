#define __ASM_SH_SYSTEM_H
#define AT_VECTOR_SIZE_ARCH 5
#if defined(CONFIG_CPU_SH4A) || defined(CONFIG_CPU_SH5)
#define mb()		__asm__ __volatile__ ("synco": : :"memory")
#define rmb()		mb()
#define wmb()		__asm__ __volatile__ ("synco": : :"memory")
#define ctrl_barrier()	__icbi(PAGE_OFFSET)
#define read_barrier_depends()	do  while(0)
#define mb()		__asm__ __volatile__ ("": : :"memory")
#define rmb()		mb()
#define wmb()		__asm__ __volatile__ ("": : :"memory")
#define ctrl_barrier()	__asm__ __volatile__ ("nop;nop;nop;nop;nop;nop;nop;nop")
#define read_barrier_depends()	do  while(0)
#define smp_mb()	mb()
#define smp_rmb()	rmb()
#define smp_wmb()	wmb()
#define smp_read_barrier_depends()	read_barrier_depends()
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do  while(0)
#define set_mb(var, value) do  while (0)
#elif defined(CONFIG_CPU_SH4A)
extern void __xchg_called_with_bad_pointer(void);
#define __xchg(ptr, x, size)				\
()
#define xchg(ptr,x)	\
((__typeof__(*(ptr)))__xchg((ptr),(unsigned long)(x), sizeof(*(ptr))))
extern void __cmpxchg_called_with_bad_pointer(void);
#define __HAVE_ARCH_CMPXCHG 1
static inline unsigned long __cmpxchg(volatile void * ptr, unsigned long old,
unsigned long new, int size)
#define cmpxchg(ptr,o,n)						 \
()
struct pt_regs;
extern void die(const char *str, struct pt_regs *regs, long err) __attribute__ ((noreturn));
void free_initmem(void);
void free_initrd_mem(unsigned long start, unsigned long end);
extern void *set_exception_table_vec(unsigned int vec, void *handler);
static inline void *set_exception_table_evt(unsigned int evt, void *handler)
extern unsigned int instruction_size(unsigned int insn);
#elif defined(CONFIG_SUPERH32)
#define instruction_size(insn)	(2)
#define instruction_size(insn)	(4)
void per_cpu_trap_init(void);
void default_idle(void);
void cpu_idle_wait(void);
void stop_this_cpu(void *);
#define BUILD_TRAP_HANDLER(name)					\
asmlinkage void name##_trap_handler(unsigned long r4, unsigned long r5,	\
unsigned long r6, unsigned long r7,	\
struct pt_regs __regs)
#define TRAP_HANDLER_DECL				\
struct pt_regs *regs = RELOC_HIDE(&__regs, 0);	\
unsigned int vec = regs->tra;			\
(void)vec;
#define BUILD_TRAP_HANDLER(name)	\
asmlinkage void name##_trap_handler(unsigned int vec, struct pt_regs *regs)
#define TRAP_HANDLER_DECL
BUILD_TRAP_HANDLER(address_error);
BUILD_TRAP_HANDLER(debug);
BUILD_TRAP_HANDLER(bug);
BUILD_TRAP_HANDLER(breakpoint);
BUILD_TRAP_HANDLER(singlestep);
BUILD_TRAP_HANDLER(fpu_error);
BUILD_TRAP_HANDLER(fpu_state_restore);
BUILD_TRAP_HANDLER(nmi);
#define arch_align_stack(x) (x)
struct mem_access ;
# include "system_32.h"
# include "system_64.h"
