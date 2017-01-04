#define __SPARC64_SYSTEM_H
enum sparc_cpu ;
#define sparc_cpu_model sun4u
#define ARCH_SUN4C 0
extern char reboot_command[];
#define membar_safe(type) \
do  while (0)
#define mb()	membar_safe("#StoreLoad")
#define rmb()	__asm__ __volatile__("":::"memory")
#define wmb()	__asm__ __volatile__("":::"memory")
#define nop() 		__asm__ __volatile__ ("nop")
#define read_barrier_depends()		do  while(0)
#define set_mb(__var, __value) \
do  while(0)
#define smp_mb()	mb()
#define smp_rmb()	rmb()
#define smp_wmb()	wmb()
#define smp_mb()	__asm__ __volatile__("":::"memory")
#define smp_rmb()	__asm__ __volatile__("":::"memory")
#define smp_wmb()	__asm__ __volatile__("":::"memory")
#define smp_read_barrier_depends()	do  while(0)
#define flushi(addr)	__asm__ __volatile__ ("flush %0" : : "r" (addr) : "memory")
#define flushw_all()	__asm__ __volatile__("flushw")
#define read_pcr(__p)  __asm__ __volatile__("rd	%%pcr, %0" : "=r" (__p))
#define write_pcr(__p) __asm__ __volatile__("wr	%0, 0x0, %%pcr" : : "r" (__p))
#define read_pic(__p)  __asm__ __volatile__("rd %%pic, %0" : "=r" (__p))
#define write_pic(__p)  					\
__asm__ __volatile__("ba,pt	%%xcc, 99f\n\t"		\
" nop\n\t"				\
".align	64\n"			\
"99:wr	%0, 0x0, %%pic\n\t"	\
"rd	%%pic, %%g0" : : "r" (__p))
#define reset_pic()	write_pic(0)
extern void sun_do_break(void);
extern int stop_a_enabled;
extern int scons_pwroff;
extern void fault_in_user_windows(void);
extern void synchronize_user_stack(void);
extern void __flushw_user(void);
#define flushw_user() __flushw_user()
#define flush_user_windows flushw_user
#define flush_register_windows flushw_all
#define __ARCH_WANT_UNLOCKED_CTXSW
#define prepare_arch_switch(next)		\
do  while (0)
#define switch_to(prev, next, last)					\
do  while(0)
static inline unsigned long xchg32(__volatile__ unsigned int *m, unsigned int val)
static inline unsigned long xchg64(__volatile__ unsigned long *m, unsigned long val)
#define xchg(ptr,x) ((__typeof__(*(ptr)))__xchg((unsigned long)(x),(ptr),sizeof(*(ptr))))
extern void __xchg_called_with_bad_pointer(void);
static inline unsigned long __xchg(unsigned long x, __volatile__ void * ptr,
int size)
extern void die_if_kernel(char *str, struct pt_regs *regs) __attribute__ ((noreturn));
#define __HAVE_ARCH_CMPXCHG 1
static inline unsigned long
__cmpxchg_u32(volatile int *m, int old, int new)
static inline unsigned long
__cmpxchg_u64(volatile long *m, unsigned long old, unsigned long new)
extern void __cmpxchg_called_with_bad_pointer(void);
static inline unsigned long
__cmpxchg(volatile void *ptr, unsigned long old, unsigned long new, int size)
#define cmpxchg(ptr,o,n)						 \
()
static inline unsigned long __cmpxchg_local(volatile void *ptr,
unsigned long old,
unsigned long new, int size)
#define cmpxchg_local(ptr, o, n)				  	\
((__typeof__(*(ptr)))__cmpxchg_local((ptr), (unsigned long)(o),	\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n)					\
()
#define arch_align_stack(x) (x)
