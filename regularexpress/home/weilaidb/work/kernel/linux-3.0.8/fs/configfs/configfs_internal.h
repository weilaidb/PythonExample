struct configfs_dirent ;
#define CONFIGFS_ROOT		0x0001
#define CONFIGFS_DIR		0x0002
#define CONFIGFS_ITEM_ATTR	0x0004
#define CONFIGFS_ITEM_LINK	0x0020
#define CONFIGFS_USET_DIR	0x0040
#define CONFIGFS_USET_DEFAULT	0x0080
#define CONFIGFS_USET_DROPPING	0x0100
#define CONFIGFS_USET_IN_MKDIR	0x0200
#define CONFIGFS_USET_CREATING	0x0400
#define CONFIGFS_NOT_PINNED	(CONFIGFS_ITEM_ATTR)
extern struct mutex configfs_symlink_mutex;
extern spinlock_t configfs_dirent_lock;
extern struct vfsmount * configfs_mount;
extern struct kmem_cache *configfs_dir_cachep;
extern int configfs_is_root(struct config_item *item);
extern struct inode * configfs_new_inode(mode_t mode, struct configfs_dirent *);
extern int configfs_create(struct dentry *, int mode, int (*init)(struct inode *));
extern int configfs_inode_init(void);
extern void configfs_inode_exit(void);
extern int configfs_create_file(struct config_item *, const struct configfs_attribute *);
extern int configfs_make_dirent(struct configfs_dirent *,
struct dentry *, void *, umode_t, int);
extern int configfs_dirent_is_ready(struct configfs_dirent *);
extern int configfs_add_file(struct dentry *, const struct configfs_attribute *, int);
extern void configfs_hash_and_remove(struct dentry * dir, const char * name);
extern const unsigned char * configfs_get_name(struct configfs_dirent *sd);
extern void configfs_drop_dentry(struct configfs_dirent *sd, struct dentry *parent);
extern int configfs_setattr(struct dentry *dentry, struct iattr *iattr);
extern int configfs_pin_fs(void);
extern void configfs_release_fs(void);
extern struct rw_semaphore configfs_rename_sem;
extern struct super_block * configfs_sb;
extern const struct file_operations configfs_dir_operations;
extern const struct file_operations configfs_file_operations;
extern const struct file_operations bin_fops;
extern const struct inode_operations configfs_dir_inode_operations;
extern const struct inode_operations configfs_symlink_inode_operations;
extern const struct dentry_operations configfs_dentry_ops;
extern int configfs_symlink(struct inode *dir, struct dentry *dentry,
const char *symname);
extern int configfs_unlink(struct inode *dir, struct dentry *dentry);
struct configfs_symlink ;
extern int configfs_create_link(struct configfs_symlink *sl,
struct dentry *parent,
struct dentry *dentry);
static inline struct config_item * to_item(struct dentry * dentry)
static inline struct configfs_attribute * to_attr(struct dentry * dentry)
static inline struct config_item *configfs_get_config_item(struct dentry *dentry)
static inline void release_configfs_dirent(struct configfs_dirent * sd)
static inline struct configfs_dirent * configfs_get(struct configfs_dirent * sd)
static inline void configfs_put(struct configfs_dirent * sd)
