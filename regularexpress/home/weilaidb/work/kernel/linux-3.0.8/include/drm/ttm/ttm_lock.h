#define _TTM_LOCK_H_
struct ttm_lock ;
extern void ttm_lock_init(struct ttm_lock *lock);
extern void ttm_read_unlock(struct ttm_lock *lock);
extern int ttm_read_lock(struct ttm_lock *lock, bool interruptible);
extern int ttm_read_trylock(struct ttm_lock *lock, bool interruptible);
extern void ttm_write_unlock(struct ttm_lock *lock);
extern int ttm_write_lock(struct ttm_lock *lock, bool interruptible);
extern void ttm_lock_downgrade(struct ttm_lock *lock);
extern void ttm_suspend_lock(struct ttm_lock *lock);
extern void ttm_suspend_unlock(struct ttm_lock *lock);
extern int ttm_vt_lock(struct ttm_lock *lock, bool interruptible,
struct ttm_object_file *tfile);
extern int ttm_vt_unlock(struct ttm_lock *lock);
extern void ttm_write_unlock(struct ttm_lock *lock);
extern int ttm_write_lock(struct ttm_lock *lock, bool interruptible);
static inline void ttm_lock_set_kill(struct ttm_lock *lock, bool val,
int signal)
