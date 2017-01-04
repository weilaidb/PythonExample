extern struct _ddebug __start___verbose[];
extern struct _ddebug __stop___verbose[];
struct ddebug_table ;
struct ddebug_query ;
struct ddebug_iter ;
static DEFINE_MUTEX(ddebug_lock);
static LIST_HEAD(ddebug_tables);
static int verbose = 0;
static inline const char *basename(const char *path)
static struct  opt_array[] = ;
static char *ddebug_describe_flags(struct _ddebug *dp, char *buf,
size_t maxlen)
static void ddebug_change(const struct ddebug_query *query,
unsigned int flags, unsigned int mask)
static int ddebug_tokenize(char *buf, char *words[], int maxwords)
static inline int parse_lineno(const char *str, unsigned int *val)
#define isodigit(c)		((c) >= '0' && (c) <= '7')
static char *unescape(char *str)
static int ddebug_parse_query(char *words[], int nwords,
struct ddebug_query *query)
static int ddebug_parse_flags(const char *str, unsigned int *flagsp,
unsigned int *maskp)
static int ddebug_exec_query(char *query_string)
int __dynamic_pr_debug(struct _ddebug *descriptor, const char *fmt, ...)
EXPORT_SYMBOL(__dynamic_pr_debug);
static __initdata char ddebug_setup_string[1024];
static __init int ddebug_setup_query(char *str)
__setup("ddebug_query=", ddebug_setup_query);
static ssize_t ddebug_proc_write(struct file *file, const char __user *ubuf,
size_t len, loff_t *offp)
static struct _ddebug *ddebug_iter_first(struct ddebug_iter *iter)
static struct _ddebug *ddebug_iter_next(struct ddebug_iter *iter)
static void *ddebug_proc_start(struct seq_file *m, loff_t *pos)
static void *ddebug_proc_next(struct seq_file *m, void *p, loff_t *pos)
static int ddebug_proc_show(struct seq_file *m, void *p)
static void ddebug_proc_stop(struct seq_file *m, void *p)
static const struct seq_operations ddebug_proc_seqops = ;
static int ddebug_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ddebug_proc_fops = ;
int ddebug_add_module(struct _ddebug *tab, unsigned int n,
const char *name)
EXPORT_SYMBOL_GPL(ddebug_add_module);
static void ddebug_table_free(struct ddebug_table *dt)
int ddebug_remove_module(const char *mod_name)
EXPORT_SYMBOL_GPL(ddebug_remove_module);
static void ddebug_remove_all_tables(void)
static __initdata int ddebug_init_success;
static int __init dynamic_debug_init_debugfs(void)
static int __init dynamic_debug_init(void)
arch_initcall(dynamic_debug_init);
module_init(dynamic_debug_init_debugfs);
