#define _PERF_PERF_H
struct winsize;
void get_term_dimensions(struct winsize *ws);
#if defined(__i386__)
#define rmb()		asm volatile("lock; addl $0,0(%%esp)" ::: "memory")
#define cpu_relax()	asm volatile("rep; nop" ::: "memory");
#if defined(__x86_64__)
#define rmb()		asm volatile("lfence" ::: "memory")
#define cpu_relax()	asm volatile("rep; nop" ::: "memory");
#define rmb()		asm volatile ("sync" ::: "memory")
#define cpu_relax()	asm volatile ("" ::: "memory");
#define rmb()		asm volatile("bcr 15,0" ::: "memory")
#define cpu_relax()	asm volatile("" ::: "memory");
#if defined(__SH4A__) || defined(__SH5__)
# define rmb()		asm volatile("synco" ::: "memory")
# define rmb()		asm volatile("" ::: "memory")
#define cpu_relax()	asm volatile("" ::: "memory")
#define rmb()		asm volatile("" ::: "memory")
#define cpu_relax()	asm volatile("" ::: "memory");
#define rmb()		asm volatile("":::"memory")
#define cpu_relax()	asm volatile("":::"memory")
#define rmb()		asm volatile("mb" ::: "memory")
#define cpu_relax()	asm volatile("" ::: "memory")
#define rmb()		asm volatile ("mf" ::: "memory")
#define cpu_relax()	asm volatile ("hint @pause" ::: "memory")
#define rmb()		((void(*)(void))0xffff0fa0)()
#define cpu_relax()	asm volatile("":::"memory")
#define rmb()		asm volatile(					\
".set	mips2\n\t"			\
"sync\n\t"				\
".set	mips0"				\
:			\
:			\
: "memory")
#define cpu_relax()	asm volatile("" ::: "memory")
struct perf_mmap ;
static inline unsigned int perf_mmap__read_head(struct perf_mmap *mm)
static inline void perf_mmap__write_tail(struct perf_mmap *md,
unsigned long tail)
#define PR_TASK_PERF_EVENTS_DISABLE   31
#define PR_TASK_PERF_EVENTS_ENABLE    32
# define NSEC_PER_SEC			1000000000ULL
static inline unsigned long long rdclock(void)
#define __user
#define asmlinkage
#define unlikely(x)	__builtin_expect(!!(x), 0)
#define min(x, y) ()
static inline int
sys_perf_event_open(struct perf_event_attr *attr,
pid_t pid, int cpu, int group_fd,
unsigned long flags)
#define MAX_COUNTERS			256
#define MAX_NR_CPUS			256
struct ip_callchain ;
extern bool perf_host, perf_guest;
