#define _SOCK_H
#define SOCK_DEBUGGING
#define SOCK_DEBUG(sk, msg...) do  while (0)
static inline void __attribute__ ((format (printf, 2, 3)))
SOCK_DEBUG(struct sock *sk, const char *msg, ...)
typedef struct  socket_lock_t;
struct sock;
struct proto;
struct net;
struct sock_common ;
struct sock ;
static inline struct sock *sk_entry(const struct hlist_node *node)
static inline struct sock *__sk_head(const struct hlist_head *head)
static inline struct sock *sk_head(const struct hlist_head *head)
static inline struct sock *__sk_nulls_head(const struct hlist_nulls_head *head)
static inline struct sock *sk_nulls_head(const struct hlist_nulls_head *head)
static inline struct sock *sk_next(const struct sock *sk)
static inline struct sock *sk_nulls_next(const struct sock *sk)
static inline int sk_unhashed(const struct sock *sk)
static inline int sk_hashed(const struct sock *sk)
static __inline__ void sk_node_init(struct hlist_node *node)
static __inline__ void sk_nulls_node_init(struct hlist_nulls_node *node)
static __inline__ void __sk_del_node(struct sock *sk)
static __inline__ int __sk_del_node_init(struct sock *sk)
static inline void sock_hold(struct sock *sk)
static inline void __sock_put(struct sock *sk)
static __inline__ int sk_del_node_init(struct sock *sk)
#define sk_del_node_init_rcu(sk)	sk_del_node_init(sk)
static __inline__ int __sk_nulls_del_node_init_rcu(struct sock *sk)
static __inline__ int sk_nulls_del_node_init_rcu(struct sock *sk)
static __inline__ void __sk_add_node(struct sock *sk, struct hlist_head *list)
static __inline__ void sk_add_node(struct sock *sk, struct hlist_head *list)
static __inline__ void sk_add_node_rcu(struct sock *sk, struct hlist_head *list)
static __inline__ void __sk_nulls_add_node_rcu(struct sock *sk, struct hlist_nulls_head *list)
static __inline__ void sk_nulls_add_node_rcu(struct sock *sk, struct hlist_nulls_head *list)
static __inline__ void __sk_del_bind_node(struct sock *sk)
static __inline__ void sk_add_bind_node(struct sock *sk,
struct hlist_head *list)
#define sk_for_each(__sk, node, list) \
hlist_for_each_entry(__sk, node, list, sk_node)
#define sk_for_each_rcu(__sk, node, list) \
hlist_for_each_entry_rcu(__sk, node, list, sk_node)
#define sk_nulls_for_each(__sk, node, list) \
hlist_nulls_for_each_entry(__sk, node, list, sk_nulls_node)
#define sk_nulls_for_each_rcu(__sk, node, list) \
hlist_nulls_for_each_entry_rcu(__sk, node, list, sk_nulls_node)
#define sk_for_each_from(__sk, node) \
if (__sk && ()) \
hlist_for_each_entry_from(__sk, node, sk_node)
#define sk_nulls_for_each_from(__sk, node) \
if (__sk && ()) \
hlist_nulls_for_each_entry_from(__sk, node, sk_nulls_node)
#define sk_for_each_safe(__sk, node, tmp, list) \
hlist_for_each_entry_safe(__sk, node, tmp, list, sk_node)
#define sk_for_each_bound(__sk, node, list) \
hlist_for_each_entry(__sk, node, list, sk_bind_node)
enum sock_flags ;
static inline void sock_copy_flags(struct sock *nsk, struct sock *osk)
static inline void sock_set_flag(struct sock *sk, enum sock_flags flag)
static inline void sock_reset_flag(struct sock *sk, enum sock_flags flag)
static inline int sock_flag(struct sock *sk, enum sock_flags flag)
static inline void sk_acceptq_removed(struct sock *sk)
static inline void sk_acceptq_added(struct sock *sk)
static inline int sk_acceptq_is_full(struct sock *sk)
static inline int sk_stream_min_wspace(struct sock *sk)
static inline int sk_stream_wspace(struct sock *sk)
extern void sk_stream_write_space(struct sock *sk);
static inline int sk_stream_memory_free(struct sock *sk)
static inline void __sk_add_backlog(struct sock *sk, struct sk_buff *skb)
static inline bool sk_rcvqueues_full(const struct sock *sk, const struct sk_buff *skb)
static inline __must_check int sk_add_backlog(struct sock *sk, struct sk_buff *skb)
static inline int sk_backlog_rcv(struct sock *sk, struct sk_buff *skb)
static inline void sock_rps_record_flow(const struct sock *sk)
static inline void sock_rps_reset_flow(const struct sock *sk)
static inline void sock_rps_save_rxhash(struct sock *sk, u32 rxhash)
#define sk_wait_event(__sk, __timeo, __condition)			\
()
extern int sk_stream_wait_connect(struct sock *sk, long *timeo_p);
extern int sk_stream_wait_memory(struct sock *sk, long *timeo_p);
extern void sk_stream_wait_close(struct sock *sk, long timeo_p);
extern int sk_stream_error(struct sock *sk, int flags, int err);
extern void sk_stream_kill_queues(struct sock *sk);
extern int sk_wait_data(struct sock *sk, long *timeo);
struct request_sock_ops;
struct timewait_sock_ops;
struct inet_hashinfo;
struct raw_hashinfo;
struct proto ;
extern int proto_register(struct proto *prot, int alloc_slab);
extern void proto_unregister(struct proto *prot);
static inline void sk_refcnt_debug_inc(struct sock *sk)
static inline void sk_refcnt_debug_dec(struct sock *sk)
static inline void sk_refcnt_debug_release(const struct sock *sk)
#define sk_refcnt_debug_inc(sk) do  while (0)
#define sk_refcnt_debug_dec(sk) do  while (0)
#define sk_refcnt_debug_release(sk) do  while (0)
extern void sock_prot_inuse_add(struct net *net, struct proto *prot, int inc);
extern int sock_prot_inuse_get(struct net *net, struct proto *proto);
static void inline sock_prot_inuse_add(struct net *net, struct proto *prot,
int inc)
static inline void __sk_prot_rehash(struct sock *sk)
void sk_prot_clear_portaddr_nulls(struct sock *sk, int size);
#define SOCK_DESTROY_TIME (10*HZ)
#define PROT_SOCK	1024
#define SHUTDOWN_MASK	3
#define RCV_SHUTDOWN	1
#define SEND_SHUTDOWN	2
#define SOCK_SNDBUF_LOCK	1
#define SOCK_RCVBUF_LOCK	2
#define SOCK_BINDADDR_LOCK	4
#define SOCK_BINDPORT_LOCK	8
struct sock_iocb ;
static inline struct sock_iocb *kiocb_to_siocb(struct kiocb *iocb)
static inline struct kiocb *siocb_to_kiocb(struct sock_iocb *si)
struct socket_alloc ;
static inline struct socket *SOCKET_I(struct inode *inode)
static inline struct inode *SOCK_INODE(struct socket *socket)
extern int __sk_mem_schedule(struct sock *sk, int size, int kind);
extern void __sk_mem_reclaim(struct sock *sk);
#define SK_MEM_QUANTUM ((int)PAGE_SIZE)
#define SK_MEM_QUANTUM_SHIFT ilog2(SK_MEM_QUANTUM)
#define SK_MEM_SEND	0
#define SK_MEM_RECV	1
static inline int sk_mem_pages(int amt)
static inline int sk_has_account(struct sock *sk)
static inline int sk_wmem_schedule(struct sock *sk, int size)
static inline int sk_rmem_schedule(struct sock *sk, int size)
static inline void sk_mem_reclaim(struct sock *sk)
static inline void sk_mem_reclaim_partial(struct sock *sk)
static inline void sk_mem_charge(struct sock *sk, int size)
static inline void sk_mem_uncharge(struct sock *sk, int size)
static inline void sk_wmem_free_skb(struct sock *sk, struct sk_buff *skb)
#define sock_owned_by_user(sk)	((sk)->sk_lock.owned)
#define sock_lock_init_class_and_name(sk, sname, skey, name, key) 	\
do  while (0)
extern void lock_sock_nested(struct sock *sk, int subclass);
static inline void lock_sock(struct sock *sk)
extern void release_sock(struct sock *sk);
#define bh_lock_sock(__sk)	spin_lock(&((__sk)->sk_lock.slock))
#define bh_lock_sock_nested(__sk) \
spin_lock_nested(&((__sk)->sk_lock.slock), \
SINGLE_DEPTH_NESTING)
#define bh_unlock_sock(__sk)	spin_unlock(&((__sk)->sk_lock.slock))
extern bool lock_sock_fast(struct sock *sk);
static inline void unlock_sock_fast(struct sock *sk, bool slow)
extern struct sock		*sk_alloc(struct net *net, int family,
gfp_t priority,
struct proto *prot);
extern void			sk_free(struct sock *sk);
extern void			sk_release_kernel(struct sock *sk);
extern struct sock		*sk_clone(const struct sock *sk,
const gfp_t priority);
extern struct sk_buff		*sock_wmalloc(struct sock *sk,
unsigned long size, int force,
gfp_t priority);
extern struct sk_buff		*sock_rmalloc(struct sock *sk,
unsigned long size, int force,
gfp_t priority);
extern void			sock_wfree(struct sk_buff *skb);
extern void			sock_rfree(struct sk_buff *skb);
extern int			sock_setsockopt(struct socket *sock, int level,
int op, char __user *optval,
unsigned int optlen);
extern int			sock_getsockopt(struct socket *sock, int level,
int op, char __user *optval,
int __user *optlen);
extern struct sk_buff 		*sock_alloc_send_skb(struct sock *sk,
unsigned long size,
int noblock,
int *errcode);
extern struct sk_buff 		*sock_alloc_send_pskb(struct sock *sk,
unsigned long header_len,
unsigned long data_len,
int noblock,
int *errcode);
extern void *sock_kmalloc(struct sock *sk, int size,
gfp_t priority);
extern void sock_kfree_s(struct sock *sk, void *mem, int size);
extern void sk_send_sigurg(struct sock *sk);
extern void sock_update_classid(struct sock *sk);
static inline void sock_update_classid(struct sock *sk)
extern int                      sock_no_bind(struct socket *,
struct sockaddr *, int);
extern int                      sock_no_connect(struct socket *,
struct sockaddr *, int, int);
extern int                      sock_no_socketpair(struct socket *,
struct socket *);
extern int                      sock_no_accept(struct socket *,
struct socket *, int);
extern int                      sock_no_getname(struct socket *,
struct sockaddr *, int *, int);
extern unsigned int             sock_no_poll(struct file *, struct socket *,
struct poll_table_struct *);
extern int                      sock_no_ioctl(struct socket *, unsigned int,
unsigned long);
extern int			sock_no_listen(struct socket *, int);
extern int                      sock_no_shutdown(struct socket *, int);
extern int			sock_no_getsockopt(struct socket *, int , int,
char __user *, int __user *);
extern int			sock_no_setsockopt(struct socket *, int, int,
char __user *, unsigned int);
extern int                      sock_no_sendmsg(struct kiocb *, struct socket *,
struct msghdr *, size_t);
extern int                      sock_no_recvmsg(struct kiocb *, struct socket *,
struct msghdr *, size_t, int);
extern int			sock_no_mmap(struct file *file,
struct socket *sock,
struct vm_area_struct *vma);
extern ssize_t			sock_no_sendpage(struct socket *sock,
struct page *page,
int offset, size_t size,
int flags);
extern int sock_common_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen);
extern int sock_common_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags);
extern int sock_common_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen);
extern int compat_sock_common_getsockopt(struct socket *sock, int level,
int optname, char __user *optval, int __user *optlen);
extern int compat_sock_common_setsockopt(struct socket *sock, int level,
int optname, char __user *optval, unsigned int optlen);
extern void sk_common_release(struct sock *sk);
extern void sock_init_data(struct socket *sock, struct sock *sk);
extern void sk_filter_release_rcu(struct rcu_head *rcu);
static inline void sk_filter_release(struct sk_filter *fp)
static inline void sk_filter_uncharge(struct sock *sk, struct sk_filter *fp)
static inline void sk_filter_charge(struct sock *sk, struct sk_filter *fp)
static inline void sock_put(struct sock *sk)
extern int sk_receive_skb(struct sock *sk, struct sk_buff *skb,
const int nested);
static inline void sk_tx_queue_set(struct sock *sk, int tx_queue)
static inline void sk_tx_queue_clear(struct sock *sk)
static inline int sk_tx_queue_get(const struct sock *sk)
static inline void sk_set_socket(struct sock *sk, struct socket *sock)
static inline wait_queue_head_t *sk_sleep(struct sock *sk)
static inline void sock_orphan(struct sock *sk)
static inline void sock_graft(struct sock *sk, struct socket *parent)
extern int sock_i_uid(struct sock *sk);
extern unsigned long sock_i_ino(struct sock *sk);
static inline struct dst_entry *
__sk_dst_get(struct sock *sk)
static inline struct dst_entry *
sk_dst_get(struct sock *sk)
extern void sk_reset_txq(struct sock *sk);
static inline void dst_negative_advice(struct sock *sk)
static inline void
__sk_dst_set(struct sock *sk, struct dst_entry *dst)
static inline void
sk_dst_set(struct sock *sk, struct dst_entry *dst)
static inline void
__sk_dst_reset(struct sock *sk)
static inline void
sk_dst_reset(struct sock *sk)
extern struct dst_entry *__sk_dst_check(struct sock *sk, u32 cookie);
extern struct dst_entry *sk_dst_check(struct sock *sk, u32 cookie);
static inline int sk_can_gso(const struct sock *sk)
extern void sk_setup_caps(struct sock *sk, struct dst_entry *dst);
static inline void sk_nocaps_add(struct sock *sk, int flags)
static inline int skb_do_copy_data_nocache(struct sock *sk, struct sk_buff *skb,
char __user *from, char *to,
int copy, int offset)
static inline int skb_add_data_nocache(struct sock *sk, struct sk_buff *skb,
char __user *from, int copy)
static inline int skb_copy_to_page_nocache(struct sock *sk, char __user *from,
struct sk_buff *skb,
struct page *page,
int off, int copy)
static inline int skb_copy_to_page(struct sock *sk, char __user *from,
struct sk_buff *skb, struct page *page,
int off, int copy)
static inline int sk_wmem_alloc_get(const struct sock *sk)
static inline int sk_rmem_alloc_get(const struct sock *sk)
static inline int sk_has_allocations(const struct sock *sk)
static inline bool wq_has_sleeper(struct socket_wq *wq)
static inline void sock_poll_wait(struct file *filp,
wait_queue_head_t *wait_address, poll_table *p)
static inline void skb_set_owner_w(struct sk_buff *skb, struct sock *sk)
static inline void skb_set_owner_r(struct sk_buff *skb, struct sock *sk)
extern void sk_reset_timer(struct sock *sk, struct timer_list* timer,
unsigned long expires);
extern void sk_stop_timer(struct sock *sk, struct timer_list* timer);
extern int sock_queue_rcv_skb(struct sock *sk, struct sk_buff *skb);
extern int sock_queue_err_skb(struct sock *sk, struct sk_buff *skb);
static inline int sock_error(struct sock *sk)
static inline unsigned long sock_wspace(struct sock *sk)
static inline void sk_wake_async(struct sock *sk, int how, int band)
#define SOCK_MIN_SNDBUF 2048
#define SOCK_MIN_RCVBUF (2048 + sizeof(struct sk_buff))
static inline void sk_stream_moderate_sndbuf(struct sock *sk)
struct sk_buff *sk_stream_alloc_skb(struct sock *sk, int size, gfp_t gfp);
static inline struct page *sk_stream_alloc_page(struct sock *sk)
static inline int sock_writeable(const struct sock *sk)
static inline gfp_t gfp_any(void)
static inline long sock_rcvtimeo(const struct sock *sk, int noblock)
static inline long sock_sndtimeo(const struct sock *sk, int noblock)
static inline int sock_rcvlowat(const struct sock *sk, int waitall, int len)
static inline int sock_intr_errno(long timeo)
extern void __sock_recv_timestamp(struct msghdr *msg, struct sock *sk,
struct sk_buff *skb);
static __inline__ void
sock_recv_timestamp(struct msghdr *msg, struct sock *sk, struct sk_buff *skb)
extern void __sock_recv_ts_and_drops(struct msghdr *msg, struct sock *sk,
struct sk_buff *skb);
static inline void sock_recv_ts_and_drops(struct msghdr *msg, struct sock *sk,
struct sk_buff *skb)
extern int sock_tx_timestamp(struct sock *sk, __u8 *tx_flags);
static inline void sk_eat_skb(struct sock *sk, struct sk_buff *skb, int copied_early)
static inline void sk_eat_skb(struct sock *sk, struct sk_buff *skb, int copied_early)
static inline
struct net *sock_net(const struct sock *sk)
static inline
void sock_net_set(struct sock *sk, struct net *net)
static inline void sk_change_net(struct sock *sk, struct net *net)
static inline struct sock *skb_steal_sock(struct sk_buff *skb)
extern void sock_enable_timestamp(struct sock *sk, int flag);
extern int sock_get_timestamp(struct sock *, struct timeval __user *);
extern int sock_get_timestampns(struct sock *, struct timespec __user *);
extern int net_msg_warn;
#define NETDEBUG(fmt, args...) \
do  while (0)
#define LIMIT_NETDEBUG(fmt, args...) \
do  while(0)
extern __u32 sysctl_wmem_max;
extern __u32 sysctl_rmem_max;
extern void sk_init(void);
extern int sysctl_optmem_max;
extern __u32 sysctl_wmem_default;
extern __u32 sysctl_rmem_default;
