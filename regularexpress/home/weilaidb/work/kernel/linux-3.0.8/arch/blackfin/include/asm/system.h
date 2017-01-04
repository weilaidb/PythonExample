#define _BLACKFIN_SYSTEM_H
#define nop()  __asm__ __volatile__ ("nop;\n\t" : : )
#define smp_mb()  mb()
#define smp_rmb() rmb()
#define smp_wmb() wmb()
#define set_mb(var, value) do  while (0)
#define smp_read_barrier_depends()	read_barrier_depends()
asmlinkage unsigned long __raw_xchg_1_asm(volatile void *ptr, unsigned long value);
asmlinkage unsigned long __raw_xchg_2_asm(volatile void *ptr, unsigned long value);
asmlinkage unsigned long __raw_xchg_4_asm(volatile void *ptr, unsigned long value);
asmlinkage unsigned long __raw_cmpxchg_1_asm(volatile void *ptr,
unsigned long new, unsigned long old);
asmlinkage unsigned long __raw_cmpxchg_2_asm(volatile void *ptr,
unsigned long new, unsigned long old);
asmlinkage unsigned long __raw_cmpxchg_4_asm(volatile void *ptr,
unsigned long new, unsigned long old);
# define mb()	do  while (0)
# define rmb()	do  while (0)
# define wmb()	do  while (0)
# define read_barrier_depends()	do  while (0)
# define mb()	barrier()
# define rmb()	barrier()
# define wmb()	barrier()
# define read_barrier_depends()	do  while (0)
static inline unsigned long __xchg(unsigned long x, volatile void *ptr,
int size)
static inline unsigned long __cmpxchg(volatile void *ptr, unsigned long old,
unsigned long new, int size)
#define cmpxchg(ptr, o, n) \
((__typeof__(*(ptr)))__cmpxchg((ptr), (unsigned long)(o), \
(unsigned long)(n), sizeof(*(ptr))))
#define mb()	barrier()
#define rmb()	barrier()
#define wmb()	barrier()
#define read_barrier_depends()	do  while (0)
struct __xchg_dummy ;
#define __xg(x) ((volatile struct __xchg_dummy *)(x))
static inline unsigned long __xchg(unsigned long x, volatile void *ptr,
int size)
#define cmpxchg_local(ptr, o, n)				  	       \
((__typeof__(*(ptr)))__cmpxchg_local_generic((ptr), (unsigned long)(o),\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
#define xchg(ptr, x) ((__typeof__(*(ptr)))__xchg((unsigned long)(x), (ptr), sizeof(*(ptr))))
#define tas(ptr) ((void)xchg((ptr), 1))
#define prepare_to_switch()     do  while(0)
asmlinkage struct task_struct *resume(struct task_struct *prev, struct task_struct *next);
#define switch_to(prev,next,last) \
do  while (0)
#define switch_to(prev, next, last) \
do  while (0)
