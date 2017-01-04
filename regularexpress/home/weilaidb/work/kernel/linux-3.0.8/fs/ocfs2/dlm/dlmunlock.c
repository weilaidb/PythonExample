#define MLOG_MASK_PREFIX ML_DLM
#define DLM_UNLOCK_FREE_LOCK           0x00000001
#define DLM_UNLOCK_CALL_AST            0x00000002
#define DLM_UNLOCK_REMOVE_LOCK         0x00000004
#define DLM_UNLOCK_REGRANT_LOCK        0x00000008
#define DLM_UNLOCK_CLEAR_CONVERT_TYPE  0x00000010
static enum dlm_status dlm_get_cancel_actions(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
struct dlm_lockstatus *lksb,
int *actions);
static enum dlm_status dlm_get_unlock_actions(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
struct dlm_lockstatus *lksb,
int *actions);
static enum dlm_status dlm_send_remote_unlock_request(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
struct dlm_lockstatus *lksb,
int flags,
u8 owner);
static enum dlm_status dlmunlock_common(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
struct dlm_lockstatus *lksb,
int flags, int *call_ast,
int master_node)
void dlm_commit_pending_unlock(struct dlm_lock_resource *res,
struct dlm_lock *lock)
void dlm_commit_pending_cancel(struct dlm_lock_resource *res,
struct dlm_lock *lock)
static inline enum dlm_status dlmunlock_master(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
struct dlm_lockstatus *lksb,
int flags,
int *call_ast)
static inline enum dlm_status dlmunlock_remote(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
struct dlm_lockstatus *lksb,
int flags, int *call_ast)
static enum dlm_status dlm_send_remote_unlock_request(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
struct dlm_lockstatus *lksb,
int flags,
u8 owner)
int dlm_unlock_lock_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static enum dlm_status dlm_get_cancel_actions(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
struct dlm_lockstatus *lksb,
int *actions)
static enum dlm_status dlm_get_unlock_actions(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock,
struct dlm_lockstatus *lksb,
int *actions)
enum dlm_status dlmunlock(struct dlm_ctxt *dlm, struct dlm_lockstatus *lksb,
int flags, dlm_astunlockfunc_t *unlockast, void *data)
EXPORT_SYMBOL_GPL(dlmunlock);
