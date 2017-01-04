#define MLOG_MASK_PREFIX (ML_DLM|ML_DLM_MASTER)
static void dlm_mle_node_down(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle,
struct o2nm_node *node,
int idx);
static void dlm_mle_node_up(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle,
struct o2nm_node *node,
int idx);
static void dlm_assert_master_worker(struct dlm_work_item *item, void *data);
static int dlm_do_assert_master(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
void *nodemap, u32 flags);
static void dlm_deref_lockres_worker(struct dlm_work_item *item, void *data);
static inline int dlm_mle_equal(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle,
const char *name,
unsigned int namelen)
static struct kmem_cache *dlm_lockres_cache = NULL;
static struct kmem_cache *dlm_lockname_cache = NULL;
static struct kmem_cache *dlm_mle_cache = NULL;
static void dlm_mle_release(struct kref *kref);
static void dlm_init_mle(struct dlm_master_list_entry *mle,
enum dlm_mle_type type,
struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
const char *name,
unsigned int namelen);
static void dlm_put_mle(struct dlm_master_list_entry *mle);
static void __dlm_put_mle(struct dlm_master_list_entry *mle);
static int dlm_find_mle(struct dlm_ctxt *dlm,
struct dlm_master_list_entry **mle,
char *name, unsigned int namelen);
static int dlm_do_master_request(struct dlm_lock_resource *res,
struct dlm_master_list_entry *mle, int to);
static int dlm_wait_for_lock_mastery(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_master_list_entry *mle,
int *blocked);
static int dlm_restart_lock_mastery(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_master_list_entry *mle,
int blocked);
static int dlm_add_migration_mle(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_master_list_entry *mle,
struct dlm_master_list_entry **oldmle,
const char *name, unsigned int namelen,
u8 new_master, u8 master);
static u8 dlm_pick_migration_target(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res);
static void dlm_remove_nonlocal_locks(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res);
static int dlm_mark_lockres_migrating(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
u8 target);
static int dlm_pre_master_reco_lockres(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res);
int dlm_is_host_down(int errno)
static inline void __dlm_mle_attach_hb_events(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle)
static inline void __dlm_mle_detach_hb_events(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle)
static inline void dlm_mle_detach_hb_events(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle)
static void dlm_get_mle_inuse(struct dlm_master_list_entry *mle)
static void dlm_put_mle_inuse(struct dlm_master_list_entry *mle)
static void __dlm_put_mle(struct dlm_master_list_entry *mle)
static void dlm_put_mle(struct dlm_master_list_entry *mle)
static inline void dlm_get_mle(struct dlm_master_list_entry *mle)
static void dlm_init_mle(struct dlm_master_list_entry *mle,
enum dlm_mle_type type,
struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
const char *name,
unsigned int namelen)
void __dlm_unlink_mle(struct dlm_ctxt *dlm, struct dlm_master_list_entry *mle)
void __dlm_insert_mle(struct dlm_ctxt *dlm, struct dlm_master_list_entry *mle)
static int dlm_find_mle(struct dlm_ctxt *dlm,
struct dlm_master_list_entry **mle,
char *name, unsigned int namelen)
void dlm_hb_event_notify_attached(struct dlm_ctxt *dlm, int idx, int node_up)
static void dlm_mle_node_down(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle,
struct o2nm_node *node, int idx)
static void dlm_mle_node_up(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle,
struct o2nm_node *node, int idx)
int dlm_init_mle_cache(void)
void dlm_destroy_mle_cache(void)
static void dlm_mle_release(struct kref *kref)
int dlm_init_master_caches(void)
void dlm_destroy_master_caches(void)
static void dlm_lockres_release(struct kref *kref)
void dlm_lockres_put(struct dlm_lock_resource *res)
static void dlm_init_lockres(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
const char *name, unsigned int namelen)
struct dlm_lock_resource *dlm_new_lockres(struct dlm_ctxt *dlm,
const char *name,
unsigned int namelen)
void __dlm_lockres_grab_inflight_ref(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
int new_lockres,
const char *file,
int line)
void __dlm_lockres_drop_inflight_ref(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
const char *file,
int line)
struct dlm_lock_resource * dlm_get_lock_resource(struct dlm_ctxt *dlm,
const char *lockid,
int namelen,
int flags)
#define DLM_MASTERY_TIMEOUT_MS   5000
static int dlm_wait_for_lock_mastery(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_master_list_entry *mle,
int *blocked)
struct dlm_bitmap_diff_iter
;
enum dlm_node_state_change
;
static void dlm_bitmap_diff_iter_init(struct dlm_bitmap_diff_iter *iter,
unsigned long *orig_bm,
unsigned long *cur_bm)
static int dlm_bitmap_diff_iter_next(struct dlm_bitmap_diff_iter *iter,
enum dlm_node_state_change *state)
static int dlm_restart_lock_mastery(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_master_list_entry *mle,
int blocked)
static int dlm_do_master_request(struct dlm_lock_resource *res,
struct dlm_master_list_entry *mle, int to)
int dlm_master_request_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static int dlm_do_assert_master(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
void *nodemap, u32 flags)
int dlm_assert_master_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
void dlm_assert_master_post_handler(int status, void *data, void *ret_data)
int dlm_dispatch_assert_master(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
int ignore_higher, u8 request_from, u32 flags)
static void dlm_assert_master_worker(struct dlm_work_item *item, void *data)
static int dlm_pre_master_reco_lockres(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
int dlm_drop_lockres_ref(struct dlm_ctxt *dlm, struct dlm_lock_resource *res)
int dlm_deref_lockres_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static void dlm_deref_lockres_worker(struct dlm_work_item *item, void *data)
static int dlm_is_lockres_migrateable(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
static int dlm_migrate_lockres(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res, u8 target)
#define DLM_MIGRATION_RETRY_MS  100
int dlm_empty_lockres(struct dlm_ctxt *dlm, struct dlm_lock_resource *res)
int dlm_lock_basts_flushed(struct dlm_ctxt *dlm, struct dlm_lock *lock)
static int dlm_migration_can_proceed(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
u8 mig_target)
static int dlm_lockres_is_dirty(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
static int dlm_mark_lockres_migrating(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
u8 target)
static void dlm_remove_nonlocal_locks(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
static u8 dlm_pick_migration_target(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
static int dlm_do_migrate_request(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
u8 master, u8 new_master,
struct dlm_node_iter *iter)
int dlm_migrate_request_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static int dlm_add_migration_mle(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_master_list_entry *mle,
struct dlm_master_list_entry **oldmle,
const char *name, unsigned int namelen,
u8 new_master, u8 master)
static struct dlm_lock_resource *dlm_reset_mleres_owner(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle)
static void dlm_clean_migration_mle(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle)
static void dlm_clean_block_mle(struct dlm_ctxt *dlm,
struct dlm_master_list_entry *mle, u8 dead_node)
void dlm_clean_master_list(struct dlm_ctxt *dlm, u8 dead_node)
int dlm_finish_migration(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
u8 old_master)
void __dlm_lockres_reserve_ast(struct dlm_lock_resource *res)
void dlm_lockres_release_ast(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
void dlm_force_free_mles(struct dlm_ctxt *dlm)
