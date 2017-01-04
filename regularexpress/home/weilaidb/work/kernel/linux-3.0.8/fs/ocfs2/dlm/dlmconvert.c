#define MLOG_MASK_PREFIX ML_DLM
static enum dlm_status __dlmconvert_master(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags,
int type, int *call_ast,
int *kick_thread);
static enum dlm_status dlm_send_remote_convert_request(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags, int type);
enum dlm_status dlmconvert_master(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags, int type)
static enum dlm_status __dlmconvert_master(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags,
int type, int *call_ast,
int *kick_thread)
void dlm_revert_pending_convert(struct dlm_lock_resource *res,
struct dlm_lock *lock)
enum dlm_status dlmconvert_remote(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags, int type)
static enum dlm_status dlm_send_remote_convert_request(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags, int type)
int dlm_convert_lock_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
