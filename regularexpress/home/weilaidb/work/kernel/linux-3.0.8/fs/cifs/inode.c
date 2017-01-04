static void cifs_set_ops(struct inode *inode)
{
struct cifs_sb_info *cifs_sb = CIFS_SB(inode->i_sb);
switch (inode->i_mode & S_IFMT)
static void
cifs_revalidate_cache(struct inode *inode, struct cifs_fattr *fattr)
void
cifs_fattr_to_inode(struct inode *inode, struct cifs_fattr *fattr)
void
cifs_fill_uniqueid(struct super_block *sb, struct cifs_fattr *fattr)
void
cifs_unix_basic_to_fattr(struct cifs_fattr *fattr, FILE_UNIX_BASIC_INFO *info,
struct cifs_sb_info *cifs_sb)
static void
cifs_create_dfs_fattr(struct cifs_fattr *fattr, struct super_block *sb)
int cifs_get_file_info_unix(struct file *filp)
int cifs_get_inode_info_unix(struct inode **pinode,
const unsigned char *full_path,
struct super_block *sb, int xid)
static int
cifs_sfu_type(struct cifs_fattr *fattr, const unsigned char *path,
struct cifs_sb_info *cifs_sb, int xid)
#define SFBITS_MASK (S_ISVTX | S_ISGID | S_ISUID)
static int cifs_sfu_mode(struct cifs_fattr *fattr, const unsigned char *path,
struct cifs_sb_info *cifs_sb, int xid)
static void
cifs_all_info_to_fattr(struct cifs_fattr *fattr, FILE_ALL_INFO *info,
struct cifs_sb_info *cifs_sb, bool adjust_tz)
int cifs_get_file_info(struct file *filp)
int cifs_get_inode_info(struct inode **pinode,
const unsigned char *full_path, FILE_ALL_INFO *pfindData,
struct super_block *sb, int xid, const __u16 *pfid)
static const struct inode_operations cifs_ipc_inode_ops = ;
char *cifs_build_path_to_root(struct smb_vol *vol, struct cifs_sb_info *cifs_sb,
struct cifs_tcon *tcon)
static int
cifs_find_inode(struct inode *inode, void *opaque)
static int
cifs_init_inode(struct inode *inode, void *opaque)
static bool
inode_has_hashed_dentries(struct inode *inode)
struct inode *
cifs_iget(struct super_block *sb, struct cifs_fattr *fattr)
struct inode *cifs_root_iget(struct super_block *sb)
static int
cifs_set_file_info(struct inode *inode, struct iattr *attrs, int xid,
char *full_path, __u32 dosattr)
static int
cifs_rename_pending_delete(char *full_path, struct dentry *dentry, int xid)
int cifs_unlink(struct inode *dir, struct dentry *dentry)
int cifs_mkdir(struct inode *inode, struct dentry *direntry, int mode)
int cifs_rmdir(struct inode *inode, struct dentry *direntry)
static int
cifs_do_rename(int xid, struct dentry *from_dentry, const char *fromPath,
struct dentry *to_dentry, const char *toPath)
int cifs_rename(struct inode *source_dir, struct dentry *source_dentry,
struct inode *target_dir, struct dentry *target_dentry)
static bool
cifs_inode_needs_reval(struct inode *inode)
int
cifs_invalidate_mapping(struct inode *inode)
int cifs_revalidate_file_attr(struct file *filp)
int cifs_revalidate_dentry_attr(struct dentry *dentry)
int cifs_revalidate_file(struct file *filp)
int cifs_revalidate_dentry(struct dentry *dentry)
int cifs_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
static int cifs_truncate_page(struct address_space *mapping, loff_t from)
static void cifs_setsize(struct inode *inode, loff_t offset)
static int
cifs_set_file_size(struct inode *inode, struct iattr *attrs,
int xid, char *full_path)
static int
cifs_setattr_unix(struct dentry *direntry, struct iattr *attrs)
static int
cifs_setattr_nounix(struct dentry *direntry, struct iattr *attrs)
int
cifs_setattr(struct dentry *direntry, struct iattr *attrs)
