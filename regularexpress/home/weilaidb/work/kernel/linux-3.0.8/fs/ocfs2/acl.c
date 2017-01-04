static struct posix_acl *ocfs2_acl_from_xattr(const void *value, size_t size)
static void *ocfs2_acl_to_xattr(const struct posix_acl *acl, size_t *size)
static struct posix_acl *ocfs2_get_acl_nolock(struct inode *inode,
int type,
struct buffer_head *di_bh)
static struct posix_acl *ocfs2_get_acl(struct inode *inode, int type)
static int ocfs2_acl_set_mode(struct inode *inode, struct buffer_head *di_bh,
handle_t *handle, umode_t new_mode)
static int ocfs2_set_acl(handle_t *handle,
struct inode *inode,
struct buffer_head *di_bh,
int type,
struct posix_acl *acl,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_alloc_context *data_ac)
int ocfs2_check_acl(struct inode *inode, int mask, unsigned int flags)
int ocfs2_acl_chmod(struct inode *inode)
int ocfs2_init_acl(handle_t *handle,
struct inode *inode,
struct inode *dir,
struct buffer_head *di_bh,
struct buffer_head *dir_bh,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_alloc_context *data_ac)
static size_t ocfs2_xattr_list_acl_access(struct dentry *dentry,
char *list,
size_t list_len,
const char *name,
size_t name_len,
int type)
static size_t ocfs2_xattr_list_acl_default(struct dentry *dentry,
char *list,
size_t list_len,
const char *name,
size_t name_len,
int type)
static int ocfs2_xattr_get_acl(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int ocfs2_xattr_set_acl(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
const struct xattr_handler ocfs2_xattr_acl_access_handler = ;
const struct xattr_handler ocfs2_xattr_acl_default_handler = ;
