#define MLOG_MASK_PREFIX (ML_DLM|ML_DLM_THREAD)
static int dlm_thread(void *data);
static void dlm_flush_asts(struct dlm_ctxt *dlm);
#define dlm_lock_is_remote(dlm, lock)     ((lock)->ml.node != (dlm)->node_num)
void __dlm_wait_on_lockres_flags(struct dlm_lock_resource *res, int flags)
int __dlm_lockres_has_locks(struct dlm_lock_resource *res)
int __dlm_lockres_unused(struct dlm_lock_resource *res)
void __dlm_lockres_calc_usage(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
void dlm_lockres_calc_usage(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
static void dlm_purge_lockres(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
static void dlm_run_purge_list(struct dlm_ctxt *dlm,
int purge_now)
static void dlm_shuffle_lists(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
void dlm_kick_thread(struct dlm_ctxt *dlm, struct dlm_lock_resource *res)
void __dlm_dirty_lockres(struct dlm_ctxt *dlm, struct dlm_lock_resource *res)
int dlm_launch_thread(struct dlm_ctxt *dlm)
void dlm_complete_thread(struct dlm_ctxt *dlm)
static int dlm_dirty_list_empty(struct dlm_ctxt *dlm)
static void dlm_flush_asts(struct dlm_ctxt *dlm)
#define DLM_THREAD_TIMEOUT_MS (4 * 1000)
#define DLM_THREAD_MAX_DIRTY  100
#define DLM_THREAD_MAX_ASTS   10
static int dlm_thread(void *data)
