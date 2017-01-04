#undef TRACE_SYSTEM
#define TRACE_SYSTEM "TRACE_SYSTEM"
DEFINE_MUTEX(event_mutex);
DEFINE_MUTEX(event_storage_mutex);
EXPORT_SYMBOL_GPL(event_storage_mutex);
char event_storage[EVENT_STORAGE_SIZE];
EXPORT_SYMBOL_GPL(event_storage);
LIST_HEAD(ftrace_events);
LIST_HEAD(ftrace_common_fields);
struct list_head *
trace_get_fields(struct ftrace_event_call *event_call)
static int __trace_define_field(struct list_head *head, const char *type,
const char *name, int offset, int size,
int is_signed, int filter_type)
int trace_define_field(struct ftrace_event_call *call, const char *type,
const char *name, int offset, int size, int is_signed,
int filter_type)
EXPORT_SYMBOL_GPL(trace_define_field);
#define __common_field(type, item)					\
ret = __trace_define_field(&ftrace_common_fields, #type,	\
"common_" #item,			\
offsetof(typeof(ent), item),		\
sizeof(ent.item),			\
is_signed_type(type), FILTER_OTHER);	\
if (ret)							\
return ret;
static int trace_define_common_fields(void)
void trace_destroy_fields(struct ftrace_event_call *call)
int trace_event_raw_init(struct ftrace_event_call *call)
EXPORT_SYMBOL_GPL(trace_event_raw_init);
int ftrace_event_reg(struct ftrace_event_call *call, enum trace_reg type)
EXPORT_SYMBOL_GPL(ftrace_event_reg);
void trace_event_enable_cmd_record(bool enable)
static int ftrace_event_enable_disable(struct ftrace_event_call *call,
int enable)
static void ftrace_clear_events(void)
static void __put_system(struct event_subsystem *system)
static void __get_system(struct event_subsystem *system)
static void put_system(struct event_subsystem *system)
static int __ftrace_set_clr_event(const char *match, const char *sub,
const char *event, int set)
static int ftrace_set_clr_event(char *buf, int set)
int trace_set_clr_event(const char *system, const char *event, int set)
EXPORT_SYMBOL_GPL(trace_set_clr_event);
#define EVENT_BUF_SIZE		127
static ssize_t
ftrace_event_write(struct file *file, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static void *
t_next(struct seq_file *m, void *v, loff_t *pos)
static void *t_start(struct seq_file *m, loff_t *pos)
static void *
s_next(struct seq_file *m, void *v, loff_t *pos)
static void *s_start(struct seq_file *m, loff_t *pos)
static int t_show(struct seq_file *m, void *v)
static void t_stop(struct seq_file *m, void *p)
static int
ftrace_event_seq_open(struct inode *inode, struct file *file)
static ssize_t
event_enable_read(struct file *filp, char __user *ubuf, size_t cnt,
loff_t *ppos)
static ssize_t
event_enable_write(struct file *filp, const char __user *ubuf, size_t cnt,
loff_t *ppos)
static ssize_t
system_enable_read(struct file *filp, char __user *ubuf, size_t cnt,
loff_t *ppos)
static ssize_t
system_enable_write(struct file *filp, const char __user *ubuf, size_t cnt,
loff_t *ppos)
enum ;
static void *f_next(struct seq_file *m, void *v, loff_t *pos)
static void *f_start(struct seq_file *m, loff_t *pos)
static int f_show(struct seq_file *m, void *v)
static void f_stop(struct seq_file *m, void *p)
static const struct seq_operations trace_format_seq_ops = ;
static int trace_format_open(struct inode *inode, struct file *file)
static ssize_t
event_id_read(struct file *filp, char __user *ubuf, size_t cnt, loff_t *ppos)
static ssize_t
event_filter_read(struct file *filp, char __user *ubuf, size_t cnt,
loff_t *ppos)
static ssize_t
event_filter_write(struct file *filp, const char __user *ubuf, size_t cnt,
loff_t *ppos)
static LIST_HEAD(event_subsystems);
static int subsystem_open(struct inode *inode, struct file *filp)
static int subsystem_release(struct inode *inode, struct file *file)
static ssize_t
subsystem_filter_read(struct file *filp, char __user *ubuf, size_t cnt,
loff_t *ppos)
static ssize_t
subsystem_filter_write(struct file *filp, const char __user *ubuf, size_t cnt,
loff_t *ppos)
static ssize_t
show_header(struct file *filp, char __user *ubuf, size_t cnt, loff_t *ppos)
static const struct seq_operations show_event_seq_ops = ;
static const struct seq_operations show_set_event_seq_ops = ;
static const struct file_operations ftrace_avail_fops = ;
static const struct file_operations ftrace_set_event_fops = ;
static const struct file_operations ftrace_enable_fops = ;
static const struct file_operations ftrace_event_format_fops = ;
static const struct file_operations ftrace_event_id_fops = ;
static const struct file_operations ftrace_event_filter_fops = ;
static const struct file_operations ftrace_subsystem_filter_fops = ;
static const struct file_operations ftrace_system_enable_fops = ;
static const struct file_operations ftrace_show_header_fops = ;
static struct dentry *event_trace_events_dir(void)
static struct dentry *
event_subsystem_dir(const char *name, struct dentry *d_events)
static int
event_create_dir(struct ftrace_event_call *call, struct dentry *d_events,
const struct file_operations *id,
const struct file_operations *enable,
const struct file_operations *filter,
const struct file_operations *format)
static int
__trace_add_event_call(struct ftrace_event_call *call, struct module *mod,
const struct file_operations *id,
const struct file_operations *enable,
const struct file_operations *filter,
const struct file_operations *format)
int trace_add_event_call(struct ftrace_event_call *call)
static void remove_subsystem_dir(const char *name)
static void __trace_remove_event_call(struct ftrace_event_call *call)
void trace_remove_event_call(struct ftrace_event_call *call)
#define for_each_event(event, start, end)			\
for (event = start;					\
(unsigned long)event < (unsigned long)end;		\
event++)
static LIST_HEAD(ftrace_module_file_list);
struct ftrace_module_file_ops ;
static struct ftrace_module_file_ops *
trace_create_file_ops(struct module *mod)
static void trace_module_add_events(struct module *mod)
static void trace_module_remove_events(struct module *mod)
static int trace_module_notify(struct notifier_block *self,
unsigned long val, void *data)
static int trace_module_notify(struct notifier_block *self,
unsigned long val, void *data)
static struct notifier_block trace_module_nb = ;
extern struct ftrace_event_call *__start_ftrace_events[];
extern struct ftrace_event_call *__stop_ftrace_events[];
static char bootup_event_buf[COMMAND_LINE_SIZE] __initdata;
static __init int setup_trace_event(char *str)
__setup("trace_event=", setup_trace_event);
static __init int event_trace_init(void)
fs_initcall(event_trace_init);
static DEFINE_SPINLOCK(test_spinlock);
static DEFINE_SPINLOCK(test_spinlock_irq);
static DEFINE_MUTEX(test_mutex);
static __init void test_work(struct work_struct *dummy)
static __init int event_test_thread(void *unused)
static __init void event_test_stuff(void)
static __init void event_trace_self_tests(void)
static DEFINE_PER_CPU(atomic_t, ftrace_test_event_disable);
static void
function_test_events_call(unsigned long ip, unsigned long parent_ip)
static struct ftrace_ops trace_ops __initdata  =
;
static __init void event_trace_self_test_with_function(void)
static __init void event_trace_self_test_with_function(void)
static __init int event_trace_self_tests_init(void)
late_initcall(event_trace_self_tests_init);
