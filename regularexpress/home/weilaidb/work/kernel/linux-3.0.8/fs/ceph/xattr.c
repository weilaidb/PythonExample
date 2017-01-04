static bool ceph_is_valid_xattr(const char *name)
struct ceph_vxattr_cb ;
static size_t ceph_vxattrcb_entries(struct ceph_inode_info *ci, char *val,
size_t size)
static size_t ceph_vxattrcb_files(struct ceph_inode_info *ci, char *val,
size_t size)
static size_t ceph_vxattrcb_subdirs(struct ceph_inode_info *ci, char *val,
size_t size)
static size_t ceph_vxattrcb_rentries(struct ceph_inode_info *ci, char *val,
size_t size)
static size_t ceph_vxattrcb_rfiles(struct ceph_inode_info *ci, char *val,
size_t size)
static size_t ceph_vxattrcb_rsubdirs(struct ceph_inode_info *ci, char *val,
size_t size)
static size_t ceph_vxattrcb_rbytes(struct ceph_inode_info *ci, char *val,
size_t size)
static size_t ceph_vxattrcb_rctime(struct ceph_inode_info *ci, char *val,
size_t size)
static struct ceph_vxattr_cb ceph_dir_vxattrs[] = ;
static size_t ceph_vxattrcb_layout(struct ceph_inode_info *ci, char *val,
size_t size)
static struct ceph_vxattr_cb ceph_file_vxattrs[] = ;
static struct ceph_vxattr_cb *ceph_inode_vxattrs(struct inode *inode)
static struct ceph_vxattr_cb *ceph_match_vxattr(struct ceph_vxattr_cb *vxattr,
const char *name)
static int __set_xattr(struct ceph_inode_info *ci,
const char *name, int name_len,
const char *val, int val_len,
int dirty,
int should_free_name, int should_free_val,
struct ceph_inode_xattr **newxattr)
static struct ceph_inode_xattr *__get_xattr(struct ceph_inode_info *ci,
const char *name)
static void __free_xattr(struct ceph_inode_xattr *xattr)
static int __remove_xattr(struct ceph_inode_info *ci,
struct ceph_inode_xattr *xattr)
static int __remove_xattr_by_name(struct ceph_inode_info *ci,
const char *name)
static char *__copy_xattr_names(struct ceph_inode_info *ci,
char *dest)
void __ceph_destroy_xattrs(struct ceph_inode_info *ci)
static int __build_xattrs(struct inode *inode)
__releases(inode->i_lock)
__acquires(inode->i_lock)
static int __get_required_blob_size(struct ceph_inode_info *ci, int name_size,
int val_size)
void __ceph_build_xattrs_blob(struct ceph_inode_info *ci)
ssize_t ceph_getxattr(struct dentry *dentry, const char *name, void *value,
size_t size)
ssize_t ceph_listxattr(struct dentry *dentry, char *names, size_t size)
static int ceph_sync_setxattr(struct dentry *dentry, const char *name,
const char *value, size_t size, int flags)
int ceph_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
static int ceph_send_removexattr(struct dentry *dentry, const char *name)
int ceph_removexattr(struct dentry *dentry, const char *name)
