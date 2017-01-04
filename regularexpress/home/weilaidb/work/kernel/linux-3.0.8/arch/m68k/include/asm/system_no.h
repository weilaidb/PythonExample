#define _M68KNOMMU_SYSTEM_H
asmlinkage void resume(void);
#define switch_to(prev,next,last)				\
#define iret() __asm__ __volatile__ ("rte": : :"memory", "sp", "cc")
#define nop()  asm volatile ("nop"::)
#define mb()   asm volatile (""   : : :"memory")
#define rmb()  asm volatile (""   : : :"memory")
#define wmb()  asm volatile (""   : : :"memory")
#define set_mb(var, value)	()
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do  while(0)
#define read_barrier_depends()  ((void)0)
#define xchg(ptr,x) ((__typeof__(*(ptr)))__xchg((unsigned long)(x),(ptr),sizeof(*(ptr))))
struct __xchg_dummy ;
#define __xg(x) ((volatile struct __xchg_dummy *)(x))
static inline unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
static inline unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
#define cmpxchg_local(ptr, o, n)				  	       \
((__typeof__(*(ptr)))__cmpxchg_local_generic((ptr), (unsigned long)(o),\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
#define arch_align_stack(x) (x)
