#define _ASM_SYSTEM_H
extern asmlinkage void *resume(void *last, void *next, void *next_ti);
struct task_struct;
extern unsigned int ll_bit;
extern struct task_struct *ll_task;
#define __mips_mt_fpaff_switch_to(prev)					\
do  while(0)
#define __mips_mt_fpaff_switch_to(prev) do  while (0)
#define __clear_software_ll_bit()					\
do  while (0)
#define switch_to(prev, next, last)					\
do  while (0)
#define finish_arch_switch(prev)					\
do  while (0)
static inline unsigned long __xchg_u32(volatile int * m, unsigned int val)
static inline __u64 __xchg_u64(volatile __u64 * m, __u64 val)
extern __u64 __xchg_u64_unsupported_on_32bit_kernels(volatile __u64 * m, __u64 val);
#define __xchg_u64 __xchg_u64_unsupported_on_32bit_kernels
static inline unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
#define xchg(ptr, x)							\
()
extern void set_handler(unsigned long offset, void *addr, unsigned long len);
extern void set_uncached_handler(unsigned long offset, void *addr, unsigned long len);
typedef void (*vi_handler_t)(void);
extern void *set_vi_handler(int n, vi_handler_t addr);
extern void *set_except_vector(int n, void *addr);
extern unsigned long ebase;
extern void per_cpu_trap_init(void);
#define __ARCH_WANT_UNLOCKED_CTXSW
extern unsigned long arch_align_stack(unsigned long sp);
