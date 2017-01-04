#define pr_fmt(fmt)	"gcov: " fmt
struct gcov_node ;
static const char objtree[] = OBJTREE;
static const char srctree[] = SRCTREE;
static struct gcov_node root_node;
static struct dentry *reset_dentry;
static LIST_HEAD(all_head);
static DEFINE_MUTEX(node_lock);
static int gcov_persist = 1;
static int __init gcov_persist_setup(char *str)
__setup("gcov_persist=", gcov_persist_setup);
static void *gcov_seq_start(struct seq_file *seq, loff_t *pos)
static void *gcov_seq_next(struct seq_file *seq, void *data, loff_t *pos)
static int gcov_seq_show(struct seq_file *seq, void *data)
static void gcov_seq_stop(struct seq_file *seq, void *data)
static const struct seq_operations gcov_seq_ops = ;
static struct gcov_info *get_node_info(struct gcov_node *node)
static struct gcov_info *get_accumulated_info(struct gcov_node *node)
static int gcov_seq_open(struct inode *inode, struct file *file)
static int gcov_seq_release(struct inode *inode, struct file *file)
static struct gcov_node *get_node_by_name(const char *name)
static void reset_node(struct gcov_node *node)
static void remove_node(struct gcov_node *node);
static ssize_t gcov_seq_write(struct file *file, const char __user *addr,
size_t len, loff_t *pos)
static char *link_target(const char *dir, const char *path, const char *ext)
static char *get_link_target(const char *filename, const struct gcov_link *ext)
#define SKEW_PREFIX	".tmp_"
static const char *deskew(const char *basename)
static void add_links(struct gcov_node *node, struct dentry *parent)
static const struct file_operations gcov_data_fops = ;
static void init_node(struct gcov_node *node, struct gcov_info *info,
const char *name, struct gcov_node *parent)
static struct gcov_node *new_node(struct gcov_node *parent,
struct gcov_info *info, const char *name)
static void remove_links(struct gcov_node *node)
static void release_node(struct gcov_node *node)
static void remove_node(struct gcov_node *node)
static struct gcov_node *get_child_by_name(struct gcov_node *parent,
const char *name)
static ssize_t reset_write(struct file *file, const char __user *addr,
size_t len, loff_t *pos)
static ssize_t reset_read(struct file *file, char __user *addr, size_t len,
loff_t *pos)
static const struct file_operations gcov_reset_fops = ;
static void add_node(struct gcov_info *info)
static void add_info(struct gcov_node *node, struct gcov_info *info)
static int get_info_index(struct gcov_node *node, struct gcov_info *info)
static void save_info(struct gcov_node *node, struct gcov_info *info)
static void remove_info(struct gcov_node *node, struct gcov_info *info)
void gcov_event(enum gcov_action action, struct gcov_info *info)
static __init int gcov_fs_init(void)
device_initcall(gcov_fs_init);
