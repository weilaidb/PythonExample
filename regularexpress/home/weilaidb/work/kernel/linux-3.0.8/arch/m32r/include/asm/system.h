#define _ASM_M32R_SYSTEM_H
#if defined(CONFIG_FRAME_POINTER) || \
!defined(CONFIG_SCHED_OMIT_FRAME_POINTER)
#define M32R_PUSH_FP "	push fp\n"
#define M32R_POP_FP  "	pop  fp\n"
#define M32R_PUSH_FP ""
#define M32R_POP_FP  ""
#define switch_to(prev, next, last)  do  while(0)
#define nop()	__asm__ __volatile__ ("nop" : : )
#define xchg(ptr, x)							\
((__typeof__(*(ptr)))__xchg((unsigned long)(x), (ptr), sizeof(*(ptr))))
#define xchg_local(ptr, x)						\
((__typeof__(*(ptr)))__xchg_local((unsigned long)(x), (ptr),	\
sizeof(*(ptr))))
extern void  __xchg_called_with_bad_pointer(void);
#define DCACHE_CLEAR(reg0, reg1, addr)				\
"seth	"reg1", #high(dcache_dummy);		\n\t"	\
"or3	"reg1", "reg1", #low(dcache_dummy);	\n\t"	\
"lock	"reg0", @"reg1";			\n\t"	\
"add3	"reg0", "addr", #0x1000;		\n\t"	\
"ld	"reg0", @"reg0";			\n\t"	\
"add3	"reg0", "addr", #0x2000;		\n\t"	\
"ld	"reg0", @"reg0";			\n\t"	\
"unlock	"reg0", @"reg1";			\n\t"
#define DCACHE_CLEAR(reg0, reg1, addr)
static __always_inline unsigned long
__xchg(unsigned long x, volatile void *ptr, int size)
static __always_inline unsigned long
__xchg_local(unsigned long x, volatile void *ptr, int size)
#define __HAVE_ARCH_CMPXCHG	1
static inline unsigned long
__cmpxchg_u32(volatile unsigned int *p, unsigned int old, unsigned int new)
static inline unsigned long
__cmpxchg_local_u32(volatile unsigned int *p, unsigned int old,
unsigned int new)
extern void __cmpxchg_called_with_bad_pointer(void);
static inline unsigned long
__cmpxchg(volatile void *ptr, unsigned long old, unsigned long new, int size)
#define cmpxchg(ptr, o, n)						 \
((__typeof__(*(ptr))) __cmpxchg((ptr), (unsigned long)(o),	 \
(unsigned long)(n), sizeof(*(ptr))))
static inline unsigned long __cmpxchg_local(volatile void *ptr,
unsigned long old,
unsigned long new, int size)
#define cmpxchg_local(ptr, o, n)				  	    \
((__typeof__(*(ptr)))__cmpxchg_local((ptr), (unsigned long)(o),	    \
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
#define mb()   barrier()
#define rmb()  mb()
#define wmb()  mb()
#define read_barrier_depends()	do  while (0)
#define smp_mb()	mb()
#define smp_rmb()	rmb()
#define smp_wmb()	wmb()
#define smp_read_barrier_depends()	read_barrier_depends()
#define set_mb(var, value) do  while (0)
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do  while (0)
#define set_mb(var, value) do  while (0)
#define arch_align_stack(x) (x)
