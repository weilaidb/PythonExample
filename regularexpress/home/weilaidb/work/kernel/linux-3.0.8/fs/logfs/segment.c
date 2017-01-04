static int logfs_mark_segment_bad(struct super_block *sb, u32 segno)
int logfs_erase_segment(struct super_block *sb, u32 segno, int ensure_erase)
static s64 logfs_get_free_bytes(struct logfs_area *area, size_t bytes)
static struct page *get_mapping_page(struct super_block *sb, pgoff_t index,
int use_filler)
int __logfs_buf_write(struct logfs_area *area, u64 ofs, void *buf, size_t len,
int use_filler)
static void pad_partial_page(struct logfs_area *area)
static void pad_full_pages(struct logfs_area *area)
static void pad_wbuf(struct logfs_area *area, int final)
static void *alias_tree_lookup(struct super_block *sb, u64 ino, u64 bix,
level_t level)
static int alias_tree_insert(struct super_block *sb, u64 ino, u64 bix,
level_t level, void *val)
static int btree_write_alias(struct super_block *sb, struct logfs_block *block,
write_alias_t *write_one_alias)
static struct logfs_block_ops btree_block_ops = ;
int logfs_load_object_aliases(struct super_block *sb,
struct logfs_obj_alias *oa, int count)
static void kill_alias(void *_block, unsigned long ignore0,
u64 ignore1, u64 ignore2, size_t ignore3)
static int obj_type(struct inode *inode, level_t level)
static int obj_len(struct super_block *sb, int obj_type)
static int __logfs_segment_write(struct inode *inode, void *buf,
struct logfs_shadow *shadow, int type, int len, int compr)
static s64 logfs_segment_write_compress(struct inode *inode, void *buf,
struct logfs_shadow *shadow, int type, int len)
int logfs_segment_write(struct inode *inode, struct page *page,
struct logfs_shadow *shadow)
int wbuf_read(struct super_block *sb, u64 ofs, size_t len, void *buf)
static int check_pos(struct super_block *sb, u64 pos1, u64 pos2, level_t level)
static int read_obj_header(struct super_block *sb, u64 ofs,
struct logfs_object_header *oh)
static void move_btree_to_page(struct inode *inode, struct page *page,
__be64 *data)
static unsigned long fnb(const unsigned long *addr,
unsigned long size, unsigned long offset)
void move_page_to_btree(struct page *page)
static int __logfs_segment_read(struct inode *inode, void *buf,
u64 ofs, u64 bix, level_t level)
int logfs_segment_read(struct inode *inode, struct page *page,
u64 ofs, u64 bix, level_t level)
int logfs_segment_delete(struct inode *inode, struct logfs_shadow *shadow)
void freeseg(struct super_block *sb, u32 segno)
int logfs_open_area(struct logfs_area *area, size_t bytes)
void logfs_sync_area(struct logfs_area *area)
void logfs_sync_segments(struct super_block *sb)
static void ostore_get_free_segment(struct logfs_area *area)
static void ostore_get_erase_count(struct logfs_area *area)
static int ostore_erase_segment(struct logfs_area *area)
static const struct logfs_area_ops ostore_area_ops = ;
static void free_area(struct logfs_area *area)
static struct logfs_area *alloc_area(struct super_block *sb)
static void map_invalidatepage(struct page *page, unsigned long l)
static int map_releasepage(struct page *page, gfp_t g)
static const struct address_space_operations mapping_aops = ;
int logfs_init_mapping(struct super_block *sb)
int logfs_init_areas(struct super_block *sb)
void logfs_cleanup_areas(struct super_block *sb)
