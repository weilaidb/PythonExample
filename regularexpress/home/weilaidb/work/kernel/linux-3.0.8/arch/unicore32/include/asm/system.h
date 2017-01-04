#define __UNICORE_SYSTEM_H__
#define CR_M	(1 << 0)
#define CR_A	(1 << 1)
#define CR_D	(1 << 2)
#define CR_I	(1 << 3)
#define CR_B	(1 << 4)
#define CR_T	(1 << 5)
#define CR_V	(1 << 13)
struct thread_info;
struct task_struct;
struct pt_regs;
void die(const char *msg, struct pt_regs *regs, int err);
struct siginfo;
void uc32_notify_die(const char *str, struct pt_regs *regs,
struct siginfo *info, unsigned long err, unsigned long trap);
void hook_fault_code(int nr, int (*fn)(unsigned long, unsigned int,
struct pt_regs *),
int sig, int code, const char *name);
#define xchg(ptr, x) \
((__typeof__(*(ptr)))__xchg((unsigned long)(x), (ptr), sizeof(*(ptr))))
extern asmlinkage void __backtrace(void);
extern asmlinkage void c_backtrace(unsigned long fp, int pmode);
struct mm_struct;
extern void show_pte(struct mm_struct *mm, unsigned long addr);
extern void __show_regs(struct pt_regs *);
extern int cpu_architecture(void);
extern void cpu_init(void);
#define vectors_high()	(cr_alignment & CR_V)
#define isb() __asm__ __volatile__ ("" : : : "memory")
#define dsb() __asm__ __volatile__ ("" : : : "memory")
#define dmb() __asm__ __volatile__ ("" : : : "memory")
#define mb()		barrier()
#define rmb()		barrier()
#define wmb()		barrier()
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define read_barrier_depends()		do  while (0)
#define smp_read_barrier_depends()	do  while (0)
#define set_mb(var, value)	do  while (0)
#define nop() __asm__ __volatile__("mov\tr0,r0\t@ nop\n\t");
extern unsigned long cr_no_alignment;
extern unsigned long cr_alignment;
static inline unsigned int get_cr(void)
static inline void set_cr(unsigned int val)
extern void adjust_cr(unsigned long mask, unsigned long set);
extern struct task_struct *__switch_to(struct task_struct *,
struct thread_info *, struct thread_info *);
extern void panic(const char *fmt, ...);
#define switch_to(prev, next, last)					\
do  while (0)
static inline unsigned long
__xchg(unsigned long x, volatile void *ptr, int size)
#define cmpxchg_local(ptr, o, n)					\
((__typeof__(*(ptr)))__cmpxchg_local_generic((ptr),	\
(unsigned long)(o), (unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n)					\
__cmpxchg64_local_generic((ptr), (o), (n))
#define arch_align_stack(x) (x)
