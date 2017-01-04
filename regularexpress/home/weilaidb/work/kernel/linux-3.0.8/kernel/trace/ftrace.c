#define FTRACE_WARN_ON(cond)			\
()
#define FTRACE_WARN_ON_ONCE(cond)		\
()
#define FTRACE_HASH_BITS 7
#define FTRACE_FUNC_HASHSIZE (1 << FTRACE_HASH_BITS)
#define FTRACE_HASH_DEFAULT_BITS 10
#define FTRACE_HASH_MAX_BITS 12
int ftrace_enabled __read_mostly;
static int last_ftrace_enabled;
int function_trace_stop;
LIST_HEAD(ftrace_pids);
struct ftrace_pid ;
static int ftrace_disabled __read_mostly;
static DEFINE_MUTEX(ftrace_lock);
static struct ftrace_ops ftrace_list_end __read_mostly =
;
static struct ftrace_ops *ftrace_global_list __read_mostly = &ftrace_list_end;
static struct ftrace_ops *ftrace_ops_list __read_mostly = &ftrace_list_end;
ftrace_func_t ftrace_trace_function __read_mostly = ftrace_stub;
ftrace_func_t __ftrace_trace_function __read_mostly = ftrace_stub;
ftrace_func_t ftrace_pid_function __read_mostly = ftrace_stub;
static struct ftrace_ops global_ops;
static void
ftrace_ops_list_func(unsigned long ip, unsigned long parent_ip);
static void ftrace_global_list_func(unsigned long ip,
unsigned long parent_ip)
static void ftrace_pid_func(unsigned long ip, unsigned long parent_ip)
static void set_ftrace_pid_function(ftrace_func_t func)
void clear_ftrace_function(void)
static void ftrace_test_stop_func(unsigned long ip, unsigned long parent_ip)
static void update_global_ops(void)
static void update_ftrace_function(void)
static void add_ftrace_ops(struct ftrace_ops **list, struct ftrace_ops *ops)
static int remove_ftrace_ops(struct ftrace_ops **list, struct ftrace_ops *ops)
static int __register_ftrace_function(struct ftrace_ops *ops)
static int __unregister_ftrace_function(struct ftrace_ops *ops)
static void ftrace_update_pid_func(void)
struct ftrace_profile ;
struct ftrace_profile_page ;
struct ftrace_profile_stat ;
#define PROFILE_RECORDS_SIZE						\
(PAGE_SIZE - offsetof(struct ftrace_profile_page, records))
#define PROFILES_PER_PAGE					\
(PROFILE_RECORDS_SIZE / sizeof(struct ftrace_profile))
static int ftrace_profile_bits __read_mostly;
static int ftrace_profile_enabled __read_mostly;
static DEFINE_MUTEX(ftrace_profile_lock);
static DEFINE_PER_CPU(struct ftrace_profile_stat, ftrace_profile_stats);
#define FTRACE_PROFILE_HASH_SIZE 1024
static void *
function_stat_next(void *v, int idx)
static void *function_stat_start(struct tracer_stat *trace)
static int function_stat_cmp(void *p1, void *p2)
static int function_stat_cmp(void *p1, void *p2)
static int function_stat_headers(struct seq_file *m)
static int function_stat_show(struct seq_file *m, void *v)
static void ftrace_profile_reset(struct ftrace_profile_stat *stat)
int ftrace_profile_pages_init(struct ftrace_profile_stat *stat)
static int ftrace_profile_init_cpu(int cpu)
static int ftrace_profile_init(void)
static struct ftrace_profile *
ftrace_find_profiled_func(struct ftrace_profile_stat *stat, unsigned long ip)
static void ftrace_add_profile(struct ftrace_profile_stat *stat,
struct ftrace_profile *rec)
static struct ftrace_profile *
ftrace_profile_alloc(struct ftrace_profile_stat *stat, unsigned long ip)
static void
function_profile_call(unsigned long ip, unsigned long parent_ip)
static int profile_graph_entry(struct ftrace_graph_ent *trace)
static void profile_graph_return(struct ftrace_graph_ret *trace)
static int register_ftrace_profiler(void)
static void unregister_ftrace_profiler(void)
static struct ftrace_ops ftrace_profile_ops __read_mostly =
;
static int register_ftrace_profiler(void)
static void unregister_ftrace_profiler(void)
static ssize_t
ftrace_profile_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static ssize_t
ftrace_profile_read(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
static const struct file_operations ftrace_profile_fops = ;
static struct tracer_stat function_stats __initdata = ;
static __init void ftrace_profile_debugfs(struct dentry *d_tracer)
static __init void ftrace_profile_debugfs(struct dentry *d_tracer)
static struct pid * const ftrace_swapper_pid = &init_struct_pid;
# error Dynamic ftrace depends on MCOUNT_RECORD
static struct hlist_head ftrace_func_hash[FTRACE_FUNC_HASHSIZE] __read_mostly;
struct ftrace_func_probe ;
enum ;
struct ftrace_func_entry ;
struct ftrace_hash ;
static const struct hlist_head empty_buckets[1];
static const struct ftrace_hash empty_hash = ;
#define EMPTY_HASH	((struct ftrace_hash *)&empty_hash)
static struct ftrace_ops global_ops = ;
static struct dyn_ftrace *ftrace_new_addrs;
static DEFINE_MUTEX(ftrace_regex_lock);
struct ftrace_page ;
#define ENTRIES_PER_PAGE \
((PAGE_SIZE - sizeof(struct ftrace_page)) / sizeof(struct dyn_ftrace))
#define NR_TO_INIT		10000
static struct ftrace_page	*ftrace_pages_start;
static struct ftrace_page	*ftrace_pages;
static struct dyn_ftrace *ftrace_free_records;
static struct ftrace_func_entry *
ftrace_lookup_ip(struct ftrace_hash *hash, unsigned long ip)
static void __add_hash_entry(struct ftrace_hash *hash,
struct ftrace_func_entry *entry)
static int add_hash_entry(struct ftrace_hash *hash, unsigned long ip)
static void
free_hash_entry(struct ftrace_hash *hash,
struct ftrace_func_entry *entry)
static void
remove_hash_entry(struct ftrace_hash *hash,
struct ftrace_func_entry *entry)
static void ftrace_hash_clear(struct ftrace_hash *hash)
static void free_ftrace_hash(struct ftrace_hash *hash)
static void __free_ftrace_hash_rcu(struct rcu_head *rcu)
static void free_ftrace_hash_rcu(struct ftrace_hash *hash)
static struct ftrace_hash *alloc_ftrace_hash(int size_bits)
static struct ftrace_hash *
alloc_and_copy_ftrace_hash(int size_bits, struct ftrace_hash *hash)
static int
ftrace_hash_move(struct ftrace_hash **dst, struct ftrace_hash *src)
static int
ftrace_ops_test(struct ftrace_ops *ops, unsigned long ip)
#define do_for_each_ftrace_rec(pg, rec)					\
for (pg = ftrace_pages_start; pg; pg = pg->next)
static void __ftrace_hash_rec_update(struct ftrace_ops *ops,
int filter_hash,
bool inc)
static void ftrace_hash_rec_disable(struct ftrace_ops *ops,
int filter_hash)
static void ftrace_hash_rec_enable(struct ftrace_ops *ops,
int filter_hash)
static void ftrace_free_rec(struct dyn_ftrace *rec)
static struct dyn_ftrace *ftrace_alloc_dyn_node(unsigned long ip)
static struct dyn_ftrace *
ftrace_record_ip(unsigned long ip)
static void print_ip_ins(const char *fmt, unsigned char *p)
static void ftrace_bug(int failed, unsigned long ip)
int ftrace_text_reserved(void *start, void *end)
static int
__ftrace_replace_code(struct dyn_ftrace *rec, int enable)
static void ftrace_replace_code(int enable)
static int
ftrace_code_disable(struct module *mod, struct dyn_ftrace *rec)
int __weak ftrace_arch_code_modify_prepare(void)
int __weak ftrace_arch_code_modify_post_process(void)
static int __ftrace_modify_code(void *data)
static void ftrace_run_update_code(int command)
static ftrace_func_t saved_ftrace_func;
static int ftrace_start_up;
static int global_start_up;
static void ftrace_startup_enable(int command)
static int ftrace_startup(struct ftrace_ops *ops, int command)
static void ftrace_shutdown(struct ftrace_ops *ops, int command)
static void ftrace_startup_sysctl(void)
static void ftrace_shutdown_sysctl(void)
static cycle_t		ftrace_update_time;
static unsigned long	ftrace_update_cnt;
unsigned long		ftrace_update_tot_cnt;
static int ops_traces_mod(struct ftrace_ops *ops)
static int ftrace_update_code(struct module *mod)
static int __init ftrace_dyn_table_alloc(unsigned long num_to_init)
enum ;
#define FTRACE_BUFF_MAX (KSYM_SYMBOL_LEN+4)
struct ftrace_iterator ;
static void *
t_hash_next(struct seq_file *m, loff_t *pos)
static void *t_hash_start(struct seq_file *m, loff_t *pos)
static int
t_hash_show(struct seq_file *m, struct ftrace_iterator *iter)
static void *
t_next(struct seq_file *m, void *v, loff_t *pos)
static void reset_iter_read(struct ftrace_iterator *iter)
static void *t_start(struct seq_file *m, loff_t *pos)
static void t_stop(struct seq_file *m, void *p)
static int t_show(struct seq_file *m, void *v)
static const struct seq_operations show_ftrace_seq_ops = ;
static int
ftrace_avail_open(struct inode *inode, struct file *file)
static int
ftrace_enabled_open(struct inode *inode, struct file *file)
static void ftrace_filter_reset(struct ftrace_hash *hash)
static int
ftrace_regex_open(struct ftrace_ops *ops, int flag,
struct inode *inode, struct file *file)
static int
ftrace_filter_open(struct inode *inode, struct file *file)
static int
ftrace_notrace_open(struct inode *inode, struct file *file)
static loff_t
ftrace_regex_lseek(struct file *file, loff_t offset, int origin)
static int ftrace_match(char *str, char *regex, int len, int type)
static int
enter_record(struct ftrace_hash *hash, struct dyn_ftrace *rec, int not)
static int
ftrace_match_record(struct dyn_ftrace *rec, char *mod,
char *regex, int len, int type)
static int
match_records(struct ftrace_hash *hash, char *buff,
int len, char *mod, int not)
static int
ftrace_match_records(struct ftrace_hash *hash, char *buff, int len)
static int
ftrace_match_module_records(struct ftrace_hash *hash, char *buff, char *mod)
static int
ftrace_mod_callback(struct ftrace_hash *hash,
char *func, char *cmd, char *param, int enable)
static struct ftrace_func_command ftrace_mod_cmd = ;
static int __init ftrace_mod_cmd_init(void)
device_initcall(ftrace_mod_cmd_init);
static void
function_trace_probe_call(unsigned long ip, unsigned long parent_ip)
static struct ftrace_ops trace_probe_ops __read_mostly =
;
static int ftrace_probe_registered;
static void __enable_ftrace_function_probe(void)
static void __disable_ftrace_function_probe(void)
static void ftrace_free_entry_rcu(struct rcu_head *rhp)
int
register_ftrace_function_probe(char *glob, struct ftrace_probe_ops *ops,
void *data)
enum ;
static void
__unregister_ftrace_function_probe(char *glob, struct ftrace_probe_ops *ops,
void *data, int flags)
void
unregister_ftrace_function_probe(char *glob, struct ftrace_probe_ops *ops,
void *data)
void
unregister_ftrace_function_probe_func(char *glob, struct ftrace_probe_ops *ops)
void unregister_ftrace_function_probe_all(char *glob)
static LIST_HEAD(ftrace_commands);
static DEFINE_MUTEX(ftrace_cmd_mutex);
int register_ftrace_command(struct ftrace_func_command *cmd)
int unregister_ftrace_command(struct ftrace_func_command *cmd)
static int ftrace_process_regex(struct ftrace_hash *hash,
char *buff, int len, int enable)
static ssize_t
ftrace_regex_write(struct file *file, const char __user *ubuf,
size_t cnt, loff_t *ppos, int enable)
static ssize_t
ftrace_filter_write(struct file *file, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static ssize_t
ftrace_notrace_write(struct file *file, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static int
ftrace_set_regex(struct ftrace_ops *ops, unsigned char *buf, int len,
int reset, int enable)
void ftrace_set_filter(struct ftrace_ops *ops, unsigned char *buf,
int len, int reset)
EXPORT_SYMBOL_GPL(ftrace_set_filter);
void ftrace_set_notrace(struct ftrace_ops *ops, unsigned char *buf,
int len, int reset)
EXPORT_SYMBOL_GPL(ftrace_set_notrace);
void ftrace_set_global_filter(unsigned char *buf, int len, int reset)
EXPORT_SYMBOL_GPL(ftrace_set_global_filter);
void ftrace_set_global_notrace(unsigned char *buf, int len, int reset)
EXPORT_SYMBOL_GPL(ftrace_set_global_notrace);
#define FTRACE_FILTER_SIZE		COMMAND_LINE_SIZE
static char ftrace_notrace_buf[FTRACE_FILTER_SIZE] __initdata;
static char ftrace_filter_buf[FTRACE_FILTER_SIZE] __initdata;
static int __init set_ftrace_notrace(char *str)
__setup("ftrace_notrace=", set_ftrace_notrace);
static int __init set_ftrace_filter(char *str)
__setup("ftrace_filter=", set_ftrace_filter);
static char ftrace_graph_buf[FTRACE_FILTER_SIZE] __initdata;
static int ftrace_set_func(unsigned long *array, int *idx, char *buffer);
static int __init set_graph_function(char *str)
__setup("ftrace_graph_filter=", set_graph_function);
static void __init set_ftrace_early_graph(char *buf)
static void __init
set_ftrace_early_filter(struct ftrace_ops *ops, char *buf, int enable)
static void __init set_ftrace_early_filters(void)
static int
ftrace_regex_release(struct inode *inode, struct file *file)
static const struct file_operations ftrace_avail_fops = ;
static const struct file_operations ftrace_enabled_fops = ;
static const struct file_operations ftrace_filter_fops = ;
static const struct file_operations ftrace_notrace_fops = ;
static DEFINE_MUTEX(graph_lock);
int ftrace_graph_count;
int ftrace_graph_filter_enabled;
unsigned long ftrace_graph_funcs[FTRACE_GRAPH_MAX_FUNCS] __read_mostly;
static void *
__g_next(struct seq_file *m, loff_t *pos)
static void *
g_next(struct seq_file *m, void *v, loff_t *pos)
static void *g_start(struct seq_file *m, loff_t *pos)
static void g_stop(struct seq_file *m, void *p)
static int g_show(struct seq_file *m, void *v)
static const struct seq_operations ftrace_graph_seq_ops = ;
static int
ftrace_graph_open(struct inode *inode, struct file *file)
static int
ftrace_graph_release(struct inode *inode, struct file *file)
static int
ftrace_set_func(unsigned long *array, int *idx, char *buffer)
static ssize_t
ftrace_graph_write(struct file *file, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static const struct file_operations ftrace_graph_fops = ;
static __init int ftrace_init_dyn_debugfs(struct dentry *d_tracer)
static int ftrace_process_locs(struct module *mod,
unsigned long *start,
unsigned long *end)
void ftrace_release_mod(struct module *mod)
static void ftrace_init_module(struct module *mod,
unsigned long *start, unsigned long *end)
static int ftrace_module_notify(struct notifier_block *self,
unsigned long val, void *data)
static int ftrace_module_notify(struct notifier_block *self,
unsigned long val, void *data)
struct notifier_block ftrace_module_nb = ;
extern unsigned long __start_mcount_loc[];
extern unsigned long __stop_mcount_loc[];
void __init ftrace_init(void)
static struct ftrace_ops global_ops = ;
static int __init ftrace_nodyn_init(void)
device_initcall(ftrace_nodyn_init);
static inline int ftrace_init_dyn_debugfs(struct dentry *d_tracer)
static inline void ftrace_startup_enable(int command)
# define ftrace_startup(ops, command)			\
()
# define ftrace_shutdown(ops, command)	do  while (0)
# define ftrace_startup_sysctl()	do  while (0)
# define ftrace_shutdown_sysctl()	do  while (0)
static inline int
ftrace_ops_test(struct ftrace_ops *ops, unsigned long ip)
static void
ftrace_ops_list_func(unsigned long ip, unsigned long parent_ip)
static void clear_ftrace_swapper(void)
static void set_ftrace_swapper(void)
static void clear_ftrace_pid(struct pid *pid)
static void set_ftrace_pid(struct pid *pid)
static void clear_ftrace_pid_task(struct pid *pid)
static void set_ftrace_pid_task(struct pid *pid)
static int ftrace_pid_add(int p)
static void ftrace_pid_reset(void)
static void *fpid_start(struct seq_file *m, loff_t *pos)
static void *fpid_next(struct seq_file *m, void *v, loff_t *pos)
static void fpid_stop(struct seq_file *m, void *p)
static int fpid_show(struct seq_file *m, void *v)
static const struct seq_operations ftrace_pid_sops = ;
static int
ftrace_pid_open(struct inode *inode, struct file *file)
static ssize_t
ftrace_pid_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static int
ftrace_pid_release(struct inode *inode, struct file *file)
static const struct file_operations ftrace_pid_fops = ;
static __init int ftrace_init_debugfs(void)
fs_initcall(ftrace_init_debugfs);
void ftrace_kill(void)
int register_ftrace_function(struct ftrace_ops *ops)
EXPORT_SYMBOL_GPL(register_ftrace_function);
int unregister_ftrace_function(struct ftrace_ops *ops)
EXPORT_SYMBOL_GPL(unregister_ftrace_function);
int
ftrace_enable_sysctl(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static int ftrace_graph_active;
static struct notifier_block ftrace_suspend_notifier;
int ftrace_graph_entry_stub(struct ftrace_graph_ent *trace)
trace_func_graph_ret_t ftrace_graph_return =
(trace_func_graph_ret_t)ftrace_stub;
trace_func_graph_ent_t ftrace_graph_entry = ftrace_graph_entry_stub;
static int alloc_retstack_tasklist(struct ftrace_ret_stack **ret_stack_list)
static void
ftrace_graph_probe_sched_switch(void *ignore,
struct task_struct *prev, struct task_struct *next)
static int start_graph_tracing(void)
static int
ftrace_suspend_notifier_call(struct notifier_block *bl, unsigned long state,
void *unused)
int register_ftrace_graph(trace_func_graph_ret_t retfunc,
trace_func_graph_ent_t entryfunc)
void unregister_ftrace_graph(void)
static DEFINE_PER_CPU(struct ftrace_ret_stack *, idle_ret_stack);
static void
graph_init_task(struct task_struct *t, struct ftrace_ret_stack *ret_stack)
void ftrace_graph_init_idle_task(struct task_struct *t, int cpu)
void ftrace_graph_init_task(struct task_struct *t)
void ftrace_graph_exit_task(struct task_struct *t)
void ftrace_graph_stop(void)
