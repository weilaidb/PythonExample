static int ea_calc_size(struct gfs2_sbd *sdp, unsigned int nsize, size_t dsize,
unsigned int *size)
static int ea_check_size(struct gfs2_sbd *sdp, unsigned int nsize, size_t dsize)
typedef int (*ea_call_t) (struct gfs2_inode *ip, struct buffer_head *bh,
struct gfs2_ea_header *ea,
struct gfs2_ea_header *prev, void *private);
static int ea_foreach_i(struct gfs2_inode *ip, struct buffer_head *bh,
ea_call_t ea_call, void *data)
static int ea_foreach(struct gfs2_inode *ip, ea_call_t ea_call, void *data)
struct ea_find ;
static int ea_find_i(struct gfs2_inode *ip, struct buffer_head *bh,
struct gfs2_ea_header *ea, struct gfs2_ea_header *prev,
void *private)
static int gfs2_ea_find(struct gfs2_inode *ip, int type, const char *name,
struct gfs2_ea_location *el)
static int ea_dealloc_unstuffed(struct gfs2_inode *ip, struct buffer_head *bh,
struct gfs2_ea_header *ea,
struct gfs2_ea_header *prev, void *private)
static int ea_remove_unstuffed(struct gfs2_inode *ip, struct buffer_head *bh,
struct gfs2_ea_header *ea,
struct gfs2_ea_header *prev, int leave)
struct ea_list ;
static inline unsigned int gfs2_ea_strlen(struct gfs2_ea_header *ea)
static int ea_list_i(struct gfs2_inode *ip, struct buffer_head *bh,
struct gfs2_ea_header *ea, struct gfs2_ea_header *prev,
void *private)
ssize_t gfs2_listxattr(struct dentry *dentry, char *buffer, size_t size)
static int ea_get_unstuffed(struct gfs2_inode *ip, struct gfs2_ea_header *ea,
char *data)
static int gfs2_ea_get_copy(struct gfs2_inode *ip, struct gfs2_ea_location *el,
char *data, size_t size)
int gfs2_xattr_acl_get(struct gfs2_inode *ip, const char *name, char **ppdata)
static int gfs2_xattr_get(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int ea_alloc_blk(struct gfs2_inode *ip, struct buffer_head **bhp)
static int ea_write(struct gfs2_inode *ip, struct gfs2_ea_header *ea,
struct gfs2_ea_request *er)
typedef int (*ea_skeleton_call_t) (struct gfs2_inode *ip,
struct gfs2_ea_request *er, void *private);
static int ea_alloc_skeleton(struct gfs2_inode *ip, struct gfs2_ea_request *er,
unsigned int blks,
ea_skeleton_call_t skeleton_call, void *private)
static int ea_init_i(struct gfs2_inode *ip, struct gfs2_ea_request *er,
void *private)
static int ea_init(struct gfs2_inode *ip, int type, const char *name,
const void *data, size_t size)
static struct gfs2_ea_header *ea_split_ea(struct gfs2_ea_header *ea)
static void ea_set_remove_stuffed(struct gfs2_inode *ip,
struct gfs2_ea_location *el)
struct ea_set ;
static int ea_set_simple_noalloc(struct gfs2_inode *ip, struct buffer_head *bh,
struct gfs2_ea_header *ea, struct ea_set *es)
static int ea_set_simple_alloc(struct gfs2_inode *ip,
struct gfs2_ea_request *er, void *private)
static int ea_set_simple(struct gfs2_inode *ip, struct buffer_head *bh,
struct gfs2_ea_header *ea, struct gfs2_ea_header *prev,
void *private)
static int ea_set_block(struct gfs2_inode *ip, struct gfs2_ea_request *er,
void *private)
static int ea_set_i(struct gfs2_inode *ip, int type, const char *name,
const void *value, size_t size, struct gfs2_ea_location *el)
static int ea_set_remove_unstuffed(struct gfs2_inode *ip,
struct gfs2_ea_location *el)
static int ea_remove_stuffed(struct gfs2_inode *ip, struct gfs2_ea_location *el)
static int gfs2_xattr_remove(struct gfs2_inode *ip, int type, const char *name)
int __gfs2_xattr_set(struct inode *inode, const char *name,
const void *value, size_t size, int flags, int type)
static int gfs2_xattr_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
static int ea_acl_chmod_unstuffed(struct gfs2_inode *ip,
struct gfs2_ea_header *ea, char *data)
int gfs2_xattr_acl_chmod(struct gfs2_inode *ip, struct iattr *attr, char *data)
static int ea_dealloc_indirect(struct gfs2_inode *ip)
static int ea_dealloc_block(struct gfs2_inode *ip)
int gfs2_ea_dealloc(struct gfs2_inode *ip)
static const struct xattr_handler gfs2_xattr_user_handler = ;
static const struct xattr_handler gfs2_xattr_security_handler = ;
const struct xattr_handler *gfs2_xattr_handlers[] = ;
