struct shm_file_data ;
#define shm_file_data(file) (*((struct shm_file_data **)&(file)->private_data))
static const struct file_operations shm_file_operations;
static const struct vm_operations_struct shm_vm_ops;
#define shm_ids(ns)	((ns)->ids[IPC_SHM_IDS])
#define shm_unlock(shp)			\
ipc_unlock(&(shp)->shm_perm)
static int newseg(struct ipc_namespace *, struct ipc_params *);
static void shm_open(struct vm_area_struct *vma);
static void shm_close(struct vm_area_struct *vma);
static void shm_destroy (struct ipc_namespace *ns, struct shmid_kernel *shp);
static int sysvipc_shm_proc_show(struct seq_file *s, void *it);
void shm_init_ns(struct ipc_namespace *ns)
static void do_shm_rmid(struct ipc_namespace *ns, struct kern_ipc_perm *ipcp)
void shm_exit_ns(struct ipc_namespace *ns)
void __init shm_init (void)
static inline struct shmid_kernel *shm_lock(struct ipc_namespace *ns, int id)
static inline struct shmid_kernel *shm_lock_check(struct ipc_namespace *ns,
int id)
static inline void shm_rmid(struct ipc_namespace *ns, struct shmid_kernel *s)
static void shm_open(struct vm_area_struct *vma)
static void shm_destroy(struct ipc_namespace *ns, struct shmid_kernel *shp)
static void shm_close(struct vm_area_struct *vma)
static int shm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int shm_set_policy(struct vm_area_struct *vma, struct mempolicy *new)
static struct mempolicy *shm_get_policy(struct vm_area_struct *vma,
unsigned long addr)
static int shm_mmap(struct file * file, struct vm_area_struct * vma)
static int shm_release(struct inode *ino, struct file *file)
static int shm_fsync(struct file *file, int datasync)
static unsigned long shm_get_unmapped_area(struct file *file,
unsigned long addr, unsigned long len, unsigned long pgoff,
unsigned long flags)
static const struct file_operations shm_file_operations = ;
static const struct file_operations shm_file_operations_huge = ;
int is_file_shm_hugepages(struct file *file)
static const struct vm_operations_struct shm_vm_ops = ;
static int newseg(struct ipc_namespace *ns, struct ipc_params *params)
static inline int shm_security(struct kern_ipc_perm *ipcp, int shmflg)
static inline int shm_more_checks(struct kern_ipc_perm *ipcp,
struct ipc_params *params)
SYSCALL_DEFINE3(shmget, key_t, key, size_t, size, int, shmflg)
static inline unsigned long copy_shmid_to_user(void __user *buf, struct shmid64_ds *in, int version)
static inline unsigned long
copy_shmid_from_user(struct shmid64_ds *out, void __user *buf, int version)
static inline unsigned long copy_shminfo_to_user(void __user *buf, struct shminfo64 *in, int version)
static void shm_add_rss_swap(struct shmid_kernel *shp,
unsigned long *rss_add, unsigned long *swp_add)
static void shm_get_stat(struct ipc_namespace *ns, unsigned long *rss,
unsigned long *swp)
static int shmctl_down(struct ipc_namespace *ns, int shmid, int cmd,
struct shmid_ds __user *buf, int version)
SYSCALL_DEFINE3(shmctl, int, shmid, int, cmd, struct shmid_ds __user *, buf)
long do_shmat(int shmid, char __user *shmaddr, int shmflg, ulong *raddr)
SYSCALL_DEFINE3(shmat, int, shmid, char __user *, shmaddr, int, shmflg)
SYSCALL_DEFINE1(shmdt, char __user *, shmaddr)
static int sysvipc_shm_proc_show(struct seq_file *s, void *it)
