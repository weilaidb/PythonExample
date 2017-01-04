struct kmem_cache *ecryptfs_open_req_cache;
static struct ecryptfs_kthread_ctl  ecryptfs_kthread_ctl;
static struct task_struct *ecryptfs_kthread;
static int ecryptfs_threadfn(void *ignored)
int __init ecryptfs_init_kthread(void)
void ecryptfs_destroy_kthread(void)
int ecryptfs_privileged_open(struct file **lower_file,
struct dentry *lower_dentry,
struct vfsmount *lower_mnt,
const struct cred *cred)
