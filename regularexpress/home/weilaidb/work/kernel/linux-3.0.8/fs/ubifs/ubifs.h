#define __UBIFS_H__
#define UBIFS_VERSION 1
#define ubifs_msg(fmt, ...) \
printk(KERN_NOTICE "UBIFS: " fmt "\n", ##__VA_ARGS__)
#define ubifs_err(fmt, ...)                                                  \
printk(KERN_ERR "UBIFS error (pid %d): %s: " fmt "\n", current->pid, \
__func__, ##__VA_ARGS__)
#define ubifs_warn(fmt, ...)                                         \
printk(KERN_WARNING "UBIFS warning (pid %d): %s: " fmt "\n", \
current->pid, __func__, ##__VA_ARGS__)
#define UBIFS_SUPER_MAGIC 0x24051905
#define UBIFS_BLOCKS_PER_PAGE (PAGE_CACHE_SIZE / UBIFS_BLOCK_SIZE)
#define UBIFS_BLOCKS_PER_PAGE_SHIFT (PAGE_CACHE_SHIFT - UBIFS_BLOCK_SHIFT)
#define SQNUM_WARN_WATERMARK 0xFFFFFFFF00000000ULL
#define SQNUM_WATERMARK      0xFFFFFFFFFF000000ULL
#define MIN_INDEX_LEBS 2
#define MIN_WRITE_SZ (UBIFS_DATA_NODE_SZ + 8)
#define INUM_WARN_WATERMARK 0xFFF00000
#define INUM_WATERMARK      0xFFFFFF00
#define CUR_MAX_KEY_LEN UBIFS_SK_LEN
#define LPT_HEAP_SZ 256
#define BGT_NAME_PATTERN "ubifs_bgt%d_%d"
#define WBUF_TIMEOUT_SOFTLIMIT 3
#define WBUF_TIMEOUT_HARDLIMIT 5
#define MAX_INUM 0xFFFFFFFF
#define NONDATA_JHEADS_CNT 2
#define GCHD   UBIFS_GC_HEAD
#define BASEHD UBIFS_BASE_HEAD
#define DATAHD UBIFS_DATA_HEAD
#define LPROPS_NC 0x80000001
#define UBIFS_TRUN_KEY    UBIFS_KEY_TYPES_CNT
#define UBIFS_INVALID_KEY UBIFS_KEY_TYPES_CNT
#define CALC_DENT_SIZE(name_len) ALIGN(UBIFS_DENT_NODE_SZ + (name_len) + 1, 8)
#define CALC_XATTR_BYTES(data_len) ALIGN(UBIFS_INO_NODE_SZ + (data_len) + 1, 8)
#define OLD_ZNODE_AGE 20
#define YOUNG_ZNODE_AGE 5
#define WORST_COMPR_FACTOR 2
#define COMPRESSED_DATA_NODE_BUF_SZ \
(UBIFS_DATA_NODE_SZ + UBIFS_BLOCK_SIZE * WORST_COMPR_FACTOR)
#define BOTTOM_UP_HEIGHT 64
#define UBIFS_MAX_BULK_READ 32
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
struct ubifs_old_idx ;
union ubifs_key ;
struct ubifs_scan_node ;
struct ubifs_scan_leb ;
struct ubifs_gced_idx_leb ;
struct ubifs_inode ;
struct ubifs_unclean_leb ;
enum ;
struct ubifs_lprops ;
struct ubifs_lpt_lprops ;
struct ubifs_lp_stats ;
struct ubifs_nnode;
struct ubifs_cnode ;
struct ubifs_pnode ;
struct ubifs_nbranch ;
struct ubifs_nnode ;
struct ubifs_lpt_heap ;
enum ;
struct ubifs_info;
typedef int (*ubifs_lpt_scan_callback)(struct ubifs_info *c,
const struct ubifs_lprops *lprops,
int in_tree, void *data);
struct ubifs_wbuf ;
struct ubifs_bud ;
struct ubifs_jhead ;
struct ubifs_zbranch ;
struct ubifs_znode ;
struct bu_info ;
struct ubifs_node_range ;
struct ubifs_compressor ;
struct ubifs_budget_req ;
struct ubifs_orphan ;
struct ubifs_mount_opts ;
struct ubifs_budg_info ;
struct ubifs_debug_info;
struct ubifs_info ;
extern struct list_head ubifs_infos;
extern spinlock_t ubifs_infos_lock;
extern atomic_long_t ubifs_clean_zn_cnt;
extern struct kmem_cache *ubifs_inode_slab;
extern const struct super_operations ubifs_super_operations;
extern const struct address_space_operations ubifs_file_address_operations;
extern const struct file_operations ubifs_file_operations;
extern const struct inode_operations ubifs_file_inode_operations;
extern const struct file_operations ubifs_dir_operations;
extern const struct inode_operations ubifs_dir_inode_operations;
extern const struct inode_operations ubifs_symlink_inode_operations;
extern struct backing_dev_info ubifs_backing_dev_info;
extern struct ubifs_compressor *ubifs_compressors[UBIFS_COMPR_TYPES_CNT];
void ubifs_ro_mode(struct ubifs_info *c, int err);
int ubifs_wbuf_write_nolock(struct ubifs_wbuf *wbuf, void *buf, int len);
int ubifs_wbuf_seek_nolock(struct ubifs_wbuf *wbuf, int lnum, int offs,
int dtype);
int ubifs_wbuf_init(struct ubifs_info *c, struct ubifs_wbuf *wbuf);
int ubifs_read_node(const struct ubifs_info *c, void *buf, int type, int len,
int lnum, int offs);
int ubifs_read_node_wbuf(struct ubifs_wbuf *wbuf, void *buf, int type, int len,
int lnum, int offs);
int ubifs_write_node(struct ubifs_info *c, void *node, int len, int lnum,
int offs, int dtype);
int ubifs_check_node(const struct ubifs_info *c, const void *buf, int lnum,
int offs, int quiet, int must_chk_crc);
void ubifs_prepare_node(struct ubifs_info *c, void *buf, int len, int pad);
void ubifs_prep_grp_node(struct ubifs_info *c, void *node, int len, int last);
int ubifs_io_init(struct ubifs_info *c);
void ubifs_pad(const struct ubifs_info *c, void *buf, int pad);
int ubifs_wbuf_sync_nolock(struct ubifs_wbuf *wbuf);
int ubifs_bg_wbufs_sync(struct ubifs_info *c);
void ubifs_wbuf_add_ino_nolock(struct ubifs_wbuf *wbuf, ino_t inum);
int ubifs_sync_wbufs_by_inode(struct ubifs_info *c, struct inode *inode);
struct ubifs_scan_leb *ubifs_scan(const struct ubifs_info *c, int lnum,
int offs, void *sbuf, int quiet);
void ubifs_scan_destroy(struct ubifs_scan_leb *sleb);
int ubifs_scan_a_node(const struct ubifs_info *c, void *buf, int len, int lnum,
int offs, int quiet);
struct ubifs_scan_leb *ubifs_start_scan(const struct ubifs_info *c, int lnum,
int offs, void *sbuf);
void ubifs_end_scan(const struct ubifs_info *c, struct ubifs_scan_leb *sleb,
int lnum, int offs);
int ubifs_add_snod(const struct ubifs_info *c, struct ubifs_scan_leb *sleb,
void *buf, int offs);
void ubifs_scanned_corruption(const struct ubifs_info *c, int lnum, int offs,
void *buf);
void ubifs_add_bud(struct ubifs_info *c, struct ubifs_bud *bud);
void ubifs_create_buds_lists(struct ubifs_info *c);
int ubifs_add_bud_to_log(struct ubifs_info *c, int jhead, int lnum, int offs);
struct ubifs_bud *ubifs_search_bud(struct ubifs_info *c, int lnum);
struct ubifs_wbuf *ubifs_get_wbuf(struct ubifs_info *c, int lnum);
int ubifs_log_start_commit(struct ubifs_info *c, int *ltail_lnum);
int ubifs_log_end_commit(struct ubifs_info *c, int new_ltail_lnum);
int ubifs_log_post_commit(struct ubifs_info *c, int old_ltail_lnum);
int ubifs_consolidate_log(struct ubifs_info *c);
int ubifs_jnl_update(struct ubifs_info *c, const struct inode *dir,
const struct qstr *nm, const struct inode *inode,
int deletion, int xent);
int ubifs_jnl_write_data(struct ubifs_info *c, const struct inode *inode,
const union ubifs_key *key, const void *buf, int len);
int ubifs_jnl_write_inode(struct ubifs_info *c, const struct inode *inode);
int ubifs_jnl_delete_inode(struct ubifs_info *c, const struct inode *inode);
int ubifs_jnl_rename(struct ubifs_info *c, const struct inode *old_dir,
const struct dentry *old_dentry,
const struct inode *new_dir,
const struct dentry *new_dentry, int sync);
int ubifs_jnl_truncate(struct ubifs_info *c, const struct inode *inode,
loff_t old_size, loff_t new_size);
int ubifs_jnl_delete_xattr(struct ubifs_info *c, const struct inode *host,
const struct inode *inode, const struct qstr *nm);
int ubifs_jnl_change_xattr(struct ubifs_info *c, const struct inode *inode1,
const struct inode *inode2);
int ubifs_budget_space(struct ubifs_info *c, struct ubifs_budget_req *req);
void ubifs_release_budget(struct ubifs_info *c, struct ubifs_budget_req *req);
void ubifs_release_dirty_inode_budget(struct ubifs_info *c,
struct ubifs_inode *ui);
int ubifs_budget_inode_op(struct ubifs_info *c, struct inode *inode,
struct ubifs_budget_req *req);
void ubifs_release_ino_dirty(struct ubifs_info *c, struct inode *inode,
struct ubifs_budget_req *req);
void ubifs_cancel_ino_op(struct ubifs_info *c, struct inode *inode,
struct ubifs_budget_req *req);
long long ubifs_get_free_space(struct ubifs_info *c);
long long ubifs_get_free_space_nolock(struct ubifs_info *c);
int ubifs_calc_min_idx_lebs(struct ubifs_info *c);
void ubifs_convert_page_budget(struct ubifs_info *c);
long long ubifs_reported_space(const struct ubifs_info *c, long long free);
long long ubifs_calc_available(const struct ubifs_info *c, int min_idx_lebs);
int ubifs_find_free_space(struct ubifs_info *c, int min_space, int *offs,
int squeeze);
int ubifs_find_free_leb_for_idx(struct ubifs_info *c);
int ubifs_find_dirty_leb(struct ubifs_info *c, struct ubifs_lprops *ret_lp,
int min_space, int pick_free);
int ubifs_find_dirty_idx_leb(struct ubifs_info *c);
int ubifs_save_dirty_idx_lnums(struct ubifs_info *c);
int ubifs_lookup_level0(struct ubifs_info *c, const union ubifs_key *key,
struct ubifs_znode **zn, int *n);
int ubifs_tnc_lookup_nm(struct ubifs_info *c, const union ubifs_key *key,
void *node, const struct qstr *nm);
int ubifs_tnc_locate(struct ubifs_info *c, const union ubifs_key *key,
void *node, int *lnum, int *offs);
int ubifs_tnc_add(struct ubifs_info *c, const union ubifs_key *key, int lnum,
int offs, int len);
int ubifs_tnc_replace(struct ubifs_info *c, const union ubifs_key *key,
int old_lnum, int old_offs, int lnum, int offs, int len);
int ubifs_tnc_add_nm(struct ubifs_info *c, const union ubifs_key *key,
int lnum, int offs, int len, const struct qstr *nm);
int ubifs_tnc_remove(struct ubifs_info *c, const union ubifs_key *key);
int ubifs_tnc_remove_nm(struct ubifs_info *c, const union ubifs_key *key,
const struct qstr *nm);
int ubifs_tnc_remove_range(struct ubifs_info *c, union ubifs_key *from_key,
union ubifs_key *to_key);
int ubifs_tnc_remove_ino(struct ubifs_info *c, ino_t inum);
struct ubifs_dent_node *ubifs_tnc_next_ent(struct ubifs_info *c,
union ubifs_key *key,
const struct qstr *nm);
void ubifs_tnc_close(struct ubifs_info *c);
int ubifs_tnc_has_node(struct ubifs_info *c, union ubifs_key *key, int level,
int lnum, int offs, int is_idx);
int ubifs_dirty_idx_node(struct ubifs_info *c, union ubifs_key *key, int level,
int lnum, int offs);
void destroy_old_idx(struct ubifs_info *c);
int is_idx_node_in_tnc(struct ubifs_info *c, union ubifs_key *key, int level,
int lnum, int offs);
int insert_old_idx_znode(struct ubifs_info *c, struct ubifs_znode *znode);
int ubifs_tnc_get_bu_keys(struct ubifs_info *c, struct bu_info *bu);
int ubifs_tnc_bulk_read(struct ubifs_info *c, struct bu_info *bu);
struct ubifs_znode *ubifs_tnc_levelorder_next(struct ubifs_znode *zr,
struct ubifs_znode *znode);
int ubifs_search_zbranch(const struct ubifs_info *c,
const struct ubifs_znode *znode,
const union ubifs_key *key, int *n);
struct ubifs_znode *ubifs_tnc_postorder_first(struct ubifs_znode *znode);
struct ubifs_znode *ubifs_tnc_postorder_next(struct ubifs_znode *znode);
long ubifs_destroy_tnc_subtree(struct ubifs_znode *zr);
struct ubifs_znode *ubifs_load_znode(struct ubifs_info *c,
struct ubifs_zbranch *zbr,
struct ubifs_znode *parent, int iip);
int ubifs_tnc_read_node(struct ubifs_info *c, struct ubifs_zbranch *zbr,
void *node);
int ubifs_tnc_start_commit(struct ubifs_info *c, struct ubifs_zbranch *zroot);
int ubifs_tnc_end_commit(struct ubifs_info *c);
int ubifs_shrinker(struct shrinker *shrink, struct shrink_control *sc);
int ubifs_bg_thread(void *info);
void ubifs_commit_required(struct ubifs_info *c);
void ubifs_request_bg_commit(struct ubifs_info *c);
int ubifs_run_commit(struct ubifs_info *c);
void ubifs_recovery_commit(struct ubifs_info *c);
int ubifs_gc_should_commit(struct ubifs_info *c);
void ubifs_wait_for_commit(struct ubifs_info *c);
int ubifs_read_master(struct ubifs_info *c);
int ubifs_write_master(struct ubifs_info *c);
int ubifs_read_superblock(struct ubifs_info *c);
struct ubifs_sb_node *ubifs_read_sb_node(struct ubifs_info *c);
int ubifs_write_sb_node(struct ubifs_info *c, struct ubifs_sb_node *sup);
int ubifs_fixup_free_space(struct ubifs_info *c);
int ubifs_validate_entry(struct ubifs_info *c,
const struct ubifs_dent_node *dent);
int ubifs_replay_journal(struct ubifs_info *c);
int ubifs_garbage_collect(struct ubifs_info *c, int anyway);
int ubifs_gc_start_commit(struct ubifs_info *c);
int ubifs_gc_end_commit(struct ubifs_info *c);
void ubifs_destroy_idx_gc(struct ubifs_info *c);
int ubifs_get_idx_gc_leb(struct ubifs_info *c);
int ubifs_garbage_collect_leb(struct ubifs_info *c, struct ubifs_lprops *lp);
int ubifs_add_orphan(struct ubifs_info *c, ino_t inum);
void ubifs_delete_orphan(struct ubifs_info *c, ino_t inum);
int ubifs_orphan_start_commit(struct ubifs_info *c);
int ubifs_orphan_end_commit(struct ubifs_info *c);
int ubifs_mount_orphans(struct ubifs_info *c, int unclean, int read_only);
int ubifs_clear_orphans(struct ubifs_info *c);
int ubifs_calc_lpt_geom(struct ubifs_info *c);
int ubifs_create_dflt_lpt(struct ubifs_info *c, int *main_lebs, int lpt_first,
int *lpt_lebs, int *big_lpt);
int ubifs_lpt_init(struct ubifs_info *c, int rd, int wr);
struct ubifs_lprops *ubifs_lpt_lookup(struct ubifs_info *c, int lnum);
struct ubifs_lprops *ubifs_lpt_lookup_dirty(struct ubifs_info *c, int lnum);
int ubifs_lpt_scan_nolock(struct ubifs_info *c, int start_lnum, int end_lnum,
ubifs_lpt_scan_callback scan_cb, void *data);
void ubifs_pack_lsave(struct ubifs_info *c, void *buf, int *lsave);
void ubifs_pack_ltab(struct ubifs_info *c, void *buf,
struct ubifs_lpt_lprops *ltab);
void ubifs_pack_pnode(struct ubifs_info *c, void *buf,
struct ubifs_pnode *pnode);
void ubifs_pack_nnode(struct ubifs_info *c, void *buf,
struct ubifs_nnode *nnode);
struct ubifs_pnode *ubifs_get_pnode(struct ubifs_info *c,
struct ubifs_nnode *parent, int iip);
struct ubifs_nnode *ubifs_get_nnode(struct ubifs_info *c,
struct ubifs_nnode *parent, int iip);
int ubifs_read_nnode(struct ubifs_info *c, struct ubifs_nnode *parent, int iip);
void ubifs_add_lpt_dirt(struct ubifs_info *c, int lnum, int dirty);
void ubifs_add_nnode_dirt(struct ubifs_info *c, struct ubifs_nnode *nnode);
uint32_t ubifs_unpack_bits(uint8_t **addr, int *pos, int nrbits);
struct ubifs_nnode *ubifs_first_nnode(struct ubifs_info *c, int *hght);
int ubifs_unpack_nnode(const struct ubifs_info *c, void *buf,
struct ubifs_nnode *nnode);
int ubifs_lpt_start_commit(struct ubifs_info *c);
int ubifs_lpt_end_commit(struct ubifs_info *c);
int ubifs_lpt_post_commit(struct ubifs_info *c);
void ubifs_lpt_free(struct ubifs_info *c, int wr_only);
const struct ubifs_lprops *ubifs_change_lp(struct ubifs_info *c,
const struct ubifs_lprops *lp,
int free, int dirty, int flags,
int idx_gc_cnt);
void ubifs_get_lp_stats(struct ubifs_info *c, struct ubifs_lp_stats *lst);
void ubifs_add_to_cat(struct ubifs_info *c, struct ubifs_lprops *lprops,
int cat);
void ubifs_replace_cat(struct ubifs_info *c, struct ubifs_lprops *old_lprops,
struct ubifs_lprops *new_lprops);
void ubifs_ensure_cat(struct ubifs_info *c, struct ubifs_lprops *lprops);
int ubifs_categorize_lprops(const struct ubifs_info *c,
const struct ubifs_lprops *lprops);
int ubifs_change_one_lp(struct ubifs_info *c, int lnum, int free, int dirty,
int flags_set, int flags_clean, int idx_gc_cnt);
int ubifs_update_one_lp(struct ubifs_info *c, int lnum, int free, int dirty,
int flags_set, int flags_clean);
int ubifs_read_one_lp(struct ubifs_info *c, int lnum, struct ubifs_lprops *lp);
const struct ubifs_lprops *ubifs_fast_find_free(struct ubifs_info *c);
const struct ubifs_lprops *ubifs_fast_find_empty(struct ubifs_info *c);
const struct ubifs_lprops *ubifs_fast_find_freeable(struct ubifs_info *c);
const struct ubifs_lprops *ubifs_fast_find_frdi_idx(struct ubifs_info *c);
int ubifs_calc_dark(const struct ubifs_info *c, int spc);
int ubifs_fsync(struct file *file, int datasync);
int ubifs_setattr(struct dentry *dentry, struct iattr *attr);
struct inode *ubifs_new_inode(struct ubifs_info *c, const struct inode *dir,
int mode);
int ubifs_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat);
int ubifs_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags);
ssize_t ubifs_getxattr(struct dentry *dentry, const char *name, void *buf,
size_t size);
ssize_t ubifs_listxattr(struct dentry *dentry, char *buffer, size_t size);
int ubifs_removexattr(struct dentry *dentry, const char *name);
struct inode *ubifs_iget(struct super_block *sb, unsigned long inum);
int ubifs_recover_master_node(struct ubifs_info *c);
int ubifs_write_rcvrd_mst_node(struct ubifs_info *c);
struct ubifs_scan_leb *ubifs_recover_leb(struct ubifs_info *c, int lnum,
int offs, void *sbuf, int jhead);
struct ubifs_scan_leb *ubifs_recover_log_leb(struct ubifs_info *c, int lnum,
int offs, void *sbuf);
int ubifs_recover_inl_heads(const struct ubifs_info *c, void *sbuf);
int ubifs_clean_lebs(const struct ubifs_info *c, void *sbuf);
int ubifs_rcvry_gc_commit(struct ubifs_info *c);
int ubifs_recover_size_accum(struct ubifs_info *c, union ubifs_key *key,
int deletion, loff_t new_size);
int ubifs_recover_size(struct ubifs_info *c);
void ubifs_destroy_size_tree(struct ubifs_info *c);
long ubifs_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
void ubifs_set_inode_flags(struct inode *inode);
long ubifs_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
int __init ubifs_compressors_init(void);
void ubifs_compressors_exit(void);
void ubifs_compress(const void *in_buf, int in_len, void *out_buf, int *out_len,
int *compr_type);
int ubifs_decompress(const void *buf, int len, void *out, int *out_len,
int compr_type);
