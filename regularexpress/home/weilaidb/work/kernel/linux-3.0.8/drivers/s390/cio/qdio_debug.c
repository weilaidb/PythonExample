debug_info_t *qdio_dbf_setup;
debug_info_t *qdio_dbf_error;
static struct dentry *debugfs_root;
#define QDIO_DEBUGFS_NAME_LEN	10
void qdio_allocate_dbf(struct qdio_initialize *init_data,
struct qdio_irq *irq_ptr)
static int qstat_show(struct seq_file *m, void *v)
static int qstat_seq_open(struct inode *inode, struct file *filp)
static const struct file_operations debugfs_fops = ;
static char *qperf_names[] = ;
static int qperf_show(struct seq_file *m, void *v)
static ssize_t qperf_seq_write(struct file *file, const char __user *ubuf,
size_t count, loff_t *off)
static int qperf_seq_open(struct inode *inode, struct file *filp)
static struct file_operations debugfs_perf_fops = ;
static void setup_debugfs_entry(struct qdio_q *q, struct ccw_device *cdev)
void qdio_setup_debug_entries(struct qdio_irq *irq_ptr, struct ccw_device *cdev)
void qdio_shutdown_debug_entries(struct qdio_irq *irq_ptr, struct ccw_device *cdev)
int __init qdio_debug_init(void)
void qdio_debug_exit(void)
