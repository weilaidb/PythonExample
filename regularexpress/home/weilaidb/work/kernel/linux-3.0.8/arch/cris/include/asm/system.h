#define __ASM_CRIS_SYSTEM_H
extern struct task_struct *resume(struct task_struct *prev, struct task_struct *next, int);
#define switch_to(prev,next,last) last = resume(prev,next, \
(int)&((struct task_struct *)0)->thread)
#define barrier() __asm__ __volatile__("": : :"memory")
#define mb() barrier()
#define rmb() mb()
#define wmb() mb()
#define read_barrier_depends() do  while(0)
#define set_mb(var, value)  do  while (0)
#define smp_mb()        mb()
#define smp_rmb()       rmb()
#define smp_wmb()       wmb()
#define smp_read_barrier_depends()     read_barrier_depends()
#define smp_mb()        barrier()
#define smp_rmb()       barrier()
#define smp_wmb()       barrier()
#define smp_read_barrier_depends()     do  while(0)
#define iret()
#define HAVE_DISABLE_HLT
void disable_hlt(void);
void enable_hlt(void);
static inline unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
#define cmpxchg_local(ptr, o, n)				 	       \
((__typeof__(*(ptr)))__cmpxchg_local_generic((ptr), (unsigned long)(o),\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
#define arch_align_stack(x) (x)
void default_idle(void);
