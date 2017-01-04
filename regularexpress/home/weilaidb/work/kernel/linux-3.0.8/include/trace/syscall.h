#define _TRACE_SYSCALL_H
struct syscall_metadata ;
extern unsigned long arch_syscall_addr(int nr);
extern int init_syscall_trace(struct ftrace_event_call *call);
extern int reg_event_syscall_enter(struct ftrace_event_call *call);
extern void unreg_event_syscall_enter(struct ftrace_event_call *call);
extern int reg_event_syscall_exit(struct ftrace_event_call *call);
extern void unreg_event_syscall_exit(struct ftrace_event_call *call);
extern int
ftrace_format_syscall(struct ftrace_event_call *call, struct trace_seq *s);
enum print_line_t print_syscall_enter(struct trace_iterator *iter, int flags,
struct trace_event *event);
enum print_line_t print_syscall_exit(struct trace_iterator *iter, int flags,
struct trace_event *event);
int perf_sysenter_enable(struct ftrace_event_call *call);
void perf_sysenter_disable(struct ftrace_event_call *call);
int perf_sysexit_enable(struct ftrace_event_call *call);
void perf_sysexit_disable(struct ftrace_event_call *call);
