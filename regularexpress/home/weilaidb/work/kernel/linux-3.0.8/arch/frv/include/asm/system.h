#define _ASM_SYSTEM_H
struct thread_struct;
extern asmlinkage
struct task_struct *__switch_to(struct thread_struct *prev_thread,
struct thread_struct *next_thread,
struct task_struct *prev);
#define switch_to(prev, next, last)					\
do  while(0)
#define nop()			asm volatile ("nop"::)
#define mb()			asm volatile ("membar" : : :"memory")
#define rmb()			asm volatile ("membar" : : :"memory")
#define wmb()			asm volatile ("membar" : : :"memory")
#define read_barrier_depends()	do  while (0)
#define smp_mb()			barrier()
#define smp_rmb()			barrier()
#define smp_wmb()			barrier()
#define smp_read_barrier_depends()	do  while(0)
#define set_mb(var, value) \
do  while (0)
extern void die_if_kernel(const char *, ...) __attribute__((format(printf, 1, 2)));
extern void free_initmem(void);
#define arch_align_stack(x) (x)
extern uint64_t __cmpxchg_64(uint64_t test, uint64_t new, volatile uint64_t *v);
#define cmpxchg(ptr, test, new)							\
()
extern uint32_t __cmpxchg_32(uint32_t *v, uint32_t test, uint32_t new);
#define cmpxchg(ptr, test, new)							\
()
static inline unsigned long __cmpxchg_local(volatile void *ptr,
unsigned long old,
unsigned long new, int size)
#define cmpxchg_local(ptr, o, n)				  	\
((__typeof__(*(ptr)))__cmpxchg_local((ptr), (unsigned long)(o),	\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
