#define _ASM_SCORE_SYSTEM_H
struct pt_regs;
struct task_struct;
extern void *resume(void *last, void *next, void *next_ti);
#define switch_to(prev, next, last)				\
do  while (0)
#define finish_arch_switch(prev)	do  while (0)
typedef void (*vi_handler_t)(void);
extern unsigned long arch_align_stack(unsigned long sp);
#define mb()		barrier()
#define rmb()		barrier()
#define wmb()		barrier()
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define read_barrier_depends()		do  while (0)
#define smp_read_barrier_depends()	do  while (0)
#define set_mb(var, value) 		do  while (0)
#define __HAVE_ARCH_CMPXCHG	1
struct __xchg_dummy ;
#define __xg(x) ((struct __xchg_dummy *)(x))
static inline
unsigned long __xchg(volatile unsigned long *m, unsigned long val)
#define xchg(ptr, v)						\
((__typeof__(*(ptr))) __xchg((unsigned long *)(ptr),	\
(unsigned long)(v)))
static inline unsigned long __cmpxchg(volatile unsigned long *m,
unsigned long old, unsigned long new)
#define cmpxchg(ptr, o, n)					\
((__typeof__(*(ptr))) __cmpxchg((unsigned long *)(ptr),	\
(unsigned long)(o),	\
(unsigned long)(n)))
extern void __die(const char *, struct pt_regs *, const char *,
const char *, unsigned long) __attribute__((noreturn));
extern void __die_if_kernel(const char *, struct pt_regs *, const char *,
const char *, unsigned long);
#define die(msg, regs)							\
__die(msg, regs, __FILE__ ":", __func__, __LINE__)
#define die_if_kernel(msg, regs)					\
__die_if_kernel(msg, regs, __FILE__ ":", __func__, __LINE__)
