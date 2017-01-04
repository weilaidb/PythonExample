#define USBFS_DEFAULT_DEVMODE (S_IWUSR | S_IRUGO)
#define USBFS_DEFAULT_BUSMODE (S_IXUGO | S_IRUGO)
#define USBFS_DEFAULT_LISTMODE S_IRUGO
static const struct file_operations default_file_operations;
static struct vfsmount *usbfs_mount;
static int usbfs_mount_count;
static int ignore_mount = 0;
static struct dentry *devices_usbfs_dentry;
static int num_buses;
static uid_t devuid;
static uid_t busuid;
static uid_t listuid;
static gid_t devgid;
static gid_t busgid;
static gid_t listgid;
static umode_t devmode = USBFS_DEFAULT_DEVMODE;
static umode_t busmode = USBFS_DEFAULT_BUSMODE;
static umode_t listmode = USBFS_DEFAULT_LISTMODE;
static int usbfs_show_options(struct seq_file *seq, struct vfsmount *mnt)
enum ;
static const match_table_t tokens = ;
static int parse_options(struct super_block *s, char *data)
static void update_special(struct dentry *special)
static void update_dev(struct dentry *dev)
static void update_bus(struct dentry *bus)
static void update_sb(struct super_block *sb)
static int remount(struct super_block *sb, int *flags, char *data)
static struct inode *usbfs_get_inode (struct super_block *sb, int mode, dev_t dev)
static int usbfs_mknod (struct inode *dir, struct dentry *dentry, int mode,
dev_t dev)
static int usbfs_mkdir (struct inode *dir, struct dentry *dentry, int mode)
static int usbfs_create (struct inode *dir, struct dentry *dentry, int mode)
static inline int usbfs_positive (struct dentry *dentry)
static int usbfs_empty (struct dentry *dentry)
static int usbfs_unlink (struct inode *dir, struct dentry *dentry)
static int usbfs_rmdir(struct inode *dir, struct dentry *dentry)
static ssize_t default_read_file (struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t default_write_file (struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static loff_t default_file_lseek (struct file *file, loff_t offset, int orig)
static int default_open (struct inode *inode, struct file *file)
static const struct file_operations default_file_operations = ;
static const struct super_operations usbfs_ops = ;
static int usbfs_fill_super(struct super_block *sb, void *data, int silent)
static int fs_create_by_name (const char *name, mode_t mode,
struct dentry *parent, struct dentry **dentry)
static struct dentry *fs_create_file (const char *name, mode_t mode,
struct dentry *parent, void *data,
const struct file_operations *fops,
uid_t uid, gid_t gid)
static void fs_remove_file (struct dentry *dentry)
static struct dentry *usb_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type usb_fs_type = ;
static int create_special_files (void)
static void remove_special_files (void)
void usbfs_update_special (void)
static void usbfs_add_bus(struct usb_bus *bus)
static void usbfs_remove_bus(struct usb_bus *bus)
static void usbfs_add_device(struct usb_device *dev)
static void usbfs_remove_device(struct usb_device *dev)
static int usbfs_notify(struct notifier_block *self, unsigned long action, void *dev)
static struct notifier_block usbfs_nb = ;
static struct proc_dir_entry *usbdir = NULL;
int __init usbfs_init(void)
void usbfs_cleanup(void)
