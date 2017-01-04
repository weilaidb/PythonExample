#define __ASM_GENERIC_SYSTEM_H
struct task_struct;
extern struct task_struct *__switch_to(struct task_struct *,
struct task_struct *);
#define switch_to(prev, next, last)					\
do  while (0)
#define arch_align_stack(x) (x)
#define nop() asm volatile ("nop")
#define mb()	asm volatile ("": : :"memory")
#define rmb()	mb()
#define wmb()	asm volatile ("": : :"memory")
#define smp_mb()	mb()
#define smp_rmb()	rmb()
#define smp_wmb()	wmb()
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define set_mb(var, value)  do  while (0)
#define set_wmb(var, value) do  while (0)
#define read_barrier_depends()		do  while (0)
#define smp_read_barrier_depends()	do  while (0)
extern void __xchg_called_with_bad_pointer(void);
static inline
unsigned long __xchg(unsigned long x, volatile void *ptr, int size)
#define xchg(ptr, x) \
((__typeof__(*(ptr))) __xchg((unsigned long)(x), (ptr), sizeof(*(ptr))))
