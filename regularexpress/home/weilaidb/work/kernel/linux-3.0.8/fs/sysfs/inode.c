#undef DEBUG
extern struct super_block * sysfs_sb;
static const struct address_space_operations sysfs_aops = ;
static struct backing_dev_info sysfs_backing_dev_info = ;
static const struct inode_operations sysfs_inode_operations =;
int __init sysfs_inode_init(void)
static struct sysfs_inode_attrs *sysfs_init_inode_attrs(struct sysfs_dirent *sd)
int sysfs_sd_setattr(struct sysfs_dirent *sd, struct iattr * iattr)
int sysfs_setattr(struct dentry *dentry, struct iattr *iattr)
static int sysfs_sd_setsecdata(struct sysfs_dirent *sd, void **secdata, u32 *secdata_len)
int sysfs_setxattr(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags)
static inline void set_default_inode_attr(struct inode * inode, mode_t mode)
static inline void set_inode_attr(struct inode * inode, struct iattr * iattr)
static int sysfs_count_nlink(struct sysfs_dirent *sd)
static void sysfs_refresh_inode(struct sysfs_dirent *sd, struct inode *inode)
int sysfs_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
static void sysfs_init_inode(struct sysfs_dirent *sd, struct inode *inode)
struct inode * sysfs_get_inode(struct super_block *sb, struct sysfs_dirent *sd)
void sysfs_evict_inode(struct inode *inode)
int sysfs_hash_and_remove(struct sysfs_dirent *dir_sd, const void *ns, const char *name)
int sysfs_permission(struct inode *inode, int mask, unsigned int flags)
