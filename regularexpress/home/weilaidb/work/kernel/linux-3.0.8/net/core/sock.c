static struct lock_class_key af_family_keys[AF_MAX];
static struct lock_class_key af_family_slock_keys[AF_MAX];
static const char *const af_family_key_strings[AF_MAX+1] = ;
static const char *const af_family_slock_key_strings[AF_MAX+1] = ;
static const char *const af_family_clock_key_strings[AF_MAX+1] = ;
static struct lock_class_key af_callback_keys[AF_MAX];
#define _SK_MEM_PACKETS		256
#define _SK_MEM_OVERHEAD	(sizeof(struct sk_buff) + 256)
#define SK_WMEM_MAX		(_SK_MEM_OVERHEAD * _SK_MEM_PACKETS)
#define SK_RMEM_MAX		(_SK_MEM_OVERHEAD * _SK_MEM_PACKETS)
__u32 sysctl_wmem_max __read_mostly = SK_WMEM_MAX;
__u32 sysctl_rmem_max __read_mostly = SK_RMEM_MAX;
__u32 sysctl_wmem_default __read_mostly = SK_WMEM_MAX;
__u32 sysctl_rmem_default __read_mostly = SK_RMEM_MAX;
int sysctl_optmem_max __read_mostly = sizeof(unsigned long)*(2*UIO_MAXIOV+512);
EXPORT_SYMBOL(sysctl_optmem_max);
#if defined(CONFIG_CGROUPS) && !defined(CONFIG_NET_CLS_CGROUP)
int net_cls_subsys_id = -1;
EXPORT_SYMBOL_GPL(net_cls_subsys_id);
static int sock_set_timeout(long *timeo_p, char __user *optval, int optlen)
static void sock_warn_obsolete_bsdism(const char *name)
static void sock_disable_timestamp(struct sock *sk, int flag)
int sock_queue_rcv_skb(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL(sock_queue_rcv_skb);
int sk_receive_skb(struct sock *sk, struct sk_buff *skb, const int nested)
EXPORT_SYMBOL(sk_receive_skb);
void sk_reset_txq(struct sock *sk)
EXPORT_SYMBOL(sk_reset_txq);
struct dst_entry *__sk_dst_check(struct sock *sk, u32 cookie)
EXPORT_SYMBOL(__sk_dst_check);
struct dst_entry *sk_dst_check(struct sock *sk, u32 cookie)
EXPORT_SYMBOL(sk_dst_check);
static int sock_bindtodevice(struct sock *sk, char __user *optval, int optlen)
static inline void sock_valbool_flag(struct sock *sk, int bit, int valbool)
int sock_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL(sock_setsockopt);
void cred_to_ucred(struct pid *pid, const struct cred *cred,
struct ucred *ucred)
EXPORT_SYMBOL_GPL(cred_to_ucred);
int sock_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static inline void sock_lock_init(struct sock *sk)
static void sock_copy(struct sock *nsk, const struct sock *osk)
static inline void sk_prot_clear_nulls(struct sock *sk, int size)
void sk_prot_clear_portaddr_nulls(struct sock *sk, int size)
EXPORT_SYMBOL(sk_prot_clear_portaddr_nulls);
static struct sock *sk_prot_alloc(struct proto *prot, gfp_t priority,
int family)
static void sk_prot_free(struct proto *prot, struct sock *sk)
void sock_update_classid(struct sock *sk)
EXPORT_SYMBOL(sock_update_classid);
struct sock *sk_alloc(struct net *net, int family, gfp_t priority,
struct proto *prot)
EXPORT_SYMBOL(sk_alloc);
static void __sk_free(struct sock *sk)
void sk_free(struct sock *sk)
EXPORT_SYMBOL(sk_free);
void sk_release_kernel(struct sock *sk)
EXPORT_SYMBOL(sk_release_kernel);
struct sock *sk_clone(const struct sock *sk, const gfp_t priority)
EXPORT_SYMBOL_GPL(sk_clone);
void sk_setup_caps(struct sock *sk, struct dst_entry *dst)
EXPORT_SYMBOL_GPL(sk_setup_caps);
void __init sk_init(void)
void sock_wfree(struct sk_buff *skb)
EXPORT_SYMBOL(sock_wfree);
void sock_rfree(struct sk_buff *skb)
EXPORT_SYMBOL(sock_rfree);
int sock_i_uid(struct sock *sk)
EXPORT_SYMBOL(sock_i_uid);
unsigned long sock_i_ino(struct sock *sk)
EXPORT_SYMBOL(sock_i_ino);
struct sk_buff *sock_wmalloc(struct sock *sk, unsigned long size, int force,
gfp_t priority)
EXPORT_SYMBOL(sock_wmalloc);
struct sk_buff *sock_rmalloc(struct sock *sk, unsigned long size, int force,
gfp_t priority)
void *sock_kmalloc(struct sock *sk, int size, gfp_t priority)
EXPORT_SYMBOL(sock_kmalloc);
void sock_kfree_s(struct sock *sk, void *mem, int size)
EXPORT_SYMBOL(sock_kfree_s);
static long sock_wait_for_wmem(struct sock *sk, long timeo)
struct sk_buff *sock_alloc_send_pskb(struct sock *sk, unsigned long header_len,
unsigned long data_len, int noblock,
int *errcode)
EXPORT_SYMBOL(sock_alloc_send_pskb);
struct sk_buff *sock_alloc_send_skb(struct sock *sk, unsigned long size,
int noblock, int *errcode)
EXPORT_SYMBOL(sock_alloc_send_skb);
static void __lock_sock(struct sock *sk)
__releases(&sk->sk_lock.slock)
__acquires(&sk->sk_lock.slock)
static void __release_sock(struct sock *sk)
__releases(&sk->sk_lock.slock)
__acquires(&sk->sk_lock.slock)
int sk_wait_data(struct sock *sk, long *timeo)
EXPORT_SYMBOL(sk_wait_data);
int __sk_mem_schedule(struct sock *sk, int size, int kind)
EXPORT_SYMBOL(__sk_mem_schedule);
void __sk_mem_reclaim(struct sock *sk)
EXPORT_SYMBOL(__sk_mem_reclaim);
int sock_no_bind(struct socket *sock, struct sockaddr *saddr, int len)
EXPORT_SYMBOL(sock_no_bind);
int sock_no_connect(struct socket *sock, struct sockaddr *saddr,
int len, int flags)
EXPORT_SYMBOL(sock_no_connect);
int sock_no_socketpair(struct socket *sock1, struct socket *sock2)
EXPORT_SYMBOL(sock_no_socketpair);
int sock_no_accept(struct socket *sock, struct socket *newsock, int flags)
EXPORT_SYMBOL(sock_no_accept);
int sock_no_getname(struct socket *sock, struct sockaddr *saddr,
int *len, int peer)
EXPORT_SYMBOL(sock_no_getname);
unsigned int sock_no_poll(struct file *file, struct socket *sock, poll_table *pt)
EXPORT_SYMBOL(sock_no_poll);
int sock_no_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(sock_no_ioctl);
int sock_no_listen(struct socket *sock, int backlog)
EXPORT_SYMBOL(sock_no_listen);
int sock_no_shutdown(struct socket *sock, int how)
EXPORT_SYMBOL(sock_no_shutdown);
int sock_no_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL(sock_no_setsockopt);
int sock_no_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL(sock_no_getsockopt);
int sock_no_sendmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *m,
size_t len)
EXPORT_SYMBOL(sock_no_sendmsg);
int sock_no_recvmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *m,
size_t len, int flags)
EXPORT_SYMBOL(sock_no_recvmsg);
int sock_no_mmap(struct file *file, struct socket *sock, struct vm_area_struct *vma)
EXPORT_SYMBOL(sock_no_mmap);
ssize_t sock_no_sendpage(struct socket *sock, struct page *page, int offset, size_t size, int flags)
EXPORT_SYMBOL(sock_no_sendpage);
static void sock_def_wakeup(struct sock *sk)
static void sock_def_error_report(struct sock *sk)
static void sock_def_readable(struct sock *sk, int len)
static void sock_def_write_space(struct sock *sk)
static void sock_def_destruct(struct sock *sk)
void sk_send_sigurg(struct sock *sk)
EXPORT_SYMBOL(sk_send_sigurg);
void sk_reset_timer(struct sock *sk, struct timer_list* timer,
unsigned long expires)
EXPORT_SYMBOL(sk_reset_timer);
void sk_stop_timer(struct sock *sk, struct timer_list* timer)
EXPORT_SYMBOL(sk_stop_timer);
void sock_init_data(struct socket *sock, struct sock *sk)
EXPORT_SYMBOL(sock_init_data);
void lock_sock_nested(struct sock *sk, int subclass)
EXPORT_SYMBOL(lock_sock_nested);
void release_sock(struct sock *sk)
EXPORT_SYMBOL(release_sock);
bool lock_sock_fast(struct sock *sk)
EXPORT_SYMBOL(lock_sock_fast);
int sock_get_timestamp(struct sock *sk, struct timeval __user *userstamp)
EXPORT_SYMBOL(sock_get_timestamp);
int sock_get_timestampns(struct sock *sk, struct timespec __user *userstamp)
EXPORT_SYMBOL(sock_get_timestampns);
void sock_enable_timestamp(struct sock *sk, int flag)
int sock_common_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL(sock_common_getsockopt);
int compat_sock_common_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL(compat_sock_common_getsockopt);
int sock_common_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
EXPORT_SYMBOL(sock_common_recvmsg);
int sock_common_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL(sock_common_setsockopt);
int compat_sock_common_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL(compat_sock_common_setsockopt);
void sk_common_release(struct sock *sk)
EXPORT_SYMBOL(sk_common_release);
static DEFINE_RWLOCK(proto_list_lock);
static LIST_HEAD(proto_list);
#define PROTO_INUSE_NR	64
struct prot_inuse ;
static DECLARE_BITMAP(proto_inuse_idx, PROTO_INUSE_NR);
void sock_prot_inuse_add(struct net *net, struct proto *prot, int val)
EXPORT_SYMBOL_GPL(sock_prot_inuse_add);
int sock_prot_inuse_get(struct net *net, struct proto *prot)
EXPORT_SYMBOL_GPL(sock_prot_inuse_get);
static int __net_init sock_inuse_init_net(struct net *net)
static void __net_exit sock_inuse_exit_net(struct net *net)
static struct pernet_operations net_inuse_ops = ;
static __init int net_inuse_init(void)
core_initcall(net_inuse_init);
static DEFINE_PER_CPU(struct prot_inuse, prot_inuse);
void sock_prot_inuse_add(struct net *net, struct proto *prot, int val)
EXPORT_SYMBOL_GPL(sock_prot_inuse_add);
int sock_prot_inuse_get(struct net *net, struct proto *prot)
EXPORT_SYMBOL_GPL(sock_prot_inuse_get);
static void assign_proto_idx(struct proto *prot)
static void release_proto_idx(struct proto *prot)
static inline void assign_proto_idx(struct proto *prot)
static inline void release_proto_idx(struct proto *prot)
int proto_register(struct proto *prot, int alloc_slab)
EXPORT_SYMBOL(proto_register);
void proto_unregister(struct proto *prot)
EXPORT_SYMBOL(proto_unregister);
static void *proto_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(proto_list_lock)
static void *proto_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void proto_seq_stop(struct seq_file *seq, void *v)
__releases(proto_list_lock)
static char proto_method_implemented(const void *method)
static void proto_seq_printf(struct seq_file *seq, struct proto *proto)
static int proto_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations proto_seq_ops = ;
static int proto_seq_open(struct inode *inode, struct file *file)
static const struct file_operations proto_seq_fops = ;
static __net_init int proto_init_net(struct net *net)
static __net_exit void proto_exit_net(struct net *net)
static __net_initdata struct pernet_operations proto_net_ops = ;
static int __init proto_init(void)
subsys_initcall(proto_init);
