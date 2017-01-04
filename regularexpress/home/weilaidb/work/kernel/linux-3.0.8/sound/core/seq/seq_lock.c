#if defined(CONFIG_SMP) || defined(CONFIG_SND_DEBUG)
void snd_use_lock_sync_helper(snd_use_lock_t *lockp, const char *file, int line)
EXPORT_SYMBOL(snd_use_lock_sync_helper);
