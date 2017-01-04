static int do_getname(const char __user *filename, char *page)
static char *getname_flags(const char __user * filename, int flags)
char *getname(const char __user * filename)
void putname(const char *name)
EXPORT_SYMBOL(putname);
static int acl_permission_check(struct inode *inode, int mask, unsigned int flags,
int (*check_acl)(struct inode *inode, int mask, unsigned int flags))
int generic_permission(struct inode *inode, int mask, unsigned int flags,
int (*check_acl)(struct inode *inode, int mask, unsigned int flags))
int inode_permission(struct inode *inode, int mask)
int file_permission(struct file *file, int mask)
int get_write_access(struct inode * inode)
int deny_write_access(struct file * file)
void path_get(struct path *path)
EXPORT_SYMBOL(path_get);
void path_put(struct path *path)
EXPORT_SYMBOL(path_put);
static int unlazy_walk(struct nameidata *nd, struct dentry *dentry)
void release_open_intent(struct nameidata *nd)
static inline int d_revalidate(struct dentry *dentry, struct nameidata *nd)
static struct dentry *
do_revalidate(struct dentry *dentry, struct nameidata *nd)
static int complete_walk(struct nameidata *nd)
static inline int exec_permission(struct inode *inode, unsigned int flags)
static __always_inline void set_root(struct nameidata *nd)
static int link_path_walk(const char *, struct nameidata *);
static __always_inline void set_root_rcu(struct nameidata *nd)
static __always_inline int __vfs_follow_link(struct nameidata *nd, const char *link)
static void path_put_conditional(struct path *path, struct nameidata *nd)
static inline void path_to_nameidata(const struct path *path,
struct nameidata *nd)
static inline void put_link(struct nameidata *nd, struct path *link, void *cookie)
static __always_inline int
follow_link(struct path *link, struct nameidata *nd, void **p)
static int follow_up_rcu(struct path *path)
int follow_up(struct path *path)
static int follow_automount(struct path *path, unsigned flags,
bool *need_mntput)
static int follow_managed(struct path *path, unsigned flags)
int follow_down_one(struct path *path)
static inline bool managed_dentry_might_block(struct dentry *dentry)
static bool __follow_mount_rcu(struct nameidata *nd, struct path *path,
struct inode **inode)
static void follow_mount_rcu(struct nameidata *nd)
static int follow_dotdot_rcu(struct nameidata *nd)
int follow_down(struct path *path)
static void follow_mount(struct path *path)
static void follow_dotdot(struct nameidata *nd)
static struct dentry *d_alloc_and_lookup(struct dentry *parent,
struct qstr *name, struct nameidata *nd)
static int do_lookup(struct nameidata *nd, struct qstr *name,
struct path *path, struct inode **inode)
static inline int may_lookup(struct nameidata *nd)
static inline int handle_dots(struct nameidata *nd, int type)
static void terminate_walk(struct nameidata *nd)
static inline int walk_component(struct nameidata *nd, struct path *path,
struct qstr *name, int type, int follow)
static inline int nested_symlink(struct path *path, struct nameidata *nd)
static int link_path_walk(const char *name, struct nameidata *nd)
static int path_init(int dfd, const char *name, unsigned int flags,
struct nameidata *nd, struct file **fp)
static inline int lookup_last(struct nameidata *nd, struct path *path)
static int path_lookupat(int dfd, const char *name,
unsigned int flags, struct nameidata *nd)
static int do_path_lookup(int dfd, const char *name,
unsigned int flags, struct nameidata *nd)
int kern_path_parent(const char *name, struct nameidata *nd)
int kern_path(const char *name, unsigned int flags, struct path *path)
int vfs_path_lookup(struct dentry *dentry, struct vfsmount *mnt,
const char *name, unsigned int flags,
struct nameidata *nd)
static struct dentry *__lookup_hash(struct qstr *name,
struct dentry *base, struct nameidata *nd)
static struct dentry *lookup_hash(struct nameidata *nd)
struct dentry *lookup_one_len(const char *name, struct dentry *base, int len)
int user_path_at(int dfd, const char __user *name, unsigned flags,
struct path *path)
static int user_path_parent(int dfd, const char __user *path,
struct nameidata *nd, char **name)
static inline int check_sticky(struct inode *dir, struct inode *inode)
static int may_delete(struct inode *dir,struct dentry *victim,int isdir)
static inline int may_create(struct inode *dir, struct dentry *child)
struct dentry *lock_rename(struct dentry *p1, struct dentry *p2)
void unlock_rename(struct dentry *p1, struct dentry *p2)
int vfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int may_open(struct path *path, int acc_mode, int flag)
static int handle_truncate(struct file *filp)
static inline int open_to_namei_flags(int flag)
static struct file *do_last(struct nameidata *nd, struct path *path,
const struct open_flags *op, const char *pathname)
static struct file *path_openat(int dfd, const char *pathname,
struct nameidata *nd, const struct open_flags *op, int flags)
struct file *do_filp_open(int dfd, const char *pathname,
const struct open_flags *op, int flags)
struct file *do_file_open_root(struct dentry *dentry, struct vfsmount *mnt,
const char *name, const struct open_flags *op, int flags)
struct dentry *lookup_create(struct nameidata *nd, int is_dir)
EXPORT_SYMBOL_GPL(lookup_create);
int vfs_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t dev)
static int may_mknod(mode_t mode)
SYSCALL_DEFINE4(mknodat, int, dfd, const char __user *, filename, int, mode,
unsigned, dev)
SYSCALL_DEFINE3(mknod, const char __user *, filename, int, mode, unsigned, dev)
int vfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
SYSCALL_DEFINE3(mkdirat, int, dfd, const char __user *, pathname, int, mode)
SYSCALL_DEFINE2(mkdir, const char __user *, pathname, int, mode)
void dentry_unhash(struct dentry *dentry)
int vfs_rmdir(struct inode *dir, struct dentry *dentry)
static long do_rmdir(int dfd, const char __user *pathname)
SYSCALL_DEFINE1(rmdir, const char __user *, pathname)
int vfs_unlink(struct inode *dir, struct dentry *dentry)
static long do_unlinkat(int dfd, const char __user *pathname)
SYSCALL_DEFINE3(unlinkat, int, dfd, const char __user *, pathname, int, flag)
SYSCALL_DEFINE1(unlink, const char __user *, pathname)
int vfs_symlink(struct inode *dir, struct dentry *dentry, const char *oldname)
SYSCALL_DEFINE3(symlinkat, const char __user *, oldname,
int, newdfd, const char __user *, newname)
SYSCALL_DEFINE2(symlink, const char __user *, oldname, const char __user *, newname)
int vfs_link(struct dentry *old_dentry, struct inode *dir, struct dentry *new_dentry)
SYSCALL_DEFINE5(linkat, int, olddfd, const char __user *, oldname,
int, newdfd, const char __user *, newname, int, flags)
SYSCALL_DEFINE2(link, const char __user *, oldname, const char __user *, newname)
static int vfs_rename_dir(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int vfs_rename_other(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
int vfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
SYSCALL_DEFINE4(renameat, int, olddfd, const char __user *, oldname,
int, newdfd, const char __user *, newname)
SYSCALL_DEFINE2(rename, const char __user *, oldname, const char __user *, newname)
int vfs_readlink(struct dentry *dentry, char __user *buffer, int buflen, const char *link)
int generic_readlink(struct dentry *dentry, char __user *buffer, int buflen)
int vfs_follow_link(struct nameidata *nd, const char *link)
static char *page_getlink(struct dentry * dentry, struct page **ppage)
int page_readlink(struct dentry *dentry, char __user *buffer, int buflen)
void *page_follow_link_light(struct dentry *dentry, struct nameidata *nd)
void page_put_link(struct dentry *dentry, struct nameidata *nd, void *cookie)
int __page_symlink(struct inode *inode, const char *symname, int len, int nofs)
int page_symlink(struct inode *inode, const char *symname, int len)
const struct inode_operations page_symlink_inode_operations = ;
EXPORT_SYMBOL(user_path_at);
EXPORT_SYMBOL(follow_down_one);
EXPORT_SYMBOL(follow_down);
EXPORT_SYMBOL(follow_up);
EXPORT_SYMBOL(get_write_access);
EXPORT_SYMBOL(getname);
EXPORT_SYMBOL(lock_rename);
EXPORT_SYMBOL(lookup_one_len);
EXPORT_SYMBOL(page_follow_link_light);
EXPORT_SYMBOL(page_put_link);
EXPORT_SYMBOL(page_readlink);
EXPORT_SYMBOL(__page_symlink);
EXPORT_SYMBOL(page_symlink);
EXPORT_SYMBOL(page_symlink_inode_operations);
EXPORT_SYMBOL(kern_path_parent);
EXPORT_SYMBOL(kern_path);
EXPORT_SYMBOL(vfs_path_lookup);
EXPORT_SYMBOL(inode_permission);
EXPORT_SYMBOL(file_permission);
EXPORT_SYMBOL(unlock_rename);
EXPORT_SYMBOL(vfs_create);
EXPORT_SYMBOL(vfs_follow_link);
EXPORT_SYMBOL(vfs_link);
EXPORT_SYMBOL(vfs_mkdir);
EXPORT_SYMBOL(vfs_mknod);
EXPORT_SYMBOL(generic_permission);
EXPORT_SYMBOL(vfs_readlink);
EXPORT_SYMBOL(vfs_rename);
EXPORT_SYMBOL(vfs_rmdir);
EXPORT_SYMBOL(vfs_symlink);
EXPORT_SYMBOL(vfs_unlink);
EXPORT_SYMBOL(dentry_unhash);
EXPORT_SYMBOL(generic_readlink);
