static DEFINE_MUTEX(syscall_trace_lock);
static int sys_refcount_enter;
static int sys_refcount_exit;
static DECLARE_BITMAP(enabled_enter_syscalls, NR_syscalls);
static DECLARE_BITMAP(enabled_exit_syscalls, NR_syscalls);
static int syscall_enter_register(struct ftrace_event_call *event,
enum trace_reg type);
static int syscall_exit_register(struct ftrace_event_call *event,
enum trace_reg type);
static int syscall_enter_define_fields(struct ftrace_event_call *call);
static int syscall_exit_define_fields(struct ftrace_event_call *call);
static struct list_head *
syscall_get_enter_fields(struct ftrace_event_call *call)
struct trace_event_functions enter_syscall_print_funcs = ;
struct trace_event_functions exit_syscall_print_funcs = ;
struct ftrace_event_class event_class_syscall_enter = ;
struct ftrace_event_class event_class_syscall_exit = ;
extern struct syscall_metadata *__start_syscalls_metadata[];
extern struct syscall_metadata *__stop_syscalls_metadata[];
static struct syscall_metadata **syscalls_metadata;
static inline bool arch_syscall_match_sym_name(const char *sym, const char *name)
static __init struct syscall_metadata *
find_syscall_meta(unsigned long syscall)
static struct syscall_metadata *syscall_nr_to_meta(int nr)
enum print_line_t
print_syscall_enter(struct trace_iterator *iter, int flags,
struct trace_event *event)
enum print_line_t
print_syscall_exit(struct trace_iterator *iter, int flags,
struct trace_event *event)
extern char *__bad_type_size(void);
#define SYSCALL_FIELD(type, name)					\
sizeof(type) != sizeof(trace.name) ?				\
__bad_type_size() :					\
#type, #name, offsetof(typeof(trace), name),		\
sizeof(trace.name), is_signed_type(type)
static
int  __set_enter_print_fmt(struct syscall_metadata *entry, char *buf, int len)
static int set_syscall_print_fmt(struct ftrace_event_call *call)
static void free_syscall_print_fmt(struct ftrace_event_call *call)
static int syscall_enter_define_fields(struct ftrace_event_call *call)
static int syscall_exit_define_fields(struct ftrace_event_call *call)
void ftrace_syscall_enter(void *ignore, struct pt_regs *regs, long id)
void ftrace_syscall_exit(void *ignore, struct pt_regs *regs, long ret)
int reg_event_syscall_enter(struct ftrace_event_call *call)
void unreg_event_syscall_enter(struct ftrace_event_call *call)
int reg_event_syscall_exit(struct ftrace_event_call *call)
void unreg_event_syscall_exit(struct ftrace_event_call *call)
int init_syscall_trace(struct ftrace_event_call *call)
unsigned long __init __weak arch_syscall_addr(int nr)
int __init init_ftrace_syscalls(void)
core_initcall(init_ftrace_syscalls);
static DECLARE_BITMAP(enabled_perf_enter_syscalls, NR_syscalls);
static DECLARE_BITMAP(enabled_perf_exit_syscalls, NR_syscalls);
static int sys_perf_refcount_enter;
static int sys_perf_refcount_exit;
static void perf_syscall_enter(void *ignore, struct pt_regs *regs, long id)
int perf_sysenter_enable(struct ftrace_event_call *call)
void perf_sysenter_disable(struct ftrace_event_call *call)
static void perf_syscall_exit(void *ignore, struct pt_regs *regs, long ret)
int perf_sysexit_enable(struct ftrace_event_call *call)
void perf_sysexit_disable(struct ftrace_event_call *call)
static int syscall_enter_register(struct ftrace_event_call *event,
enum trace_reg type)
static int syscall_exit_register(struct ftrace_event_call *event,
enum trace_reg type)
