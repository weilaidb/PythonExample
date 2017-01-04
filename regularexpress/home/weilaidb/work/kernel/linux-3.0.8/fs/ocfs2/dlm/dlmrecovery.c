#define MLOG_MASK_PREFIX (ML_DLM|ML_DLM_RECOVERY)
static void dlm_do_local_recovery_cleanup(struct dlm_ctxt *dlm, u8 dead_node);
static int dlm_recovery_thread(void *data);
void dlm_complete_recovery_thread(struct dlm_ctxt *dlm);
int dlm_launch_recovery_thread(struct dlm_ctxt *dlm);
void dlm_kick_recovery_thread(struct dlm_ctxt *dlm);
static int dlm_do_recovery(struct dlm_ctxt *dlm);
static int dlm_pick_recovery_master(struct dlm_ctxt *dlm);
static int dlm_remaster_locks(struct dlm_ctxt *dlm, u8 dead_node);
static int dlm_init_recovery_area(struct dlm_ctxt *dlm, u8 dead_node);
static int dlm_request_all_locks(struct dlm_ctxt *dlm,
u8 request_from, u8 dead_node);
static void dlm_destroy_recovery_area(struct dlm_ctxt *dlm, u8 dead_node);
static inline int dlm_num_locks_in_lockres(struct dlm_lock_resource *res);
static void dlm_init_migratable_lockres(struct dlm_migratable_lockres *mres,
const char *lockname, int namelen,
int total_locks, u64 cookie,
u8 flags, u8 master);
static int dlm_send_mig_lockres_msg(struct dlm_ctxt *dlm,
struct dlm_migratable_lockres *mres,
u8 send_to,
struct dlm_lock_resource *res,
int total_locks);
static int dlm_process_recovery_data(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_migratable_lockres *mres);
static int dlm_send_finalize_reco_message(struct dlm_ctxt *dlm);
static int dlm_send_all_done_msg(struct dlm_ctxt *dlm,
u8 dead_node, u8 send_to);
static int dlm_send_begin_reco_message(struct dlm_ctxt *dlm, u8 dead_node);
static void dlm_move_reco_locks_to_list(struct dlm_ctxt *dlm,
struct list_head *list, u8 dead_node);
static void dlm_finish_local_lockres_recovery(struct dlm_ctxt *dlm,
u8 dead_node, u8 new_master);
static void dlm_reco_ast(void *astdata);
static void dlm_reco_bast(void *astdata, int blocked_type);
static void dlm_reco_unlock_ast(void *astdata, enum dlm_status st);
static void dlm_request_all_locks_worker(struct dlm_work_item *item,
void *data);
static void dlm_mig_lockres_worker(struct dlm_work_item *item, void *data);
static int dlm_lockres_master_requery(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
u8 *real_master);
static u64 dlm_get_next_mig_cookie(void);
static DEFINE_SPINLOCK(dlm_reco_state_lock);
static DEFINE_SPINLOCK(dlm_mig_cookie_lock);
static u64 dlm_mig_cookie = 1;
static u64 dlm_get_next_mig_cookie(void)
static inline void dlm_set_reco_dead_node(struct dlm_ctxt *dlm,
u8 dead_node)
static inline void dlm_set_reco_master(struct dlm_ctxt *dlm,
u8 master)
static inline void __dlm_reset_recovery(struct dlm_ctxt *dlm)
static inline void dlm_reset_recovery(struct dlm_ctxt *dlm)
void dlm_dispatch_work(struct work_struct *work)
void dlm_kick_recovery_thread(struct dlm_ctxt *dlm)
int dlm_launch_recovery_thread(struct dlm_ctxt *dlm)
void dlm_complete_recovery_thread(struct dlm_ctxt *dlm)
static void dlm_print_reco_node_status(struct dlm_ctxt *dlm)
#define DLM_RECO_THREAD_TIMEOUT_MS (5 * 1000)
static int dlm_recovery_thread(void *data)
static int dlm_reco_master_ready(struct dlm_ctxt *dlm)
int dlm_is_node_dead(struct dlm_ctxt *dlm, u8 node)
static int dlm_is_node_recovered(struct dlm_ctxt *dlm, u8 node)
int dlm_wait_for_node_death(struct dlm_ctxt *dlm, u8 node, int timeout)
int dlm_wait_for_node_recovery(struct dlm_ctxt *dlm, u8 node, int timeout)
static int dlm_in_recovery(struct dlm_ctxt *dlm)
void dlm_wait_for_recovery(struct dlm_ctxt *dlm)
static void dlm_begin_recovery(struct dlm_ctxt *dlm)
static void dlm_end_recovery(struct dlm_ctxt *dlm)
static int dlm_do_recovery(struct dlm_ctxt *dlm)
static int dlm_remaster_locks(struct dlm_ctxt *dlm, u8 dead_node)
static int dlm_init_recovery_area(struct dlm_ctxt *dlm, u8 dead_node)
static void dlm_destroy_recovery_area(struct dlm_ctxt *dlm, u8 dead_node)
static int dlm_request_all_locks(struct dlm_ctxt *dlm, u8 request_from,
u8 dead_node)
int dlm_request_all_locks_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static void dlm_request_all_locks_worker(struct dlm_work_item *item, void *data)
static int dlm_send_all_done_msg(struct dlm_ctxt *dlm, u8 dead_node, u8 send_to)
int dlm_reco_data_done_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static void dlm_move_reco_locks_to_list(struct dlm_ctxt *dlm,
struct list_head *list,
u8 dead_node)
static inline int dlm_num_locks_in_lockres(struct dlm_lock_resource *res)
static int dlm_send_mig_lockres_msg(struct dlm_ctxt *dlm,
struct dlm_migratable_lockres *mres,
u8 send_to,
struct dlm_lock_resource *res,
int total_locks)
static void dlm_init_migratable_lockres(struct dlm_migratable_lockres *mres,
const char *lockname, int namelen,
int total_locks, u64 cookie,
u8 flags, u8 master)
static void dlm_prepare_lvb_for_migration(struct dlm_lock *lock,
struct dlm_migratable_lockres *mres,
int queue)
static int dlm_add_lock_to_array(struct dlm_lock *lock,
struct dlm_migratable_lockres *mres, int queue)
static void dlm_add_dummy_lock(struct dlm_ctxt *dlm,
struct dlm_migratable_lockres *mres)
static inline int dlm_is_dummy_lock(struct dlm_ctxt *dlm,
struct dlm_migratable_lock *ml,
u8 *nodenum)
int dlm_send_one_lockres(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
struct dlm_migratable_lockres *mres,
u8 send_to, u8 flags)
int dlm_mig_lockres_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static void dlm_mig_lockres_worker(struct dlm_work_item *item, void *data)
static int dlm_lockres_master_requery(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
u8 *real_master)
int dlm_do_master_requery(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
u8 nodenum, u8 *real_master)
int dlm_master_requery_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static inline struct list_head *
dlm_list_num_to_pointer(struct dlm_lock_resource *res, int list_num)
static int dlm_process_recovery_data(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_migratable_lockres *mres)
void dlm_move_lockres_to_recovery_list(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
static void dlm_finish_local_lockres_recovery(struct dlm_ctxt *dlm,
u8 dead_node, u8 new_master)
static inline int dlm_lvb_needs_invalidation(struct dlm_lock *lock, int local)
static void dlm_revalidate_lvb(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res, u8 dead_node)
static void dlm_free_dead_locks(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res, u8 dead_node)
static void dlm_do_local_recovery_cleanup(struct dlm_ctxt *dlm, u8 dead_node)
static void __dlm_hb_node_down(struct dlm_ctxt *dlm, int idx)
void dlm_hb_node_down_cb(struct o2nm_node *node, int idx, void *data)
void dlm_hb_node_up_cb(struct o2nm_node *node, int idx, void *data)
static void dlm_reco_ast(void *astdata)
static void dlm_reco_bast(void *astdata, int blocked_type)
static void dlm_reco_unlock_ast(void *astdata, enum dlm_status st)
static int dlm_pick_recovery_master(struct dlm_ctxt *dlm)
static int dlm_send_begin_reco_message(struct dlm_ctxt *dlm, u8 dead_node)
int dlm_begin_reco_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
#define DLM_FINALIZE_STAGE2  0x01
static int dlm_send_finalize_reco_message(struct dlm_ctxt *dlm)
int dlm_finalize_reco_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
