#define _LINUX_KERNEL_H
#define __ALIGN_KERNEL(x, a)		__ALIGN_KERNEL_MASK(x, (typeof(x))(a) - 1)
#define __ALIGN_KERNEL_MASK(x, mask)	(((x) + (mask)) & ~(mask))
#define USHRT_MAX	((u16)(~0U))
#define SHRT_MAX	((s16)(USHRT_MAX>>1))
#define SHRT_MIN	((s16)(-SHRT_MAX - 1))
#define INT_MAX		((int)(~0U>>1))
#define INT_MIN		(-INT_MAX - 1)
#define UINT_MAX	(~0U)
#define LONG_MAX	((long)(~0UL>>1))
#define LONG_MIN	(-LONG_MAX - 1)
#define ULONG_MAX	(~0UL)
#define LLONG_MAX	((long long)(~0ULL>>1))
#define LLONG_MIN	(-LLONG_MAX - 1)
#define ULLONG_MAX	(~0ULL)
#define STACK_MAGIC	0xdeadbeef
#define ALIGN(x, a)		__ALIGN_KERNEL((x), (a))
#define __ALIGN_MASK(x, mask)	__ALIGN_KERNEL_MASK((x), (mask))
#define PTR_ALIGN(p, a)		((typeof(p))ALIGN((unsigned long)(p), (a)))
#define IS_ALIGNED(x, a)		(((x) & ((typeof(x))(a) - 1)) == 0)
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]) + __must_be_array(arr))
#define __round_mask(x, y) ((__typeof__(x))((y)-1))
#define round_up(x, y) ((((x)-1) | __round_mask(x, y))+1)
#define round_down(x, y) ((x) & ~__round_mask(x, y))
#define FIELD_SIZEOF(t, f) (sizeof(((t*)0)->f))
#define DIV_ROUND_UP(n,d) (((n) + (d) - 1) / (d))
#define roundup(x, y) (					\
\
)
#define rounddown(x, y) (				\
\
)
#define DIV_ROUND_CLOSEST(x, divisor)(			\
\
)
#define _RET_IP_		(unsigned long)__builtin_return_address(0)
#define _THIS_IP_  ()
# include <asm/div64.h>
# define sector_div(a, b) do_div(a, b)
# define sector_div(n, b)( \
\
)
#define upper_32_bits(n) ((u32)(((n) >> 16) >> 16))
#define lower_32_bits(n) ((u32)(n))
struct completion;
struct pt_regs;
struct user;
extern int _cond_resched(void);
# define might_resched() _cond_resched()
# define might_resched() do  while (0)
void __might_sleep(const char *file, int line, int preempt_offset);
# define might_sleep() \
do  while (0)
static inline void __might_sleep(const char *file, int line,
int preempt_offset)
# define might_sleep() do  while (0)
#define might_sleep_if(cond) do  while (0)
#define abs(x) ()
#define abs64(x) ()
void might_fault(void);
static inline void might_fault(void)
extern struct atomic_notifier_head panic_notifier_list;
extern long (*panic_blink)(int state);
NORET_TYPE void panic(const char * fmt, ...)
__attribute__ ((NORET_AND format (printf, 1, 2))) __cold;
extern void oops_enter(void);
extern void oops_exit(void);
void print_oops_end_marker(void);
extern int oops_may_print(void);
NORET_TYPE void do_exit(long error_code)
ATTRIB_NORET;
NORET_TYPE void complete_and_exit(struct completion *, long)
ATTRIB_NORET;
int __must_check _kstrtoul(const char *s, unsigned int base, unsigned long *res);
int __must_check _kstrtol(const char *s, unsigned int base, long *res);
int __must_check kstrtoull(const char *s, unsigned int base, unsigned long long *res);
int __must_check kstrtoll(const char *s, unsigned int base, long long *res);
static inline int __must_check kstrtoul(const char *s, unsigned int base, unsigned long *res)
static inline int __must_check kstrtol(const char *s, unsigned int base, long *res)
int __must_check kstrtouint(const char *s, unsigned int base, unsigned int *res);
int __must_check kstrtoint(const char *s, unsigned int base, int *res);
static inline int __must_check kstrtou64(const char *s, unsigned int base, u64 *res)
static inline int __must_check kstrtos64(const char *s, unsigned int base, s64 *res)
static inline int __must_check kstrtou32(const char *s, unsigned int base, u32 *res)
static inline int __must_check kstrtos32(const char *s, unsigned int base, s32 *res)
int __must_check kstrtou16(const char *s, unsigned int base, u16 *res);
int __must_check kstrtos16(const char *s, unsigned int base, s16 *res);
int __must_check kstrtou8(const char *s, unsigned int base, u8 *res);
int __must_check kstrtos8(const char *s, unsigned int base, s8 *res);
int __must_check kstrtoull_from_user(const char __user *s, size_t count, unsigned int base, unsigned long long *res);
int __must_check kstrtoll_from_user(const char __user *s, size_t count, unsigned int base, long long *res);
int __must_check kstrtoul_from_user(const char __user *s, size_t count, unsigned int base, unsigned long *res);
int __must_check kstrtol_from_user(const char __user *s, size_t count, unsigned int base, long *res);
int __must_check kstrtouint_from_user(const char __user *s, size_t count, unsigned int base, unsigned int *res);
int __must_check kstrtoint_from_user(const char __user *s, size_t count, unsigned int base, int *res);
int __must_check kstrtou16_from_user(const char __user *s, size_t count, unsigned int base, u16 *res);
int __must_check kstrtos16_from_user(const char __user *s, size_t count, unsigned int base, s16 *res);
int __must_check kstrtou8_from_user(const char __user *s, size_t count, unsigned int base, u8 *res);
int __must_check kstrtos8_from_user(const char __user *s, size_t count, unsigned int base, s8 *res);
static inline int __must_check kstrtou64_from_user(const char __user *s, size_t count, unsigned int base, u64 *res)
static inline int __must_check kstrtos64_from_user(const char __user *s, size_t count, unsigned int base, s64 *res)
static inline int __must_check kstrtou32_from_user(const char __user *s, size_t count, unsigned int base, u32 *res)
static inline int __must_check kstrtos32_from_user(const char __user *s, size_t count, unsigned int base, s32 *res)
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);
#define strict_strtoul	kstrtoul
#define strict_strtol	kstrtol
#define strict_strtoull	kstrtoull
#define strict_strtoll	kstrtoll
extern int sprintf(char * buf, const char * fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern int vsprintf(char *buf, const char *, va_list)
__attribute__ ((format (printf, 2, 0)));
extern int snprintf(char * buf, size_t size, const char * fmt, ...)
__attribute__ ((format (printf, 3, 4)));
extern int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
__attribute__ ((format (printf, 3, 0)));
extern int scnprintf(char * buf, size_t size, const char * fmt, ...)
__attribute__ ((format (printf, 3, 4)));
extern int vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
__attribute__ ((format (printf, 3, 0)));
extern char *kasprintf(gfp_t gfp, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern char *kvasprintf(gfp_t gfp, const char *fmt, va_list args);
extern int sscanf(const char *, const char *, ...)
__attribute__ ((format (scanf, 2, 3)));
extern int vsscanf(const char *, const char *, va_list)
__attribute__ ((format (scanf, 2, 0)));
extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(const char *ptr, char **retptr);
extern int core_kernel_text(unsigned long addr);
extern int core_kernel_data(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int func_ptr_is_kernel_text(void *ptr);
struct pid;
extern struct pid *session_of_pgrp(struct pid *pgrp);
unsigned long int_sqrt(unsigned long);
extern void bust_spinlocks(int yes);
extern void wake_up_klogd(void);
extern int oops_in_progress;
extern int panic_timeout;
extern int panic_on_oops;
extern int panic_on_unrecovered_nmi;
extern int panic_on_io_nmi;
extern const char *print_tainted(void);
extern void add_taint(unsigned flag);
extern int test_taint(unsigned flag);
extern unsigned long get_taint(void);
extern int root_mountflags;
extern bool early_boot_irqs_disabled;
extern enum system_states  system_state;
#define TAINT_PROPRIETARY_MODULE	0
#define TAINT_FORCED_MODULE		1
#define TAINT_UNSAFE_SMP		2
#define TAINT_FORCED_RMMOD		3
#define TAINT_MACHINE_CHECK		4
#define TAINT_BAD_PAGE			5
#define TAINT_USER			6
#define TAINT_DIE			7
#define TAINT_OVERRIDDEN_ACPI_TABLE	8
#define TAINT_WARN			9
#define TAINT_CRAP			10
#define TAINT_FIRMWARE_WORKAROUND	11
extern const char hex_asc[];
#define hex_asc_lo(x)	hex_asc[((x) & 0x0f)]
#define hex_asc_hi(x)	hex_asc[((x) & 0xf0) >> 4]
static inline char *pack_hex_byte(char *buf, u8 byte)
extern int hex_to_bin(char ch);
extern void hex2bin(u8 *dst, const char *src, size_t count);
void tracing_on(void);
void tracing_off(void);
void tracing_off_permanent(void);
int tracing_is_on(void);
static inline void tracing_on(void)
static inline void tracing_off(void)
static inline void tracing_off_permanent(void)
static inline int tracing_is_on(void)
enum ftrace_dump_mode ;
extern void tracing_start(void);
extern void tracing_stop(void);
extern void ftrace_off_permanent(void);
static inline void __attribute__ ((format (printf, 1, 2)))
____trace_printk_check_format(const char *fmt, ...)
#define __trace_printk_check_format(fmt, args...)			\
do  while (0)
#define trace_printk(fmt, args...)					\
do  while (0)
extern int
__trace_bprintk(unsigned long ip, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern int
__trace_printk(unsigned long ip, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern void trace_dump_stack(void);
#define ftrace_vprintk(fmt, vargs)					\
do  while (0)
extern int
__ftrace_vbprintk(unsigned long ip, const char *fmt, va_list ap);
extern int
__ftrace_vprintk(unsigned long ip, const char *fmt, va_list ap);
extern void ftrace_dump(enum ftrace_dump_mode oops_dump_mode);
static inline int
trace_printk(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
static inline void tracing_start(void)
static inline void tracing_stop(void)
static inline void ftrace_off_permanent(void)
static inline void trace_dump_stack(void)
static inline int
trace_printk(const char *fmt, ...)
static inline int
ftrace_vprintk(const char *fmt, va_list ap)
static inline void ftrace_dump(enum ftrace_dump_mode oops_dump_mode)
#define min(x, y) ()
#define max(x, y) ()
#define min3(x, y, z) ()
#define max3(x, y, z) ()
#define min_not_zero(x, y) ()
#define clamp(val, min, max) ()
#define min_t(type, x, y) ()
#define max_t(type, x, y) ()
#define clamp_t(type, val, min, max) ()
#define clamp_val(val, min, max) ()
#define swap(a, b) \
do  while (0)
#define container_of(ptr, type, member) ()
struct sysinfo;
extern int do_sysinfo(struct sysinfo *info);
#define SI_LOAD_SHIFT	16
struct sysinfo ;
#define BUILD_BUG_ON_NOT_POWER_OF_2(n)
#define BUILD_BUG_ON_ZERO(e) (0)
#define BUILD_BUG_ON_NULL(e) ((void*)0)
#define BUILD_BUG_ON(condition)
#define BUILD_BUG_ON_NOT_POWER_OF_2(n)			\
BUILD_BUG_ON((n) == 0 || (((n) & ((n) - 1)) != 0))
#define BUILD_BUG_ON_ZERO(e) (sizeof(struct ))
#define BUILD_BUG_ON_NULL(e) ((void *)sizeof(struct ))
#define BUILD_BUG_ON(condition) ((void)sizeof(char[1 - 2*!!(condition)]))
extern int __build_bug_on_failed;
#define BUILD_BUG_ON(condition)					\
do  while(0)
#define __FUNCTION__ (__func__)
#define NUMA_BUILD 1
#define NUMA_BUILD 0
#define COMPACTION_BUILD 1
#define COMPACTION_BUILD 0
# define REBUILD_DUE_TO_FTRACE_MCOUNT_RECORD
