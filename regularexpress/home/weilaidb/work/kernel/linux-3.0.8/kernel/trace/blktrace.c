static unsigned int blktrace_seq __read_mostly = 1;
static struct trace_array *blk_tr;
static bool blk_tracer_enabled __read_mostly;
#define TRACE_BLK_OPT_CLASSIC	0x1
static struct tracer_opt blk_tracer_opts[] = ;
static struct tracer_flags blk_tracer_flags = ;
static atomic_t blk_probes_ref = ATOMIC_INIT(0);
static void blk_register_tracepoints(void);
static void blk_unregister_tracepoints(void);
static void trace_note(struct blk_trace *bt, pid_t pid, int action,
const void *data, size_t len)
static void trace_note_tsk(struct blk_trace *bt, struct task_struct *tsk)
static void trace_note_time(struct blk_trace *bt)
void __trace_note_message(struct blk_trace *bt, const char *fmt, ...)
EXPORT_SYMBOL_GPL(__trace_note_message);
static int act_log_check(struct blk_trace *bt, u32 what, sector_t sector,
pid_t pid)
static const u32 ddir_act[2] = ;
#define BLK_TC_RAHEAD		BLK_TC_AHEAD
#define MASK_TC_BIT(rw, __name) ((rw & REQ_ ## __name) << \
(ilog2(BLK_TC_ ## __name) + BLK_TC_SHIFT - __REQ_ ## __name))
static void __blk_add_trace(struct blk_trace *bt, sector_t sector, int bytes,
int rw, u32 what, int error, int pdu_len, void *pdu_data)
static struct dentry *blk_tree_root;
static DEFINE_MUTEX(blk_tree_mutex);
static void blk_trace_free(struct blk_trace *bt)
static void blk_trace_cleanup(struct blk_trace *bt)
int blk_trace_remove(struct request_queue *q)
EXPORT_SYMBOL_GPL(blk_trace_remove);
static int blk_dropped_open(struct inode *inode, struct file *filp)
static ssize_t blk_dropped_read(struct file *filp, char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations blk_dropped_fops = ;
static int blk_msg_open(struct inode *inode, struct file *filp)
static ssize_t blk_msg_write(struct file *filp, const char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations blk_msg_fops = ;
static int blk_subbuf_start_callback(struct rchan_buf *buf, void *subbuf,
void *prev_subbuf, size_t prev_padding)
static int blk_remove_buf_file_callback(struct dentry *dentry)
static struct dentry *blk_create_buf_file_callback(const char *filename,
struct dentry *parent,
int mode,
struct rchan_buf *buf,
int *is_global)
static struct rchan_callbacks blk_relay_callbacks = ;
static void blk_trace_setup_lba(struct blk_trace *bt,
struct block_device *bdev)
int do_blk_trace_setup(struct request_queue *q, char *name, dev_t dev,
struct block_device *bdev,
struct blk_user_trace_setup *buts)
int blk_trace_setup(struct request_queue *q, char *name, dev_t dev,
struct block_device *bdev,
char __user *arg)
EXPORT_SYMBOL_GPL(blk_trace_setup);
#if defined(CONFIG_COMPAT) && defined(CONFIG_X86_64)
static int compat_blk_trace_setup(struct request_queue *q, char *name,
dev_t dev, struct block_device *bdev,
char __user *arg)
int blk_trace_startstop(struct request_queue *q, int start)
EXPORT_SYMBOL_GPL(blk_trace_startstop);
int blk_trace_ioctl(struct block_device *bdev, unsigned cmd, char __user *arg)
void blk_trace_shutdown(struct request_queue *q)
static void blk_add_trace_rq(struct request_queue *q, struct request *rq,
u32 what)
static void blk_add_trace_rq_abort(void *ignore,
struct request_queue *q, struct request *rq)
static void blk_add_trace_rq_insert(void *ignore,
struct request_queue *q, struct request *rq)
static void blk_add_trace_rq_issue(void *ignore,
struct request_queue *q, struct request *rq)
static void blk_add_trace_rq_requeue(void *ignore,
struct request_queue *q,
struct request *rq)
static void blk_add_trace_rq_complete(void *ignore,
struct request_queue *q,
struct request *rq)
static void blk_add_trace_bio(struct request_queue *q, struct bio *bio,
u32 what, int error)
static void blk_add_trace_bio_bounce(void *ignore,
struct request_queue *q, struct bio *bio)
static void blk_add_trace_bio_complete(void *ignore,
struct request_queue *q, struct bio *bio,
int error)
static void blk_add_trace_bio_backmerge(void *ignore,
struct request_queue *q,
struct bio *bio)
static void blk_add_trace_bio_frontmerge(void *ignore,
struct request_queue *q,
struct bio *bio)
static void blk_add_trace_bio_queue(void *ignore,
struct request_queue *q, struct bio *bio)
static void blk_add_trace_getrq(void *ignore,
struct request_queue *q,
struct bio *bio, int rw)
static void blk_add_trace_sleeprq(void *ignore,
struct request_queue *q,
struct bio *bio, int rw)
static void blk_add_trace_plug(void *ignore, struct request_queue *q)
static void blk_add_trace_unplug(void *ignore, struct request_queue *q,
unsigned int depth, bool explicit)
static void blk_add_trace_split(void *ignore,
struct request_queue *q, struct bio *bio,
unsigned int pdu)
static void blk_add_trace_bio_remap(void *ignore,
struct request_queue *q, struct bio *bio,
dev_t dev, sector_t from)
static void blk_add_trace_rq_remap(void *ignore,
struct request_queue *q,
struct request *rq, dev_t dev,
sector_t from)
void blk_add_driver_data(struct request_queue *q,
struct request *rq,
void *data, size_t len)
EXPORT_SYMBOL_GPL(blk_add_driver_data);
static void blk_register_tracepoints(void)
static void blk_unregister_tracepoints(void)
static void fill_rwbs(char *rwbs, const struct blk_io_trace *t)
static inline
const struct blk_io_trace *te_blk_io_trace(const struct trace_entry *ent)
static inline const void *pdu_start(const struct trace_entry *ent)
static inline u32 t_action(const struct trace_entry *ent)
static inline u32 t_bytes(const struct trace_entry *ent)
static inline u32 t_sec(const struct trace_entry *ent)
static inline unsigned long long t_sector(const struct trace_entry *ent)
static inline __u16 t_error(const struct trace_entry *ent)
static __u64 get_pdu_int(const struct trace_entry *ent)
static void get_pdu_remap(const struct trace_entry *ent,
struct blk_io_trace_remap *r)
typedef int (blk_log_action_t) (struct trace_iterator *iter, const char *act);
static int blk_log_action_classic(struct trace_iterator *iter, const char *act)
static int blk_log_action(struct trace_iterator *iter, const char *act)
static int blk_log_dump_pdu(struct trace_seq *s, const struct trace_entry *ent)
static int blk_log_generic(struct trace_seq *s, const struct trace_entry *ent)
static int blk_log_with_error(struct trace_seq *s,
const struct trace_entry *ent)
static int blk_log_remap(struct trace_seq *s, const struct trace_entry *ent)
static int blk_log_plug(struct trace_seq *s, const struct trace_entry *ent)
static int blk_log_unplug(struct trace_seq *s, const struct trace_entry *ent)
static int blk_log_split(struct trace_seq *s, const struct trace_entry *ent)
static int blk_log_msg(struct trace_seq *s, const struct trace_entry *ent)
static void blk_tracer_print_header(struct seq_file *m)
static void blk_tracer_start(struct trace_array *tr)
static int blk_tracer_init(struct trace_array *tr)
static void blk_tracer_stop(struct trace_array *tr)
static void blk_tracer_reset(struct trace_array *tr)
static const struct  what2act[] = ;
static enum print_line_t print_one_line(struct trace_iterator *iter,
bool classic)
static enum print_line_t blk_trace_event_print(struct trace_iterator *iter,
int flags, struct trace_event *event)
static int blk_trace_synthesize_old_trace(struct trace_iterator *iter)
static enum print_line_t
blk_trace_event_print_binary(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t blk_tracer_print_line(struct trace_iterator *iter)
static int blk_tracer_set_flag(u32 old_flags, u32 bit, int set)
static struct tracer blk_tracer __read_mostly = ;
static struct trace_event_functions trace_blk_event_funcs = ;
static struct trace_event trace_blk_event = ;
static int __init init_blk_tracer(void)
device_initcall(init_blk_tracer);
static int blk_trace_remove_queue(struct request_queue *q)
static int blk_trace_setup_queue(struct request_queue *q,
struct block_device *bdev)
static ssize_t sysfs_blk_trace_attr_show(struct device *dev,
struct device_attribute *attr,
char *buf);
static ssize_t sysfs_blk_trace_attr_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count);
#define BLK_TRACE_DEVICE_ATTR(_name) \
DEVICE_ATTR(_name, S_IRUGO | S_IWUSR, \
sysfs_blk_trace_attr_show, \
sysfs_blk_trace_attr_store)
static BLK_TRACE_DEVICE_ATTR(enable);
static BLK_TRACE_DEVICE_ATTR(act_mask);
static BLK_TRACE_DEVICE_ATTR(pid);
static BLK_TRACE_DEVICE_ATTR(start_lba);
static BLK_TRACE_DEVICE_ATTR(end_lba);
static struct attribute *blk_trace_attrs[] = ;
struct attribute_group blk_trace_attr_group = ;
static const struct  mask_maps[] = ;
static int blk_trace_str2mask(const char *str)
static ssize_t blk_trace_mask2str(char *buf, int mask)
static struct request_queue *blk_trace_get_queue(struct block_device *bdev)
static ssize_t sysfs_blk_trace_attr_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t sysfs_blk_trace_attr_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
int blk_trace_init_sysfs(struct device *dev)
void blk_trace_remove_sysfs(struct device *dev)
void blk_dump_cmd(char *buf, struct request *rq)
void blk_fill_rwbs(char *rwbs, u32 rw, int bytes)
