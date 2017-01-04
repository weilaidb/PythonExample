#define _ASM_SYSTEM_H
#if !defined(CONFIG_LAZY_SAVE_FPU)
struct fpu_state_struct;
extern asmlinkage void fpu_save(struct fpu_state_struct *);
#define switch_fpu(prev, next)						\
do  while (0)
#define switch_fpu(prev, next) do  while (0)
struct task_struct;
struct thread_struct;
extern asmlinkage
struct task_struct *__switch_to(struct thread_struct *prev,
struct thread_struct *next,
struct task_struct *prev_task);
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
#define set_mb(var, value)  do  while (0)
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define set_mb(var, value)  do  while (0)
#define set_wmb(var, value) do  while (0)
#define read_barrier_depends()		do  while (0)
#define smp_read_barrier_depends()	do  while (0)
