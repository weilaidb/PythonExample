struct dtl ;
static DEFINE_PER_CPU(struct dtl, cpu_dtl);
static u8 dtl_event_mask = 0x7;
static int dtl_buf_entries = N_DISPATCH_LOG;
struct dtl_ring ;
static DEFINE_PER_CPU(struct dtl_ring, dtl_rings);
static atomic_t dtl_count;
static void consume_dtle(struct dtl_entry *dtle, u64 index)
static int dtl_start(struct dtl *dtl)
static void dtl_stop(struct dtl *dtl)
static u64 dtl_current_index(struct dtl *dtl)
static int dtl_start(struct dtl *dtl)
static void dtl_stop(struct dtl *dtl)
static u64 dtl_current_index(struct dtl *dtl)
static int dtl_enable(struct dtl *dtl)
static void dtl_disable(struct dtl *dtl)
static int dtl_file_open(struct inode *inode, struct file *filp)
static int dtl_file_release(struct inode *inode, struct file *filp)
static ssize_t dtl_file_read(struct file *filp, char __user *buf, size_t len,
loff_t *pos)
static const struct file_operations dtl_fops = ;
static struct dentry *dtl_dir;
static int dtl_setup_file(struct dtl *dtl)
static int dtl_init(void)
arch_initcall(dtl_init);
