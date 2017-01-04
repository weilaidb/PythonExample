typedef int (*toupper_t)(int);
static int	 affs_toupper(int ch);
static int	 affs_hash_dentry(const struct dentry *,
const struct inode *, struct qstr *);
static int       affs_compare_dentry(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name);
static int	 affs_intl_toupper(int ch);
static int	 affs_intl_hash_dentry(const struct dentry *,
const struct inode *, struct qstr *);
static int       affs_intl_compare_dentry(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name);
const struct dentry_operations affs_dentry_operations = ;
const struct dentry_operations affs_intl_dentry_operations = ;
static int
affs_toupper(int ch)
static int
affs_intl_toupper(int ch)
static inline toupper_t
affs_get_toupper(struct super_block *sb)
static inline int
__affs_hash_dentry(struct qstr *qstr, toupper_t toupper)
static int
affs_hash_dentry(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static int
affs_intl_hash_dentry(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static inline int __affs_compare_dentry(unsigned int len,
const char *str, const struct qstr *name, toupper_t toupper)
static int
affs_compare_dentry(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static int
affs_intl_compare_dentry(const struct dentry *parent,const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static inline int
affs_match(struct dentry *dentry, const u8 *name2, toupper_t toupper)
int
affs_hash_name(struct super_block *sb, const u8 *name, unsigned int len)
static struct buffer_head *
affs_find_entry(struct inode *dir, struct dentry *dentry)
struct dentry *
affs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
int
affs_unlink(struct inode *dir, struct dentry *dentry)
int
affs_create(struct inode *dir, struct dentry *dentry, int mode, struct nameidata *nd)
int
affs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
int
affs_rmdir(struct inode *dir, struct dentry *dentry)
int
affs_symlink(struct inode *dir, struct dentry *dentry, const char *symname)
int
affs_link(struct dentry *old_dentry, struct inode *dir, struct dentry *dentry)
int
affs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
