#define __ASM_AVR32_SYSTEM_H
#define xchg(ptr,x) \
((__typeof__(*(ptr)))__xchg((unsigned long)(x),(ptr),sizeof(*(ptr))))
#define nop() asm volatile("nop")
#define mb()			asm volatile("" : : : "memory")
#define rmb()			mb()
#define wmb()			asm volatile("sync 0" : : : "memory")
#define read_barrier_depends()  do  while(0)
#define set_mb(var, value)      do  while(0)
#define finish_arch_switch(prev)			\
do  while(0)
struct cpu_context;
struct task_struct;
extern struct task_struct *__switch_to(struct task_struct *,
struct cpu_context *,
struct cpu_context *);
#define switch_to(prev, next, last)					\
do  while (0)
# error "The AVR32 port does not support SMP"
# define smp_mb()		barrier()
# define smp_rmb()		barrier()
# define smp_wmb()		barrier()
# define smp_read_barrier_depends() do  while(0)
extern void __xchg_called_with_bad_pointer(void);
static inline unsigned long xchg_u32(u32 val, volatile u32 *m)
static inline unsigned long __xchg(unsigned long x,
volatile void *ptr,
int size)
static inline unsigned long __cmpxchg_u32(volatile int *m, unsigned long old,
unsigned long new)
extern unsigned long __cmpxchg_u64_unsupported_on_32bit_kernels(
volatile int * m, unsigned long old, unsigned long new);
#define __cmpxchg_u64 __cmpxchg_u64_unsupported_on_32bit_kernels
extern void __cmpxchg_called_with_bad_pointer(void);
#define __HAVE_ARCH_CMPXCHG 1
static inline unsigned long __cmpxchg(volatile void *ptr, unsigned long old,
unsigned long new, int size)
#define cmpxchg(ptr, old, new)					\
((typeof(*(ptr)))__cmpxchg((ptr), (unsigned long)(old),	\
(unsigned long)(new),	\
sizeof(*(ptr))))
static inline unsigned long __cmpxchg_local(volatile void *ptr,
unsigned long old,
unsigned long new, int size)
#define cmpxchg_local(ptr, old, new)					\
((typeof(*(ptr)))__cmpxchg_local((ptr), (unsigned long)(old),	\
(unsigned long)(new),		\
sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
struct pt_regs;
void NORET_TYPE die(const char *str, struct pt_regs *regs, long err);
void _exception(long signr, struct pt_regs *regs, int code,
unsigned long addr);
#define arch_align_stack(x)	(x)
