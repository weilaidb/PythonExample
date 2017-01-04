struct ea_buffer ;
#define EA_INLINE	0x0001
#define EA_EXTENT	0x0002
#define EA_NEW		0x0004
#define EA_MALLOC	0x0008
static int is_known_namespace(const char *name)
static int is_os2_xattr(struct jfs_ea *ea)
static inline int name_size(struct jfs_ea *ea)
static inline int copy_name(char *buffer, struct jfs_ea *ea)
static void ea_release(struct inode *inode, struct ea_buffer *ea_buf);
static int ea_write_inline(struct inode *ip, struct jfs_ea_list *ealist,
int size, dxd_t * ea)
static int ea_write(struct inode *ip, struct jfs_ea_list *ealist, int size,
dxd_t * ea)
static int ea_read_inline(struct inode *ip, struct jfs_ea_list *ealist)
static int ea_read(struct inode *ip, struct jfs_ea_list *ealist)
static int ea_get(struct inode *inode, struct ea_buffer *ea_buf, int min_size)
static void ea_release(struct inode *inode, struct ea_buffer *ea_buf)
static int ea_put(tid_t tid, struct inode *inode, struct ea_buffer *ea_buf,
int new_size)
static int can_set_system_xattr(struct inode *inode, const char *name,
const void *value, size_t value_len)
static int can_set_xattr(struct inode *inode, const char *name,
const void *value, size_t value_len)
int __jfs_setxattr(tid_t tid, struct inode *inode, const char *name,
const void *value, size_t value_len, int flags)
int jfs_setxattr(struct dentry *dentry, const char *name, const void *value,
size_t value_len, int flags)
ssize_t __jfs_getxattr(struct inode *inode, const char *name, void *data,
size_t buf_size)
ssize_t jfs_getxattr(struct dentry *dentry, const char *name, void *data,
size_t buf_size)
static inline int can_list(struct jfs_ea *ea)
ssize_t jfs_listxattr(struct dentry * dentry, char *data, size_t buf_size)
int jfs_removexattr(struct dentry *dentry, const char *name)
int jfs_init_security(tid_t tid, struct inode *inode, struct inode *dir,
const struct qstr *qstr)
