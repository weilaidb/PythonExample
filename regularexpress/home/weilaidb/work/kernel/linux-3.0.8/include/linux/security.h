#define __LINUX_SECURITY_H
#define SECURITY_NAME_MAX	10
#define SECURITY_CAP_NOAUDIT 0
#define SECURITY_CAP_AUDIT 1
struct ctl_table;
struct audit_krule;
struct user_namespace;
extern int cap_capable(struct task_struct *tsk, const struct cred *cred,
struct user_namespace *ns, int cap, int audit);
extern int cap_settime(const struct timespec *ts, const struct timezone *tz);
extern int cap_ptrace_access_check(struct task_struct *child, unsigned int mode);
extern int cap_ptrace_traceme(struct task_struct *parent);
extern int cap_capget(struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_capset(struct cred *new, const struct cred *old,
const kernel_cap_t *effective,
const kernel_cap_t *inheritable,
const kernel_cap_t *permitted);
extern int cap_bprm_set_creds(struct linux_binprm *bprm);
extern int cap_bprm_secureexec(struct linux_binprm *bprm);
extern int cap_inode_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags);
extern int cap_inode_removexattr(struct dentry *dentry, const char *name);
extern int cap_inode_need_killpriv(struct dentry *dentry);
extern int cap_inode_killpriv(struct dentry *dentry);
extern int cap_file_mmap(struct file *file, unsigned long reqprot,
unsigned long prot, unsigned long flags,
unsigned long addr, unsigned long addr_only);
extern int cap_task_fix_setuid(struct cred *new, const struct cred *old, int flags);
extern int cap_task_prctl(int option, unsigned long arg2, unsigned long arg3,
unsigned long arg4, unsigned long arg5);
extern int cap_task_setscheduler(struct task_struct *p);
extern int cap_task_setioprio(struct task_struct *p, int ioprio);
extern int cap_task_setnice(struct task_struct *p, int nice);
extern int cap_vm_enough_memory(struct mm_struct *mm, long pages);
struct msghdr;
struct sk_buff;
struct sock;
struct sockaddr;
struct socket;
struct flowi;
struct dst_entry;
struct xfrm_selector;
struct xfrm_policy;
struct xfrm_state;
struct xfrm_user_sec_ctx;
struct seq_file;
extern int cap_netlink_send(struct sock *sk, struct sk_buff *skb);
extern int cap_netlink_recv(struct sk_buff *skb, int cap);
void reset_security_ops(void);
extern unsigned long mmap_min_addr;
extern unsigned long dac_mmap_min_addr;
#define dac_mmap_min_addr	0UL
#define LSM_SETID_ID	1
#define LSM_SETID_RE	2
#define LSM_SETID_RES	4
#define LSM_SETID_FS	8
struct sched_param;
struct request_sock;
#define LSM_UNSAFE_SHARE	1
#define LSM_UNSAFE_PTRACE	2
#define LSM_UNSAFE_PTRACE_CAP	4
static inline unsigned long round_hint_to_min(unsigned long hint)
extern int mmap_min_addr_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos);
struct security_mnt_opts ;
static inline void security_init_mnt_opts(struct security_mnt_opts *opts)
static inline void security_free_mnt_opts(struct security_mnt_opts *opts)
struct security_operations ;
extern int security_init(void);
extern int security_module_enable(struct security_operations *ops);
extern int register_security(struct security_operations *ops);
int security_ptrace_access_check(struct task_struct *child, unsigned int mode);
int security_ptrace_traceme(struct task_struct *parent);
int security_capget(struct task_struct *target,
kernel_cap_t *effective,
kernel_cap_t *inheritable,
kernel_cap_t *permitted);
int security_capset(struct cred *new, const struct cred *old,
const kernel_cap_t *effective,
const kernel_cap_t *inheritable,
const kernel_cap_t *permitted);
int security_capable(struct user_namespace *ns, const struct cred *cred,
int cap);
int security_real_capable(struct task_struct *tsk, struct user_namespace *ns,
int cap);
int security_real_capable_noaudit(struct task_struct *tsk,
struct user_namespace *ns, int cap);
int security_quotactl(int cmds, int type, int id, struct super_block *sb);
int security_quota_on(struct dentry *dentry);
int security_syslog(int type);
int security_settime(const struct timespec *ts, const struct timezone *tz);
int security_vm_enough_memory(long pages);
int security_vm_enough_memory_mm(struct mm_struct *mm, long pages);
int security_vm_enough_memory_kern(long pages);
int security_bprm_set_creds(struct linux_binprm *bprm);
int security_bprm_check(struct linux_binprm *bprm);
void security_bprm_committing_creds(struct linux_binprm *bprm);
void security_bprm_committed_creds(struct linux_binprm *bprm);
int security_bprm_secureexec(struct linux_binprm *bprm);
int security_sb_alloc(struct super_block *sb);
void security_sb_free(struct super_block *sb);
int security_sb_copy_data(char *orig, char *copy);
int security_sb_remount(struct super_block *sb, void *data);
int security_sb_kern_mount(struct super_block *sb, int flags, void *data);
int security_sb_show_options(struct seq_file *m, struct super_block *sb);
int security_sb_statfs(struct dentry *dentry);
int security_sb_mount(char *dev_name, struct path *path,
char *type, unsigned long flags, void *data);
int security_sb_umount(struct vfsmount *mnt, int flags);
int security_sb_pivotroot(struct path *old_path, struct path *new_path);
int security_sb_set_mnt_opts(struct super_block *sb, struct security_mnt_opts *opts);
void security_sb_clone_mnt_opts(const struct super_block *oldsb,
struct super_block *newsb);
int security_sb_parse_opts_str(char *options, struct security_mnt_opts *opts);
int security_inode_alloc(struct inode *inode);
void security_inode_free(struct inode *inode);
int security_inode_init_security(struct inode *inode, struct inode *dir,
const struct qstr *qstr, char **name,
void **value, size_t *len);
int security_inode_create(struct inode *dir, struct dentry *dentry, int mode);
int security_inode_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *new_dentry);
int security_inode_unlink(struct inode *dir, struct dentry *dentry);
int security_inode_symlink(struct inode *dir, struct dentry *dentry,
const char *old_name);
int security_inode_mkdir(struct inode *dir, struct dentry *dentry, int mode);
int security_inode_rmdir(struct inode *dir, struct dentry *dentry);
int security_inode_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t dev);
int security_inode_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry);
int security_inode_readlink(struct dentry *dentry);
int security_inode_follow_link(struct dentry *dentry, struct nameidata *nd);
int security_inode_permission(struct inode *inode, int mask);
int security_inode_exec_permission(struct inode *inode, unsigned int flags);
int security_inode_setattr(struct dentry *dentry, struct iattr *attr);
int security_inode_getattr(struct vfsmount *mnt, struct dentry *dentry);
int security_inode_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags);
void security_inode_post_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags);
int security_inode_getxattr(struct dentry *dentry, const char *name);
int security_inode_listxattr(struct dentry *dentry);
int security_inode_removexattr(struct dentry *dentry, const char *name);
int security_inode_need_killpriv(struct dentry *dentry);
int security_inode_killpriv(struct dentry *dentry);
int security_inode_getsecurity(const struct inode *inode, const char *name, void **buffer, bool alloc);
int security_inode_setsecurity(struct inode *inode, const char *name, const void *value, size_t size, int flags);
int security_inode_listsecurity(struct inode *inode, char *buffer, size_t buffer_size);
void security_inode_getsecid(const struct inode *inode, u32 *secid);
int security_file_permission(struct file *file, int mask);
int security_file_alloc(struct file *file);
void security_file_free(struct file *file);
int security_file_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
int security_file_mmap(struct file *file, unsigned long reqprot,
unsigned long prot, unsigned long flags,
unsigned long addr, unsigned long addr_only);
int security_file_mprotect(struct vm_area_struct *vma, unsigned long reqprot,
unsigned long prot);
int security_file_lock(struct file *file, unsigned int cmd);
int security_file_fcntl(struct file *file, unsigned int cmd, unsigned long arg);
int security_file_set_fowner(struct file *file);
int security_file_send_sigiotask(struct task_struct *tsk,
struct fown_struct *fown, int sig);
int security_file_receive(struct file *file);
int security_dentry_open(struct file *file, const struct cred *cred);
int security_task_create(unsigned long clone_flags);
int security_cred_alloc_blank(struct cred *cred, gfp_t gfp);
void security_cred_free(struct cred *cred);
int security_prepare_creds(struct cred *new, const struct cred *old, gfp_t gfp);
void security_transfer_creds(struct cred *new, const struct cred *old);
int security_kernel_act_as(struct cred *new, u32 secid);
int security_kernel_create_files_as(struct cred *new, struct inode *inode);
int security_kernel_module_request(char *kmod_name);
int security_task_fix_setuid(struct cred *new, const struct cred *old,
int flags);
int security_task_setpgid(struct task_struct *p, pid_t pgid);
int security_task_getpgid(struct task_struct *p);
int security_task_getsid(struct task_struct *p);
void security_task_getsecid(struct task_struct *p, u32 *secid);
int security_task_setnice(struct task_struct *p, int nice);
int security_task_setioprio(struct task_struct *p, int ioprio);
int security_task_getioprio(struct task_struct *p);
int security_task_setrlimit(struct task_struct *p, unsigned int resource,
struct rlimit *new_rlim);
int security_task_setscheduler(struct task_struct *p);
int security_task_getscheduler(struct task_struct *p);
int security_task_movememory(struct task_struct *p);
int security_task_kill(struct task_struct *p, struct siginfo *info,
int sig, u32 secid);
int security_task_wait(struct task_struct *p);
int security_task_prctl(int option, unsigned long arg2, unsigned long arg3,
unsigned long arg4, unsigned long arg5);
void security_task_to_inode(struct task_struct *p, struct inode *inode);
int security_ipc_permission(struct kern_ipc_perm *ipcp, short flag);
void security_ipc_getsecid(struct kern_ipc_perm *ipcp, u32 *secid);
int security_msg_msg_alloc(struct msg_msg *msg);
void security_msg_msg_free(struct msg_msg *msg);
int security_msg_queue_alloc(struct msg_queue *msq);
void security_msg_queue_free(struct msg_queue *msq);
int security_msg_queue_associate(struct msg_queue *msq, int msqflg);
int security_msg_queue_msgctl(struct msg_queue *msq, int cmd);
int security_msg_queue_msgsnd(struct msg_queue *msq,
struct msg_msg *msg, int msqflg);
int security_msg_queue_msgrcv(struct msg_queue *msq, struct msg_msg *msg,
struct task_struct *target, long type, int mode);
int security_shm_alloc(struct shmid_kernel *shp);
void security_shm_free(struct shmid_kernel *shp);
int security_shm_associate(struct shmid_kernel *shp, int shmflg);
int security_shm_shmctl(struct shmid_kernel *shp, int cmd);
int security_shm_shmat(struct shmid_kernel *shp, char __user *shmaddr, int shmflg);
int security_sem_alloc(struct sem_array *sma);
void security_sem_free(struct sem_array *sma);
int security_sem_associate(struct sem_array *sma, int semflg);
int security_sem_semctl(struct sem_array *sma, int cmd);
int security_sem_semop(struct sem_array *sma, struct sembuf *sops,
unsigned nsops, int alter);
void security_d_instantiate(struct dentry *dentry, struct inode *inode);
int security_getprocattr(struct task_struct *p, char *name, char **value);
int security_setprocattr(struct task_struct *p, char *name, void *value, size_t size);
int security_netlink_send(struct sock *sk, struct sk_buff *skb);
int security_netlink_recv(struct sk_buff *skb, int cap);
int security_secid_to_secctx(u32 secid, char **secdata, u32 *seclen);
int security_secctx_to_secid(const char *secdata, u32 seclen, u32 *secid);
void security_release_secctx(char *secdata, u32 seclen);
int security_inode_notifysecctx(struct inode *inode, void *ctx, u32 ctxlen);
int security_inode_setsecctx(struct dentry *dentry, void *ctx, u32 ctxlen);
int security_inode_getsecctx(struct inode *inode, void **ctx, u32 *ctxlen);
struct security_mnt_opts ;
static inline void security_init_mnt_opts(struct security_mnt_opts *opts)
static inline void security_free_mnt_opts(struct security_mnt_opts *opts)
static inline int security_init(void)
static inline int security_ptrace_access_check(struct task_struct *child,
unsigned int mode)
static inline int security_ptrace_traceme(struct task_struct *parent)
static inline int security_capget(struct task_struct *target,
kernel_cap_t *effective,
kernel_cap_t *inheritable,
kernel_cap_t *permitted)
static inline int security_capset(struct cred *new,
const struct cred *old,
const kernel_cap_t *effective,
const kernel_cap_t *inheritable,
const kernel_cap_t *permitted)
static inline int security_capable(struct user_namespace *ns,
const struct cred *cred, int cap)
static inline int security_real_capable(struct task_struct *tsk, struct user_namespace *ns, int cap)
static inline
int security_real_capable_noaudit(struct task_struct *tsk, struct user_namespace *ns, int cap)
static inline int security_quotactl(int cmds, int type, int id,
struct super_block *sb)
static inline int security_quota_on(struct dentry *dentry)
static inline int security_syslog(int type)
static inline int security_settime(const struct timespec *ts,
const struct timezone *tz)
static inline int security_vm_enough_memory(long pages)
static inline int security_vm_enough_memory_mm(struct mm_struct *mm, long pages)
static inline int security_vm_enough_memory_kern(long pages)
static inline int security_bprm_set_creds(struct linux_binprm *bprm)
static inline int security_bprm_check(struct linux_binprm *bprm)
static inline void security_bprm_committing_creds(struct linux_binprm *bprm)
static inline void security_bprm_committed_creds(struct linux_binprm *bprm)
static inline int security_bprm_secureexec(struct linux_binprm *bprm)
static inline int security_sb_alloc(struct super_block *sb)
static inline void security_sb_free(struct super_block *sb)
static inline int security_sb_copy_data(char *orig, char *copy)
static inline int security_sb_remount(struct super_block *sb, void *data)
static inline int security_sb_kern_mount(struct super_block *sb, int flags, void *data)
static inline int security_sb_show_options(struct seq_file *m,
struct super_block *sb)
static inline int security_sb_statfs(struct dentry *dentry)
static inline int security_sb_mount(char *dev_name, struct path *path,
char *type, unsigned long flags,
void *data)
static inline int security_sb_umount(struct vfsmount *mnt, int flags)
static inline int security_sb_pivotroot(struct path *old_path,
struct path *new_path)
static inline int security_sb_set_mnt_opts(struct super_block *sb,
struct security_mnt_opts *opts)
static inline void security_sb_clone_mnt_opts(const struct super_block *oldsb,
struct super_block *newsb)
static inline int security_sb_parse_opts_str(char *options, struct security_mnt_opts *opts)
static inline int security_inode_alloc(struct inode *inode)
static inline void security_inode_free(struct inode *inode)
static inline int security_inode_init_security(struct inode *inode,
struct inode *dir,
const struct qstr *qstr,
char **name,
void **value,
size_t *len)
static inline int security_inode_create(struct inode *dir,
struct dentry *dentry,
int mode)
static inline int security_inode_link(struct dentry *old_dentry,
struct inode *dir,
struct dentry *new_dentry)
static inline int security_inode_unlink(struct inode *dir,
struct dentry *dentry)
static inline int security_inode_symlink(struct inode *dir,
struct dentry *dentry,
const char *old_name)
static inline int security_inode_mkdir(struct inode *dir,
struct dentry *dentry,
int mode)
static inline int security_inode_rmdir(struct inode *dir,
struct dentry *dentry)
static inline int security_inode_mknod(struct inode *dir,
struct dentry *dentry,
int mode, dev_t dev)
static inline int security_inode_rename(struct inode *old_dir,
struct dentry *old_dentry,
struct inode *new_dir,
struct dentry *new_dentry)
static inline int security_inode_readlink(struct dentry *dentry)
static inline int security_inode_follow_link(struct dentry *dentry,
struct nameidata *nd)
static inline int security_inode_permission(struct inode *inode, int mask)
static inline int security_inode_exec_permission(struct inode *inode,
unsigned int flags)
static inline int security_inode_setattr(struct dentry *dentry,
struct iattr *attr)
static inline int security_inode_getattr(struct vfsmount *mnt,
struct dentry *dentry)
static inline int security_inode_setxattr(struct dentry *dentry,
const char *name, const void *value, size_t size, int flags)
static inline void security_inode_post_setxattr(struct dentry *dentry,
const char *name, const void *value, size_t size, int flags)
static inline int security_inode_getxattr(struct dentry *dentry,
const char *name)
static inline int security_inode_listxattr(struct dentry *dentry)
static inline int security_inode_removexattr(struct dentry *dentry,
const char *name)
static inline int security_inode_need_killpriv(struct dentry *dentry)
static inline int security_inode_killpriv(struct dentry *dentry)
static inline int security_inode_getsecurity(const struct inode *inode, const char *name, void **buffer, bool alloc)
static inline int security_inode_setsecurity(struct inode *inode, const char *name, const void *value, size_t size, int flags)
static inline int security_inode_listsecurity(struct inode *inode, char *buffer, size_t buffer_size)
static inline void security_inode_getsecid(const struct inode *inode, u32 *secid)
static inline int security_file_permission(struct file *file, int mask)
static inline int security_file_alloc(struct file *file)
static inline void security_file_free(struct file *file)
static inline int security_file_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static inline int security_file_mmap(struct file *file, unsigned long reqprot,
unsigned long prot,
unsigned long flags,
unsigned long addr,
unsigned long addr_only)
static inline int security_file_mprotect(struct vm_area_struct *vma,
unsigned long reqprot,
unsigned long prot)
static inline int security_file_lock(struct file *file, unsigned int cmd)
static inline int security_file_fcntl(struct file *file, unsigned int cmd,
unsigned long arg)
static inline int security_file_set_fowner(struct file *file)
static inline int security_file_send_sigiotask(struct task_struct *tsk,
struct fown_struct *fown,
int sig)
static inline int security_file_receive(struct file *file)
static inline int security_dentry_open(struct file *file,
const struct cred *cred)
static inline int security_task_create(unsigned long clone_flags)
static inline int security_cred_alloc_blank(struct cred *cred, gfp_t gfp)
static inline void security_cred_free(struct cred *cred)
static inline int security_prepare_creds(struct cred *new,
const struct cred *old,
gfp_t gfp)
static inline void security_transfer_creds(struct cred *new,
const struct cred *old)
static inline int security_kernel_act_as(struct cred *cred, u32 secid)
static inline int security_kernel_create_files_as(struct cred *cred,
struct inode *inode)
static inline int security_kernel_module_request(char *kmod_name)
static inline int security_task_fix_setuid(struct cred *new,
const struct cred *old,
int flags)
static inline int security_task_setpgid(struct task_struct *p, pid_t pgid)
static inline int security_task_getpgid(struct task_struct *p)
static inline int security_task_getsid(struct task_struct *p)
static inline void security_task_getsecid(struct task_struct *p, u32 *secid)
static inline int security_task_setnice(struct task_struct *p, int nice)
static inline int security_task_setioprio(struct task_struct *p, int ioprio)
static inline int security_task_getioprio(struct task_struct *p)
static inline int security_task_setrlimit(struct task_struct *p,
unsigned int resource,
struct rlimit *new_rlim)
static inline int security_task_setscheduler(struct task_struct *p)
static inline int security_task_getscheduler(struct task_struct *p)
static inline int security_task_movememory(struct task_struct *p)
static inline int security_task_kill(struct task_struct *p,
struct siginfo *info, int sig,
u32 secid)
static inline int security_task_wait(struct task_struct *p)
static inline int security_task_prctl(int option, unsigned long arg2,
unsigned long arg3,
unsigned long arg4,
unsigned long arg5)
static inline void security_task_to_inode(struct task_struct *p, struct inode *inode)
static inline int security_ipc_permission(struct kern_ipc_perm *ipcp,
short flag)
static inline void security_ipc_getsecid(struct kern_ipc_perm *ipcp, u32 *secid)
static inline int security_msg_msg_alloc(struct msg_msg *msg)
static inline void security_msg_msg_free(struct msg_msg *msg)
static inline int security_msg_queue_alloc(struct msg_queue *msq)
static inline void security_msg_queue_free(struct msg_queue *msq)
static inline int security_msg_queue_associate(struct msg_queue *msq,
int msqflg)
static inline int security_msg_queue_msgctl(struct msg_queue *msq, int cmd)
static inline int security_msg_queue_msgsnd(struct msg_queue *msq,
struct msg_msg *msg, int msqflg)
static inline int security_msg_queue_msgrcv(struct msg_queue *msq,
struct msg_msg *msg,
struct task_struct *target,
long type, int mode)
static inline int security_shm_alloc(struct shmid_kernel *shp)
static inline void security_shm_free(struct shmid_kernel *shp)
static inline int security_shm_associate(struct shmid_kernel *shp,
int shmflg)
static inline int security_shm_shmctl(struct shmid_kernel *shp, int cmd)
static inline int security_shm_shmat(struct shmid_kernel *shp,
char __user *shmaddr, int shmflg)
static inline int security_sem_alloc(struct sem_array *sma)
static inline void security_sem_free(struct sem_array *sma)
static inline int security_sem_associate(struct sem_array *sma, int semflg)
static inline int security_sem_semctl(struct sem_array *sma, int cmd)
static inline int security_sem_semop(struct sem_array *sma,
struct sembuf *sops, unsigned nsops,
int alter)
static inline void security_d_instantiate(struct dentry *dentry, struct inode *inode)
static inline int security_getprocattr(struct task_struct *p, char *name, char **value)
static inline int security_setprocattr(struct task_struct *p, char *name, void *value, size_t size)
static inline int security_netlink_send(struct sock *sk, struct sk_buff *skb)
static inline int security_netlink_recv(struct sk_buff *skb, int cap)
static inline int security_secid_to_secctx(u32 secid, char **secdata, u32 *seclen)
static inline int security_secctx_to_secid(const char *secdata,
u32 seclen,
u32 *secid)
static inline void security_release_secctx(char *secdata, u32 seclen)
static inline int security_inode_notifysecctx(struct inode *inode, void *ctx, u32 ctxlen)
static inline int security_inode_setsecctx(struct dentry *dentry, void *ctx, u32 ctxlen)
static inline int security_inode_getsecctx(struct inode *inode, void **ctx, u32 *ctxlen)
int security_unix_stream_connect(struct sock *sock, struct sock *other, struct sock *newsk);
int security_unix_may_send(struct socket *sock,  struct socket *other);
int security_socket_create(int family, int type, int protocol, int kern);
int security_socket_post_create(struct socket *sock, int family,
int type, int protocol, int kern);
int security_socket_bind(struct socket *sock, struct sockaddr *address, int addrlen);
int security_socket_connect(struct socket *sock, struct sockaddr *address, int addrlen);
int security_socket_listen(struct socket *sock, int backlog);
int security_socket_accept(struct socket *sock, struct socket *newsock);
int security_socket_sendmsg(struct socket *sock, struct msghdr *msg, int size);
int security_socket_recvmsg(struct socket *sock, struct msghdr *msg,
int size, int flags);
int security_socket_getsockname(struct socket *sock);
int security_socket_getpeername(struct socket *sock);
int security_socket_getsockopt(struct socket *sock, int level, int optname);
int security_socket_setsockopt(struct socket *sock, int level, int optname);
int security_socket_shutdown(struct socket *sock, int how);
int security_sock_rcv_skb(struct sock *sk, struct sk_buff *skb);
int security_socket_getpeersec_stream(struct socket *sock, char __user *optval,
int __user *optlen, unsigned len);
int security_socket_getpeersec_dgram(struct socket *sock, struct sk_buff *skb, u32 *secid);
int security_sk_alloc(struct sock *sk, int family, gfp_t priority);
void security_sk_free(struct sock *sk);
void security_sk_clone(const struct sock *sk, struct sock *newsk);
void security_sk_classify_flow(struct sock *sk, struct flowi *fl);
void security_req_classify_flow(const struct request_sock *req, struct flowi *fl);
void security_sock_graft(struct sock*sk, struct socket *parent);
int security_inet_conn_request(struct sock *sk,
struct sk_buff *skb, struct request_sock *req);
void security_inet_csk_clone(struct sock *newsk,
const struct request_sock *req);
void security_inet_conn_established(struct sock *sk,
struct sk_buff *skb);
int security_secmark_relabel_packet(u32 secid);
void security_secmark_refcount_inc(void);
void security_secmark_refcount_dec(void);
int security_tun_dev_create(void);
void security_tun_dev_post_create(struct sock *sk);
int security_tun_dev_attach(struct sock *sk);
static inline int security_unix_stream_connect(struct sock *sock,
struct sock *other,
struct sock *newsk)
static inline int security_unix_may_send(struct socket *sock,
struct socket *other)
static inline int security_socket_create(int family, int type,
int protocol, int kern)
static inline int security_socket_post_create(struct socket *sock,
int family,
int type,
int protocol, int kern)
static inline int security_socket_bind(struct socket *sock,
struct sockaddr *address,
int addrlen)
static inline int security_socket_connect(struct socket *sock,
struct sockaddr *address,
int addrlen)
static inline int security_socket_listen(struct socket *sock, int backlog)
static inline int security_socket_accept(struct socket *sock,
struct socket *newsock)
static inline int security_socket_sendmsg(struct socket *sock,
struct msghdr *msg, int size)
static inline int security_socket_recvmsg(struct socket *sock,
struct msghdr *msg, int size,
int flags)
static inline int security_socket_getsockname(struct socket *sock)
static inline int security_socket_getpeername(struct socket *sock)
static inline int security_socket_getsockopt(struct socket *sock,
int level, int optname)
static inline int security_socket_setsockopt(struct socket *sock,
int level, int optname)
static inline int security_socket_shutdown(struct socket *sock, int how)
static inline int security_sock_rcv_skb(struct sock *sk,
struct sk_buff *skb)
static inline int security_socket_getpeersec_stream(struct socket *sock, char __user *optval,
int __user *optlen, unsigned len)
static inline int security_socket_getpeersec_dgram(struct socket *sock, struct sk_buff *skb, u32 *secid)
static inline int security_sk_alloc(struct sock *sk, int family, gfp_t priority)
static inline void security_sk_free(struct sock *sk)
static inline void security_sk_clone(const struct sock *sk, struct sock *newsk)
static inline void security_sk_classify_flow(struct sock *sk, struct flowi *fl)
static inline void security_req_classify_flow(const struct request_sock *req, struct flowi *fl)
static inline void security_sock_graft(struct sock *sk, struct socket *parent)
static inline int security_inet_conn_request(struct sock *sk,
struct sk_buff *skb, struct request_sock *req)
static inline void security_inet_csk_clone(struct sock *newsk,
const struct request_sock *req)
static inline void security_inet_conn_established(struct sock *sk,
struct sk_buff *skb)
static inline int security_secmark_relabel_packet(u32 secid)
static inline void security_secmark_refcount_inc(void)
static inline void security_secmark_refcount_dec(void)
static inline int security_tun_dev_create(void)
static inline void security_tun_dev_post_create(struct sock *sk)
static inline int security_tun_dev_attach(struct sock *sk)
int security_xfrm_policy_alloc(struct xfrm_sec_ctx **ctxp, struct xfrm_user_sec_ctx *sec_ctx);
int security_xfrm_policy_clone(struct xfrm_sec_ctx *old_ctx, struct xfrm_sec_ctx **new_ctxp);
void security_xfrm_policy_free(struct xfrm_sec_ctx *ctx);
int security_xfrm_policy_delete(struct xfrm_sec_ctx *ctx);
int security_xfrm_state_alloc(struct xfrm_state *x, struct xfrm_user_sec_ctx *sec_ctx);
int security_xfrm_state_alloc_acquire(struct xfrm_state *x,
struct xfrm_sec_ctx *polsec, u32 secid);
int security_xfrm_state_delete(struct xfrm_state *x);
void security_xfrm_state_free(struct xfrm_state *x);
int security_xfrm_policy_lookup(struct xfrm_sec_ctx *ctx, u32 fl_secid, u8 dir);
int security_xfrm_state_pol_flow_match(struct xfrm_state *x,
struct xfrm_policy *xp,
const struct flowi *fl);
int security_xfrm_decode_session(struct sk_buff *skb, u32 *secid);
void security_skb_classify_flow(struct sk_buff *skb, struct flowi *fl);
static inline int security_xfrm_policy_alloc(struct xfrm_sec_ctx **ctxp, struct xfrm_user_sec_ctx *sec_ctx)
static inline int security_xfrm_policy_clone(struct xfrm_sec_ctx *old, struct xfrm_sec_ctx **new_ctxp)
static inline void security_xfrm_policy_free(struct xfrm_sec_ctx *ctx)
static inline int security_xfrm_policy_delete(struct xfrm_sec_ctx *ctx)
static inline int security_xfrm_state_alloc(struct xfrm_state *x,
struct xfrm_user_sec_ctx *sec_ctx)
static inline int security_xfrm_state_alloc_acquire(struct xfrm_state *x,
struct xfrm_sec_ctx *polsec, u32 secid)
static inline void security_xfrm_state_free(struct xfrm_state *x)
static inline int security_xfrm_state_delete(struct xfrm_state *x)
static inline int security_xfrm_policy_lookup(struct xfrm_sec_ctx *ctx, u32 fl_secid, u8 dir)
static inline int security_xfrm_state_pol_flow_match(struct xfrm_state *x,
struct xfrm_policy *xp, const struct flowi *fl)
static inline int security_xfrm_decode_session(struct sk_buff *skb, u32 *secid)
static inline void security_skb_classify_flow(struct sk_buff *skb, struct flowi *fl)
int security_path_unlink(struct path *dir, struct dentry *dentry);
int security_path_mkdir(struct path *dir, struct dentry *dentry, int mode);
int security_path_rmdir(struct path *dir, struct dentry *dentry);
int security_path_mknod(struct path *dir, struct dentry *dentry, int mode,
unsigned int dev);
int security_path_truncate(struct path *path);
int security_path_symlink(struct path *dir, struct dentry *dentry,
const char *old_name);
int security_path_link(struct dentry *old_dentry, struct path *new_dir,
struct dentry *new_dentry);
int security_path_rename(struct path *old_dir, struct dentry *old_dentry,
struct path *new_dir, struct dentry *new_dentry);
int security_path_chmod(struct dentry *dentry, struct vfsmount *mnt,
mode_t mode);
int security_path_chown(struct path *path, uid_t uid, gid_t gid);
int security_path_chroot(struct path *path);
static inline int security_path_unlink(struct path *dir, struct dentry *dentry)
static inline int security_path_mkdir(struct path *dir, struct dentry *dentry,
int mode)
static inline int security_path_rmdir(struct path *dir, struct dentry *dentry)
static inline int security_path_mknod(struct path *dir, struct dentry *dentry,
int mode, unsigned int dev)
static inline int security_path_truncate(struct path *path)
static inline int security_path_symlink(struct path *dir, struct dentry *dentry,
const char *old_name)
static inline int security_path_link(struct dentry *old_dentry,
struct path *new_dir,
struct dentry *new_dentry)
static inline int security_path_rename(struct path *old_dir,
struct dentry *old_dentry,
struct path *new_dir,
struct dentry *new_dentry)
static inline int security_path_chmod(struct dentry *dentry,
struct vfsmount *mnt,
mode_t mode)
static inline int security_path_chown(struct path *path, uid_t uid, gid_t gid)
static inline int security_path_chroot(struct path *path)
int security_key_alloc(struct key *key, const struct cred *cred, unsigned long flags);
void security_key_free(struct key *key);
int security_key_permission(key_ref_t key_ref,
const struct cred *cred, key_perm_t perm);
int security_key_getsecurity(struct key *key, char **_buffer);
static inline int security_key_alloc(struct key *key,
const struct cred *cred,
unsigned long flags)
static inline void security_key_free(struct key *key)
static inline int security_key_permission(key_ref_t key_ref,
const struct cred *cred,
key_perm_t perm)
static inline int security_key_getsecurity(struct key *key, char **_buffer)
int security_audit_rule_init(u32 field, u32 op, char *rulestr, void **lsmrule);
int security_audit_rule_known(struct audit_krule *krule);
int security_audit_rule_match(u32 secid, u32 field, u32 op, void *lsmrule,
struct audit_context *actx);
void security_audit_rule_free(void *lsmrule);
static inline int security_audit_rule_init(u32 field, u32 op, char *rulestr,
void **lsmrule)
static inline int security_audit_rule_known(struct audit_krule *krule)
static inline int security_audit_rule_match(u32 secid, u32 field, u32 op,
void *lsmrule, struct audit_context *actx)
static inline void security_audit_rule_free(void *lsmrule)
extern struct dentry *securityfs_create_file(const char *name, mode_t mode,
struct dentry *parent, void *data,
const struct file_operations *fops);
extern struct dentry *securityfs_create_dir(const char *name, struct dentry *parent);
extern void securityfs_remove(struct dentry *dentry);
static inline struct dentry *securityfs_create_dir(const char *name,
struct dentry *parent)
static inline struct dentry *securityfs_create_file(const char *name,
mode_t mode,
struct dentry *parent,
void *data,
const struct file_operations *fops)
static inline void securityfs_remove(struct dentry *dentry)
static inline char *alloc_secdata(void)
static inline void free_secdata(void *secdata)
static inline char *alloc_secdata(void)
static inline void free_secdata(void *secdata)
