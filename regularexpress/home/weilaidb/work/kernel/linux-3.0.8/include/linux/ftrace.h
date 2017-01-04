#define _LINUX_FTRACE_H
struct ftrace_hash;
extern int ftrace_enabled;
extern int
ftrace_enable_sysctl(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos);
typedef void (*ftrace_func_t)(unsigned long ip, unsigned long parent_ip);
enum ;
struct ftrace_ops ;
extern int function_trace_stop;
enum ftrace_tracing_type_t ;
extern enum ftrace_tracing_type_t ftrace_tracing_type;
static inline void ftrace_stop(void)
static inline void ftrace_start(void)
int register_ftrace_function(struct ftrace_ops *ops);
int unregister_ftrace_function(struct ftrace_ops *ops);
void clear_ftrace_function(void);
extern void ftrace_stub(unsigned long a0, unsigned long a1);
#define register_ftrace_function(ops) ()
#define unregister_ftrace_function(ops) ()
static inline void clear_ftrace_function(void)
static inline void ftrace_kill(void)
static inline void ftrace_stop(void)
static inline void ftrace_start(void)
extern int stack_tracer_enabled;
int
stack_trace_sysctl(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos);
struct ftrace_func_command ;
int ftrace_arch_code_modify_prepare(void);
int ftrace_arch_code_modify_post_process(void);
struct seq_file;
struct ftrace_probe_ops ;
extern int
register_ftrace_function_probe(char *glob, struct ftrace_probe_ops *ops,
void *data);
extern void
unregister_ftrace_function_probe(char *glob, struct ftrace_probe_ops *ops,
void *data);
extern void
unregister_ftrace_function_probe_func(char *glob, struct ftrace_probe_ops *ops);
extern void unregister_ftrace_function_probe_all(char *glob);
extern int ftrace_text_reserved(void *start, void *end);
enum ;
#define FTRACE_FL_MASK		(0x3UL << 30)
#define FTRACE_REF_MAX		((1 << 30) - 1)
struct dyn_ftrace ;
int ftrace_force_update(void);
void ftrace_set_filter(struct ftrace_ops *ops, unsigned char *buf,
int len, int reset);
void ftrace_set_notrace(struct ftrace_ops *ops, unsigned char *buf,
int len, int reset);
void ftrace_set_global_filter(unsigned char *buf, int len, int reset);
void ftrace_set_global_notrace(unsigned char *buf, int len, int reset);
int register_ftrace_command(struct ftrace_func_command *cmd);
int unregister_ftrace_command(struct ftrace_func_command *cmd);
extern int ftrace_ip_converted(unsigned long ip);
extern int ftrace_dyn_arch_init(void *data);
extern int ftrace_update_ftrace_func(ftrace_func_t func);
extern void ftrace_caller(void);
extern void ftrace_call(void);
extern void mcount_call(void);
#define FTRACE_ADDR ((unsigned long)ftrace_caller)
extern void ftrace_graph_caller(void);
extern int ftrace_enable_ftrace_graph_caller(void);
extern int ftrace_disable_ftrace_graph_caller(void);
static inline int ftrace_enable_ftrace_graph_caller(void)
static inline int ftrace_disable_ftrace_graph_caller(void)
extern int ftrace_make_nop(struct module *mod,
struct dyn_ftrace *rec, unsigned long addr);
extern int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr);
extern int ftrace_arch_read_dyn_info(char *buf, int size);
extern int skip_trace(unsigned long ip);
extern void ftrace_disable_daemon(void);
extern void ftrace_enable_daemon(void);
static inline int skip_trace(unsigned long ip)
static inline int ftrace_force_update(void)
static inline void ftrace_set_filter(unsigned char *buf, int len, int reset)
static inline void ftrace_disable_daemon(void)
static inline void ftrace_enable_daemon(void)
static inline void ftrace_release_mod(struct module *mod)
static inline int register_ftrace_command(struct ftrace_func_command *cmd)
static inline int unregister_ftrace_command(char *cmd_name)
static inline int ftrace_text_reserved(void *start, void *end)
void ftrace_kill(void);
static inline void tracer_disable(void)
static inline int __ftrace_enabled_save(void)
static inline void __ftrace_enabled_restore(int enabled)
# ifdef CONFIG_FRAME_POINTER
#  define CALLER_ADDR0 ((unsigned long)__builtin_return_address(0))
#  define CALLER_ADDR1 ((unsigned long)__builtin_return_address(1))
#  define CALLER_ADDR2 ((unsigned long)__builtin_return_address(2))
#  define CALLER_ADDR3 ((unsigned long)__builtin_return_address(3))
#  define CALLER_ADDR4 ((unsigned long)__builtin_return_address(4))
#  define CALLER_ADDR5 ((unsigned long)__builtin_return_address(5))
#  define CALLER_ADDR6 ((unsigned long)__builtin_return_address(6))
# else
#  define CALLER_ADDR0 ((unsigned long)__builtin_return_address(0))
#  define CALLER_ADDR1 0UL
#  define CALLER_ADDR2 0UL
#  define CALLER_ADDR3 0UL
#  define CALLER_ADDR4 0UL
#  define CALLER_ADDR5 0UL
#  define CALLER_ADDR6 0UL
# endif
extern void time_hardirqs_on(unsigned long a0, unsigned long a1);
extern void time_hardirqs_off(unsigned long a0, unsigned long a1);
static inline void time_hardirqs_on(unsigned long a0, unsigned long a1)
static inline void time_hardirqs_off(unsigned long a0, unsigned long a1)
extern void trace_preempt_on(unsigned long a0, unsigned long a1);
extern void trace_preempt_off(unsigned long a0, unsigned long a1);
static inline void trace_preempt_on(unsigned long a0, unsigned long a1)
static inline void trace_preempt_off(unsigned long a0, unsigned long a1)
extern void ftrace_init(void);
static inline void ftrace_init(void)
struct ftrace_graph_ent ;
struct ftrace_graph_ret ;
typedef void (*trace_func_graph_ret_t)(struct ftrace_graph_ret *);
typedef int (*trace_func_graph_ent_t)(struct ftrace_graph_ent *);
#define INIT_FTRACE_GRAPH		.ret_stack = NULL,
struct ftrace_ret_stack ;
extern void return_to_handler(void);
extern int
ftrace_push_return_trace(unsigned long ret, unsigned long func, int *depth,
unsigned long frame_pointer);
#define __notrace_funcgraph		notrace
#define __irq_entry		 __attribute__((__section__(".irqentry.text")))
extern char __irqentry_text_start[];
extern char __irqentry_text_end[];
#define FTRACE_RETFUNC_DEPTH 50
#define FTRACE_RETSTACK_ALLOC_SIZE 32
extern int register_ftrace_graph(trace_func_graph_ret_t retfunc,
trace_func_graph_ent_t entryfunc);
extern void ftrace_graph_stop(void);
extern trace_func_graph_ret_t ftrace_graph_return;
extern trace_func_graph_ent_t ftrace_graph_entry;
extern void unregister_ftrace_graph(void);
extern void ftrace_graph_init_task(struct task_struct *t);
extern void ftrace_graph_exit_task(struct task_struct *t);
extern void ftrace_graph_init_idle_task(struct task_struct *t, int cpu);
static inline int task_curr_ret_stack(struct task_struct *t)
static inline void pause_graph_tracing(void)
static inline void unpause_graph_tracing(void)
#define __notrace_funcgraph
#define __irq_entry
#define INIT_FTRACE_GRAPH
static inline void ftrace_graph_init_task(struct task_struct *t)
static inline void ftrace_graph_exit_task(struct task_struct *t)
static inline void ftrace_graph_init_idle_task(struct task_struct *t, int cpu)
static inline int register_ftrace_graph(trace_func_graph_ret_t retfunc,
trace_func_graph_ent_t entryfunc)
static inline void unregister_ftrace_graph(void)
static inline int task_curr_ret_stack(struct task_struct *tsk)
static inline void pause_graph_tracing(void)
static inline void unpause_graph_tracing(void)
enum ;
enum ;
static inline void set_tsk_trace_trace(struct task_struct *tsk)
static inline void clear_tsk_trace_trace(struct task_struct *tsk)
static inline int test_tsk_trace_trace(struct task_struct *tsk)
static inline void set_tsk_trace_graph(struct task_struct *tsk)
static inline void clear_tsk_trace_graph(struct task_struct *tsk)
static inline int test_tsk_trace_graph(struct task_struct *tsk)
enum ftrace_dump_mode;
extern enum ftrace_dump_mode ftrace_dump_on_oops;
#define INIT_TRACE_RECURSION		.trace_recursion = 0,
#define INIT_TRACE_RECURSION
unsigned long arch_syscall_addr(int nr);
