#define __SND_SEQ_LOCK_H
#if defined(CONFIG_SMP) || defined(CONFIG_SND_DEBUG)
typedef atomic_t snd_use_lock_t;
#define snd_use_lock_init(lockp) atomic_set(lockp, 0)
#define snd_use_lock_use(lockp) atomic_inc(lockp)
#define snd_use_lock_free(lockp) atomic_dec(lockp)
void snd_use_lock_sync_helper(snd_use_lock_t *lock, const char *file, int line);
#define snd_use_lock_sync(lockp) snd_use_lock_sync_helper(lockp, __BASE_FILE__, __LINE__)
typedef spinlock_t snd_use_lock_t;
#define snd_use_lock_init(lockp)
#define snd_use_lock_use(lockp)
#define snd_use_lock_free(lockp)
#define snd_use_lock_sync(lockp)
