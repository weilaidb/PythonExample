#define IBMASMFS_MAGIC 0x66726f67
static LIST_HEAD(service_processors);
static struct inode *ibmasmfs_make_inode(struct super_block *sb, int mode);
static void ibmasmfs_create_files (struct super_block *sb, struct dentry *root);
static int ibmasmfs_fill_super (struct super_block *sb, void *data, int silent);
static struct dentry *ibmasmfs_mount(struct file_system_type *fst,
int flags, const char *name, void *data)
static const struct super_operations ibmasmfs_s_ops = ;
static const struct file_operations *ibmasmfs_dir_ops = &simple_dir_operations;
static struct file_system_type ibmasmfs_type = ;
static int ibmasmfs_fill_super (struct super_block *sb, void *data, int silent)
static struct inode *ibmasmfs_make_inode(struct super_block *sb, int mode)
static struct dentry *ibmasmfs_create_file (struct super_block *sb,
struct dentry *parent,
const char *name,
const struct file_operations *fops,
void *data,
int mode)
static struct dentry *ibmasmfs_create_dir (struct super_block *sb,
struct dentry *parent,
const char *name)
int ibmasmfs_register(void)
void ibmasmfs_unregister(void)
void ibmasmfs_add_sp(struct service_processor *sp)
struct ibmasmfs_command_data ;
struct ibmasmfs_event_data ;
struct ibmasmfs_heartbeat_data ;
static int command_file_open(struct inode *inode, struct file *file)
static int command_file_close(struct inode *inode, struct file *file)
static ssize_t command_file_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static ssize_t command_file_write(struct file *file, const char __user *ubuff, size_t count, loff_t *offset)
static int event_file_open(struct inode *inode, struct file *file)
static int event_file_close(struct inode *inode, struct file *file)
static ssize_t event_file_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static ssize_t event_file_write(struct file *file, const char __user *buf, size_t count, loff_t *offset)
static int r_heartbeat_file_open(struct inode *inode, struct file *file)
static int r_heartbeat_file_close(struct inode *inode, struct file *file)
static ssize_t r_heartbeat_file_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static ssize_t r_heartbeat_file_write(struct file *file, const char __user *buf, size_t count, loff_t *offset)
static int remote_settings_file_open(struct inode *inode, struct file *file)
static int remote_settings_file_close(struct inode *inode, struct file *file)
static ssize_t remote_settings_file_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static ssize_t remote_settings_file_write(struct file *file, const char __user *ubuff, size_t count, loff_t *offset)
static const struct file_operations command_fops = ;
static const struct file_operations event_fops = ;
static const struct file_operations r_heartbeat_fops = ;
static const struct file_operations remote_settings_fops = ;
static void ibmasmfs_create_files (struct super_block *sb, struct dentry *root)
