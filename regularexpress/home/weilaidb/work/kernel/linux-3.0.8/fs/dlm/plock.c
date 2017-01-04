static spinlock_t ops_lock;
static struct list_head send_list;
static struct list_head recv_list;
static wait_queue_head_t send_wq;
static wait_queue_head_t recv_wq;
struct plock_op ;
struct plock_xop ;
static inline void set_version(struct dlm_plock_info *info)
static int check_version(struct dlm_plock_info *info)
static void send_op(struct plock_op *op)
static void do_unlock_close(struct dlm_ls *ls, u64 number,
struct file *file, struct file_lock *fl)
int dlm_posix_lock(dlm_lockspace_t *lockspace, u64 number, struct file *file,
int cmd, struct file_lock *fl)
EXPORT_SYMBOL_GPL(dlm_posix_lock);
static int dlm_plock_callback(struct plock_op *op)
int dlm_posix_unlock(dlm_lockspace_t *lockspace, u64 number, struct file *file,
struct file_lock *fl)
EXPORT_SYMBOL_GPL(dlm_posix_unlock);
int dlm_posix_get(dlm_lockspace_t *lockspace, u64 number, struct file *file,
struct file_lock *fl)
EXPORT_SYMBOL_GPL(dlm_posix_get);
static ssize_t dev_read(struct file *file, char __user *u, size_t count,
loff_t *ppos)
static ssize_t dev_write(struct file *file, const char __user *u, size_t count,
loff_t *ppos)
static unsigned int dev_poll(struct file *file, poll_table *wait)
static const struct file_operations dev_fops = ;
static struct miscdevice plock_dev_misc = ;
int dlm_plock_init(void)
void dlm_plock_exit(void)
