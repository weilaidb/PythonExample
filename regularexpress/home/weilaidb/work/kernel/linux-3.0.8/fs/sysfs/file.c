static DEFINE_SPINLOCK(sysfs_open_dirent_lock);
struct sysfs_open_dirent ;
struct sysfs_buffer ;
static int fill_read_buffer(struct dentry * dentry, struct sysfs_buffer * buffer)
static ssize_t
sysfs_read_file(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static int
fill_write_buffer(struct sysfs_buffer * buffer, const char __user * buf, size_t count)
static int
flush_write_buffer(struct dentry * dentry, struct sysfs_buffer * buffer, size_t count)
static ssize_t
sysfs_write_file(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
static int sysfs_get_open_dirent(struct sysfs_dirent *sd,
struct sysfs_buffer *buffer)
static void sysfs_put_open_dirent(struct sysfs_dirent *sd,
struct sysfs_buffer *buffer)
static int sysfs_open_file(struct inode *inode, struct file *file)
static int sysfs_release(struct inode *inode, struct file *filp)
static unsigned int sysfs_poll(struct file *filp, poll_table *wait)
void sysfs_notify_dirent(struct sysfs_dirent *sd)
EXPORT_SYMBOL_GPL(sysfs_notify_dirent);
void sysfs_notify(struct kobject *k, const char *dir, const char *attr)
EXPORT_SYMBOL_GPL(sysfs_notify);
const struct file_operations sysfs_file_operations = ;
int sysfs_add_file_mode(struct sysfs_dirent *dir_sd,
const struct attribute *attr, int type, mode_t amode)
int sysfs_add_file(struct sysfs_dirent *dir_sd, const struct attribute *attr,
int type)
int sysfs_create_file(struct kobject * kobj, const struct attribute * attr)
int sysfs_create_files(struct kobject *kobj, const struct attribute **ptr)
int sysfs_add_file_to_group(struct kobject *kobj,
const struct attribute *attr, const char *group)
EXPORT_SYMBOL_GPL(sysfs_add_file_to_group);
int sysfs_chmod_file(struct kobject *kobj, const struct attribute *attr,
mode_t mode)
EXPORT_SYMBOL_GPL(sysfs_chmod_file);
void sysfs_remove_file(struct kobject * kobj, const struct attribute * attr)
void sysfs_remove_files(struct kobject * kobj, const struct attribute **ptr)
void sysfs_remove_file_from_group(struct kobject *kobj,
const struct attribute *attr, const char *group)
EXPORT_SYMBOL_GPL(sysfs_remove_file_from_group);
struct sysfs_schedule_callback_struct ;
static struct workqueue_struct *sysfs_workqueue;
static DEFINE_MUTEX(sysfs_workq_mutex);
static LIST_HEAD(sysfs_workq);
static void sysfs_schedule_callback_work(struct work_struct *work)
int sysfs_schedule_callback(struct kobject *kobj, void (*func)(void *),
void *data, struct module *owner)
EXPORT_SYMBOL_GPL(sysfs_schedule_callback);
EXPORT_SYMBOL_GPL(sysfs_create_file);
EXPORT_SYMBOL_GPL(sysfs_remove_file);
EXPORT_SYMBOL_GPL(sysfs_remove_files);
EXPORT_SYMBOL_GPL(sysfs_create_files);
