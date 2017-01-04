#define __SPARC_SYSTEM_H
enum sparc_cpu ;
extern enum sparc_cpu sparc_cpu_model;
#define ARCH_SUN4C (sparc_cpu_model==sun4c)
#define SUN4M_NCPUS            4
extern char reboot_command[];
extern struct thread_info *current_set[NR_CPUS];
extern unsigned long empty_bad_page;
extern unsigned long empty_bad_page_table;
extern unsigned long empty_zero_page;
extern void sun_do_break(void);
extern int serial_console;
extern int stop_a_enabled;
extern int scons_pwroff;
static inline int con_is_present(void)
extern void flush_user_windows(void);
extern void kill_user_windows(void);
extern void synchronize_user_stack(void);
extern void fpsave(unsigned long *fpregs, unsigned long *fsr,
void *fpqueue, unsigned long *fpqdepth);
#define SWITCH_ENTER(prv) \
do  while(0)
#define SWITCH_DO_LAZY_FPU(next)
#define SWITCH_ENTER(prv)
#define SWITCH_DO_LAZY_FPU(nxt)	\
do  while(0)
extern void flushw_all(void);
#define prepare_arch_switch(next) do  while(0)
#define switch_to(prev, next, last) do  while(0)
#define mb()	__asm__ __volatile__ ("" : : : "memory")
#define rmb()	mb()
#define wmb()	mb()
#define read_barrier_depends()	do  while(0)
#define set_mb(__var, __value)  do  while(0)
#define smp_mb()	__asm__ __volatile__("":::"memory")
#define smp_rmb()	__asm__ __volatile__("":::"memory")
#define smp_wmb()	__asm__ __volatile__("":::"memory")
#define smp_read_barrier_depends()	do  while(0)
#define nop() __asm__ __volatile__ ("nop")
BTFIXUPDEF_CALL(void, ___xchg32, void)
static inline unsigned long xchg_u32(__volatile__ unsigned long *m, unsigned long val)
#define xchg(ptr,x) ((__typeof__(*(ptr)))__xchg((unsigned long)(x),(ptr),sizeof(*(ptr))))
extern void __xchg_called_with_bad_pointer(void);
static inline unsigned long __xchg(unsigned long x, __volatile__ void * ptr, int size)
#define __HAVE_ARCH_CMPXCHG	1
extern void __cmpxchg_called_with_bad_pointer(void);
extern unsigned long __cmpxchg_u32(volatile u32 *m, u32 old, u32 new_);
static inline unsigned long
__cmpxchg(volatile void *ptr, unsigned long old, unsigned long new_, int size)
#define cmpxchg(ptr, o, n)						\
()
#define cmpxchg_local(ptr, o, n)				  	       \
((__typeof__(*(ptr)))__cmpxchg_local_generic((ptr), (unsigned long)(o),\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
extern void die_if_kernel(char *str, struct pt_regs *regs) __attribute__ ((noreturn));
#define arch_align_stack(x) (x)
