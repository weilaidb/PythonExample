static const char name_prefix[] = "dlm";
static const struct file_operations device_fops;
static atomic_t dlm_monitor_opened;
static int dlm_monitor_unused = 1;
struct dlm_lock_params32 ;
struct dlm_write_request32 ;
struct dlm_lksb32 ;
struct dlm_lock_result32 ;
static void compat_input(struct dlm_write_request *kb,
struct dlm_write_request32 *kb32,
int namelen)
static void compat_output(struct dlm_lock_result *res,
struct dlm_lock_result32 *res32)
static int lkb_is_endoflife(int mode, int status)
void dlm_user_add_ast(struct dlm_lkb *lkb, uint32_t flags, int mode,
int status, uint32_t sbflags, uint64_t seq)
static int device_user_lock(struct dlm_user_proc *proc,
struct dlm_lock_params *params)
static int device_user_unlock(struct dlm_user_proc *proc,
struct dlm_lock_params *params)
static int device_user_deadlock(struct dlm_user_proc *proc,
struct dlm_lock_params *params)
static int dlm_device_register(struct dlm_ls *ls, char *name)
int dlm_device_deregister(struct dlm_ls *ls)
static int device_user_purge(struct dlm_user_proc *proc,
struct dlm_purge_params *params)
static int device_create_lockspace(struct dlm_lspace_params *params)
static int device_remove_lockspace(struct dlm_lspace_params *params)
static int check_version(struct dlm_write_request *req)
static ssize_t device_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int device_open(struct inode *inode, struct file *file)
static int device_close(struct inode *inode, struct file *file)
static int copy_result_to_user(struct dlm_user_args *ua, int compat,
uint32_t flags, int mode, int copy_lvb,
char __user *buf, size_t count)
static int copy_version_to_user(char __user *buf, size_t count)
static ssize_t device_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static unsigned int device_poll(struct file *file, poll_table *wait)
int dlm_user_daemon_available(void)
static int ctl_device_open(struct inode *inode, struct file *file)
static int ctl_device_close(struct inode *inode, struct file *file)
static int monitor_device_open(struct inode *inode, struct file *file)
static int monitor_device_close(struct inode *inode, struct file *file)
static const struct file_operations device_fops = ;
static const struct file_operations ctl_device_fops = ;
static struct miscdevice ctl_device = ;
static const struct file_operations monitor_device_fops = ;
static struct miscdevice monitor_device = ;
int __init dlm_user_init(void)
void dlm_user_exit(void)
