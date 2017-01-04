#define HDR(bh) ((struct ext2_xattr_header *)((bh)->b_data))
#define ENTRY(ptr) ((struct ext2_xattr_entry *)(ptr))
#define FIRST_ENTRY(bh) ENTRY(HDR(bh)+1)
#define IS_LAST_ENTRY(entry) (*(__u32 *)(entry) == 0)
# define ea_idebug(inode, f...) do  while (0)
# define ea_bdebug(bh, f...) do  while (0)
# define ea_idebug(f...)
# define ea_bdebug(f...)
static int ext2_xattr_set2(struct inode *, struct buffer_head *,
struct ext2_xattr_header *);
static int ext2_xattr_cache_insert(struct buffer_head *);
static struct buffer_head *ext2_xattr_cache_find(struct inode *,
struct ext2_xattr_header *);
static void ext2_xattr_rehash(struct ext2_xattr_header *,
struct ext2_xattr_entry *);
static struct mb_cache *ext2_xattr_cache;
static const struct xattr_handler *ext2_xattr_handler_map[] = ;
const struct xattr_handler *ext2_xattr_handlers[] = ;
static inline const struct xattr_handler *
ext2_xattr_handler(int name_index)
int
ext2_xattr_get(struct inode *inode, int name_index, const char *name,
void *buffer, size_t buffer_size)
static int
ext2_xattr_list(struct dentry *dentry, char *buffer, size_t buffer_size)
ssize_t
ext2_listxattr(struct dentry *dentry, char *buffer, size_t size)
static void ext2_xattr_update_super_block(struct super_block *sb)
int
ext2_xattr_set(struct inode *inode, int name_index, const char *name,
const void *value, size_t value_len, int flags)
static int
ext2_xattr_set2(struct inode *inode, struct buffer_head *old_bh,
struct ext2_xattr_header *header)
void
ext2_xattr_delete_inode(struct inode *inode)
void
ext2_xattr_put_super(struct super_block *sb)
static int
ext2_xattr_cache_insert(struct buffer_head *bh)
static int
ext2_xattr_cmp(struct ext2_xattr_header *header1,
struct ext2_xattr_header *header2)
static struct buffer_head *
ext2_xattr_cache_find(struct inode *inode, struct ext2_xattr_header *header)
#define NAME_HASH_SHIFT 5
#define VALUE_HASH_SHIFT 16
static inline void ext2_xattr_hash_entry(struct ext2_xattr_header *header,
struct ext2_xattr_entry *entry)
#undef NAME_HASH_SHIFT
#undef VALUE_HASH_SHIFT
#define BLOCK_HASH_SHIFT 16
static void ext2_xattr_rehash(struct ext2_xattr_header *header,
struct ext2_xattr_entry *entry)
#undef BLOCK_HASH_SHIFT
int __init
init_ext2_xattr(void)
void
exit_ext2_xattr(void)
