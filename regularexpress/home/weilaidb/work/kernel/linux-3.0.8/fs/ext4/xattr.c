#define BHDR(bh) ((struct ext4_xattr_header *)((bh)->b_data))
#define ENTRY(ptr) ((struct ext4_xattr_entry *)(ptr))
#define BFIRST(bh) ENTRY(BHDR(bh)+1)
#define IS_LAST_ENTRY(entry) (*(__u32 *)(entry) == 0)
# define ea_idebug(inode, f...) do  while (0)
# define ea_bdebug(bh, f...) do  while (0)
# define ea_idebug(f...)
# define ea_bdebug(f...)
static void ext4_xattr_cache_insert(struct buffer_head *);
static struct buffer_head *ext4_xattr_cache_find(struct inode *,
struct ext4_xattr_header *,
struct mb_cache_entry **);
static void ext4_xattr_rehash(struct ext4_xattr_header *,
struct ext4_xattr_entry *);
static int ext4_xattr_list(struct dentry *dentry, char *buffer,
size_t buffer_size);
static struct mb_cache *ext4_xattr_cache;
static const struct xattr_handler *ext4_xattr_handler_map[] = ;
const struct xattr_handler *ext4_xattr_handlers[] = ;
static inline const struct xattr_handler *
ext4_xattr_handler(int name_index)
ssize_t
ext4_listxattr(struct dentry *dentry, char *buffer, size_t size)
static int
ext4_xattr_check_names(struct ext4_xattr_entry *entry, void *end)
static inline int
ext4_xattr_check_block(struct buffer_head *bh)
static inline int
ext4_xattr_check_entry(struct ext4_xattr_entry *entry, size_t size)
static int
ext4_xattr_find_entry(struct ext4_xattr_entry **pentry, int name_index,
const char *name, size_t size, int sorted)
static int
ext4_xattr_block_get(struct inode *inode, int name_index, const char *name,
void *buffer, size_t buffer_size)
static int
ext4_xattr_ibody_get(struct inode *inode, int name_index, const char *name,
void *buffer, size_t buffer_size)
int
ext4_xattr_get(struct inode *inode, int name_index, const char *name,
void *buffer, size_t buffer_size)
static int
ext4_xattr_list_entries(struct dentry *dentry, struct ext4_xattr_entry *entry,
char *buffer, size_t buffer_size)
static int
ext4_xattr_block_list(struct dentry *dentry, char *buffer, size_t buffer_size)
static int
ext4_xattr_ibody_list(struct dentry *dentry, char *buffer, size_t buffer_size)
static int
ext4_xattr_list(struct dentry *dentry, char *buffer, size_t buffer_size)
static void ext4_xattr_update_super_block(handle_t *handle,
struct super_block *sb)
static void
ext4_xattr_release_block(handle_t *handle, struct inode *inode,
struct buffer_head *bh)
static size_t ext4_xattr_free_space(struct ext4_xattr_entry *last,
size_t *min_offs, void *base, int *total)
struct ext4_xattr_info ;
struct ext4_xattr_search ;
static int
ext4_xattr_set_entry(struct ext4_xattr_info *i, struct ext4_xattr_search *s)
struct ext4_xattr_block_find ;
static int
ext4_xattr_block_find(struct inode *inode, struct ext4_xattr_info *i,
struct ext4_xattr_block_find *bs)
static int
ext4_xattr_block_set(handle_t *handle, struct inode *inode,
struct ext4_xattr_info *i,
struct ext4_xattr_block_find *bs)
struct ext4_xattr_ibody_find ;
static int
ext4_xattr_ibody_find(struct inode *inode, struct ext4_xattr_info *i,
struct ext4_xattr_ibody_find *is)
static int
ext4_xattr_ibody_set(handle_t *handle, struct inode *inode,
struct ext4_xattr_info *i,
struct ext4_xattr_ibody_find *is)
int
ext4_xattr_set_handle(handle_t *handle, struct inode *inode, int name_index,
const char *name, const void *value, size_t value_len,
int flags)
int
ext4_xattr_set(struct inode *inode, int name_index, const char *name,
const void *value, size_t value_len, int flags)
static void ext4_xattr_shift_entries(struct ext4_xattr_entry *entry,
int value_offs_shift, void *to,
void *from, size_t n, int blocksize)
int ext4_expand_extra_isize_ea(struct inode *inode, int new_extra_isize,
struct ext4_inode *raw_inode, handle_t *handle)
void
ext4_xattr_delete_inode(handle_t *handle, struct inode *inode)
void
ext4_xattr_put_super(struct super_block *sb)
static void
ext4_xattr_cache_insert(struct buffer_head *bh)
static int
ext4_xattr_cmp(struct ext4_xattr_header *header1,
struct ext4_xattr_header *header2)
static struct buffer_head *
ext4_xattr_cache_find(struct inode *inode, struct ext4_xattr_header *header,
struct mb_cache_entry **pce)
#define NAME_HASH_SHIFT 5
#define VALUE_HASH_SHIFT 16
static inline void ext4_xattr_hash_entry(struct ext4_xattr_header *header,
struct ext4_xattr_entry *entry)
#undef NAME_HASH_SHIFT
#undef VALUE_HASH_SHIFT
#define BLOCK_HASH_SHIFT 16
static void ext4_xattr_rehash(struct ext4_xattr_header *header,
struct ext4_xattr_entry *entry)
#undef BLOCK_HASH_SHIFT
int __init
ext4_init_xattr(void)
void
ext4_exit_xattr(void)
