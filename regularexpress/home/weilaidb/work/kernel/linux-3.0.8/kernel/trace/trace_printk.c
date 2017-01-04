static LIST_HEAD(trace_bprintk_fmt_list);
static DEFINE_MUTEX(btrace_mutex);
struct trace_bprintk_fmt ;
static inline struct trace_bprintk_fmt *lookup_format(const char *fmt)
static
void hold_module_trace_bprintk_format(const char **start, const char **end)
static int module_trace_bprintk_format_notify(struct notifier_block *self,
unsigned long val, void *data)
static const char **
find_next_mod_format(int start_index, void *v, const char **fmt, loff_t *pos)
static void format_mod_start(void)
static void format_mod_stop(void)
__init static int
module_trace_bprintk_format_notify(struct notifier_block *self,
unsigned long val, void *data)
static inline const char **
find_next_mod_format(int start_index, void *v, const char **fmt, loff_t *pos)
static inline void format_mod_start(void)
static inline void format_mod_stop(void)
__initdata_or_module static
struct notifier_block module_trace_bprintk_format_nb = ;
int __trace_bprintk(unsigned long ip, const char *fmt, ...)
EXPORT_SYMBOL_GPL(__trace_bprintk);
int __ftrace_vbprintk(unsigned long ip, const char *fmt, va_list ap)
EXPORT_SYMBOL_GPL(__ftrace_vbprintk);
int __trace_printk(unsigned long ip, const char *fmt, ...)
EXPORT_SYMBOL_GPL(__trace_printk);
int __ftrace_vprintk(unsigned long ip, const char *fmt, va_list ap)
EXPORT_SYMBOL_GPL(__ftrace_vprintk);
static const char **find_next(void *v, loff_t *pos)
static void *
t_start(struct seq_file *m, loff_t *pos)
static void *t_next(struct seq_file *m, void * v, loff_t *pos)
static int t_show(struct seq_file *m, void *v)
static void t_stop(struct seq_file *m, void *p)
static const struct seq_operations show_format_seq_ops = ;
static int
ftrace_formats_open(struct inode *inode, struct file *file)
static const struct file_operations ftrace_formats_fops = ;
static __init int init_trace_printk_function_export(void)
fs_initcall(init_trace_printk_function_export);
static __init int init_trace_printk(void)
early_initcall(init_trace_printk);
