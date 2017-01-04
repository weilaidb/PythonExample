#define MLOG_MASK_PREFIX ML_DLM_GLUE
struct ocfs2_mask_waiter ;
static struct ocfs2_super *ocfs2_get_dentry_osb(struct ocfs2_lock_res *lockres);
static struct ocfs2_super *ocfs2_get_inode_osb(struct ocfs2_lock_res *lockres);
static struct ocfs2_super *ocfs2_get_file_osb(struct ocfs2_lock_res *lockres);
static struct ocfs2_super *ocfs2_get_qinfo_osb(struct ocfs2_lock_res *lockres);
enum ocfs2_unblock_action ;
struct ocfs2_unblock_ctl ;
struct lock_class_key lockdep_keys[OCFS2_NUM_LOCK_TYPES];
static int ocfs2_check_meta_downconvert(struct ocfs2_lock_res *lockres,
int new_level);
static void ocfs2_set_meta_lvb(struct ocfs2_lock_res *lockres);
static int ocfs2_data_convert_worker(struct ocfs2_lock_res *lockres,
int blocking);
static int ocfs2_dentry_convert_worker(struct ocfs2_lock_res *lockres,
int blocking);
static void ocfs2_dentry_post_unlock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres);
static void ocfs2_set_qinfo_lvb(struct ocfs2_lock_res *lockres);
static int ocfs2_check_refcount_downconvert(struct ocfs2_lock_res *lockres,
int new_level);
static int ocfs2_refcount_convert_worker(struct ocfs2_lock_res *lockres,
int blocking);
#define mlog_meta_lvb(__level, __lockres) ocfs2_dump_meta_lvb_info(__level, __PRETTY_FUNCTION__, __LINE__, __lockres)
static void ocfs2_dump_meta_lvb_info(u64 level,
const char *function,
unsigned int line,
struct ocfs2_lock_res *lockres)
struct ocfs2_lock_res_ops ;
#define LOCK_TYPE_REQUIRES_REFRESH 0x1
#define LOCK_TYPE_USES_LVB		0x2
static struct ocfs2_lock_res_ops ocfs2_inode_rw_lops = ;
static struct ocfs2_lock_res_ops ocfs2_inode_inode_lops = ;
static struct ocfs2_lock_res_ops ocfs2_super_lops = ;
static struct ocfs2_lock_res_ops ocfs2_rename_lops = ;
static struct ocfs2_lock_res_ops ocfs2_nfs_sync_lops = ;
static struct ocfs2_lock_res_ops ocfs2_orphan_scan_lops = ;
static struct ocfs2_lock_res_ops ocfs2_dentry_lops = ;
static struct ocfs2_lock_res_ops ocfs2_inode_open_lops = ;
static struct ocfs2_lock_res_ops ocfs2_flock_lops = ;
static struct ocfs2_lock_res_ops ocfs2_qinfo_lops = ;
static struct ocfs2_lock_res_ops ocfs2_refcount_block_lops = ;
static inline int ocfs2_is_inode_lock(struct ocfs2_lock_res *lockres)
static inline struct ocfs2_lock_res *ocfs2_lksb_to_lock_res(struct ocfs2_dlm_lksb *lksb)
static inline struct inode *ocfs2_lock_res_inode(struct ocfs2_lock_res *lockres)
static inline struct ocfs2_dentry_lock *ocfs2_lock_res_dl(struct ocfs2_lock_res *lockres)
static inline struct ocfs2_mem_dqinfo *ocfs2_lock_res_qinfo(struct ocfs2_lock_res *lockres)
static inline struct ocfs2_refcount_tree *
ocfs2_lock_res_refcount_tree(struct ocfs2_lock_res *res)
static inline struct ocfs2_super *ocfs2_get_lockres_osb(struct ocfs2_lock_res *lockres)
static int ocfs2_lock_create(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int level,
u32 dlm_flags);
static inline int ocfs2_may_continue_on_blocked_lock(struct ocfs2_lock_res *lockres,
int wanted);
static void __ocfs2_cluster_unlock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int level, unsigned long caller_ip);
static inline void ocfs2_cluster_unlock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int level)
static inline void ocfs2_generic_handle_downconvert_action(struct ocfs2_lock_res *lockres);
static inline void ocfs2_generic_handle_convert_action(struct ocfs2_lock_res *lockres);
static inline void ocfs2_generic_handle_attach_action(struct ocfs2_lock_res *lockres);
static int ocfs2_generic_handle_bast(struct ocfs2_lock_res *lockres, int level);
static void ocfs2_schedule_blocked_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres);
static inline void ocfs2_recover_from_dlm_error(struct ocfs2_lock_res *lockres,
int convert);
#define ocfs2_log_dlm_error(_func, _err, _lockres) do  while (0)
static int ocfs2_downconvert_thread(void *arg);
static void ocfs2_downconvert_on_unlock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres);
static int ocfs2_inode_lock_update(struct inode *inode,
struct buffer_head **bh);
static void ocfs2_drop_osb_locks(struct ocfs2_super *osb);
static inline int ocfs2_highest_compat_lock_level(int level);
static unsigned int ocfs2_prepare_downconvert(struct ocfs2_lock_res *lockres,
int new_level);
static int ocfs2_downconvert_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int new_level,
int lvb,
unsigned int generation);
static int ocfs2_prepare_cancel_convert(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres);
static int ocfs2_cancel_convert(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres);
static void ocfs2_build_lock_name(enum ocfs2_lock_type type,
u64 blkno,
u32 generation,
char *name)
static DEFINE_SPINLOCK(ocfs2_dlm_tracking_lock);
static void ocfs2_add_lockres_tracking(struct ocfs2_lock_res *res,
struct ocfs2_dlm_debug *dlm_debug)
static void ocfs2_remove_lockres_tracking(struct ocfs2_lock_res *res)
static void ocfs2_init_lock_stats(struct ocfs2_lock_res *res)
static void ocfs2_update_lock_stats(struct ocfs2_lock_res *res, int level,
struct ocfs2_mask_waiter *mw, int ret)
static inline void ocfs2_track_lock_refresh(struct ocfs2_lock_res *lockres)
static inline void ocfs2_init_start_time(struct ocfs2_mask_waiter *mw)
static inline void ocfs2_init_lock_stats(struct ocfs2_lock_res *res)
static inline void ocfs2_update_lock_stats(struct ocfs2_lock_res *res,
int level, struct ocfs2_mask_waiter *mw, int ret)
static inline void ocfs2_track_lock_refresh(struct ocfs2_lock_res *lockres)
static inline void ocfs2_init_start_time(struct ocfs2_mask_waiter *mw)
static void ocfs2_lock_res_init_common(struct ocfs2_super *osb,
struct ocfs2_lock_res *res,
enum ocfs2_lock_type type,
struct ocfs2_lock_res_ops *ops,
void *priv)
void ocfs2_lock_res_init_once(struct ocfs2_lock_res *res)
void ocfs2_inode_lock_res_init(struct ocfs2_lock_res *res,
enum ocfs2_lock_type type,
unsigned int generation,
struct inode *inode)
static struct ocfs2_super *ocfs2_get_inode_osb(struct ocfs2_lock_res *lockres)
static struct ocfs2_super *ocfs2_get_qinfo_osb(struct ocfs2_lock_res *lockres)
static struct ocfs2_super *ocfs2_get_file_osb(struct ocfs2_lock_res *lockres)
static __u64 ocfs2_get_dentry_lock_ino(struct ocfs2_lock_res *lockres)
static struct ocfs2_super *ocfs2_get_dentry_osb(struct ocfs2_lock_res *lockres)
void ocfs2_dentry_lock_res_init(struct ocfs2_dentry_lock *dl,
u64 parent, struct inode *inode)
static void ocfs2_super_lock_res_init(struct ocfs2_lock_res *res,
struct ocfs2_super *osb)
static void ocfs2_rename_lock_res_init(struct ocfs2_lock_res *res,
struct ocfs2_super *osb)
static void ocfs2_nfs_sync_lock_res_init(struct ocfs2_lock_res *res,
struct ocfs2_super *osb)
static void ocfs2_orphan_scan_lock_res_init(struct ocfs2_lock_res *res,
struct ocfs2_super *osb)
void ocfs2_file_lock_res_init(struct ocfs2_lock_res *lockres,
struct ocfs2_file_private *fp)
void ocfs2_qinfo_lock_res_init(struct ocfs2_lock_res *lockres,
struct ocfs2_mem_dqinfo *info)
void ocfs2_refcount_lock_res_init(struct ocfs2_lock_res *lockres,
struct ocfs2_super *osb, u64 ref_blkno,
unsigned int generation)
void ocfs2_lock_res_free(struct ocfs2_lock_res *res)
static inline void ocfs2_inc_holders(struct ocfs2_lock_res *lockres,
int level)
static inline void ocfs2_dec_holders(struct ocfs2_lock_res *lockres,
int level)
static inline int ocfs2_highest_compat_lock_level(int level)
static void lockres_set_flags(struct ocfs2_lock_res *lockres,
unsigned long newflags)
static void lockres_or_flags(struct ocfs2_lock_res *lockres, unsigned long or)
static void lockres_clear_flags(struct ocfs2_lock_res *lockres,
unsigned long clear)
static inline void ocfs2_generic_handle_downconvert_action(struct ocfs2_lock_res *lockres)
static inline void ocfs2_generic_handle_convert_action(struct ocfs2_lock_res *lockres)
static inline void ocfs2_generic_handle_attach_action(struct ocfs2_lock_res *lockres)
static int ocfs2_generic_handle_bast(struct ocfs2_lock_res *lockres,
int level)
static void __lockres_clear_pending(struct ocfs2_lock_res *lockres,
unsigned int generation,
struct ocfs2_super *osb)
static void lockres_clear_pending(struct ocfs2_lock_res *lockres,
unsigned int generation,
struct ocfs2_super *osb)
static unsigned int lockres_set_pending(struct ocfs2_lock_res *lockres)
static void ocfs2_blocking_ast(struct ocfs2_dlm_lksb *lksb, int level)
static void ocfs2_locking_ast(struct ocfs2_dlm_lksb *lksb)
static void ocfs2_unlock_ast(struct ocfs2_dlm_lksb *lksb, int error)
static struct ocfs2_locking_protocol lproto = ;
void ocfs2_set_locking_protocol(void)
static inline void ocfs2_recover_from_dlm_error(struct ocfs2_lock_res *lockres,
int convert)
static int ocfs2_lock_create(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int level,
u32 dlm_flags)
static inline int ocfs2_check_wait_flag(struct ocfs2_lock_res *lockres,
int flag)
static inline void ocfs2_wait_on_busy_lock(struct ocfs2_lock_res *lockres)
static inline void ocfs2_wait_on_refreshing_lock(struct ocfs2_lock_res *lockres)
static inline int ocfs2_may_continue_on_blocked_lock(struct ocfs2_lock_res *lockres,
int wanted)
static void ocfs2_init_mask_waiter(struct ocfs2_mask_waiter *mw)
static int ocfs2_wait_for_mask(struct ocfs2_mask_waiter *mw)
static void lockres_add_mask_waiter(struct ocfs2_lock_res *lockres,
struct ocfs2_mask_waiter *mw,
unsigned long mask,
unsigned long goal)
static int lockres_remove_mask_waiter(struct ocfs2_lock_res *lockres,
struct ocfs2_mask_waiter *mw)
static int ocfs2_wait_for_mask_interruptible(struct ocfs2_mask_waiter *mw,
struct ocfs2_lock_res *lockres)
static int __ocfs2_cluster_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int level,
u32 lkm_flags,
int arg_flags,
int l_subclass,
unsigned long caller_ip)
static inline int ocfs2_cluster_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int level,
u32 lkm_flags,
int arg_flags)
static void __ocfs2_cluster_unlock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int level,
unsigned long caller_ip)
static int ocfs2_create_new_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int ex,
int local)
int ocfs2_create_new_inode_locks(struct inode *inode)
int ocfs2_rw_lock(struct inode *inode, int write)
void ocfs2_rw_unlock(struct inode *inode, int write)
int ocfs2_open_lock(struct inode *inode)
int ocfs2_try_open_lock(struct inode *inode, int write)
void ocfs2_open_unlock(struct inode *inode)
static int ocfs2_flock_handle_signal(struct ocfs2_lock_res *lockres,
int level)
int ocfs2_file_lock(struct file *file, int ex, int trylock)
void ocfs2_file_unlock(struct file *file)
static void ocfs2_downconvert_on_unlock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres)
#define OCFS2_SEC_BITS   34
#define OCFS2_SEC_SHIFT  (64 - 34)
#define OCFS2_NSEC_MASK  ((1ULL << OCFS2_SEC_SHIFT) - 1)
static u64 ocfs2_pack_timespec(struct timespec *spec)
static void __ocfs2_stuff_meta_lvb(struct inode *inode)
static void ocfs2_unpack_timespec(struct timespec *spec,
u64 packed_time)
static void ocfs2_refresh_inode_from_lvb(struct inode *inode)
static inline int ocfs2_meta_lvb_is_trustable(struct inode *inode,
struct ocfs2_lock_res *lockres)
static int ocfs2_should_refresh_lock_res(struct ocfs2_lock_res *lockres)
static inline void ocfs2_complete_lock_res_refresh(struct ocfs2_lock_res *lockres,
int status)
static int ocfs2_inode_lock_update(struct inode *inode,
struct buffer_head **bh)
static int ocfs2_assign_bh(struct inode *inode,
struct buffer_head **ret_bh,
struct buffer_head *passed_bh)
int ocfs2_inode_lock_full_nested(struct inode *inode,
struct buffer_head **ret_bh,
int ex,
int arg_flags,
int subclass)
int ocfs2_inode_lock_with_page(struct inode *inode,
struct buffer_head **ret_bh,
int ex,
struct page *page)
int ocfs2_inode_lock_atime(struct inode *inode,
struct vfsmount *vfsmnt,
int *level)
void ocfs2_inode_unlock(struct inode *inode,
int ex)
int ocfs2_orphan_scan_lock(struct ocfs2_super *osb, u32 *seqno)
void ocfs2_orphan_scan_unlock(struct ocfs2_super *osb, u32 seqno)
int ocfs2_super_lock(struct ocfs2_super *osb,
int ex)
void ocfs2_super_unlock(struct ocfs2_super *osb,
int ex)
int ocfs2_rename_lock(struct ocfs2_super *osb)
void ocfs2_rename_unlock(struct ocfs2_super *osb)
int ocfs2_nfs_sync_lock(struct ocfs2_super *osb, int ex)
void ocfs2_nfs_sync_unlock(struct ocfs2_super *osb, int ex)
int ocfs2_dentry_lock(struct dentry *dentry, int ex)
void ocfs2_dentry_unlock(struct dentry *dentry, int ex)
static void ocfs2_dlm_debug_free(struct kref *kref)
void ocfs2_put_dlm_debug(struct ocfs2_dlm_debug *dlm_debug)
static void ocfs2_get_dlm_debug(struct ocfs2_dlm_debug *debug)
struct ocfs2_dlm_debug *ocfs2_new_dlm_debug(void)
struct ocfs2_dlm_seq_priv ;
static struct ocfs2_lock_res *ocfs2_dlm_next_res(struct ocfs2_lock_res *start,
struct ocfs2_dlm_seq_priv *priv)
static void *ocfs2_dlm_seq_start(struct seq_file *m, loff_t *pos)
static void ocfs2_dlm_seq_stop(struct seq_file *m, void *v)
static void *ocfs2_dlm_seq_next(struct seq_file *m, void *v, loff_t *pos)
#define OCFS2_DLM_DEBUG_STR_VERSION 3
static int ocfs2_dlm_seq_show(struct seq_file *m, void *v)
static const struct seq_operations ocfs2_dlm_seq_ops = ;
static int ocfs2_dlm_debug_release(struct inode *inode, struct file *file)
static int ocfs2_dlm_debug_open(struct inode *inode, struct file *file)
static const struct file_operations ocfs2_dlm_debug_fops = ;
static int ocfs2_dlm_init_debug(struct ocfs2_super *osb)
static void ocfs2_dlm_shutdown_debug(struct ocfs2_super *osb)
int ocfs2_dlm_init(struct ocfs2_super *osb)
void ocfs2_dlm_shutdown(struct ocfs2_super *osb,
int hangup_pending)
static int ocfs2_drop_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres)
void ocfs2_mark_lockres_freeing(struct ocfs2_lock_res *lockres)
void ocfs2_simple_drop_lockres(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres)
static void ocfs2_drop_osb_locks(struct ocfs2_super *osb)
int ocfs2_drop_inode_locks(struct inode *inode)
static unsigned int ocfs2_prepare_downconvert(struct ocfs2_lock_res *lockres,
int new_level)
static int ocfs2_downconvert_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
int new_level,
int lvb,
unsigned int generation)
static int ocfs2_prepare_cancel_convert(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres)
static int ocfs2_cancel_convert(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres)
static int ocfs2_unblock_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres,
struct ocfs2_unblock_ctl *ctl)
static int ocfs2_data_convert_worker(struct ocfs2_lock_res *lockres,
int blocking)
static int ocfs2_ci_checkpointed(struct ocfs2_caching_info *ci,
struct ocfs2_lock_res *lockres,
int new_level)
static int ocfs2_check_meta_downconvert(struct ocfs2_lock_res *lockres,
int new_level)
static void ocfs2_set_meta_lvb(struct ocfs2_lock_res *lockres)
static void ocfs2_dentry_post_unlock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres)
static int ocfs2_dentry_convert_worker(struct ocfs2_lock_res *lockres,
int blocking)
static int ocfs2_check_refcount_downconvert(struct ocfs2_lock_res *lockres,
int new_level)
static int ocfs2_refcount_convert_worker(struct ocfs2_lock_res *lockres,
int blocking)
static void ocfs2_set_qinfo_lvb(struct ocfs2_lock_res *lockres)
void ocfs2_qinfo_unlock(struct ocfs2_mem_dqinfo *oinfo, int ex)
static int ocfs2_refresh_qinfo(struct ocfs2_mem_dqinfo *oinfo)
int ocfs2_qinfo_lock(struct ocfs2_mem_dqinfo *oinfo, int ex)
int ocfs2_refcount_lock(struct ocfs2_refcount_tree *ref_tree, int ex)
void ocfs2_refcount_unlock(struct ocfs2_refcount_tree *ref_tree, int ex)
static void ocfs2_process_blocked_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres)
static void ocfs2_schedule_blocked_lock(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres)
static void ocfs2_downconvert_thread_do_work(struct ocfs2_super *osb)
static int ocfs2_downconvert_thread_lists_empty(struct ocfs2_super *osb)
static int ocfs2_downconvert_thread_should_wake(struct ocfs2_super *osb)
static int ocfs2_downconvert_thread(void *arg)
void ocfs2_wake_downconvert_thread(struct ocfs2_super *osb)
