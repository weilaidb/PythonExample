#undef DEBUG
DECLARE_RWSEM(configfs_rename_sem);
DEFINE_SPINLOCK(configfs_dirent_lock);
static void configfs_d_iput(struct dentry * dentry,
struct inode * inode)
static int configfs_d_delete(const struct dentry *dentry)
const struct dentry_operations configfs_dentry_ops = ;
static void configfs_init_dirent_depth(struct configfs_dirent *sd)
static void configfs_set_dir_dirent_depth(struct configfs_dirent *parent_sd,
struct configfs_dirent *sd)
static void
configfs_adjust_dir_dirent_depth_before_populate(struct configfs_dirent *sd)
static void
configfs_adjust_dir_dirent_depth_after_populate(struct configfs_dirent *sd)
static void configfs_init_dirent_depth(struct configfs_dirent *sd)
static void configfs_set_dir_dirent_depth(struct configfs_dirent *parent_sd,
struct configfs_dirent *sd)
static void
configfs_adjust_dir_dirent_depth_before_populate(struct configfs_dirent *sd)
static void
configfs_adjust_dir_dirent_depth_after_populate(struct configfs_dirent *sd)
static struct configfs_dirent *configfs_new_dirent(struct configfs_dirent *parent_sd,
void *element, int type)
static int configfs_dirent_exists(struct configfs_dirent *parent_sd,
const unsigned char *new)
int configfs_make_dirent(struct configfs_dirent * parent_sd,
struct dentry * dentry, void * element,
umode_t mode, int type)
static int init_dir(struct inode * inode)
static int configfs_init_file(struct inode * inode)
static int init_symlink(struct inode * inode)
static int create_dir(struct config_item * k, struct dentry * p,
struct dentry * d)
static int configfs_create_dir(struct config_item * item, struct dentry *dentry)
static void configfs_dir_set_ready(struct configfs_dirent *sd)
int configfs_dirent_is_ready(struct configfs_dirent *sd)
int configfs_create_link(struct configfs_symlink *sl,
struct dentry *parent,
struct dentry *dentry)
static void remove_dir(struct dentry * d)
static void configfs_remove_dir(struct config_item * item)
static int configfs_attach_attr(struct configfs_dirent * sd, struct dentry * dentry)
static struct dentry * configfs_lookup(struct inode *dir,
struct dentry *dentry,
struct nameidata *nd)
static int configfs_detach_prep(struct dentry *dentry, struct mutex **wait_mutex)
static void configfs_detach_rollback(struct dentry *dentry)
static void detach_attrs(struct config_item * item)
static int populate_attrs(struct config_item *item)
static int configfs_attach_group(struct config_item *parent_item,
struct config_item *item,
struct dentry *dentry);
static void configfs_detach_group(struct config_item *item);
static void detach_groups(struct config_group *group)
static int create_default_group(struct config_group *parent_group,
struct config_group *group)
static int populate_groups(struct config_group *group)
static void unlink_obj(struct config_item *item)
static void link_obj(struct config_item *parent_item, struct config_item *item)
static void unlink_group(struct config_group *group)
static void link_group(struct config_group *parent_group, struct config_group *group)
static int configfs_attach_item(struct config_item *parent_item,
struct config_item *item,
struct dentry *dentry)
static void configfs_detach_item(struct config_item *item)
static int configfs_attach_group(struct config_item *parent_item,
struct config_item *item,
struct dentry *dentry)
static void configfs_detach_group(struct config_item *item)
static void client_disconnect_notify(struct config_item *parent_item,
struct config_item *item)
static void client_drop_item(struct config_item *parent_item,
struct config_item *item)
static void configfs_dump_one(struct configfs_dirent *sd, int level)
static int configfs_dump(struct configfs_dirent *sd, int level)
static int configfs_depend_prep(struct dentry *origin,
struct config_item *target)
int configfs_depend_item(struct configfs_subsystem *subsys,
struct config_item *target)
EXPORT_SYMBOL(configfs_depend_item);
void configfs_undepend_item(struct configfs_subsystem *subsys,
struct config_item *target)
EXPORT_SYMBOL(configfs_undepend_item);
static int configfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int configfs_rmdir(struct inode *dir, struct dentry *dentry)
const struct inode_operations configfs_dir_inode_operations = ;
static int configfs_dir_open(struct inode *inode, struct file *file)
static int configfs_dir_close(struct inode *inode, struct file *file)
static inline unsigned char dt_type(struct configfs_dirent *sd)
static int configfs_readdir(struct file * filp, void * dirent, filldir_t filldir)
static loff_t configfs_dir_lseek(struct file * file, loff_t offset, int origin)
const struct file_operations configfs_dir_operations = ;
int configfs_register_subsystem(struct configfs_subsystem *subsys)
void configfs_unregister_subsystem(struct configfs_subsystem *subsys)
EXPORT_SYMBOL(configfs_register_subsystem);
EXPORT_SYMBOL(configfs_unregister_subsystem);
