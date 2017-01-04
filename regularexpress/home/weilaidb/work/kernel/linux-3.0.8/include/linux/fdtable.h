#define __LINUX_FDTABLE_H
#define NR_OPEN_DEFAULT BITS_PER_LONG
struct embedded_fd_set ;
struct fdtable ;
struct files_struct ;
#define rcu_dereference_check_fdtable(files, fdtfd) \
(rcu_dereference_check((fdtfd), \
rcu_read_lock_held() || \
lockdep_is_held(&(files)->file_lock) || \
atomic_read(&(files)->count) == 1 || \
rcu_my_thread_group_empty()))
#define files_fdtable(files) \
(rcu_dereference_check_fdtable((files), (files)->fdt))
struct file_operations;
struct vfsmount;
struct dentry;
extern int expand_files(struct files_struct *, int nr);
extern void free_fdtable_rcu(struct rcu_head *rcu);
extern void __init files_defer_init(void);
static inline void free_fdtable(struct fdtable *fdt)
static inline struct file * fcheck_files(struct files_struct *files, unsigned int fd)
#define fcheck(fd)	fcheck_files(current->files, fd)
struct task_struct;
struct files_struct *get_files_struct(struct task_struct *);
void put_files_struct(struct files_struct *fs);
void reset_files_struct(struct files_struct *);
int unshare_files(struct files_struct **);
struct files_struct *dup_fd(struct files_struct *, int *);
extern struct kmem_cache *files_cachep;
