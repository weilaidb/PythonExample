static int valid_next_sp(unsigned long sp, unsigned long prev_sp)
void
perf_callchain_kernel(struct perf_callchain_entry *entry, struct pt_regs *regs)
static int read_user_stack_slow(void __user *ptr, void *ret, int nb)
static int read_user_stack_64(unsigned long __user *ptr, unsigned long *ret)
static int read_user_stack_32(unsigned int __user *ptr, unsigned int *ret)
static inline int valid_user_sp(unsigned long sp, int is_64)
struct signal_frame_64 ;
static int is_sigreturn_64_address(unsigned long nip, unsigned long fp)
static int sane_signal_64_frame(unsigned long sp)
static void perf_callchain_user_64(struct perf_callchain_entry *entry,
struct pt_regs *regs)
static inline int current_is_64bit(void)
static int read_user_stack_32(unsigned int __user *ptr, unsigned int *ret)
static inline void perf_callchain_user_64(struct perf_callchain_entry *entry,
struct pt_regs *regs)
static inline int current_is_64bit(void)
static inline int valid_user_sp(unsigned long sp, int is_64)
#define __SIGNAL_FRAMESIZE32	__SIGNAL_FRAMESIZE
#define sigcontext32		sigcontext
#define mcontext32		mcontext
#define ucontext32		ucontext
#define compat_siginfo_t	struct siginfo
struct signal_frame_32 ;
struct rt_signal_frame_32 ;
static int is_sigreturn_32_address(unsigned int nip, unsigned int fp)
static int is_rt_sigreturn_32_address(unsigned int nip, unsigned int fp)
static int sane_signal_32_frame(unsigned int sp)
static int sane_rt_signal_32_frame(unsigned int sp)
static unsigned int __user *signal_frame_32_regs(unsigned int sp,
unsigned int next_sp, unsigned int next_ip)
static void perf_callchain_user_32(struct perf_callchain_entry *entry,
struct pt_regs *regs)
void
perf_callchain_user(struct perf_callchain_entry *entry, struct pt_regs *regs)
