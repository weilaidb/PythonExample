static u64 adjust_bix(u64 bix, level_t level)
static inline u64 maxbix(u8 height)
#define ARCH_SHIFT	(BITS_PER_LONG - 32)
#define INDIRECT_BIT	(0x80000000UL << ARCH_SHIFT)
#define LEVEL_SHIFT	(28 + ARCH_SHIFT)
static inline pgoff_t first_indirect_block(void)
pgoff_t logfs_pack_index(u64 bix, level_t level)
void logfs_unpack_index(pgoff_t index, u64 *bix, level_t *level)
#undef ARCH_SHIFT
#undef INDIRECT_BIT
#undef LEVEL_SHIFT
static struct timespec be64_to_timespec(__be64 betime)
static __be64 timespec_to_be64(struct timespec tsp)
static void logfs_disk_to_inode(struct logfs_disk_inode *di, struct inode*inode)
static void logfs_inode_to_disk(struct inode *inode, struct logfs_disk_inode*di)
static void __logfs_set_blocks(struct inode *inode)
void logfs_set_blocks(struct inode *inode, u64 bytes)
static void prelock_page(struct super_block *sb, struct page *page, int lock)
static void preunlock_page(struct super_block *sb, struct page *page, int lock)
static void logfs_get_wblocks(struct super_block *sb, struct page *page,
int lock)
static void logfs_put_wblocks(struct super_block *sb, struct page *page,
int lock)
static struct page *logfs_get_read_page(struct inode *inode, u64 bix,
level_t level)
static void logfs_put_read_page(struct page *page)
static void logfs_lock_write_page(struct page *page)
static struct page *logfs_get_write_page(struct inode *inode, u64 bix,
level_t level)
static void logfs_unlock_write_page(struct page *page)
static void logfs_put_write_page(struct page *page)
static struct page *logfs_get_page(struct inode *inode, u64 bix, level_t level,
int rw)
static void logfs_put_page(struct page *page, int rw)
static unsigned long __get_bits(u64 val, int skip, int no)
static unsigned long get_bits(u64 val, level_t skip)
static inline void init_shadow_tree(struct super_block *sb,
struct shadow_tree *tree)
static void indirect_write_block(struct logfs_block *block)
static void inode_write_block(struct logfs_block *block)
static unsigned long fnb(const unsigned long *addr,
unsigned long size, unsigned long offset)
static __be64 inode_val0(struct inode *inode)
static int inode_write_alias(struct super_block *sb,
struct logfs_block *block, write_alias_t *write_one_alias)
static int indirect_write_alias(struct super_block *sb,
struct logfs_block *block, write_alias_t *write_one_alias)
int logfs_write_obj_aliases_pagecache(struct super_block *sb)
void __free_block(struct super_block *sb, struct logfs_block *block)
static void inode_free_block(struct super_block *sb, struct logfs_block *block)
static void indirect_free_block(struct super_block *sb,
struct logfs_block *block)
static struct logfs_block_ops inode_block_ops = ;
struct logfs_block_ops indirect_block_ops = ;
struct logfs_block *__alloc_block(struct super_block *sb,
u64 ino, u64 bix, level_t level)
static void alloc_inode_block(struct inode *inode)
void initialize_block_counters(struct page *page, struct logfs_block *block,
__be64 *array, int page_is_empty)
static void alloc_data_block(struct inode *inode, struct page *page)
static void alloc_indirect_block(struct inode *inode, struct page *page,
int page_is_empty)
static void block_set_pointer(struct page *page, int index, u64 ptr)
static u64 block_get_pointer(struct page *page, int index)
static int logfs_read_empty(struct page *page)
static int logfs_read_direct(struct inode *inode, struct page *page)
static int logfs_read_loop(struct inode *inode, struct page *page,
int rw_context)
static int logfs_read_block(struct inode *inode, struct page *page,
int rw_context)
static int logfs_exist_loop(struct inode *inode, u64 bix)
int logfs_exist_block(struct inode *inode, u64 bix)
static u64 seek_holedata_direct(struct inode *inode, u64 bix, int data)
static u64 seek_holedata_loop(struct inode *inode, u64 bix, int data)
u64 logfs_seek_hole(struct inode *inode, u64 bix)
static u64 __logfs_seek_data(struct inode *inode, u64 bix)
u64 logfs_seek_data(struct inode *inode, u64 bix)
static int logfs_is_valid_direct(struct logfs_inode *li, u64 bix, u64 ofs)
static int __logfs_is_valid_loop(struct inode *inode, u64 bix,
u64 ofs, u64 bofs)
static int logfs_is_valid_loop(struct inode *inode, u64 bix, u64 ofs)
static int __logfs_is_valid_block(struct inode *inode, u64 bix, u64 ofs)
int logfs_is_valid_block(struct super_block *sb, u64 ofs, u64 ino, u64 bix,
gc_level_t gc_level)
int logfs_readpage_nolock(struct page *page)
static int logfs_reserve_bytes(struct inode *inode, int bytes)
int get_page_reserve(struct inode *inode, struct page *page)
static void logfs_handle_transaction(struct inode *inode,
struct logfs_transaction *ta)
static int logfs_reserve_blocks(struct inode *inode, int blocks)
struct write_control ;
static struct logfs_shadow *alloc_shadow(struct inode *inode, u64 bix,
level_t level, u64 old_ofs)
static void free_shadow(struct inode *inode, struct logfs_shadow *shadow)
static void mark_segment(struct shadow_tree *tree, u32 segno)
static void fill_shadow_tree(struct inode *inode, struct page *page,
struct logfs_shadow *shadow)
static void logfs_set_alias(struct super_block *sb, struct logfs_block *block,
long child_no)
static void set_iused(struct inode *inode, struct logfs_shadow *shadow)
static int logfs_write_i0(struct inode *inode, struct page *page,
struct write_control *wc)
static int logfs_write_direct(struct inode *inode, struct page *page,
long flags)
static int ptr_change(u64 ofs, struct page *page)
static int __logfs_write_rec(struct inode *inode, struct page *page,
struct write_control *this_wc,
pgoff_t bix, level_t target_level, level_t level)
static int logfs_write_rec(struct inode *inode, struct page *page,
pgoff_t bix, level_t target_level, long flags)
void logfs_add_transaction(struct inode *inode, struct logfs_transaction *ta)
void logfs_del_transaction(struct inode *inode, struct logfs_transaction *ta)
static int grow_inode(struct inode *inode, u64 bix, level_t level)
static int __logfs_write_buf(struct inode *inode, struct page *page, long flags)
int logfs_write_buf(struct inode *inode, struct page *page, long flags)
static int __logfs_delete(struct inode *inode, struct page *page)
int logfs_delete(struct inode *inode, pgoff_t index,
struct shadow_tree *shadow_tree)
int logfs_rewrite_block(struct inode *inode, u64 bix, u64 ofs,
gc_level_t gc_level, long flags)
static int truncate_data_block(struct inode *inode, struct page *page,
u64 ofs, struct logfs_shadow *shadow, u64 size)
static int logfs_truncate_i0(struct inode *inode, struct page *page,
struct write_control *wc, u64 size)
static int logfs_truncate_direct(struct inode *inode, u64 size)
static u64 __logfs_step[] = ;
static u64 __logfs_start_index[] = ;
static inline u64 logfs_step(level_t level)
static inline u64 logfs_factor(u8 level)
static inline u64 logfs_start_index(level_t level)
static void logfs_unpack_raw_index(pgoff_t index, u64 *bix, level_t *level)
static int __logfs_truncate_rec(struct inode *inode, struct page *ipage,
struct write_control *this_wc, u64 size)
static int logfs_truncate_rec(struct inode *inode, u64 size)
static int __logfs_truncate(struct inode *inode, u64 size)
#define TRUNCATE_STEP	(8 * 1024 * 1024)
int logfs_truncate(struct inode *inode, u64 target)
static void move_page_to_inode(struct inode *inode, struct page *page)
static void move_inode_to_page(struct page *page, struct inode *inode)
int logfs_read_inode(struct inode *inode)
static struct page *inode_to_page(struct inode *inode)
static int do_write_inode(struct inode *inode)
static void logfs_mod_segment_entry(struct super_block *sb, u32 segno,
int write,
void (*change_se)(struct logfs_segment_entry *, long),
long arg)
static void __get_segment_entry(struct logfs_segment_entry *se, long _target)
void logfs_get_segment_entry(struct super_block *sb, u32 segno,
struct logfs_segment_entry *se)
static void __set_segment_used(struct logfs_segment_entry *se, long increment)
void logfs_set_segment_used(struct super_block *sb, u64 ofs, int increment)
static void __set_segment_erased(struct logfs_segment_entry *se, long ec_level)
void logfs_set_segment_erased(struct super_block *sb, u32 segno, u32 ec,
gc_level_t gc_level)
static void __set_segment_reserved(struct logfs_segment_entry *se, long ignore)
void logfs_set_segment_reserved(struct super_block *sb, u32 segno)
static void __set_segment_unreserved(struct logfs_segment_entry *se,
long ec_level)
void logfs_set_segment_unreserved(struct super_block *sb, u32 segno, u32 ec)
int __logfs_write_inode(struct inode *inode, long flags)
static int do_delete_inode(struct inode *inode)
void logfs_evict_inode(struct inode *inode)
void btree_write_block(struct logfs_block *block)
int logfs_inode_write(struct inode *inode, const void *buf, size_t count,
loff_t bix, long flags, struct shadow_tree *shadow_tree)
int logfs_open_segfile(struct super_block *sb)
int logfs_init_rw(struct super_block *sb)
void logfs_cleanup_rw(struct super_block *sb)
