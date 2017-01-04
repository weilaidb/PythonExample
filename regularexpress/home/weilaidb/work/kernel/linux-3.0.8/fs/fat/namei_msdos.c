static unsigned char bad_chars[] = "*?<>|\"";
static unsigned char bad_if_strict[] = "+=,; ";
static int msdos_format_name(const unsigned char *name, int len,
unsigned char *res, struct fat_mount_options *opts)
static int msdos_find(struct inode *dir, const unsigned char *name, int len,
struct fat_slot_info *sinfo)
static int msdos_hash(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static int msdos_cmp(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static const struct dentry_operations msdos_dentry_operations = ;
static struct dentry *msdos_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int msdos_add_entry(struct inode *dir, const unsigned char *name,
int is_dir, int is_hid, int cluster,
struct timespec *ts, struct fat_slot_info *sinfo)
static int msdos_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int msdos_rmdir(struct inode *dir, struct dentry *dentry)
static int msdos_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int msdos_unlink(struct inode *dir, struct dentry *dentry)
static int do_msdos_rename(struct inode *old_dir, unsigned char *old_name,
struct dentry *old_dentry,
struct inode *new_dir, unsigned char *new_name,
struct dentry *new_dentry, int is_hid)
static int msdos_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static const struct inode_operations msdos_dir_inode_operations = ;
static void setup(struct super_block *sb)
static int msdos_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *msdos_mount(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *data)
static struct file_system_type msdos_fs_type = ;
static int __init init_msdos_fs(void)
static void __exit exit_msdos_fs(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Werner Almesberger");
MODULE_DESCRIPTION("MS-DOS filesystem support");
module_init(init_msdos_fs)
module_exit(exit_msdos_fs)
