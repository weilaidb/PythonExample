#define BHDR(bh) ((struct ext3_xattr_header *)((bh)->b_data))
#define ENTRY(ptr) ((struct ext3_xattr_entry *)(ptr))
#define BFIRST(bh) ENTRY(BHDR(bh)+1)
#define IS_LAST_ENTRY(entry) (*(__u32 *)(entry) == 0)
#define IHDR(inode, raw_inode) \
((struct ext3_xattr_ibody_header *) \
((void *)raw_inode + \
EXT3_GOOD_OLD_INODE_SIZE + \
EXT3_I(inode)->i_extra_isize))
#define IFIRST(hdr) ((struct ext3_xattr_entry *)((hdr)+1))
# define ea_idebug(inode, f...) do  while (0)
# define ea_bdebug(bh, f...) do  while (0)
# define ea_idebug(f...)
# define ea_bdebug(f...)
static void ext3_xattr_cache_insert(struct buffer_head *);
static struct buffer_head *ext3_xattr_cache_find(struct inode *,
struct ext3_xattr_header *,
struct mb_cache_entry **);
static void ext3_xattr_rehash(struct ext3_xattr_header *,
struct ext3_xattr_entry *);
static int ext3_xattr_list(struct dentry *dentry, char *buffer,
size_t buffer_size);
static struct mb_cache *ext3_xattr_cache;
static const struct xattr_handler *ext3_xattr_handler_map[] = ;
const struct xattr_handler *ext3_xattr_handlers[] = ;
static inline const struct xattr_handler *
ext3_xattr_handler(int name_index)
ssize_t
ext3_listxattr(struct dentry *dentry, char *buffer, size_t size)
static int
ext3_xattr_check_names(struct ext3_xattr_entry *entry, void *end)
static inline int
ext3_xattr_check_block(struct buffer_head *bh)
static inline int
ext3_xattr_check_entry(struct ext3_xattr_entry *entry, size_t size)
static int
ext3_xattr_find_entry(struct ext3_xattr_entry **pentry, int name_index,
const char *name, size_t size, int sorted)
static int
ext3_xattr_block_get(struct inode *inode, int name_index, const char *name,
void *buffer, size_t buffer_size)
static int
ext3_xattr_ibody_get(struct inode *inode, int name_index, const char *name,
void *buffer, size_t buffer_size)
int
ext3_xattr_get(struct inode *inode, int name_index, const char *name,
void *buffer, size_t buffer_size)
static int
ext3_xattr_list_entries(struct dentry *dentry, struct ext3_xattr_entry *entry,
char *buffer, size_t buffer_size)
static int
ext3_xattr_block_list(struct dentry *dentry, char *buffer, size_t buffer_size)
static int
ext3_xattr_ibody_list(struct dentry *dentry, char *buffer, size_t buffer_size)
static int
ext3_xattr_list(struct dentry *dentry, char *buffer, size_t buffer_size)
static void ext3_xattr_update_super_block(handle_t *handle,
struct super_block *sb)
static void
ext3_xattr_release_block(handle_t *handle, struct inode *inode,
struct buffer_head *bh)
struct ext3_xattr_info ;
struct ext3_xattr_search ;
static int
ext3_xattr_set_entry(struct ext3_xattr_info *i, struct ext3_xattr_search *s)
struct ext3_xattr_block_find ;
static int
ext3_xattr_block_find(struct inode *inode, struct ext3_xattr_info *i,
struct ext3_xattr_block_find *bs)
static int
ext3_xattr_block_set(handle_t *handle, struct inode *inode,
struct ext3_xattr_info *i,
struct ext3_xattr_block_find *bs)
struct ext3_xattr_ibody_find ;
static int
ext3_xattr_ibody_find(struct inode *inode, struct ext3_xattr_info *i,
struct ext3_xattr_ibody_find *is)
static int
ext3_xattr_ibody_set(handle_t *handle, struct inode *inode,
struct ext3_xattr_info *i,
struct ext3_xattr_ibody_find *is)
int
ext3_xattr_set_handle(handle_t *handle, struct inode *inode, int name_index,
const char *name, const void *value, size_t value_len,
int flags)
int
ext3_xattr_set(struct inode *inode, int name_index, const char *name,
const void *value, size_t value_len, int flags)
void
ext3_xattr_delete_inode(handle_t *handle, struct inode *inode)
void
ext3_xattr_put_super(struct super_block *sb)
static void
ext3_xattr_cache_insert(struct buffer_head *bh)
static int
ext3_xattr_cmp(struct ext3_xattr_header *header1,
struct ext3_xattr_header *header2)
static struct buffer_head *
ext3_xattr_cache_find(struct inode *inode, struct ext3_xattr_header *header,
struct mb_cache_entry **pce)
#define NAME_HASH_SHIFT 5
#define VALUE_HASH_SHIFT 16
static inline void ext3_xattr_hash_entry(struct ext3_xattr_header *header,
struct ext3_xattr_entry *entry)
#undef NAME_HASH_SHIFT
#undef VALUE_HASH_SHIFT
#define BLOCK_HASH_SHIFT 16
static void ext3_xattr_rehash(struct ext3_xattr_header *header,
struct ext3_xattr_entry *entry)
#undef BLOCK_HASH_SHIFT
int __init
init_ext3_xattr(void)
void
exit_ext3_xattr(void)
