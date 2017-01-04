DEFINE_SPINLOCK(trans_inc_lock);
#define ORPHAN_SCAN_SCHEDULE_TIMEOUT 300000
static int ocfs2_force_read_journal(struct inode *inode);
static int ocfs2_recover_node(struct ocfs2_super *osb,
int node_num, int slot_num);
static int __ocfs2_recovery_thread(void *arg);
static int ocfs2_commit_cache(struct ocfs2_super *osb);
static int __ocfs2_wait_on_mount(struct ocfs2_super *osb, int quota);
static int ocfs2_journal_toggle_dirty(struct ocfs2_super *osb,
int dirty, int replayed);
static int ocfs2_trylock_journal(struct ocfs2_super *osb,
int slot_num);
static int ocfs2_recover_orphans(struct ocfs2_super *osb,
int slot);
static int ocfs2_commit_thread(void *arg);
static void ocfs2_queue_recovery_completion(struct ocfs2_journal *journal,
int slot_num,
struct ocfs2_dinode *la_dinode,
struct ocfs2_dinode *tl_dinode,
struct ocfs2_quota_recovery *qrec);
static inline int ocfs2_wait_on_mount(struct ocfs2_super *osb)
static inline int ocfs2_wait_on_quotas(struct ocfs2_super *osb)
enum ocfs2_replay_state ;
struct ocfs2_replay_map ;
void ocfs2_replay_map_set_state(struct ocfs2_super *osb, int state)
int ocfs2_compute_replay_slots(struct ocfs2_super *osb)
void ocfs2_queue_replay_slots(struct ocfs2_super *osb)
void ocfs2_free_replay_slots(struct ocfs2_super *osb)
int ocfs2_recovery_init(struct ocfs2_super *osb)
static int ocfs2_recovery_thread_running(struct ocfs2_super *osb)
void ocfs2_recovery_exit(struct ocfs2_super *osb)
static int __ocfs2_recovery_map_test(struct ocfs2_super *osb,
unsigned int node_num)
static int ocfs2_recovery_map_set(struct ocfs2_super *osb,
unsigned int node_num)
static void ocfs2_recovery_map_clear(struct ocfs2_super *osb,
unsigned int node_num)
static int ocfs2_commit_cache(struct ocfs2_super *osb)
handle_t *ocfs2_start_trans(struct ocfs2_super *osb, int max_buffs)
int ocfs2_commit_trans(struct ocfs2_super *osb,
handle_t *handle)
int ocfs2_extend_trans(handle_t *handle, int nblocks)
struct ocfs2_triggers ;
static inline struct ocfs2_triggers *to_ocfs2_trigger(struct jbd2_buffer_trigger_type *triggers)
static void ocfs2_frozen_trigger(struct jbd2_buffer_trigger_type *triggers,
struct buffer_head *bh,
void *data, size_t size)
static void ocfs2_dq_frozen_trigger(struct jbd2_buffer_trigger_type *triggers,
struct buffer_head *bh,
void *data, size_t size)
static void ocfs2_db_frozen_trigger(struct jbd2_buffer_trigger_type *triggers,
struct buffer_head *bh,
void *data, size_t size)
static void ocfs2_abort_trigger(struct jbd2_buffer_trigger_type *triggers,
struct buffer_head *bh)
static struct ocfs2_triggers di_triggers = ;
static struct ocfs2_triggers eb_triggers = ;
static struct ocfs2_triggers rb_triggers = ;
static struct ocfs2_triggers gd_triggers = ;
static struct ocfs2_triggers db_triggers = ;
static struct ocfs2_triggers xb_triggers = ;
static struct ocfs2_triggers dq_triggers = ;
static struct ocfs2_triggers dr_triggers = ;
static struct ocfs2_triggers dl_triggers = ;
static int __ocfs2_journal_access(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *bh,
struct ocfs2_triggers *triggers,
int type)
int ocfs2_journal_access_di(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
int ocfs2_journal_access_eb(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
int ocfs2_journal_access_rb(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
int ocfs2_journal_access_gd(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
int ocfs2_journal_access_db(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
int ocfs2_journal_access_xb(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
int ocfs2_journal_access_dq(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
int ocfs2_journal_access_dr(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
int ocfs2_journal_access_dl(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
int ocfs2_journal_access(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type)
void ocfs2_journal_dirty(handle_t *handle, struct buffer_head *bh)
#define OCFS2_DEFAULT_COMMIT_INTERVAL	(HZ * JBD2_DEFAULT_MAX_COMMIT_AGE)
void ocfs2_set_journal_params(struct ocfs2_super *osb)
int ocfs2_journal_init(struct ocfs2_journal *journal, int *dirty)
static void ocfs2_bump_recovery_generation(struct ocfs2_dinode *di)
static u32 ocfs2_get_recovery_generation(struct ocfs2_dinode *di)
static int ocfs2_journal_toggle_dirty(struct ocfs2_super *osb,
int dirty, int replayed)
void ocfs2_journal_shutdown(struct ocfs2_super *osb)
static void ocfs2_clear_journal_error(struct super_block *sb,
journal_t *journal,
int slot)
int ocfs2_journal_load(struct ocfs2_journal *journal, int local, int replayed)
int ocfs2_journal_wipe(struct ocfs2_journal *journal, int full)
static int ocfs2_recovery_completed(struct ocfs2_super *osb)
void ocfs2_wait_for_recovery(struct ocfs2_super *osb)
static int ocfs2_force_read_journal(struct inode *inode)
struct ocfs2_la_recovery_item ;
void ocfs2_complete_recovery(struct work_struct *work)
static void ocfs2_queue_recovery_completion(struct ocfs2_journal *journal,
int slot_num,
struct ocfs2_dinode *la_dinode,
struct ocfs2_dinode *tl_dinode,
struct ocfs2_quota_recovery *qrec)
void ocfs2_complete_mount_recovery(struct ocfs2_super *osb)
void ocfs2_complete_quota_recovery(struct ocfs2_super *osb)
static int __ocfs2_recovery_thread(void *arg)
void ocfs2_recovery_thread(struct ocfs2_super *osb, int node_num)
static int ocfs2_read_journal_inode(struct ocfs2_super *osb,
int slot_num,
struct buffer_head **bh,
struct inode **ret_inode)
static int ocfs2_replay_journal(struct ocfs2_super *osb,
int node_num,
int slot_num)
static int ocfs2_recover_node(struct ocfs2_super *osb,
int node_num, int slot_num)
static int ocfs2_trylock_journal(struct ocfs2_super *osb,
int slot_num)
int ocfs2_mark_dead_nodes(struct ocfs2_super *osb)
static inline unsigned long ocfs2_orphan_scan_timeout(void)
void ocfs2_queue_orphan_scan(struct ocfs2_super *osb)
void ocfs2_orphan_scan_work(struct work_struct *work)
void ocfs2_orphan_scan_stop(struct ocfs2_super *osb)
void ocfs2_orphan_scan_init(struct ocfs2_super *osb)
void ocfs2_orphan_scan_start(struct ocfs2_super *osb)
struct ocfs2_orphan_filldir_priv ;
static int ocfs2_orphan_filldir(void *priv, const char *name, int name_len,
loff_t pos, u64 ino, unsigned type)
static int ocfs2_queue_orphans(struct ocfs2_super *osb,
int slot,
struct inode **head)
static int ocfs2_orphan_recovery_can_continue(struct ocfs2_super *osb,
int slot)
static void ocfs2_mark_recovering_orphan_dir(struct ocfs2_super *osb,
int slot)
static void ocfs2_clear_recovering_orphan_dir(struct ocfs2_super *osb,
int slot)
static int ocfs2_recover_orphans(struct ocfs2_super *osb,
int slot)
static int __ocfs2_wait_on_mount(struct ocfs2_super *osb, int quota)
static int ocfs2_commit_thread(void *arg)
int ocfs2_check_journals_nolocks(struct ocfs2_super *osb)
