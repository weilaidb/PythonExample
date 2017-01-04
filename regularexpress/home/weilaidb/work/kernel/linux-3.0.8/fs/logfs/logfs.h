#define FS_LOGFS_LOGFS_H
#undef __CHECK_ENDIAN__
#define __CHECK_ENDIAN__
#define LOGFS_DEBUG_SUPER	(0x0001)
#define LOGFS_DEBUG_SEGMENT	(0x0002)
#define LOGFS_DEBUG_JOURNAL	(0x0004)
#define LOGFS_DEBUG_DIR		(0x0008)
#define LOGFS_DEBUG_FILE	(0x0010)
#define LOGFS_DEBUG_INODE	(0x0020)
#define LOGFS_DEBUG_READWRITE	(0x0040)
#define LOGFS_DEBUG_GC		(0x0080)
#define LOGFS_DEBUG_GC_NOISY	(0x0100)
#define LOGFS_DEBUG_ALIASES	(0x0200)
#define LOGFS_DEBUG_BLOCKMOVE	(0x0400)
#define LOGFS_DEBUG_ALL		(0xffffffff)
#define LOGFS_DEBUG		(0x01)
#define LOGFS_DEBUG		(0)
#define log_cond(cond, fmt, arg...) do  while (0)
#define log_super(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_SUPER, fmt, ##arg)
#define log_segment(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_SEGMENT, fmt, ##arg)
#define log_journal(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_JOURNAL, fmt, ##arg)
#define log_dir(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_DIR, fmt, ##arg)
#define log_file(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_FILE, fmt, ##arg)
#define log_inode(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_INODE, fmt, ##arg)
#define log_readwrite(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_READWRITE, fmt, ##arg)
#define log_gc(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_GC, fmt, ##arg)
#define log_gc_noisy(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_GC_NOISY, fmt, ##arg)
#define log_aliases(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_ALIASES, fmt, ##arg)
#define log_blockmove(fmt, arg...) \
log_cond(LOGFS_DEBUG & LOGFS_DEBUG_BLOCKMOVE, fmt, ##arg)
#define PG_pre_locked		PG_owner_priv_1
#define PagePreLocked(page)	test_bit(PG_pre_locked, &(page)->flags)
#define SetPagePreLocked(page)	set_bit(PG_pre_locked, &(page)->flags)
#define ClearPagePreLocked(page) clear_bit(PG_pre_locked, &(page)->flags)
#define LOGFS_LINK_MAX		(1<<30)
#define LOGFS_SB_FLAG_RO	0x0001
#define LOGFS_SB_FLAG_DIRTY	0x0002
#define LOGFS_SB_FLAG_OBJ_ALIAS	0x0004
#define LOGFS_SB_FLAG_SHUTDOWN	0x0008
#define WF_LOCK			0x01
#define WF_WRITE		0x02
#define WF_DELETE		0x04
typedef u8 __bitwise level_t;
typedef u8 __bitwise gc_level_t;
#define LEVEL(level) ((__force level_t)(level))
#define GC_LEVEL(gc_level) ((__force gc_level_t)(gc_level))
#define SUBLEVEL(level) ( (void)((level) == LEVEL(1)),	\
(__force level_t)((__force u8)(level) - 1) )
struct logfs_area ;
struct logfs_area_ops ;
struct logfs_super;
struct logfs_device_ops ;
struct candidate_list ;
struct gc_candidate ;
struct logfs_journal_entry ;
enum transaction_state ;
struct logfs_transaction ;
struct logfs_shadow ;
struct shadow_tree ;
struct object_alias_item ;
#define BLOCK_INDIRECT	1
#define BLOCK_INODE	2
struct logfs_block_ops;
struct logfs_block ;
typedef int write_alias_t(struct super_block *sb, u64 ino, u64 bix,
level_t level, int child_no, __be64 val);
struct logfs_block_ops ;
#define MAX_JOURNAL_ENTRIES 256
struct logfs_super ;
struct logfs_inode ;
#define journal_for_each(__i) for (__i = 0; __i < LOGFS_JOURNAL_SEGS; __i++)
#define for_each_area(__i) for (__i = 0; __i < LOGFS_NO_AREAS; __i++)
#define for_each_area_down(__i) for (__i = LOGFS_NO_AREAS - 1; __i >= 0; __i--)
int logfs_compress(void *in, void *out, size_t inlen, size_t outlen);
int logfs_uncompress(void *in, void *out, size_t inlen, size_t outlen);
int __init logfs_compr_init(void);
void logfs_compr_exit(void);
int logfs_get_sb_bdev(struct logfs_super *s,
struct file_system_type *type,
const char *devname);
static inline int logfs_get_sb_bdev(struct logfs_super *s,
struct file_system_type *type,
const char *devname)
int logfs_get_sb_mtd(struct logfs_super *s, int mtdnr);
static inline int logfs_get_sb_mtd(struct logfs_super *s, int mtdnr)
extern const struct inode_operations logfs_symlink_iops;
extern const struct inode_operations logfs_dir_iops;
extern const struct file_operations logfs_dir_fops;
int logfs_replay_journal(struct super_block *sb);
extern const struct inode_operations logfs_reg_iops;
extern const struct file_operations logfs_reg_fops;
extern const struct address_space_operations logfs_reg_aops;
int logfs_readpage(struct file *file, struct page *page);
long logfs_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
int logfs_fsync(struct file *file, int datasync);
u32 get_best_cand(struct super_block *sb, struct candidate_list *list, u32 *ec);
void logfs_gc_pass(struct super_block *sb);
int logfs_check_areas(struct super_block *sb);
int logfs_init_gc(struct super_block *sb);
void logfs_cleanup_gc(struct super_block *sb);
extern const struct super_operations logfs_super_operations;
struct inode *logfs_iget(struct super_block *sb, ino_t ino);
struct inode *logfs_safe_iget(struct super_block *sb, ino_t ino, int *cookie);
void logfs_safe_iput(struct inode *inode, int cookie);
struct inode *logfs_new_inode(struct inode *dir, int mode);
struct inode *logfs_new_meta_inode(struct super_block *sb, u64 ino);
struct inode *logfs_read_meta_inode(struct super_block *sb, u64 ino);
int logfs_init_inode_cache(void);
void logfs_destroy_inode_cache(void);
void logfs_set_blocks(struct inode *inode, u64 no);
int logfs_read_inode(struct inode *inode);
int __logfs_write_inode(struct inode *inode, long flags);
void logfs_evict_inode(struct inode *inode);
void logfs_write_anchor(struct super_block *sb);
int logfs_init_journal(struct super_block *sb);
void logfs_cleanup_journal(struct super_block *sb);
int write_alias_journal(struct super_block *sb, u64 ino, u64 bix,
level_t level, int child_no, __be64 val);
void do_logfs_journal_wl_pass(struct super_block *sb);
pgoff_t logfs_pack_index(u64 bix, level_t level);
void logfs_unpack_index(pgoff_t index, u64 *bix, level_t *level);
int logfs_inode_write(struct inode *inode, const void *buf, size_t count,
loff_t bix, long flags, struct shadow_tree *shadow_tree);
int logfs_readpage_nolock(struct page *page);
int logfs_write_buf(struct inode *inode, struct page *page, long flags);
int logfs_delete(struct inode *inode, pgoff_t index,
struct shadow_tree *shadow_tree);
int logfs_rewrite_block(struct inode *inode, u64 bix, u64 ofs,
gc_level_t gc_level, long flags);
int logfs_is_valid_block(struct super_block *sb, u64 ofs, u64 ino, u64 bix,
gc_level_t gc_level);
int logfs_truncate(struct inode *inode, u64 size);
u64 logfs_seek_hole(struct inode *inode, u64 bix);
u64 logfs_seek_data(struct inode *inode, u64 bix);
int logfs_open_segfile(struct super_block *sb);
int logfs_init_rw(struct super_block *sb);
void logfs_cleanup_rw(struct super_block *sb);
void logfs_add_transaction(struct inode *inode, struct logfs_transaction *ta);
void logfs_del_transaction(struct inode *inode, struct logfs_transaction *ta);
void logfs_write_block(struct logfs_block *block, long flags);
int logfs_write_obj_aliases_pagecache(struct super_block *sb);
void logfs_get_segment_entry(struct super_block *sb, u32 segno,
struct logfs_segment_entry *se);
void logfs_set_segment_used(struct super_block *sb, u64 ofs, int increment);
void logfs_set_segment_erased(struct super_block *sb, u32 segno, u32 ec,
gc_level_t gc_level);
void logfs_set_segment_reserved(struct super_block *sb, u32 segno);
void logfs_set_segment_unreserved(struct super_block *sb, u32 segno, u32 ec);
struct logfs_block *__alloc_block(struct super_block *sb,
u64 ino, u64 bix, level_t level);
void __free_block(struct super_block *sb, struct logfs_block *block);
void btree_write_block(struct logfs_block *block);
void initialize_block_counters(struct page *page, struct logfs_block *block,
__be64 *array, int page_is_empty);
int logfs_exist_block(struct inode *inode, u64 bix);
int get_page_reserve(struct inode *inode, struct page *page);
extern struct logfs_block_ops indirect_block_ops;
int logfs_erase_segment(struct super_block *sb, u32 ofs, int ensure_erase);
int wbuf_read(struct super_block *sb, u64 ofs, size_t len, void *buf);
int logfs_segment_read(struct inode *inode, struct page *page, u64 ofs, u64 bix,
level_t level);
int logfs_segment_write(struct inode *inode, struct page *page,
struct logfs_shadow *shadow);
int logfs_segment_delete(struct inode *inode, struct logfs_shadow *shadow);
int logfs_load_object_aliases(struct super_block *sb,
struct logfs_obj_alias *oa, int count);
void move_page_to_btree(struct page *page);
int logfs_init_mapping(struct super_block *sb);
void logfs_sync_area(struct logfs_area *area);
void logfs_sync_segments(struct super_block *sb);
void freeseg(struct super_block *sb, u32 segno);
int logfs_init_areas(struct super_block *sb);
void logfs_cleanup_areas(struct super_block *sb);
int logfs_open_area(struct logfs_area *area, size_t bytes);
int __logfs_buf_write(struct logfs_area *area, u64 ofs, void *buf, size_t len,
int use_filler);
static inline int logfs_buf_write(struct logfs_area *area, u64 ofs,
void *buf, size_t len)
static inline int logfs_buf_recover(struct logfs_area *area, u64 ofs,
void *buf, size_t len)
struct page *emergency_read_begin(struct address_space *mapping, pgoff_t index);
void emergency_read_end(struct page *page);
void logfs_crash_dump(struct super_block *sb);
void *memchr_inv(const void *s, int c, size_t n);
int logfs_statfs(struct dentry *dentry, struct kstatfs *stats);
int logfs_check_ds(struct logfs_disk_super *ds);
int logfs_write_sb(struct super_block *sb);
static inline struct logfs_super *logfs_super(struct super_block *sb)
static inline struct logfs_inode *logfs_inode(struct inode *inode)
static inline void logfs_set_ro(struct super_block *sb)
#define LOGFS_BUG(sb) do  while (0)
#define LOGFS_BUG_ON(condition, sb) \
do  while (0)
static inline __be32 logfs_crc32(void *data, size_t len, size_t skip)
static inline u8 logfs_type(struct inode *inode)
static inline pgoff_t logfs_index(struct super_block *sb, u64 pos)
static inline u64 dev_ofs(struct super_block *sb, u32 segno, u32 ofs)
static inline u32 seg_no(struct super_block *sb, u64 ofs)
static inline u32 seg_ofs(struct super_block *sb, u64 ofs)
static inline u64 seg_align(struct super_block *sb, u64 ofs)
static inline struct logfs_block *logfs_block(struct page *page)
static inline level_t shrink_level(gc_level_t __level)
static inline gc_level_t expand_level(u64 ino, level_t __level)
static inline int logfs_block_shift(struct super_block *sb, level_t level)
static inline u64 logfs_block_mask(struct super_block *sb, level_t level)
static inline struct logfs_area *get_area(struct super_block *sb,
gc_level_t gc_level)
static inline void logfs_mempool_destroy(mempool_t *pool)
