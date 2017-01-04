#undef DEBUG
DEFINE_MUTEX(sysfs_mutex);
DEFINE_SPINLOCK(sysfs_assoc_lock);
static DEFINE_SPINLOCK(sysfs_ino_lock);
static DEFINE_IDA(sysfs_ino_ida);
static void sysfs_link_sibling(struct sysfs_dirent *sd)
static void sysfs_unlink_sibling(struct sysfs_dirent *sd)
struct sysfs_dirent *sysfs_get_active(struct sysfs_dirent *sd)
void sysfs_put_active(struct sysfs_dirent *sd)
static void sysfs_deactivate(struct sysfs_dirent *sd)
static int sysfs_alloc_ino(ino_t *pino)
static void sysfs_free_ino(ino_t ino)
void release_sysfs_dirent(struct sysfs_dirent * sd)
static int sysfs_dentry_delete(const struct dentry *dentry)
static int sysfs_dentry_revalidate(struct dentry *dentry, struct nameidata *nd)
static void sysfs_dentry_iput(struct dentry *dentry, struct inode *inode)
static const struct dentry_operations sysfs_dentry_ops = ;
struct sysfs_dirent *sysfs_new_dirent(const char *name, umode_t mode, int type)
void sysfs_addrm_start(struct sysfs_addrm_cxt *acxt,
struct sysfs_dirent *parent_sd)
int __sysfs_add_one(struct sysfs_addrm_cxt *acxt, struct sysfs_dirent *sd)
static char *sysfs_pathname(struct sysfs_dirent *sd, char *path)
int sysfs_add_one(struct sysfs_addrm_cxt *acxt, struct sysfs_dirent *sd)
void sysfs_remove_one(struct sysfs_addrm_cxt *acxt, struct sysfs_dirent *sd)
void sysfs_addrm_finish(struct sysfs_addrm_cxt *acxt)
struct sysfs_dirent *sysfs_find_dirent(struct sysfs_dirent *parent_sd,
const void *ns,
const unsigned char *name)
struct sysfs_dirent *sysfs_get_dirent(struct sysfs_dirent *parent_sd,
const void *ns,
const unsigned char *name)
EXPORT_SYMBOL_GPL(sysfs_get_dirent);
static int create_dir(struct kobject *kobj, struct sysfs_dirent *parent_sd,
enum kobj_ns_type type, const void *ns, const char *name,
struct sysfs_dirent **p_sd)
int sysfs_create_subdir(struct kobject *kobj, const char *name,
struct sysfs_dirent **p_sd)
static enum kobj_ns_type sysfs_read_ns_type(struct kobject *kobj)
int sysfs_create_dir(struct kobject * kobj)
static struct dentry * sysfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
const struct inode_operations sysfs_dir_inode_operations = ;
static void remove_dir(struct sysfs_dirent *sd)
void sysfs_remove_subdir(struct sysfs_dirent *sd)
static void __sysfs_remove_dir(struct sysfs_dirent *dir_sd)
void sysfs_remove_dir(struct kobject * kobj)
int sysfs_rename(struct sysfs_dirent *sd,
struct sysfs_dirent *new_parent_sd, const void *new_ns,
const char *new_name)
int sysfs_rename_dir(struct kobject *kobj, const char *new_name)
int sysfs_move_dir(struct kobject *kobj, struct kobject *new_parent_kobj)
static inline unsigned char dt_type(struct sysfs_dirent *sd)
static int sysfs_dir_release(struct inode *inode, struct file *filp)
static struct sysfs_dirent *sysfs_dir_pos(const void *ns,
struct sysfs_dirent *parent_sd,	ino_t ino, struct sysfs_dirent *pos)
static struct sysfs_dirent *sysfs_dir_next_pos(const void *ns,
struct sysfs_dirent *parent_sd,	ino_t ino, struct sysfs_dirent *pos)
static int sysfs_readdir(struct file * filp, void * dirent, filldir_t filldir)
const struct file_operations sysfs_dir_operations = ;
