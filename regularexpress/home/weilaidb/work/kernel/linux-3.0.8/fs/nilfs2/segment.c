#define SC_N_INODEVEC	16
#define SC_MAX_SEGDELTA 64
enum ;
enum ;
#define NILFS_CF_NODE		0x0001
#define NILFS_CF_IFILE_STARTED	0x0002
#define NILFS_CF_SUFREED	0x0004
#define NILFS_CF_HISTORY_MASK	(NILFS_CF_IFILE_STARTED | NILFS_CF_SUFREED)
struct nilfs_sc_operations ;
static void nilfs_segctor_start_timer(struct nilfs_sc_info *);
static void nilfs_segctor_do_flush(struct nilfs_sc_info *, int);
static void nilfs_segctor_do_immediate_flush(struct nilfs_sc_info *);
static void nilfs_dispose_list(struct the_nilfs *, struct list_head *, int);
#define nilfs_cnt32_gt(a, b)   \
(typecheck(__u32, a) && typecheck(__u32, b) && \
((__s32)(b) - (__s32)(a) < 0))
#define nilfs_cnt32_ge(a, b)   \
(typecheck(__u32, a) && typecheck(__u32, b) && \
((__s32)(a) - (__s32)(b) >= 0))
#define nilfs_cnt32_lt(a, b)  nilfs_cnt32_gt(b, a)
#define nilfs_cnt32_le(a, b)  nilfs_cnt32_ge(b, a)
static int nilfs_prepare_segment_lock(struct nilfs_transaction_info *ti)
int nilfs_transaction_begin(struct super_block *sb,
struct nilfs_transaction_info *ti,
int vacancy_check)
int nilfs_transaction_commit(struct super_block *sb)
void nilfs_transaction_abort(struct super_block *sb)
void nilfs_relax_pressure_in_lock(struct super_block *sb)
static void nilfs_transaction_lock(struct super_block *sb,
struct nilfs_transaction_info *ti,
int gcflag)
static void nilfs_transaction_unlock(struct super_block *sb)
static void *nilfs_segctor_map_segsum_entry(struct nilfs_sc_info *sci,
struct nilfs_segsum_pointer *ssp,
unsigned bytes)
static int nilfs_segctor_reset_segment_buffer(struct nilfs_sc_info *sci)
static int nilfs_segctor_feed_segment(struct nilfs_sc_info *sci)
static int nilfs_segctor_add_super_root(struct nilfs_sc_info *sci)
static int nilfs_segctor_segsum_block_required(
struct nilfs_sc_info *sci, const struct nilfs_segsum_pointer *ssp,
unsigned binfo_size)
static void nilfs_segctor_begin_finfo(struct nilfs_sc_info *sci,
struct inode *inode)
static void nilfs_segctor_end_finfo(struct nilfs_sc_info *sci,
struct inode *inode)
static int nilfs_segctor_add_file_block(struct nilfs_sc_info *sci,
struct buffer_head *bh,
struct inode *inode,
unsigned binfo_size)
static int nilfs_collect_file_data(struct nilfs_sc_info *sci,
struct buffer_head *bh, struct inode *inode)
static int nilfs_collect_file_node(struct nilfs_sc_info *sci,
struct buffer_head *bh,
struct inode *inode)
static int nilfs_collect_file_bmap(struct nilfs_sc_info *sci,
struct buffer_head *bh,
struct inode *inode)
static void nilfs_write_file_data_binfo(struct nilfs_sc_info *sci,
struct nilfs_segsum_pointer *ssp,
union nilfs_binfo *binfo)
static void nilfs_write_file_node_binfo(struct nilfs_sc_info *sci,
struct nilfs_segsum_pointer *ssp,
union nilfs_binfo *binfo)
static struct nilfs_sc_operations nilfs_sc_file_ops = ;
static int nilfs_collect_dat_data(struct nilfs_sc_info *sci,
struct buffer_head *bh, struct inode *inode)
static int nilfs_collect_dat_bmap(struct nilfs_sc_info *sci,
struct buffer_head *bh, struct inode *inode)
static void nilfs_write_dat_data_binfo(struct nilfs_sc_info *sci,
struct nilfs_segsum_pointer *ssp,
union nilfs_binfo *binfo)
static void nilfs_write_dat_node_binfo(struct nilfs_sc_info *sci,
struct nilfs_segsum_pointer *ssp,
union nilfs_binfo *binfo)
static struct nilfs_sc_operations nilfs_sc_dat_ops = ;
static struct nilfs_sc_operations nilfs_sc_dsync_ops = ;
static size_t nilfs_lookup_dirty_data_buffers(struct inode *inode,
struct list_head *listp,
size_t nlimit,
loff_t start, loff_t end)
static void nilfs_lookup_dirty_node_buffers(struct inode *inode,
struct list_head *listp)
static void nilfs_dispose_list(struct the_nilfs *nilfs,
struct list_head *head, int force)
static int nilfs_test_metadata_dirty(struct the_nilfs *nilfs,
struct nilfs_root *root)
static int nilfs_segctor_clean(struct nilfs_sc_info *sci)
static int nilfs_segctor_confirm(struct nilfs_sc_info *sci)
static void nilfs_segctor_clear_metadata_dirty(struct nilfs_sc_info *sci)
static int nilfs_segctor_create_checkpoint(struct nilfs_sc_info *sci)
static int nilfs_segctor_fill_in_checkpoint(struct nilfs_sc_info *sci)
static void nilfs_fill_in_file_bmap(struct inode *ifile,
struct nilfs_inode_info *ii)
static void nilfs_segctor_fill_in_file_bmap(struct nilfs_sc_info *sci)
static void nilfs_segctor_fill_in_super_root(struct nilfs_sc_info *sci,
struct the_nilfs *nilfs)
static void nilfs_redirty_inodes(struct list_head *head)
static void nilfs_drop_collected_inodes(struct list_head *head)
static int nilfs_segctor_apply_buffers(struct nilfs_sc_info *sci,
struct inode *inode,
struct list_head *listp,
int (*collect)(struct nilfs_sc_info *,
struct buffer_head *,
struct inode *))
static size_t nilfs_segctor_buffer_rest(struct nilfs_sc_info *sci)
static int nilfs_segctor_scan_file(struct nilfs_sc_info *sci,
struct inode *inode,
struct nilfs_sc_operations *sc_ops)
static int nilfs_segctor_scan_file_dsync(struct nilfs_sc_info *sci,
struct inode *inode)
static int nilfs_segctor_collect_blocks(struct nilfs_sc_info *sci, int mode)
static int nilfs_segctor_begin_construction(struct nilfs_sc_info *sci,
struct the_nilfs *nilfs)
static int nilfs_segctor_extend_segments(struct nilfs_sc_info *sci,
struct the_nilfs *nilfs, int nadd)
static void nilfs_free_incomplete_logs(struct list_head *logs,
struct the_nilfs *nilfs)
static void nilfs_segctor_update_segusage(struct nilfs_sc_info *sci,
struct inode *sufile)
static void nilfs_cancel_segusage(struct list_head *logs, struct inode *sufile)
static void nilfs_segctor_truncate_segments(struct nilfs_sc_info *sci,
struct nilfs_segment_buffer *last,
struct inode *sufile)
static int nilfs_segctor_collect(struct nilfs_sc_info *sci,
struct the_nilfs *nilfs, int mode)
static void nilfs_list_replace_buffer(struct buffer_head *old_bh,
struct buffer_head *new_bh)
static int
nilfs_segctor_update_payload_blocknr(struct nilfs_sc_info *sci,
struct nilfs_segment_buffer *segbuf,
int mode)
static int nilfs_segctor_assign(struct nilfs_sc_info *sci, int mode)
static void nilfs_begin_page_io(struct page *page)
static void nilfs_segctor_prepare_write(struct nilfs_sc_info *sci)
static int nilfs_segctor_write(struct nilfs_sc_info *sci,
struct the_nilfs *nilfs)
static void nilfs_end_page_io(struct page *page, int err)
static void nilfs_abort_logs(struct list_head *logs, int err)
static void nilfs_segctor_abort_construction(struct nilfs_sc_info *sci,
struct the_nilfs *nilfs, int err)
static void nilfs_set_next_segment(struct the_nilfs *nilfs,
struct nilfs_segment_buffer *segbuf)
static void nilfs_segctor_complete_write(struct nilfs_sc_info *sci)
static int nilfs_segctor_wait(struct nilfs_sc_info *sci)
static int nilfs_segctor_collect_dirty_files(struct nilfs_sc_info *sci,
struct the_nilfs *nilfs)
static void nilfs_segctor_drop_written_files(struct nilfs_sc_info *sci,
struct the_nilfs *nilfs)
static int nilfs_segctor_do_construct(struct nilfs_sc_info *sci, int mode)
static void nilfs_segctor_start_timer(struct nilfs_sc_info *sci)
static void nilfs_segctor_do_flush(struct nilfs_sc_info *sci, int bn)
void nilfs_flush_segment(struct super_block *sb, ino_t ino)
struct nilfs_segctor_wait_request ;
static int nilfs_segctor_sync(struct nilfs_sc_info *sci)
static void nilfs_segctor_wakeup(struct nilfs_sc_info *sci, int err)
int nilfs_construct_segment(struct super_block *sb)
int nilfs_construct_dsync_segment(struct super_block *sb, struct inode *inode,
loff_t start, loff_t end)
#define FLUSH_FILE_BIT	(0x1)
#define FLUSH_DAT_BIT	(1 << NILFS_DAT_INO)
static void nilfs_segctor_accept(struct nilfs_sc_info *sci)
static void nilfs_segctor_notify(struct nilfs_sc_info *sci, int mode, int err)
static int nilfs_segctor_construct(struct nilfs_sc_info *sci, int mode)
static void nilfs_construction_timeout(unsigned long data)
static void
nilfs_remove_written_gcinodes(struct the_nilfs *nilfs, struct list_head *head)
int nilfs_clean_segments(struct super_block *sb, struct nilfs_argv *argv,
void **kbufs)
static void nilfs_segctor_thread_construct(struct nilfs_sc_info *sci, int mode)
static void nilfs_segctor_do_immediate_flush(struct nilfs_sc_info *sci)
static int nilfs_segctor_flush_mode(struct nilfs_sc_info *sci)
static int nilfs_segctor_thread(void *arg)
static int nilfs_segctor_start_thread(struct nilfs_sc_info *sci)
static void nilfs_segctor_kill_thread(struct nilfs_sc_info *sci)
__acquires(&sci->sc_state_lock)
__releases(&sci->sc_state_lock)
static struct nilfs_sc_info *nilfs_segctor_new(struct super_block *sb,
struct nilfs_root *root)
static void nilfs_segctor_write_out(struct nilfs_sc_info *sci)
static void nilfs_segctor_destroy(struct nilfs_sc_info *sci)
int nilfs_attach_log_writer(struct super_block *sb, struct nilfs_root *root)
void nilfs_detach_log_writer(struct super_block *sb)
