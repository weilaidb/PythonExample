static struct spufs_calls *spufs_calls;
static inline struct spufs_calls *spufs_calls_get(void)
static inline void spufs_calls_put(struct spufs_calls *calls)
static inline struct spufs_calls *spufs_calls_get(void)
static inline void spufs_calls_put(struct spufs_calls *calls)
asmlinkage long sys_spu_create(const char __user *name,
unsigned int flags, mode_t mode, int neighbor_fd)
asmlinkage long sys_spu_run(int fd, __u32 __user *unpc, __u32 __user *ustatus)
int elf_coredump_extra_notes_size(void)
int elf_coredump_extra_notes_write(struct file *file, loff_t *foffset)
void notify_spus_active(void)
int register_spu_syscalls(struct spufs_calls *calls)
EXPORT_SYMBOL_GPL(register_spu_syscalls);
void unregister_spu_syscalls(struct spufs_calls *calls)
EXPORT_SYMBOL_GPL(unregister_spu_syscalls);
