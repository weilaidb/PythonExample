#define NUM_SEL_MNT_OPTS 5
extern int selinux_nlmsg_lookup(u16 sclass, u16 nlmsg_type, u32 *perm);
extern struct security_operations *security_ops;
atomic_t selinux_secmark_refcount = ATOMIC_INIT(0);
int selinux_enforcing;
static int __init enforcing_setup(char *str)
__setup("enforcing=", enforcing_setup);
int selinux_enabled = CONFIG_SECURITY_SELINUX_BOOTPARAM_VALUE;
static int __init selinux_enabled_setup(char *str)
__setup("selinux=", selinux_enabled_setup);
int selinux_enabled = 1;
static struct kmem_cache *sel_inode_cache;
static int selinux_secmark_enabled(void)
static void cred_init_security(void)
static inline u32 cred_sid(const struct cred *cred)
static inline u32 task_sid(const struct task_struct *task)
static inline u32 current_sid(void)
static int inode_alloc_security(struct inode *inode)
static void inode_free_security(struct inode *inode)
static int file_alloc_security(struct file *file)
static void file_free_security(struct file *file)
static int superblock_alloc_security(struct super_block *sb)
static void superblock_free_security(struct super_block *sb)
extern int ss_initialized;
static const char *labeling_behaviors[6] = ;
static int inode_doinit_with_dentry(struct inode *inode, struct dentry *opt_dentry);
static inline int inode_doinit(struct inode *inode)
enum ;
static const match_table_t tokens = ;
#define SEL_MOUNT_FAIL_MSG "SELinux:  duplicate or incompatible mount options\n"
static int may_context_mount_sb_relabel(u32 sid,
struct superblock_security_struct *sbsec,
const struct cred *cred)
static int may_context_mount_inode_relabel(u32 sid,
struct superblock_security_struct *sbsec,
const struct cred *cred)
static int sb_finish_set_opts(struct super_block *sb)
static int selinux_get_mnt_opts(const struct super_block *sb,
struct security_mnt_opts *opts)
static int bad_option(struct superblock_security_struct *sbsec, char flag,
u32 old_sid, u32 new_sid)
static int selinux_set_mnt_opts(struct super_block *sb,
struct security_mnt_opts *opts)
static void selinux_sb_clone_mnt_opts(const struct super_block *oldsb,
struct super_block *newsb)
static int selinux_parse_opts_str(char *options,
struct security_mnt_opts *opts)
static int superblock_doinit(struct super_block *sb, void *data)
static void selinux_write_opts(struct seq_file *m,
struct security_mnt_opts *opts)
static int selinux_sb_show_options(struct seq_file *m, struct super_block *sb)
static inline u16 inode_mode_to_security_class(umode_t mode)
static inline int default_protocol_stream(int protocol)
static inline int default_protocol_dgram(int protocol)
static inline u16 socket_type_to_security_class(int family, int type, int protocol)
static int selinux_proc_get_sid(struct dentry *dentry,
u16 tclass,
u32 *sid)
static int selinux_proc_get_sid(struct dentry *dentry,
u16 tclass,
u32 *sid)
static int inode_doinit_with_dentry(struct inode *inode, struct dentry *opt_dentry)
static inline u32 signal_to_av(int sig)
static int cred_has_perm(const struct cred *actor,
const struct cred *target,
u32 perms)
static int task_has_perm(const struct task_struct *tsk1,
const struct task_struct *tsk2,
u32 perms)
static int current_has_perm(const struct task_struct *tsk,
u32 perms)
#if CAP_LAST_CAP > 63
#error Fix SELinux to handle capabilities > 63.
static int task_has_capability(struct task_struct *tsk,
const struct cred *cred,
int cap, int audit)
static int task_has_system(struct task_struct *tsk,
u32 perms)
static int inode_has_perm(const struct cred *cred,
struct inode *inode,
u32 perms,
struct common_audit_data *adp,
unsigned flags)
static int inode_has_perm_noadp(const struct cred *cred,
struct inode *inode,
u32 perms,
unsigned flags)
static inline int dentry_has_perm(const struct cred *cred,
struct dentry *dentry,
u32 av)
static inline int path_has_perm(const struct cred *cred,
struct path *path,
u32 av)
static int file_has_perm(const struct cred *cred,
struct file *file,
u32 av)
static int may_create(struct inode *dir,
struct dentry *dentry,
u16 tclass)
static int may_create_key(u32 ksid,
struct task_struct *ctx)
#define MAY_LINK	0
#define MAY_UNLINK	1
#define MAY_RMDIR	2
static int may_link(struct inode *dir,
struct dentry *dentry,
int kind)
static inline int may_rename(struct inode *old_dir,
struct dentry *old_dentry,
struct inode *new_dir,
struct dentry *new_dentry)
static int superblock_has_perm(const struct cred *cred,
struct super_block *sb,
u32 perms,
struct common_audit_data *ad)
static inline u32 file_mask_to_av(int mode, int mask)
static inline u32 file_to_av(struct file *file)
static inline u32 open_file_to_av(struct file *file)
static int selinux_ptrace_access_check(struct task_struct *child,
unsigned int mode)
static int selinux_ptrace_traceme(struct task_struct *parent)
static int selinux_capget(struct task_struct *target, kernel_cap_t *effective,
kernel_cap_t *inheritable, kernel_cap_t *permitted)
static int selinux_capset(struct cred *new, const struct cred *old,
const kernel_cap_t *effective,
const kernel_cap_t *inheritable,
const kernel_cap_t *permitted)
static int selinux_capable(struct task_struct *tsk, const struct cred *cred,
struct user_namespace *ns, int cap, int audit)
static int selinux_quotactl(int cmds, int type, int id, struct super_block *sb)
static int selinux_quota_on(struct dentry *dentry)
static int selinux_syslog(int type)
static int selinux_vm_enough_memory(struct mm_struct *mm, long pages)
static int selinux_bprm_set_creds(struct linux_binprm *bprm)
static int selinux_bprm_secureexec(struct linux_binprm *bprm)
extern struct vfsmount *selinuxfs_mount;
extern struct dentry *selinux_null;
static inline void flush_unauthorized_files(const struct cred *cred,
struct files_struct *files)
static void selinux_bprm_committing_creds(struct linux_binprm *bprm)
static void selinux_bprm_committed_creds(struct linux_binprm *bprm)
static int selinux_sb_alloc_security(struct super_block *sb)
static void selinux_sb_free_security(struct super_block *sb)
static inline int match_prefix(char *prefix, int plen, char *option, int olen)
static inline int selinux_option(char *option, int len)
static inline void take_option(char **to, char *from, int *first, int len)
static inline void take_selinux_option(char **to, char *from, int *first,
int len)
static int selinux_sb_copy_data(char *orig, char *copy)
static int selinux_sb_remount(struct super_block *sb, void *data)
static int selinux_sb_kern_mount(struct super_block *sb, int flags, void *data)
static int selinux_sb_statfs(struct dentry *dentry)
static int selinux_mount(char *dev_name,
struct path *path,
char *type,
unsigned long flags,
void *data)
static int selinux_umount(struct vfsmount *mnt, int flags)
static int selinux_inode_alloc_security(struct inode *inode)
static void selinux_inode_free_security(struct inode *inode)
static int selinux_inode_init_security(struct inode *inode, struct inode *dir,
const struct qstr *qstr, char **name,
void **value, size_t *len)
static int selinux_inode_create(struct inode *dir, struct dentry *dentry, int mask)
static int selinux_inode_link(struct dentry *old_dentry, struct inode *dir, struct dentry *new_dentry)
static int selinux_inode_unlink(struct inode *dir, struct dentry *dentry)
static int selinux_inode_symlink(struct inode *dir, struct dentry *dentry, const char *name)
static int selinux_inode_mkdir(struct inode *dir, struct dentry *dentry, int mask)
static int selinux_inode_rmdir(struct inode *dir, struct dentry *dentry)
static int selinux_inode_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t dev)
static int selinux_inode_rename(struct inode *old_inode, struct dentry *old_dentry,
struct inode *new_inode, struct dentry *new_dentry)
static int selinux_inode_readlink(struct dentry *dentry)
static int selinux_inode_follow_link(struct dentry *dentry, struct nameidata *nameidata)
static int selinux_inode_permission(struct inode *inode, int mask, unsigned flags)
static int selinux_inode_setattr(struct dentry *dentry, struct iattr *iattr)
static int selinux_inode_getattr(struct vfsmount *mnt, struct dentry *dentry)
static int selinux_inode_setotherxattr(struct dentry *dentry, const char *name)
static int selinux_inode_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
static void selinux_inode_post_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size,
int flags)
static int selinux_inode_getxattr(struct dentry *dentry, const char *name)
static int selinux_inode_listxattr(struct dentry *dentry)
static int selinux_inode_removexattr(struct dentry *dentry, const char *name)
static int selinux_inode_getsecurity(const struct inode *inode, const char *name, void **buffer, bool alloc)
static int selinux_inode_setsecurity(struct inode *inode, const char *name,
const void *value, size_t size, int flags)
static int selinux_inode_listsecurity(struct inode *inode, char *buffer, size_t buffer_size)
static void selinux_inode_getsecid(const struct inode *inode, u32 *secid)
static int selinux_revalidate_file_permission(struct file *file, int mask)
static int selinux_file_permission(struct file *file, int mask)
static int selinux_file_alloc_security(struct file *file)
static void selinux_file_free_security(struct file *file)
static int selinux_file_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int default_noexec;
static int file_map_prot_check(struct file *file, unsigned long prot, int shared)
static int selinux_file_mmap(struct file *file, unsigned long reqprot,
unsigned long prot, unsigned long flags,
unsigned long addr, unsigned long addr_only)
static int selinux_file_mprotect(struct vm_area_struct *vma,
unsigned long reqprot,
unsigned long prot)
static int selinux_file_lock(struct file *file, unsigned int cmd)
static int selinux_file_fcntl(struct file *file, unsigned int cmd,
unsigned long arg)
static int selinux_file_set_fowner(struct file *file)
static int selinux_file_send_sigiotask(struct task_struct *tsk,
struct fown_struct *fown, int signum)
static int selinux_file_receive(struct file *file)
static int selinux_dentry_open(struct file *file, const struct cred *cred)
static int selinux_task_create(unsigned long clone_flags)
static int selinux_cred_alloc_blank(struct cred *cred, gfp_t gfp)
static void selinux_cred_free(struct cred *cred)
static int selinux_cred_prepare(struct cred *new, const struct cred *old,
gfp_t gfp)
static void selinux_cred_transfer(struct cred *new, const struct cred *old)
static int selinux_kernel_act_as(struct cred *new, u32 secid)
static int selinux_kernel_create_files_as(struct cred *new, struct inode *inode)
static int selinux_kernel_module_request(char *kmod_name)
static int selinux_task_setpgid(struct task_struct *p, pid_t pgid)
static int selinux_task_getpgid(struct task_struct *p)
static int selinux_task_getsid(struct task_struct *p)
static void selinux_task_getsecid(struct task_struct *p, u32 *secid)
static int selinux_task_setnice(struct task_struct *p, int nice)
static int selinux_task_setioprio(struct task_struct *p, int ioprio)
static int selinux_task_getioprio(struct task_struct *p)
static int selinux_task_setrlimit(struct task_struct *p, unsigned int resource,
struct rlimit *new_rlim)
static int selinux_task_setscheduler(struct task_struct *p)
static int selinux_task_getscheduler(struct task_struct *p)
static int selinux_task_movememory(struct task_struct *p)
static int selinux_task_kill(struct task_struct *p, struct siginfo *info,
int sig, u32 secid)
static int selinux_task_wait(struct task_struct *p)
static void selinux_task_to_inode(struct task_struct *p,
struct inode *inode)
static int selinux_parse_skb_ipv4(struct sk_buff *skb,
struct common_audit_data *ad, u8 *proto)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int selinux_parse_skb_ipv6(struct sk_buff *skb,
struct common_audit_data *ad, u8 *proto)
static int selinux_parse_skb(struct sk_buff *skb, struct common_audit_data *ad,
char **_addrp, int src, u8 *proto)
static int selinux_skb_peerlbl_sid(struct sk_buff *skb, u16 family, u32 *sid)
static int socket_sockcreate_sid(const struct task_security_struct *tsec,
u16 secclass, u32 *socksid)
static int sock_has_perm(struct task_struct *task, struct sock *sk, u32 perms)
static int selinux_socket_create(int family, int type,
int protocol, int kern)
static int selinux_socket_post_create(struct socket *sock, int family,
int type, int protocol, int kern)
static int selinux_socket_bind(struct socket *sock, struct sockaddr *address, int addrlen)
static int selinux_socket_connect(struct socket *sock, struct sockaddr *address, int addrlen)
static int selinux_socket_listen(struct socket *sock, int backlog)
static int selinux_socket_accept(struct socket *sock, struct socket *newsock)
static int selinux_socket_sendmsg(struct socket *sock, struct msghdr *msg,
int size)
static int selinux_socket_recvmsg(struct socket *sock, struct msghdr *msg,
int size, int flags)
static int selinux_socket_getsockname(struct socket *sock)
static int selinux_socket_getpeername(struct socket *sock)
static int selinux_socket_setsockopt(struct socket *sock, int level, int optname)
static int selinux_socket_getsockopt(struct socket *sock, int level,
int optname)
static int selinux_socket_shutdown(struct socket *sock, int how)
static int selinux_socket_unix_stream_connect(struct sock *sock,
struct sock *other,
struct sock *newsk)
static int selinux_socket_unix_may_send(struct socket *sock,
struct socket *other)
static int selinux_inet_sys_rcv_skb(int ifindex, char *addrp, u16 family,
u32 peer_sid,
struct common_audit_data *ad)
static int selinux_sock_rcv_skb_compat(struct sock *sk, struct sk_buff *skb,
u16 family)
static int selinux_socket_sock_rcv_skb(struct sock *sk, struct sk_buff *skb)
static int selinux_socket_getpeersec_stream(struct socket *sock, char __user *optval,
int __user *optlen, unsigned len)
static int selinux_socket_getpeersec_dgram(struct socket *sock, struct sk_buff *skb, u32 *secid)
static int selinux_sk_alloc_security(struct sock *sk, int family, gfp_t priority)
static void selinux_sk_free_security(struct sock *sk)
static void selinux_sk_clone_security(const struct sock *sk, struct sock *newsk)
static void selinux_sk_getsecid(struct sock *sk, u32 *secid)
static void selinux_sock_graft(struct sock *sk, struct socket *parent)
static int selinux_inet_conn_request(struct sock *sk, struct sk_buff *skb,
struct request_sock *req)
static void selinux_inet_csk_clone(struct sock *newsk,
const struct request_sock *req)
static void selinux_inet_conn_established(struct sock *sk, struct sk_buff *skb)
static int selinux_secmark_relabel_packet(u32 sid)
static void selinux_secmark_refcount_inc(void)
static void selinux_secmark_refcount_dec(void)
static void selinux_req_classify_flow(const struct request_sock *req,
struct flowi *fl)
static int selinux_tun_dev_create(void)
static void selinux_tun_dev_post_create(struct sock *sk)
static int selinux_tun_dev_attach(struct sock *sk)
static int selinux_nlmsg_perm(struct sock *sk, struct sk_buff *skb)
static unsigned int selinux_ip_forward(struct sk_buff *skb, int ifindex,
u16 family)
static unsigned int selinux_ipv4_forward(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static unsigned int selinux_ipv6_forward(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int selinux_ip_output(struct sk_buff *skb,
u16 family)
static unsigned int selinux_ipv4_output(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int selinux_ip_postroute_compat(struct sk_buff *skb,
int ifindex,
u16 family)
static unsigned int selinux_ip_postroute(struct sk_buff *skb, int ifindex,
u16 family)
static unsigned int selinux_ipv4_postroute(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static unsigned int selinux_ipv6_postroute(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static int selinux_netlink_send(struct sock *sk, struct sk_buff *skb)
static int selinux_netlink_recv(struct sk_buff *skb, int capability)
static int ipc_alloc_security(struct task_struct *task,
struct kern_ipc_perm *perm,
u16 sclass)
static void ipc_free_security(struct kern_ipc_perm *perm)
static int msg_msg_alloc_security(struct msg_msg *msg)
static void msg_msg_free_security(struct msg_msg *msg)
static int ipc_has_perm(struct kern_ipc_perm *ipc_perms,
u32 perms)
static int selinux_msg_msg_alloc_security(struct msg_msg *msg)
static void selinux_msg_msg_free_security(struct msg_msg *msg)
static int selinux_msg_queue_alloc_security(struct msg_queue *msq)
static void selinux_msg_queue_free_security(struct msg_queue *msq)
static int selinux_msg_queue_associate(struct msg_queue *msq, int msqflg)
static int selinux_msg_queue_msgctl(struct msg_queue *msq, int cmd)
static int selinux_msg_queue_msgsnd(struct msg_queue *msq, struct msg_msg *msg, int msqflg)
static int selinux_msg_queue_msgrcv(struct msg_queue *msq, struct msg_msg *msg,
struct task_struct *target,
long type, int mode)
static int selinux_shm_alloc_security(struct shmid_kernel *shp)
static void selinux_shm_free_security(struct shmid_kernel *shp)
static int selinux_shm_associate(struct shmid_kernel *shp, int shmflg)
static int selinux_shm_shmctl(struct shmid_kernel *shp, int cmd)
static int selinux_shm_shmat(struct shmid_kernel *shp,
char __user *shmaddr, int shmflg)
static int selinux_sem_alloc_security(struct sem_array *sma)
static void selinux_sem_free_security(struct sem_array *sma)
static int selinux_sem_associate(struct sem_array *sma, int semflg)
static int selinux_sem_semctl(struct sem_array *sma, int cmd)
static int selinux_sem_semop(struct sem_array *sma,
struct sembuf *sops, unsigned nsops, int alter)
static int selinux_ipc_permission(struct kern_ipc_perm *ipcp, short flag)
static void selinux_ipc_getsecid(struct kern_ipc_perm *ipcp, u32 *secid)
static void selinux_d_instantiate(struct dentry *dentry, struct inode *inode)
static int selinux_getprocattr(struct task_struct *p,
char *name, char **value)
static int selinux_setprocattr(struct task_struct *p,
char *name, void *value, size_t size)
static int selinux_secid_to_secctx(u32 secid, char **secdata, u32 *seclen)
static int selinux_secctx_to_secid(const char *secdata, u32 seclen, u32 *secid)
static void selinux_release_secctx(char *secdata, u32 seclen)
static int selinux_inode_notifysecctx(struct inode *inode, void *ctx, u32 ctxlen)
static int selinux_inode_setsecctx(struct dentry *dentry, void *ctx, u32 ctxlen)
static int selinux_inode_getsecctx(struct inode *inode, void **ctx, u32 *ctxlen)
static int selinux_key_alloc(struct key *k, const struct cred *cred,
unsigned long flags)
static void selinux_key_free(struct key *k)
static int selinux_key_permission(key_ref_t key_ref,
const struct cred *cred,
key_perm_t perm)
static int selinux_key_getsecurity(struct key *key, char **_buffer)
static struct security_operations selinux_ops = ;
static __init int selinux_init(void)
static void delayed_superblock_init(struct super_block *sb, void *unused)
void selinux_complete_init(void)
security_initcall(selinux_init);
#if defined(CONFIG_NETFILTER)
static struct nf_hook_ops selinux_ipv4_ops[] = ;
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static struct nf_hook_ops selinux_ipv6_ops[] = ;
static int __init selinux_nf_ip_init(void)
__initcall(selinux_nf_ip_init);
static void selinux_nf_ip_exit(void)
#define selinux_nf_ip_exit()
static int selinux_disabled;
int selinux_disable(void)
