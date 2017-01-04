extern const struct reiserfs_key MIN_KEY;
static int reiserfs_readdir(struct file *, void *, filldir_t);
static int reiserfs_dir_fsync(struct file *filp, int datasync);
const struct file_operations reiserfs_dir_operations = ;
static int reiserfs_dir_fsync(struct file *filp, int datasync)
#define store_ih(where,what) copy_item_head (where, what)
static inline bool is_privroot_deh(struct dentry *dir,
struct reiserfs_de_head *deh)
int reiserfs_readdir_dentry(struct dentry *dentry, void *dirent,
filldir_t filldir, loff_t *pos)
static int reiserfs_readdir(struct file *file, void *dirent, filldir_t filldir)
void make_empty_dir_item_v1(char *body, __le32 dirid, __le32 objid,
__le32 par_dirid, __le32 par_objid)
void make_empty_dir_item(char *body, __le32 dirid, __le32 objid,
__le32 par_dirid, __le32 par_objid)
