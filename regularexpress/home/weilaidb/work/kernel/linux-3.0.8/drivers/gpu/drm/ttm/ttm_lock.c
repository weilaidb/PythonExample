#define TTM_WRITE_LOCK_PENDING    (1 << 0)
#define TTM_VT_LOCK_PENDING       (1 << 1)
#define TTM_SUSPEND_LOCK_PENDING  (1 << 2)
#define TTM_VT_LOCK               (1 << 3)
#define TTM_SUSPEND_LOCK          (1 << 4)
void ttm_lock_init(struct ttm_lock *lock)
EXPORT_SYMBOL(ttm_lock_init);
void ttm_read_unlock(struct ttm_lock *lock)
EXPORT_SYMBOL(ttm_read_unlock);
static bool __ttm_read_lock(struct ttm_lock *lock)
int ttm_read_lock(struct ttm_lock *lock, bool interruptible)
EXPORT_SYMBOL(ttm_read_lock);
static bool __ttm_read_trylock(struct ttm_lock *lock, bool *locked)
int ttm_read_trylock(struct ttm_lock *lock, bool interruptible)
void ttm_write_unlock(struct ttm_lock *lock)
EXPORT_SYMBOL(ttm_write_unlock);
static bool __ttm_write_lock(struct ttm_lock *lock)
int ttm_write_lock(struct ttm_lock *lock, bool interruptible)
EXPORT_SYMBOL(ttm_write_lock);
void ttm_write_lock_downgrade(struct ttm_lock *lock)
static int __ttm_vt_unlock(struct ttm_lock *lock)
static void ttm_vt_lock_remove(struct ttm_base_object **p_base)
static bool __ttm_vt_lock(struct ttm_lock *lock)
int ttm_vt_lock(struct ttm_lock *lock,
bool interruptible,
struct ttm_object_file *tfile)
EXPORT_SYMBOL(ttm_vt_lock);
int ttm_vt_unlock(struct ttm_lock *lock)
EXPORT_SYMBOL(ttm_vt_unlock);
void ttm_suspend_unlock(struct ttm_lock *lock)
EXPORT_SYMBOL(ttm_suspend_unlock);
static bool __ttm_suspend_lock(struct ttm_lock *lock)
void ttm_suspend_lock(struct ttm_lock *lock)
EXPORT_SYMBOL(ttm_suspend_lock);
