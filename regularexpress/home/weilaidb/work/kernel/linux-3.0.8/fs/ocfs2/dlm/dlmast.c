#define MLOG_MASK_PREFIX ML_DLM
static void dlm_update_lvb(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
struct dlm_lock *lock);
static int dlm_should_cancel_bast(struct dlm_ctxt *dlm, struct dlm_lock *lock);
static int dlm_should_cancel_bast(struct dlm_ctxt *dlm, struct dlm_lock *lock)
void __dlm_queue_ast(struct dlm_ctxt *dlm, struct dlm_lock *lock)
void dlm_queue_ast(struct dlm_ctxt *dlm, struct dlm_lock *lock)
void __dlm_queue_bast(struct dlm_ctxt *dlm, struct dlm_lock *lock)
void dlm_queue_bast(struct dlm_ctxt *dlm, struct dlm_lock *lock)
static void dlm_update_lvb(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
struct dlm_lock *lock)
void dlm_do_local_ast(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
struct dlm_lock *lock)
int dlm_do_remote_ast(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
struct dlm_lock *lock)
void dlm_do_local_bast(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
struct dlm_lock *lock, int blocked_type)
int dlm_proxy_ast_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
int dlm_send_proxy_ast_msg(struct dlm_ctxt *dlm, struct dlm_lock_resource *res,
struct dlm_lock *lock, int msg_type,
int blocked_type, int flags)
