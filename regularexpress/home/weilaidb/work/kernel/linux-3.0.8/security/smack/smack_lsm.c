#define task_security(task)	(task_cred_xxx((task), security))
#define TRANS_TRUE	"TRUE"
#define TRANS_TRUE_SIZE	4
static char *smk_fetch(const char *name, struct inode *ip, struct dentry *dp)
struct inode_smack *new_inode_smack(char *smack)
static struct task_smack *new_task_smack(char *task, char *forked, gfp_t gfp)
static int smk_copy_rules(struct list_head *nhead, struct list_head *ohead,
gfp_t gfp)
static int smack_ptrace_access_check(struct task_struct *ctp, unsigned int mode)
static int smack_ptrace_traceme(struct task_struct *ptp)
static int smack_syslog(int typefrom_file)
static int smack_sb_alloc_security(struct super_block *sb)
static void smack_sb_free_security(struct super_block *sb)
static int smack_sb_copy_data(char *orig, char *smackopts)
static int smack_sb_kern_mount(struct super_block *sb, int flags, void *data)
static int smack_sb_statfs(struct dentry *dentry)
static int smack_sb_mount(char *dev_name, struct path *path,
char *type, unsigned long flags, void *data)
static int smack_sb_umount(struct vfsmount *mnt, int flags)
static int smack_bprm_set_creds(struct linux_binprm *bprm)
static int smack_inode_alloc_security(struct inode *inode)
static void smack_inode_free_security(struct inode *inode)
static int smack_inode_init_security(struct inode *inode, struct inode *dir,
const struct qstr *qstr, char **name,
void **value, size_t *len)
static int smack_inode_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *new_dentry)
static int smack_inode_unlink(struct inode *dir, struct dentry *dentry)
static int smack_inode_rmdir(struct inode *dir, struct dentry *dentry)
static int smack_inode_rename(struct inode *old_inode,
struct dentry *old_dentry,
struct inode *new_inode,
struct dentry *new_dentry)
static int smack_inode_permission(struct inode *inode, int mask, unsigned flags)
static int smack_inode_setattr(struct dentry *dentry, struct iattr *iattr)
static int smack_inode_getattr(struct vfsmount *mnt, struct dentry *dentry)
static int smack_inode_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
static void smack_inode_post_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
static int smack_inode_getxattr(struct dentry *dentry, const char *name)
static int smack_inode_removexattr(struct dentry *dentry, const char *name)
static int smack_inode_getsecurity(const struct inode *inode,
const char *name, void **buffer,
bool alloc)
static int smack_inode_listsecurity(struct inode *inode, char *buffer,
size_t buffer_size)
static void smack_inode_getsecid(const struct inode *inode, u32 *secid)
static int smack_file_permission(struct file *file, int mask)
static int smack_file_alloc_security(struct file *file)
static void smack_file_free_security(struct file *file)
static int smack_file_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int smack_file_lock(struct file *file, unsigned int cmd)
static int smack_file_fcntl(struct file *file, unsigned int cmd,
unsigned long arg)
static int smack_file_mmap(struct file *file,
unsigned long reqprot, unsigned long prot,
unsigned long flags, unsigned long addr,
unsigned long addr_only)
static int smack_file_set_fowner(struct file *file)
static int smack_file_send_sigiotask(struct task_struct *tsk,
struct fown_struct *fown, int signum)
static int smack_file_receive(struct file *file)
static int smack_cred_alloc_blank(struct cred *cred, gfp_t gfp)
static void smack_cred_free(struct cred *cred)
static int smack_cred_prepare(struct cred *new, const struct cred *old,
gfp_t gfp)
static void smack_cred_transfer(struct cred *new, const struct cred *old)
static int smack_kernel_act_as(struct cred *new, u32 secid)
static int smack_kernel_create_files_as(struct cred *new,
struct inode *inode)
static int smk_curacc_on_task(struct task_struct *p, int access)
static int smack_task_setpgid(struct task_struct *p, pid_t pgid)
static int smack_task_getpgid(struct task_struct *p)
static int smack_task_getsid(struct task_struct *p)
static void smack_task_getsecid(struct task_struct *p, u32 *secid)
static int smack_task_setnice(struct task_struct *p, int nice)
static int smack_task_setioprio(struct task_struct *p, int ioprio)
static int smack_task_getioprio(struct task_struct *p)
static int smack_task_setscheduler(struct task_struct *p)
static int smack_task_getscheduler(struct task_struct *p)
static int smack_task_movememory(struct task_struct *p)
static int smack_task_kill(struct task_struct *p, struct siginfo *info,
int sig, u32 secid)
static int smack_task_wait(struct task_struct *p)
static void smack_task_to_inode(struct task_struct *p, struct inode *inode)
static int smack_sk_alloc_security(struct sock *sk, int family, gfp_t gfp_flags)
static void smack_sk_free_security(struct sock *sk)
static char *smack_host_label(struct sockaddr_in *sip)
static void smack_set_catset(char *catset, struct netlbl_lsm_secattr *sap)
static void smack_to_secattr(char *smack, struct netlbl_lsm_secattr *nlsp)
static int smack_netlabel(struct sock *sk, int labeled)
static int smack_netlabel_send(struct sock *sk, struct sockaddr_in *sap)
static int smack_inode_setsecurity(struct inode *inode, const char *name,
const void *value, size_t size, int flags)
static int smack_socket_post_create(struct socket *sock, int family,
int type, int protocol, int kern)
static int smack_socket_connect(struct socket *sock, struct sockaddr *sap,
int addrlen)
static int smack_flags_to_may(int flags)
static int smack_msg_msg_alloc_security(struct msg_msg *msg)
static void smack_msg_msg_free_security(struct msg_msg *msg)
static char *smack_of_shm(struct shmid_kernel *shp)
static int smack_shm_alloc_security(struct shmid_kernel *shp)
static void smack_shm_free_security(struct shmid_kernel *shp)
static int smk_curacc_shm(struct shmid_kernel *shp, int access)
static int smack_shm_associate(struct shmid_kernel *shp, int shmflg)
static int smack_shm_shmctl(struct shmid_kernel *shp, int cmd)
static int smack_shm_shmat(struct shmid_kernel *shp, char __user *shmaddr,
int shmflg)
static char *smack_of_sem(struct sem_array *sma)
static int smack_sem_alloc_security(struct sem_array *sma)
static void smack_sem_free_security(struct sem_array *sma)
static int smk_curacc_sem(struct sem_array *sma, int access)
static int smack_sem_associate(struct sem_array *sma, int semflg)
static int smack_sem_semctl(struct sem_array *sma, int cmd)
static int smack_sem_semop(struct sem_array *sma, struct sembuf *sops,
unsigned nsops, int alter)
static int smack_msg_queue_alloc_security(struct msg_queue *msq)
static void smack_msg_queue_free_security(struct msg_queue *msq)
static char *smack_of_msq(struct msg_queue *msq)
static int smk_curacc_msq(struct msg_queue *msq, int access)
static int smack_msg_queue_associate(struct msg_queue *msq, int msqflg)
static int smack_msg_queue_msgctl(struct msg_queue *msq, int cmd)
static int smack_msg_queue_msgsnd(struct msg_queue *msq, struct msg_msg *msg,
int msqflg)
static int smack_msg_queue_msgrcv(struct msg_queue *msq, struct msg_msg *msg,
struct task_struct *target, long type, int mode)
static int smack_ipc_permission(struct kern_ipc_perm *ipp, short flag)
static void smack_ipc_getsecid(struct kern_ipc_perm *ipp, u32 *secid)
static void smack_d_instantiate(struct dentry *opt_dentry, struct inode *inode)
static int smack_getprocattr(struct task_struct *p, char *name, char **value)
static int smack_setprocattr(struct task_struct *p, char *name,
void *value, size_t size)
static int smack_unix_stream_connect(struct sock *sock,
struct sock *other, struct sock *newsk)
static int smack_unix_may_send(struct socket *sock, struct socket *other)
static int smack_socket_sendmsg(struct socket *sock, struct msghdr *msg,
int size)
static void smack_from_secattr(struct netlbl_lsm_secattr *sap, char *sip)
static int smack_socket_sock_rcv_skb(struct sock *sk, struct sk_buff *skb)
static int smack_socket_getpeersec_stream(struct socket *sock,
char __user *optval,
int __user *optlen, unsigned len)
static int smack_socket_getpeersec_dgram(struct socket *sock,
struct sk_buff *skb, u32 *secid)
static void smack_sock_graft(struct sock *sk, struct socket *parent)
static int smack_inet_conn_request(struct sock *sk, struct sk_buff *skb,
struct request_sock *req)
static void smack_inet_csk_clone(struct sock *sk,
const struct request_sock *req)
static int smack_key_alloc(struct key *key, const struct cred *cred,
unsigned long flags)
static void smack_key_free(struct key *key)
static int smack_key_permission(key_ref_t key_ref,
const struct cred *cred, key_perm_t perm)
static int smack_audit_rule_init(u32 field, u32 op, char *rulestr, void **vrule)
static int smack_audit_rule_known(struct audit_krule *krule)
static int smack_audit_rule_match(u32 secid, u32 field, u32 op, void *vrule,
struct audit_context *actx)
static void smack_audit_rule_free(void *vrule)
static int smack_secid_to_secctx(u32 secid, char **secdata, u32 *seclen)
static int smack_secctx_to_secid(const char *secdata, u32 seclen, u32 *secid)
static void smack_release_secctx(char *secdata, u32 seclen)
static int smack_inode_notifysecctx(struct inode *inode, void *ctx, u32 ctxlen)
static int smack_inode_setsecctx(struct dentry *dentry, void *ctx, u32 ctxlen)
static int smack_inode_getsecctx(struct inode *inode, void **ctx, u32 *ctxlen)
struct security_operations smack_ops = ;
static __init void init_smack_know_list(void)
static __init int smack_init(void)
security_initcall(smack_init);
