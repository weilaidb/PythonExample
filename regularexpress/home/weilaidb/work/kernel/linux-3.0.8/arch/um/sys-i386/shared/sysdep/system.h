#define _ASM_X86_SYSTEM_H_
# define AT_VECTOR_SIZE_ARCH 2
# define AT_VECTOR_SIZE_ARCH 1
extern unsigned long arch_align_stack(unsigned long sp);
void default_idle(void);
#define mb() alternative("lock; addl $0,0(%%esp)", "mfence", X86_FEATURE_XMM2)
#define rmb() alternative("lock; addl $0,0(%%esp)", "lfence", X86_FEATURE_XMM2)
#define wmb() alternative("lock; addl $0,0(%%esp)", "sfence", X86_FEATURE_XMM)
#define mb() 	asm volatile("mfence":::"memory")
#define rmb()	asm volatile("lfence":::"memory")
#define wmb()	asm volatile("sfence" ::: "memory")
#define read_barrier_depends()	do  while (0)
#define smp_mb()	mb()
# define smp_rmb()	rmb()
# define smp_rmb()	barrier()
# define smp_wmb() 	wmb()
# define smp_wmb()	barrier()
#define smp_read_barrier_depends()	read_barrier_depends()
#define set_mb(var, value) do  while (0)
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do  while (0)
#define set_mb(var, value) do  while (0)
static inline void rdtsc_barrier(void)
