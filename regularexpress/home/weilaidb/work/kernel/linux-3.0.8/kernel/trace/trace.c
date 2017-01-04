int ring_buffer_expanded;
static bool __read_mostly tracing_selftest_running;
bool __read_mostly tracing_selftest_disabled;
static struct tracer_opt dummy_tracer_opt[] = ;
static struct tracer_flags dummy_tracer_flags = ;
static int dummy_set_flag(u32 old_flags, u32 bit, int set)
static int tracing_disabled = 1;
DEFINE_PER_CPU(int, ftrace_cpu_disabled);
static inline void ftrace_disable_cpu(void)
static inline void ftrace_enable_cpu(void)
cpumask_var_t __read_mostly	tracing_buffer_mask;
enum ftrace_dump_mode ftrace_dump_on_oops;
static int tracing_set_tracer(const char *buf);
#define MAX_TRACER_SIZE		100
static char bootup_tracer_buf[MAX_TRACER_SIZE] __initdata;
static char *default_bootup_tracer;
static int __init set_cmdline_ftrace(char *str)
__setup("ftrace=", set_cmdline_ftrace);
static int __init set_ftrace_dump_on_oops(char *str)
__setup("ftrace_dump_on_oops", set_ftrace_dump_on_oops);
unsigned long long ns2usecs(cycle_t nsec)
static struct trace_array	global_trace;
static DEFINE_PER_CPU(struct trace_array_cpu, global_trace_cpu);
int filter_current_check_discard(struct ring_buffer *buffer,
struct ftrace_event_call *call, void *rec,
struct ring_buffer_event *event)
EXPORT_SYMBOL_GPL(filter_current_check_discard);
cycle_t ftrace_now(int cpu)
static struct trace_array	max_tr;
static DEFINE_PER_CPU(struct trace_array_cpu, max_tr_data);
static int			tracer_enabled = 1;
int tracing_is_enabled(void)
#define TRACE_BUF_SIZE_DEFAULT	1441792UL
static unsigned long		trace_buf_size = TRACE_BUF_SIZE_DEFAULT;
static struct tracer		*trace_types __read_mostly;
static struct tracer		*current_trace __read_mostly;
static DEFINE_MUTEX(trace_types_lock);
static DECLARE_RWSEM(all_cpu_access_lock);
static DEFINE_PER_CPU(struct mutex, cpu_access_lock);
static inline void trace_access_lock(int cpu)
static inline void trace_access_unlock(int cpu)
static inline void trace_access_lock_init(void)
static DEFINE_MUTEX(access_lock);
static inline void trace_access_lock(int cpu)
static inline void trace_access_unlock(int cpu)
static inline void trace_access_lock_init(void)
static DECLARE_WAIT_QUEUE_HEAD(trace_wait);
unsigned long trace_flags = TRACE_ITER_PRINT_PARENT | TRACE_ITER_PRINTK |
TRACE_ITER_ANNOTATE | TRACE_ITER_CONTEXT_INFO | TRACE_ITER_SLEEP_TIME |
TRACE_ITER_GRAPH_TIME | TRACE_ITER_RECORD_CMD | TRACE_ITER_OVERWRITE;
static int trace_stop_count;
static DEFINE_SPINLOCK(tracing_start_lock);
void trace_wake_up(void)
static int __init set_buf_size(char *str)
__setup("trace_buf_size=", set_buf_size);
static int __init set_tracing_thresh(char *str)
__setup("tracing_thresh=", set_tracing_thresh);
unsigned long nsecs_to_usecs(unsigned long nsecs)
static const char *trace_options[] = ;
static struct  trace_clocks[] = ;
int trace_clock_id;
int trace_parser_get_init(struct trace_parser *parser, int size)
void trace_parser_put(struct trace_parser *parser)
int trace_get_user(struct trace_parser *parser, const char __user *ubuf,
size_t cnt, loff_t *ppos)
ssize_t trace_seq_to_user(struct trace_seq *s, char __user *ubuf, size_t cnt)
static ssize_t trace_seq_to_buffer(struct trace_seq *s, void *buf, size_t cnt)
static arch_spinlock_t ftrace_max_lock =
(arch_spinlock_t)__ARCH_SPIN_LOCK_UNLOCKED;
unsigned long __read_mostly	tracing_thresh;
unsigned long __read_mostly	tracing_max_latency;
static void
__update_max_tr(struct trace_array *tr, struct task_struct *tsk, int cpu)
void
update_max_tr(struct trace_array *tr, struct task_struct *tsk, int cpu)
void
update_max_tr_single(struct trace_array *tr, struct task_struct *tsk, int cpu)
int register_tracer(struct tracer *type)
__releases(kernel_lock)
__acquires(kernel_lock)
void unregister_tracer(struct tracer *type)
static void __tracing_reset(struct ring_buffer *buffer, int cpu)
void tracing_reset(struct trace_array *tr, int cpu)
void tracing_reset_online_cpus(struct trace_array *tr)
void tracing_reset_current(int cpu)
void tracing_reset_current_online_cpus(void)
#define SAVED_CMDLINES 128
#define NO_CMDLINE_MAP UINT_MAX
static unsigned map_pid_to_cmdline[PID_MAX_DEFAULT+1];
static unsigned map_cmdline_to_pid[SAVED_CMDLINES];
static char saved_cmdlines[SAVED_CMDLINES][TASK_COMM_LEN];
static int cmdline_idx;
static arch_spinlock_t trace_cmdline_lock = __ARCH_SPIN_LOCK_UNLOCKED;
static atomic_t trace_record_cmdline_disabled __read_mostly;
static void trace_init_cmdlines(void)
int is_tracing_stopped(void)
void ftrace_off_permanent(void)
void tracing_start(void)
void tracing_stop(void)
void trace_stop_cmdline_recording(void);
static void trace_save_cmdline(struct task_struct *tsk)
void trace_find_cmdline(int pid, char comm[])
void tracing_record_cmdline(struct task_struct *tsk)
void
tracing_generic_entry_update(struct trace_entry *entry, unsigned long flags,
int pc)
EXPORT_SYMBOL_GPL(tracing_generic_entry_update);
struct ring_buffer_event *
trace_buffer_lock_reserve(struct ring_buffer *buffer,
int type,
unsigned long len,
unsigned long flags, int pc)
static inline void
__trace_buffer_unlock_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event,
unsigned long flags, int pc,
int wake)
void trace_buffer_unlock_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event,
unsigned long flags, int pc)
struct ring_buffer_event *
trace_current_buffer_lock_reserve(struct ring_buffer **current_rb,
int type, unsigned long len,
unsigned long flags, int pc)
EXPORT_SYMBOL_GPL(trace_current_buffer_lock_reserve);
void trace_current_buffer_unlock_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event,
unsigned long flags, int pc)
EXPORT_SYMBOL_GPL(trace_current_buffer_unlock_commit);
void trace_nowake_buffer_unlock_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event,
unsigned long flags, int pc)
EXPORT_SYMBOL_GPL(trace_nowake_buffer_unlock_commit);
void trace_current_buffer_discard_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event)
EXPORT_SYMBOL_GPL(trace_current_buffer_discard_commit);
void
trace_function(struct trace_array *tr,
unsigned long ip, unsigned long parent_ip, unsigned long flags,
int pc)
void
ftrace(struct trace_array *tr, struct trace_array_cpu *data,
unsigned long ip, unsigned long parent_ip, unsigned long flags,
int pc)
static void __ftrace_trace_stack(struct ring_buffer *buffer,
unsigned long flags,
int skip, int pc)
void ftrace_trace_stack(struct ring_buffer *buffer, unsigned long flags,
int skip, int pc)
void __trace_stack(struct trace_array *tr, unsigned long flags, int skip,
int pc)
void trace_dump_stack(void)
static DEFINE_PER_CPU(int, user_stack_count);
void
ftrace_trace_userstack(struct ring_buffer *buffer, unsigned long flags, int pc)
static void __trace_userstack(struct trace_array *tr, unsigned long flags)
int trace_vbprintk(unsigned long ip, const char *fmt, va_list args)
EXPORT_SYMBOL_GPL(trace_vbprintk);
int trace_array_printk(struct trace_array *tr,
unsigned long ip, const char *fmt, ...)
int trace_array_vprintk(struct trace_array *tr,
unsigned long ip, const char *fmt, va_list args)
int trace_vprintk(unsigned long ip, const char *fmt, va_list args)
EXPORT_SYMBOL_GPL(trace_vprintk);
static void trace_iterator_increment(struct trace_iterator *iter)
static struct trace_entry *
peek_next_entry(struct trace_iterator *iter, int cpu, u64 *ts,
unsigned long *lost_events)
static struct trace_entry *
__find_next_entry(struct trace_iterator *iter, int *ent_cpu,
unsigned long *missing_events, u64 *ent_ts)
struct trace_entry *trace_find_next_entry(struct trace_iterator *iter,
int *ent_cpu, u64 *ent_ts)
void *trace_find_next_entry_inc(struct trace_iterator *iter)
static void trace_consume(struct trace_iterator *iter)
static void *s_next(struct seq_file *m, void *v, loff_t *pos)
void tracing_iter_reset(struct trace_iterator *iter, int cpu)
static void *s_start(struct seq_file *m, loff_t *pos)
static void s_stop(struct seq_file *m, void *p)
static void print_lat_help_header(struct seq_file *m)
static void print_func_help_header(struct seq_file *m)
void
print_trace_header(struct seq_file *m, struct trace_iterator *iter)
static void test_cpu_buff_start(struct trace_iterator *iter)
static enum print_line_t print_trace_fmt(struct trace_iterator *iter)
static enum print_line_t print_raw_fmt(struct trace_iterator *iter)
static enum print_line_t print_hex_fmt(struct trace_iterator *iter)
static enum print_line_t print_bin_fmt(struct trace_iterator *iter)
int trace_empty(struct trace_iterator *iter)
enum print_line_t print_trace_line(struct trace_iterator *iter)
void trace_default_header(struct seq_file *m)
static int s_show(struct seq_file *m, void *v)
static const struct seq_operations tracer_seq_ops = ;
static struct trace_iterator *
__tracing_open(struct inode *inode, struct file *file)
int tracing_open_generic(struct inode *inode, struct file *filp)
static int tracing_release(struct inode *inode, struct file *file)
static int tracing_open(struct inode *inode, struct file *file)
static void *
t_next(struct seq_file *m, void *v, loff_t *pos)
static void *t_start(struct seq_file *m, loff_t *pos)
static void t_stop(struct seq_file *m, void *p)
static int t_show(struct seq_file *m, void *v)
static const struct seq_operations show_traces_seq_ops = ;
static int show_traces_open(struct inode *inode, struct file *file)
static ssize_t
tracing_write_stub(struct file *filp, const char __user *ubuf,
size_t count, loff_t *ppos)
static loff_t tracing_seek(struct file *file, loff_t offset, int origin)
static const struct file_operations tracing_fops = ;
static const struct file_operations show_traces_fops = ;
static cpumask_var_t tracing_cpumask;
static DEFINE_MUTEX(tracing_cpumask_update_lock);
static char mask_str[NR_CPUS + 1];
static ssize_t
tracing_cpumask_read(struct file *filp, char __user *ubuf,
size_t count, loff_t *ppos)
static ssize_t
tracing_cpumask_write(struct file *filp, const char __user *ubuf,
size_t count, loff_t *ppos)
static const struct file_operations tracing_cpumask_fops = ;
static int tracing_trace_options_show(struct seq_file *m, void *v)
static int __set_tracer_option(struct tracer *trace,
struct tracer_flags *tracer_flags,
struct tracer_opt *opts, int neg)
static int set_tracer_option(struct tracer *trace, char *cmp, int neg)
static void set_tracer_flags(unsigned int mask, int enabled)
static ssize_t
tracing_trace_options_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static int tracing_trace_options_open(struct inode *inode, struct file *file)
static const struct file_operations tracing_iter_fops = ;
static const char readme_msg[] =
"tracing mini-HOWTO:\n\n"
"# mount -t debugfs nodev /sys/kernel/debug\n\n"
"# cat /sys/kernel/debug/tracing/available_tracers\n"
"wakeup preemptirqsoff preemptoff irqsoff function sched_switch nop\n\n"
"# cat /sys/kernel/debug/tracing/current_tracer\n"
"nop\n"
"# echo sched_switch > /sys/kernel/debug/tracing/current_tracer\n"
"# cat /sys/kernel/debug/tracing/current_tracer\n"
"sched_switch\n"
"# cat /sys/kernel/debug/tracing/trace_options\n"
"noprint-parent nosym-offset nosym-addr noverbose\n"
"# echo print-parent > /sys/kernel/debug/tracing/trace_options\n"
"# echo 1 > /sys/kernel/debug/tracing/tracing_enabled\n"
"# cat /sys/kernel/debug/tracing/trace > /tmp/trace.txt\n"
"# echo 0 > /sys/kernel/debug/tracing/tracing_enabled\n"
;
static ssize_t
tracing_readme_read(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
static const struct file_operations tracing_readme_fops = ;
static ssize_t
tracing_saved_cmdlines_read(struct file *file, char __user *ubuf,
size_t cnt, loff_t *ppos)
static const struct file_operations tracing_saved_cmdlines_fops = ;
static ssize_t
tracing_ctrl_read(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
static ssize_t
tracing_ctrl_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static ssize_t
tracing_set_trace_read(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
int tracer_init(struct tracer *t, struct trace_array *tr)
static int tracing_resize_ring_buffer(unsigned long size)
int tracing_update_buffers(void)
struct trace_option_dentry;
static struct trace_option_dentry *
create_trace_option_files(struct tracer *tracer);
static void
destroy_trace_option_files(struct trace_option_dentry *topts);
static int tracing_set_tracer(const char *buf)
static ssize_t
tracing_set_trace_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static ssize_t
tracing_max_lat_read(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
static ssize_t
tracing_max_lat_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static int tracing_open_pipe(struct inode *inode, struct file *filp)
static int tracing_release_pipe(struct inode *inode, struct file *file)
static unsigned int
tracing_poll_pipe(struct file *filp, poll_table *poll_table)
void default_wait_pipe(struct trace_iterator *iter)
void poll_wait_pipe(struct trace_iterator *iter)
static int tracing_wait_pipe(struct file *filp)
static ssize_t
tracing_read_pipe(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
static void tracing_pipe_buf_release(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static void tracing_spd_release_pipe(struct splice_pipe_desc *spd,
unsigned int idx)
static const struct pipe_buf_operations tracing_pipe_buf_ops = ;
static size_t
tracing_fill_pipe_page(size_t rem, struct trace_iterator *iter)
static ssize_t tracing_splice_read_pipe(struct file *filp,
loff_t *ppos,
struct pipe_inode_info *pipe,
size_t len,
unsigned int flags)
static ssize_t
tracing_entries_read(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
static ssize_t
tracing_entries_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static int mark_printk(const char *fmt, ...)
static ssize_t
tracing_mark_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *fpos)
static int tracing_clock_show(struct seq_file *m, void *v)
static ssize_t tracing_clock_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *fpos)
static int tracing_clock_open(struct inode *inode, struct file *file)
static const struct file_operations tracing_max_lat_fops = ;
static const struct file_operations tracing_ctrl_fops = ;
static const struct file_operations set_tracer_fops = ;
static const struct file_operations tracing_pipe_fops = ;
static const struct file_operations tracing_entries_fops = ;
static const struct file_operations tracing_mark_fops = ;
static const struct file_operations trace_clock_fops = ;
struct ftrace_buffer_info ;
static int tracing_buffers_open(struct inode *inode, struct file *filp)
static ssize_t
tracing_buffers_read(struct file *filp, char __user *ubuf,
size_t count, loff_t *ppos)
static int tracing_buffers_release(struct inode *inode, struct file *file)
struct buffer_ref ;
static void buffer_pipe_buf_release(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static int buffer_pipe_buf_steal(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static void buffer_pipe_buf_get(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static const struct pipe_buf_operations buffer_pipe_buf_ops = ;
static void buffer_spd_release(struct splice_pipe_desc *spd, unsigned int i)
static ssize_t
tracing_buffers_splice_read(struct file *file, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags)
static const struct file_operations tracing_buffers_fops = ;
static ssize_t
tracing_stats_read(struct file *filp, char __user *ubuf,
size_t count, loff_t *ppos)
static const struct file_operations tracing_stats_fops = ;
int __weak ftrace_arch_read_dyn_info(char *buf, int size)
static ssize_t
tracing_read_dyn_info(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
static const struct file_operations tracing_dyn_info_fops = ;
static struct dentry *d_tracer;
struct dentry *tracing_init_dentry(void)
static struct dentry *d_percpu;
struct dentry *tracing_dentry_percpu(void)
static void tracing_init_debugfs_percpu(long cpu)
struct trace_option_dentry ;
static ssize_t
trace_options_read(struct file *filp, char __user *ubuf, size_t cnt,
loff_t *ppos)
static ssize_t
trace_options_write(struct file *filp, const char __user *ubuf, size_t cnt,
loff_t *ppos)
static const struct file_operations trace_options_fops = ;
static ssize_t
trace_options_core_read(struct file *filp, char __user *ubuf, size_t cnt,
loff_t *ppos)
static ssize_t
trace_options_core_write(struct file *filp, const char __user *ubuf, size_t cnt,
loff_t *ppos)
static const struct file_operations trace_options_core_fops = ;
struct dentry *trace_create_file(const char *name,
mode_t mode,
struct dentry *parent,
void *data,
const struct file_operations *fops)
static struct dentry *trace_options_init_dentry(void)
static void
create_trace_option_file(struct trace_option_dentry *topt,
struct tracer_flags *flags,
struct tracer_opt *opt)
static struct trace_option_dentry *
create_trace_option_files(struct tracer *tracer)
static void
destroy_trace_option_files(struct trace_option_dentry *topts)
static struct dentry *
create_trace_option_core_file(const char *option, long index)
static __init void create_trace_options_dir(void)
static __init int tracer_init_debugfs(void)
static int trace_panic_handler(struct notifier_block *this,
unsigned long event, void *unused)
static struct notifier_block trace_panic_notifier = ;
static int trace_die_handler(struct notifier_block *self,
unsigned long val,
void *data)
static struct notifier_block trace_die_notifier = ;
#define TRACE_MAX_PRINT		1000
#define KERN_TRACE		KERN_EMERG
void
trace_printk_seq(struct trace_seq *s)
void trace_init_global_iter(struct trace_iterator *iter)
static void
__ftrace_dump(bool disable_tracing, enum ftrace_dump_mode oops_dump_mode)
void ftrace_dump(enum ftrace_dump_mode oops_dump_mode)
__init static int tracer_alloc_buffers(void)
__init static int clear_boot_tracer(void)
early_initcall(tracer_alloc_buffers);
fs_initcall(tracer_init_debugfs);
late_initcall(clear_boot_tracer);
