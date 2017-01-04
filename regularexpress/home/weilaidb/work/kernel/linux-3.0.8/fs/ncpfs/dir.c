static void ncp_read_volume_list(struct file *, void *, filldir_t,
struct ncp_cache_control *);
static void ncp_do_readdir(struct file *, void *, filldir_t,
struct ncp_cache_control *);
static int ncp_readdir(struct file *, void *, filldir_t);
static int ncp_create(struct inode *, struct dentry *, int, struct nameidata *);
static struct dentry *ncp_lookup(struct inode *, struct dentry *, struct nameidata *);
static int ncp_unlink(struct inode *, struct dentry *);
static int ncp_mkdir(struct inode *, struct dentry *, int);
static int ncp_rmdir(struct inode *, struct dentry *);
static int ncp_rename(struct inode *, struct dentry *,
struct inode *, struct dentry *);
static int ncp_mknod(struct inode * dir, struct dentry *dentry,
int mode, dev_t rdev);
#if defined(CONFIG_NCPFS_EXTRAS) || defined(CONFIG_NCPFS_NFS_NS)
extern int ncp_symlink(struct inode *, struct dentry *, const char *);
#define ncp_symlink NULL
const struct file_operations ncp_dir_operations =
;
const struct inode_operations ncp_dir_inode_operations =
;
static int ncp_lookup_validate(struct dentry *, struct nameidata *);
static int ncp_hash_dentry(const struct dentry *, const struct inode *,
struct qstr *);
static int ncp_compare_dentry(const struct dentry *, const struct inode *,
const struct dentry *, const struct inode *,
unsigned int, const char *, const struct qstr *);
static int ncp_delete_dentry(const struct dentry *);
const struct dentry_operations ncp_dentry_operations =
;
#define ncp_namespace(i)	(NCP_SERVER(i)->name_space[NCP_FINFO(i)->volNumber])
static inline int ncp_preserve_entry_case(struct inode *i, __u32 nscreator)
#define ncp_preserve_case(i)	(ncp_namespace(i) != NW_NS_DOS)
static inline int ncp_case_sensitive(const struct inode *i)
static int
ncp_hash_dentry(const struct dentry *dentry, const struct inode *inode,
struct qstr *this)
static int
ncp_compare_dentry(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static int
ncp_delete_dentry(const struct dentry * dentry)
static inline int
ncp_single_volume(struct ncp_server *server)
static inline int ncp_is_server_root(struct inode *inode)
static int
ncp_force_unlink(struct inode *dir, struct dentry* dentry)
static int
ncp_force_rename(struct inode *old_dir, struct dentry* old_dentry, char *_old_name,
struct inode *new_dir, struct dentry* new_dentry, char *_new_name)
static int
ncp_lookup_validate(struct dentry *dentry, struct nameidata *nd)
static struct dentry *
ncp_dget_fpos(struct dentry *dentry, struct dentry *parent, unsigned long fpos)
static time_t ncp_obtain_mtime(struct dentry *dentry)
static int ncp_readdir(struct file *filp, void *dirent, filldir_t filldir)
static int
ncp_fill_cache(struct file *filp, void *dirent, filldir_t filldir,
struct ncp_cache_control *ctrl, struct ncp_entry_info *entry,
int inval_childs)
static void
ncp_read_volume_list(struct file *filp, void *dirent, filldir_t filldir,
struct ncp_cache_control *ctl)
static void
ncp_do_readdir(struct file *filp, void *dirent, filldir_t filldir,
struct ncp_cache_control *ctl)
int ncp_conn_logged_in(struct super_block *sb)
static struct dentry *ncp_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static int ncp_instantiate(struct inode *dir, struct dentry *dentry,
struct ncp_entry_info *finfo)
int ncp_create_new(struct inode *dir, struct dentry *dentry, int mode,
dev_t rdev, __le32 attributes)
static int ncp_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int ncp_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int ncp_rmdir(struct inode *dir, struct dentry *dentry)
static int ncp_unlink(struct inode *dir, struct dentry *dentry)
static int ncp_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int ncp_mknod(struct inode * dir, struct dentry *dentry,
int mode, dev_t rdev)
static int day_n[] =
;
extern struct timezone sys_tz;
static int utc2local(int time)
static int local2utc(int time)
int
ncp_date_dos2unix(__le16 t, __le16 d)
void
ncp_date_unix2dos(int unix_date, __le16 *time, __le16 *date)
