static DEFINE_MUTEX(relay_channels_mutex);
static LIST_HEAD(relay_channels);
static void relay_file_mmap_close(struct vm_area_struct *vma)
static int relay_buf_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct relay_file_mmap_ops = ;
static struct page **relay_alloc_page_array(unsigned int n_pages)
static void relay_free_page_array(struct page **array)
static int relay_mmap_buf(struct rchan_buf *buf, struct vm_area_struct *vma)
static void *relay_alloc_buf(struct rchan_buf *buf, size_t *size)
static struct rchan_buf *relay_create_buf(struct rchan *chan)
static void relay_destroy_channel(struct kref *kref)
static void relay_destroy_buf(struct rchan_buf *buf)
static void relay_remove_buf(struct kref *kref)
static int relay_buf_empty(struct rchan_buf *buf)
int relay_buf_full(struct rchan_buf *buf)
EXPORT_SYMBOL_GPL(relay_buf_full);
static int subbuf_start_default_callback (struct rchan_buf *buf,
void *subbuf,
void *prev_subbuf,
size_t prev_padding)
static void buf_mapped_default_callback(struct rchan_buf *buf,
struct file *filp)
static void buf_unmapped_default_callback(struct rchan_buf *buf,
struct file *filp)
static struct dentry *create_buf_file_default_callback(const char *filename,
struct dentry *parent,
int mode,
struct rchan_buf *buf,
int *is_global)
static int remove_buf_file_default_callback(struct dentry *dentry)
static struct rchan_callbacks default_channel_callbacks = ;
static void wakeup_readers(unsigned long data)
static void __relay_reset(struct rchan_buf *buf, unsigned int init)
void relay_reset(struct rchan *chan)
EXPORT_SYMBOL_GPL(relay_reset);
static inline void relay_set_buf_dentry(struct rchan_buf *buf,
struct dentry *dentry)
static struct dentry *relay_create_buf_file(struct rchan *chan,
struct rchan_buf *buf,
unsigned int cpu)
static struct rchan_buf *relay_open_buf(struct rchan *chan, unsigned int cpu)
static void relay_close_buf(struct rchan_buf *buf)
static void setup_callbacks(struct rchan *chan,
struct rchan_callbacks *cb)
static int __cpuinit relay_hotcpu_callback(struct notifier_block *nb,
unsigned long action,
void *hcpu)
struct rchan *relay_open(const char *base_filename,
struct dentry *parent,
size_t subbuf_size,
size_t n_subbufs,
struct rchan_callbacks *cb,
void *private_data)
EXPORT_SYMBOL_GPL(relay_open);
struct rchan_percpu_buf_dispatcher ;
static void __relay_set_buf_dentry(void *info)
int relay_late_setup_files(struct rchan *chan,
const char *base_filename,
struct dentry *parent)
size_t relay_switch_subbuf(struct rchan_buf *buf, size_t length)
EXPORT_SYMBOL_GPL(relay_switch_subbuf);
void relay_subbufs_consumed(struct rchan *chan,
unsigned int cpu,
size_t subbufs_consumed)
EXPORT_SYMBOL_GPL(relay_subbufs_consumed);
void relay_close(struct rchan *chan)
EXPORT_SYMBOL_GPL(relay_close);
void relay_flush(struct rchan *chan)
EXPORT_SYMBOL_GPL(relay_flush);
static int relay_file_open(struct inode *inode, struct file *filp)
static int relay_file_mmap(struct file *filp, struct vm_area_struct *vma)
static unsigned int relay_file_poll(struct file *filp, poll_table *wait)
static int relay_file_release(struct inode *inode, struct file *filp)
static void relay_file_read_consume(struct rchan_buf *buf,
size_t read_pos,
size_t bytes_consumed)
static int relay_file_read_avail(struct rchan_buf *buf, size_t read_pos)
static size_t relay_file_read_subbuf_avail(size_t read_pos,
struct rchan_buf *buf)
static size_t relay_file_read_start_pos(size_t read_pos,
struct rchan_buf *buf)
static size_t relay_file_read_end_pos(struct rchan_buf *buf,
size_t read_pos,
size_t count)
static int subbuf_read_actor(size_t read_start,
struct rchan_buf *buf,
size_t avail,
read_descriptor_t *desc,
read_actor_t actor)
typedef int (*subbuf_actor_t) (size_t read_start,
struct rchan_buf *buf,
size_t avail,
read_descriptor_t *desc,
read_actor_t actor);
static ssize_t relay_file_read_subbufs(struct file *filp, loff_t *ppos,
subbuf_actor_t subbuf_actor,
read_actor_t actor,
read_descriptor_t *desc)
static ssize_t relay_file_read(struct file *filp,
char __user *buffer,
size_t count,
loff_t *ppos)
static void relay_consume_bytes(struct rchan_buf *rbuf, int bytes_consumed)
static void relay_pipe_buf_release(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static const struct pipe_buf_operations relay_pipe_buf_ops = ;
static void relay_page_release(struct splice_pipe_desc *spd, unsigned int i)
static ssize_t subbuf_splice_actor(struct file *in,
loff_t *ppos,
struct pipe_inode_info *pipe,
size_t len,
unsigned int flags,
int *nonpad_ret)
static ssize_t relay_file_splice_read(struct file *in,
loff_t *ppos,
struct pipe_inode_info *pipe,
size_t len,
unsigned int flags)
const struct file_operations relay_file_operations = ;
EXPORT_SYMBOL_GPL(relay_file_operations);
static __init int relay_init(void)
early_initcall(relay_init);
