DEFINE_MUTEX(configfs_symlink_mutex);
static int item_depth(struct config_item * item)
static int item_path_length(struct config_item * item)
static void fill_item_path(struct config_item * item, char * buffer, int length)
static int create_link(struct config_item *parent_item,
struct config_item *item,
struct dentry *dentry)
static int get_target(const char *symname, struct path *path,
struct config_item **target)
int configfs_symlink(struct inode *dir, struct dentry *dentry, const char *symname)
int configfs_unlink(struct inode *dir, struct dentry *dentry)
static int configfs_get_target_path(struct config_item * item, struct config_item * target,
char *path)
static int configfs_getlink(struct dentry *dentry, char * path)
static void *configfs_follow_link(struct dentry *dentry, struct nameidata *nd)
static void configfs_put_link(struct dentry *dentry, struct nameidata *nd,
void *cookie)
const struct inode_operations configfs_symlink_inode_operations = ;
