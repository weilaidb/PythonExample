#define _ASM_MICROBLAZE_SYSTEM_H
#define __ARCH_WANT_INTERRUPTS_ON_CTXSW
struct task_struct;
struct thread_info;
extern struct task_struct *_switch_to(struct thread_info *prev,
struct thread_info *next);
#define switch_to(prev, next, last)					\
do  while (0)
#define smp_read_barrier_depends()	do  while (0)
#define read_barrier_depends()		do  while (0)
#define nop()			asm volatile ("nop")
#define mb()			barrier()
#define rmb()			mb()
#define wmb()			mb()
#define set_mb(var, value)	do  while (0)
#define set_wmb(var, value)	do  while (0)
#define smp_mb()		mb()
#define smp_rmb()		rmb()
#define smp_wmb()		wmb()
void __bad_xchg(volatile void *ptr, int size);
static inline unsigned long __xchg(unsigned long x, volatile void *ptr,
int size)
void disable_hlt(void);
void enable_hlt(void);
void default_idle(void);
#define xchg(ptr, x) \
((__typeof__(*(ptr))) __xchg((unsigned long)(x), (ptr), sizeof(*(ptr))))
void free_init_pages(char *what, unsigned long begin, unsigned long end);
void free_initmem(void);
extern char *klimit;
extern void ret_from_fork(void);
extern void *alloc_maybe_bootmem(size_t size, gfp_t mask);
extern void *zalloc_maybe_bootmem(size_t size, gfp_t mask);
extern struct dentry *of_debugfs_root;
#define arch_align_stack(x) (x)
#define NET_IP_ALIGN	2
