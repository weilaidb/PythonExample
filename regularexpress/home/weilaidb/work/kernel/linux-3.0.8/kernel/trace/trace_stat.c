struct stat_node ;
struct stat_session ;
static LIST_HEAD(all_stat_sessions);
static DEFINE_MUTEX(all_stat_sessions_mutex);
static struct dentry		*stat_dir;
static struct rb_node *release_next(struct tracer_stat *ts,
struct rb_node *node)
static void __reset_stat_session(struct stat_session *session)
static void reset_stat_session(struct stat_session *session)
static void destroy_session(struct stat_session *session)
typedef int (*cmp_stat_t)(void *, void *);
static int insert_stat(struct rb_root *root, void *stat, cmp_stat_t cmp)
static int dummy_cmp(void *p1, void *p2)
static int stat_seq_init(struct stat_session *session)
static void *stat_seq_start(struct seq_file *s, loff_t *pos)
static void *stat_seq_next(struct seq_file *s, void *p, loff_t *pos)
static void stat_seq_stop(struct seq_file *s, void *p)
static int stat_seq_show(struct seq_file *s, void *v)
static const struct seq_operations trace_stat_seq_ops = ;
static int tracing_stat_open(struct inode *inode, struct file *file)
static int tracing_stat_release(struct inode *i, struct file *f)
static const struct file_operations tracing_stat_fops = ;
static int tracing_stat_init(void)
static int init_stat_file(struct stat_session *session)
int register_stat_tracer(struct tracer_stat *trace)
void unregister_stat_tracer(struct tracer_stat *trace)
