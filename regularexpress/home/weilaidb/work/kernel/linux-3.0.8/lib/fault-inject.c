int __init setup_fault_attr(struct fault_attr *attr, char *str)
static void fail_dump(struct fault_attr *attr)
#define atomic_dec_not_zero(v)		atomic_add_unless((v), -1, 0)
static bool fail_task(struct fault_attr *attr, struct task_struct *task)
#define MAX_STACK_TRACE_DEPTH 32
static bool fail_stacktrace(struct fault_attr *attr)
static inline bool fail_stacktrace(struct fault_attr *attr)
bool should_fail(struct fault_attr *attr, ssize_t size)
static int debugfs_ul_set(void *data, u64 val)
static int debugfs_ul_set_MAX_STACK_TRACE_DEPTH(void *data, u64 val)
static int debugfs_ul_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_ul, debugfs_ul_get, debugfs_ul_set, "%llu\n");
static struct dentry *debugfs_create_ul(const char *name, mode_t mode,
struct dentry *parent, unsigned long *value)
DEFINE_SIMPLE_ATTRIBUTE(fops_ul_MAX_STACK_TRACE_DEPTH, debugfs_ul_get,
debugfs_ul_set_MAX_STACK_TRACE_DEPTH, "%llu\n");
static struct dentry *debugfs_create_ul_MAX_STACK_TRACE_DEPTH(
const char *name, mode_t mode,
struct dentry *parent, unsigned long *value)
static int debugfs_atomic_t_set(void *data, u64 val)
static int debugfs_atomic_t_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_atomic_t, debugfs_atomic_t_get,
debugfs_atomic_t_set, "%lld\n");
static struct dentry *debugfs_create_atomic_t(const char *name, mode_t mode,
struct dentry *parent, atomic_t *value)
void cleanup_fault_attr_dentries(struct fault_attr *attr)
int init_fault_attr_dentries(struct fault_attr *attr, const char *name)
