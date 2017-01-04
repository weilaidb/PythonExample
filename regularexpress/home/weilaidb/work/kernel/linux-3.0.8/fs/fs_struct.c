static inline void path_get_longterm(struct path *path)
static inline void path_put_longterm(struct path *path)
void set_fs_root(struct fs_struct *fs, struct path *path)
void set_fs_pwd(struct fs_struct *fs, struct path *path)
void chroot_fs_refs(struct path *old_root, struct path *new_root)
void free_fs_struct(struct fs_struct *fs)
void exit_fs(struct task_struct *tsk)
struct fs_struct *copy_fs_struct(struct fs_struct *old)
int unshare_fs_struct(void)
EXPORT_SYMBOL_GPL(unshare_fs_struct);
int current_umask(void)
EXPORT_SYMBOL(current_umask);
struct fs_struct init_fs = ;
void daemonize_fs_struct(void)
