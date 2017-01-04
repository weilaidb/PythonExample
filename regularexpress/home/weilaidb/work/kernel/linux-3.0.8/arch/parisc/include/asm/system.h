#define __PARISC_SYSTEM_H
struct pa_psw ;
#define pa_psw(task) ((struct pa_psw *) ((char *) (task) + TASK_PT_PSW + 4))
#define pa_psw(task) ((struct pa_psw *) ((char *) (task) + TASK_PT_PSW))
struct task_struct;
extern struct task_struct *_switch_to(struct task_struct *, struct task_struct *);
#define switch_to(prev, next, last) do  while(0)
#define mfctl(reg)	()
#define mtctl(gr, cr) \
__asm__ __volatile__("mtctl %0,%1" \
: \
: "r" (gr), "i" (cr) : "memory")
#define get_eiem() mfctl(15)
static inline void set_eiem(unsigned long val)
#define mfsp(reg)	()
#define mtsp(gr, cr) \
__asm__ __volatile__("mtsp %0,%1" \
: \
: "r" (gr), "i" (cr) : "memory")
#define mb()		__asm__ __volatile__("":::"memory")
#define rmb()		mb()
#define wmb()		mb()
#define smp_mb()	mb()
#define smp_rmb()	mb()
#define smp_wmb()	mb()
#define smp_read_barrier_depends()	do  while(0)
#define read_barrier_depends()		do  while(0)
#define set_mb(var, value)		do  while (0)
#define __PA_LDCW_ALIGNMENT	16
#define __ldcw_align(a) ()
#define __LDCW	"ldcw"
#define __PA_LDCW_ALIGNMENT	4
#define __ldcw_align(a) (&(a)->slock)
#define __LDCW	"ldcw,co"
#define __ldcw(a) ()
# define __lock_aligned __attribute__((__section__(".data..lock_aligned")))
#define arch_align_stack(x) (x)
