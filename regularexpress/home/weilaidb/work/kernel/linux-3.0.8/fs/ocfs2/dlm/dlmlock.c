#define MLOG_MASK_PREFIX ML_DLM
static struct kmem_cache *dlm_lock_cache = NULL;
static DEFINE_SPINLOCK(dlm_cookie_lock);
static u64 dlm_next_cookie = 1;
static enum dlm_status dlm_send_remote_lock_request(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags);
static void dlm_init_lock(struct dlm_lock *newlock, int type,
u8 node, u64 cookie);
static void dlm_lock_release(struct kref *kref);
static void dlm_lock_detach_lockres(struct dlm_lock *lock);
int dlm_init_lock_cache(void)
void dlm_destroy_lock_cache(void)
static int dlm_can_grant_new_lock(struct dlm_lock_resource *res,
struct dlm_lock *lock)
static enum dlm_status dlmlock_master(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags)
void dlm_revert_pending_lock(struct dlm_lock_resource *res,
struct dlm_lock *lock)
static enum dlm_status dlmlock_remote(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags)
static enum dlm_status dlm_send_remote_lock_request(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res,
struct dlm_lock *lock, int flags)
void dlm_lock_get(struct dlm_lock *lock)
void dlm_lock_put(struct dlm_lock *lock)
static void dlm_lock_release(struct kref *kref)
void dlm_lock_attach_lockres(struct dlm_lock *lock,
struct dlm_lock_resource *res)
static void dlm_lock_detach_lockres(struct dlm_lock *lock)
static void dlm_init_lock(struct dlm_lock *newlock, int type,
u8 node, u64 cookie)
struct dlm_lock * dlm_new_lock(int type, u8 node, u64 cookie,
struct dlm_lockstatus *lksb)
int dlm_create_lock_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static inline void dlm_get_next_cookie(u8 node_num, u64 *cookie)
enum dlm_status dlmlock(struct dlm_ctxt *dlm, int mode,
struct dlm_lockstatus *lksb, int flags,
const char *name, int namelen, dlm_astlockfunc_t *ast,
void *data, dlm_bastlockfunc_t *bast)
EXPORT_SYMBOL_GPL(dlmlock);
