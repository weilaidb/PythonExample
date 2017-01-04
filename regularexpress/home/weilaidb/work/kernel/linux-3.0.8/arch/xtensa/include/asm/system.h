#define _XTENSA_SYSTEM_H
#define smp_read_barrier_depends() do  while(0)
#define read_barrier_depends() do  while(0)
#define mb()  barrier()
#define rmb() mb()
#define wmb() mb()
#error smp_* not defined
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define set_mb(var, value)	do  while (0)
#if !defined (__ASSEMBLY__)
extern void *_switch_to(void *last, void *next);
#define switch_to(prev,next,last)		\
do  while(0)
static inline unsigned long
__cmpxchg_u32(volatile int *p, int old, int new)
extern void __cmpxchg_called_with_bad_pointer(void);
static __inline__ unsigned long
__cmpxchg(volatile void *ptr, unsigned long old, unsigned long new, int size)
#define cmpxchg(ptr,o,n)						      \
()
static inline unsigned long __cmpxchg_local(volatile void *ptr,
unsigned long old,
unsigned long new, int size)
#define cmpxchg_local(ptr, o, n)				  	       \
((__typeof__(*(ptr)))__cmpxchg_local_generic((ptr), (unsigned long)(o),\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
static inline unsigned long xchg_u32(volatile int * m, unsigned long val)
#define xchg(ptr,x) ((__typeof__(*(ptr)))__xchg((unsigned long)(x),(ptr),sizeof(*(ptr))))
extern void __xchg_called_with_bad_pointer(void);
static __inline__ unsigned long
__xchg(unsigned long x, volatile void * ptr, int size)
extern void set_except_vector(int n, void *addr);
static inline void spill_registers(void)
#define arch_align_stack(x) (x)
