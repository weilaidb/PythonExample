#undef DEBUG
static struct lock_class_key default_group_class[MAX_LOCK_DEPTH];
extern struct super_block * configfs_sb;
static const struct address_space_operations configfs_aops = ;
static struct backing_dev_info configfs_backing_dev_info = ;
static const struct inode_operations configfs_inode_operations =;
int configfs_setattr(struct dentry * dentry, struct iattr * iattr)
static inline void set_default_inode_attr(struct inode * inode, mode_t mode)
static inline void set_inode_attr(struct inode * inode, struct iattr * iattr)
struct inode * configfs_new_inode(mode_t mode, struct configfs_dirent * sd)
static void configfs_set_inode_lock_class(struct configfs_dirent *sd,
struct inode *inode)
static void configfs_set_inode_lock_class(struct configfs_dirent *sd,
struct inode *inode)
int configfs_create(struct dentry * dentry, int mode, int (*init)(struct inode *))
const unsigned char * configfs_get_name(struct configfs_dirent *sd)
void configfs_drop_dentry(struct configfs_dirent * sd, struct dentry * parent)
void configfs_hash_and_remove(struct dentry * dir, const char * name)
int __init configfs_inode_init(void)
void __exit configfs_inode_exit(void)
