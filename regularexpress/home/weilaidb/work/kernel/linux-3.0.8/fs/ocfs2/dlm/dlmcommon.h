#define DLMCOMMON_H
#define DLM_HB_NODE_DOWN_PRI     (0xf000000)
#define DLM_HB_NODE_UP_PRI       (0x8000000)
#define DLM_LOCKID_NAME_MAX    32
#define DLM_DOMAIN_NAME_MAX_LEN    255
#define DLM_LOCK_RES_OWNER_UNKNOWN     O2NM_MAX_NODES
#define DLM_THREAD_SHUFFLE_INTERVAL    5
#define DLM_THREAD_MS                  200
#define DLM_HASH_SIZE_DEFAULT	(1 << 17)
#if DLM_HASH_SIZE_DEFAULT < PAGE_SIZE
# define DLM_HASH_PAGES		1
# define DLM_HASH_PAGES		(DLM_HASH_SIZE_DEFAULT / PAGE_SIZE)
#define DLM_BUCKETS_PER_PAGE	(PAGE_SIZE / sizeof(struct hlist_head))
#define DLM_HASH_BUCKETS	(DLM_HASH_PAGES * DLM_BUCKETS_PER_PAGE)
#define dlm_lockid_hash(_n, _l) full_name_hash(_n, _l)
enum dlm_mle_type ;
struct dlm_master_list_entry ;
enum dlm_ast_type ;
#define LKM_VALID_FLAGS (LKM_VALBLK | LKM_CONVERT | LKM_UNLOCK | \
LKM_CANCEL | LKM_INVVALBLK | LKM_FORCE | \
LKM_RECOVERY | LKM_LOCAL | LKM_NOQUEUE)
#define DLM_RECOVERY_LOCK_NAME       "$RECOVERY"
#define DLM_RECOVERY_LOCK_NAME_LEN   9
static inline int dlm_is_recovery_lock(const char *lock_name, int name_len)
#define DLM_RECO_STATE_ACTIVE    0x0001
#define DLM_RECO_STATE_FINALIZE  0x0002
struct dlm_recovery_ctxt
;
enum dlm_ctxt_state ;
struct dlm_ctxt
;
static inline struct hlist_head *dlm_lockres_hash(struct dlm_ctxt *dlm, unsigned i)
static inline struct hlist_head *dlm_master_hash(struct dlm_ctxt *dlm,
unsigned i)
void dlm_dispatch_work(struct work_struct *work);
struct dlm_lock_resource;
struct dlm_work_item;
typedef void (dlm_workfunc_t)(struct dlm_work_item *, void *);
struct dlm_request_all_locks_priv
;
struct dlm_mig_lockres_priv
;
struct dlm_assert_master_priv
;
struct dlm_deref_lockres_priv
;
struct dlm_work_item
;
static inline void dlm_init_work_item(struct dlm_ctxt *dlm,
struct dlm_work_item *i,
dlm_workfunc_t *f, void *data)
static inline void __dlm_set_joining_node(struct dlm_ctxt *dlm,
u8 node)
#define DLM_LOCK_RES_UNINITED             0x00000001
#define DLM_LOCK_RES_RECOVERING           0x00000002
#define DLM_LOCK_RES_READY                0x00000004
#define DLM_LOCK_RES_DIRTY                0x00000008
#define DLM_LOCK_RES_IN_PROGRESS          0x00000010
#define DLM_LOCK_RES_MIGRATING            0x00000020
#define DLM_LOCK_RES_DROPPING_REF         0x00000040
#define DLM_LOCK_RES_BLOCK_DIRTY          0x00001000
#define DLM_LOCK_RES_SETREF_INPROG        0x00002000
#define DLM_NODE_DEATH_WAIT_MAX (5 * 1000)
#define DLM_PURGE_INTERVAL_MS   (8 * 1000)
struct dlm_lock_resource
;
struct dlm_migratable_lock
;
struct dlm_lock
;
#define DLM_LKSB_UNUSED1           0x01
#define DLM_LKSB_PUT_LVB           0x02
#define DLM_LKSB_GET_LVB           0x04
#define DLM_LKSB_UNUSED2           0x08
#define DLM_LKSB_UNUSED3           0x10
#define DLM_LKSB_UNUSED4           0x20
#define DLM_LKSB_UNUSED5           0x40
#define DLM_LKSB_UNUSED6           0x80
enum dlm_lockres_list ;
static inline int dlm_lvb_is_empty(char *lvb)
static inline char *dlm_list_in_text(enum dlm_lockres_list idx)
static inline struct list_head *
dlm_list_idx_to_ptr(struct dlm_lock_resource *res, enum dlm_lockres_list idx)
struct dlm_node_iter
;
enum ;
struct dlm_reco_node_data
;
enum ;
enum ;
struct dlm_master_request
;
#define DLM_ASSERT_RESPONSE_REASSERT       0x00000001
#define DLM_ASSERT_RESPONSE_MASTERY_REF    0x00000002
#define DLM_ASSERT_MASTER_MLE_CLEANUP      0x00000001
#define DLM_ASSERT_MASTER_REQUERY          0x00000002
#define DLM_ASSERT_MASTER_FINISH_MIGRATION 0x00000004
struct dlm_assert_master
;
#define DLM_MIGRATE_RESPONSE_MASTERY_REF   0x00000001
struct dlm_migrate_request
;
struct dlm_master_requery
;
#define DLM_MRES_RECOVERY   0x01
#define DLM_MRES_MIGRATION  0x02
#define DLM_MRES_ALL_DONE   0x04
#define DLM_MAX_MIGRATABLE_LOCKS   240
struct dlm_migratable_lockres
;
#define DLM_MIG_LOCKRES_MAX_LEN  \
(sizeof(struct dlm_migratable_lockres) + \
(sizeof(struct dlm_migratable_lock) * \
DLM_MAX_MIGRATABLE_LOCKS) )
#define DLM_MIG_LOCKRES_RESERVED   (NET_MAX_PAYLOAD_BYTES - \
DLM_MIG_LOCKRES_MAX_LEN)
struct dlm_create_lock
;
struct dlm_convert_lock
;
#define DLM_CONVERT_LOCK_MAX_LEN  (sizeof(struct dlm_convert_lock)+DLM_LVB_LEN)
struct dlm_unlock_lock
;
#define DLM_UNLOCK_LOCK_MAX_LEN  (sizeof(struct dlm_unlock_lock)+DLM_LVB_LEN)
struct dlm_proxy_ast
;
#define DLM_PROXY_AST_MAX_LEN  (sizeof(struct dlm_proxy_ast)+DLM_LVB_LEN)
#define DLM_MOD_KEY (0x666c6172)
enum dlm_query_join_response_code ;
struct dlm_query_join_packet ;
union dlm_query_join_response ;
struct dlm_lock_request
;
struct dlm_reco_data_done
;
struct dlm_begin_reco
;
#define BITS_PER_BYTE 8
#define BITS_TO_BYTES(bits) (((bits)+BITS_PER_BYTE-1)/BITS_PER_BYTE)
struct dlm_query_join_request
;
struct dlm_assert_joined
;
struct dlm_cancel_join
;
struct dlm_query_region ;
struct dlm_node_info ;
struct dlm_query_nodeinfo ;
struct dlm_exit_domain
;
struct dlm_finalize_reco
;
struct dlm_deref_lockres
;
static inline enum dlm_status
__dlm_lockres_state_to_status(struct dlm_lock_resource *res)
static inline u8 dlm_get_lock_cookie_node(u64 cookie)
static inline unsigned long long dlm_get_lock_cookie_seq(u64 cookie)
struct dlm_lock * dlm_new_lock(int type, u8 node, u64 cookie,
struct dlm_lockstatus *lksb);
void dlm_lock_get(struct dlm_lock *lock);
void dlm_lock_put(struct dlm_lock *lock);
void dlm_lock_attach_lockres(struct dlm_lock *lock,
struct dlm_lock_resource *res);
int dlm_create_lock_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_convert_lock_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_proxy_ast_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
void dlm_revert_pending_convert(struct dlm_lock_resource *res,
struct dlm_lock *lock);
void dlm_revert_pending_lock(struct dlm_lock_resource *res,
struct dlm_lock *lock);
int dlm_unlock_lock_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
void dlm_commit_pending_cancel(struct dlm_lock_resource *res,
struct dlm_lock *lock);
void dlm_commit_pending_unlock(struct dlm_lock_resource *res,
struct dlm_lock *lock);
int dlm_launch_thread(struct dlm_ctxt *dlm);
void dlm_complete_thread(struct dlm_ctxt *dlm);
int dlm_launch_recovery_thread(struct dlm_ctxt *dlm);
void dlm_complete_recovery_thread(struct dlm_ctxt *dlm);
void dlm_wait_for_recovery(struct dlm_ctxt *dlm);
void dlm_kick_recovery_thread(struct dlm_ctxt *dlm);
int dlm_is_node_dead(struct dlm_ctxt *dlm, u8 node);
int dlm_wait_for_node_death(struct dlm_ctxt *dlm, u8 node, int timeout);
int dlm_wait_for_node_recovery(struct dlm_ctxt *dlm, u8 node, int timeout);
void dlm_put(struct dlm_ctxt *dlm);
struct dlm_ctxt *dlm_grab(struct dlm_ctxt *dlm);
int dlm_domain_fully_joined(struct dlm_ctxt *dlm);
void __dlm_lockres_calc_usage(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res);
void dlm_lockres_calc_usage(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res);
static inline void dlm_lockres_get(struct dlm_lock_resource *res)
void dlm_lockres_put(struct dlm_lock_resource *res);
void __dlm_unhash_lockres(struct dlm_lock_resource *res);
void __dlm_insert_lockres(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res);
struct dlm_lock_resource * __dlm_lookup_lockres_full(struct dlm_ctxt *dlm,
const char *name,
unsigned int len,
unsigned int hash);
struct dlm_lock_resource * __dlm_lookup_lockres(struct dlm_ctxt *dlm,
const char *name,
unsigned int len,
unsigned int hash);
struct dlm_lock_resource * dlm_lookup_lockres(struct dlm_ctxt *dlm,
const char *name,
unsigned int len);
int dlm_is_host_down(int errno);
struct dlm_lock_resource * dlm_get_lock_resource(struct dlm_ctxt *dlm,
const char *lockid,
int namelen,
int flags);
struct dlm_lock_resource *dlm_new_lockres(struct dlm_ctxt *dlm,
const char *name,
unsigned int namelen);
#define dlm_lockres_set_refmap_bit(bit,res)  \
__dlm_lockres_set_refmap_bit(bit,res,__FILE__,__LINE__)
#define dlm_lockres_clear_refmap_bit(bit,res)  \
__dlm_lockres_clear_refmap_bit(bit,res,__FILE__,__LINE__)
static inline void __dlm_lockres_set_refmap_bit(int bit,
struct dlm_lock_resource *res,
const char *file,
int line)
static inline void __dlm_lockres_clear_refmap_bit(int bit,
struct dlm_lock_resource *res,
const char *file,
int line)
void __dlm_lockres_drop_inflight_ref(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
const char *file,
int line);
void __dlm_lockres_grab_inflight_ref(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
int new_lockres,
const char *file,
int line);
#define dlm_lockres_drop_inflight_ref(d,r)  \
__dlm_lockres_drop_inflight_ref(d,r,__FILE__,__LINE__)
#define dlm_lockres_grab_inflight_ref(d,r)  \
__dlm_lockres_grab_inflight_ref(d,r,0,__FILE__,__LINE__)
#define dlm_lockres_grab_inflight_ref_new(d,r)  \
__dlm_lockres_grab_inflight_ref(d,r,1,__FILE__,__LINE__)
void dlm_queue_ast(struct dlm_ctxt *dlm, struct dlm_lock *lock);
void dlm_queue_bast(struct dlm_ctxt *dlm, struct dlm_lock *lock);
void __dlm_queue_ast(struct dlm_ctxt *dlm, struct dlm_lock *lock);
void __dlm_queue_bast(struct dlm_ctxt *dlm, struct dlm_lock *lock);
void dlm_do_local_ast(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock);
int dlm_do_remote_ast(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock);
void dlm_do_local_bast(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
int blocked_type);
int dlm_send_proxy_ast_msg(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
int msg_type,
int blocked_type, int flags);
static inline int dlm_send_proxy_bast(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
int blocked_type)
static inline int dlm_send_proxy_ast(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
int flags)
void dlm_print_one_lock_resource(struct dlm_lock_resource *res);
void __dlm_print_one_lock_resource(struct dlm_lock_resource *res);
u8 dlm_nm_this_node(struct dlm_ctxt *dlm);
void dlm_kick_thread(struct dlm_ctxt *dlm, struct dlm_lock_resource *res);
void __dlm_dirty_lockres(struct dlm_ctxt *dlm, struct dlm_lock_resource *res);
int dlm_nm_init(struct dlm_ctxt *dlm);
int dlm_heartbeat_init(struct dlm_ctxt *dlm);
void dlm_hb_node_down_cb(struct o2nm_node *node, int idx, void *data);
void dlm_hb_node_up_cb(struct o2nm_node *node, int idx, void *data);
int dlm_empty_lockres(struct dlm_ctxt *dlm, struct dlm_lock_resource *res);
int dlm_finish_migration(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
u8 old_master);
void dlm_lockres_release_ast(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res);
void __dlm_lockres_reserve_ast(struct dlm_lock_resource *res);
int dlm_master_request_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_assert_master_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
void dlm_assert_master_post_handler(int status, void *data, void *ret_data);
int dlm_deref_lockres_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_migrate_request_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_mig_lockres_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_master_requery_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_request_all_locks_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_reco_data_done_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_begin_reco_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_finalize_reco_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
int dlm_do_master_requery(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
u8 nodenum, u8 *real_master);
int dlm_dispatch_assert_master(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
int ignore_higher,
u8 request_from,
u32 flags);
int dlm_send_one_lockres(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_migratable_lockres *mres,
u8 send_to,
u8 flags);
void dlm_move_lockres_to_recovery_list(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res);
void __dlm_wait_on_lockres_flags(struct dlm_lock_resource *res, int flags);
void __dlm_wait_on_lockres_flags_set(struct dlm_lock_resource *res, int flags);
static inline void __dlm_wait_on_lockres(struct dlm_lock_resource *res)
void __dlm_unlink_mle(struct dlm_ctxt *dlm, struct dlm_master_list_entry *mle);
void __dlm_insert_mle(struct dlm_ctxt *dlm, struct dlm_master_list_entry *mle);
int dlm_init_master_caches(void);
void dlm_destroy_master_caches(void);
int dlm_init_lock_cache(void);
void dlm_destroy_lock_cache(void);
int dlm_init_mle_cache(void);
void dlm_destroy_mle_cache(void);
void dlm_hb_event_notify_attached(struct dlm_ctxt *dlm, int idx, int node_up);
int dlm_drop_lockres_ref(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res);
void dlm_clean_master_list(struct dlm_ctxt *dlm,
u8 dead_node);
void dlm_force_free_mles(struct dlm_ctxt *dlm);
int dlm_lock_basts_flushed(struct dlm_ctxt *dlm, struct dlm_lock *lock);
int __dlm_lockres_has_locks(struct dlm_lock_resource *res);
int __dlm_lockres_unused(struct dlm_lock_resource *res);
static inline const char * dlm_lock_mode_name(int mode)
static inline int dlm_lock_compatible(int existing, int request)
static inline int dlm_lock_on_list(struct list_head *head,
struct dlm_lock *lock)
static inline enum dlm_status dlm_err_to_dlm_status(int err)
static inline void dlm_node_iter_init(unsigned long *map,
struct dlm_node_iter *iter)
static inline int dlm_node_iter_next(struct dlm_node_iter *iter)
static inline void dlm_set_lockres_owner(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
u8 owner)
static inline void dlm_change_lockres_owner(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
u8 owner)
