static struct hlist_head unix_socket_table[UNIX_HASH_SIZE + 1];
static DEFINE_SPINLOCK(unix_table_lock);
static atomic_long_t unix_nr_socks;
#define unix_sockets_unbound	(&unix_socket_table[UNIX_HASH_SIZE])
#define UNIX_ABSTRACT(sk)	(unix_sk(sk)->addr->hash != UNIX_HASH_SIZE)
static void unix_get_secdata(struct scm_cookie *scm, struct sk_buff *skb)
static inline void unix_set_secdata(struct scm_cookie *scm, struct sk_buff *skb)
static inline void unix_get_secdata(struct scm_cookie *scm, struct sk_buff *skb)
static inline void unix_set_secdata(struct scm_cookie *scm, struct sk_buff *skb)
static inline unsigned unix_hash_fold(__wsum n)
#define unix_peer(sk) (unix_sk(sk)->peer)
static inline int unix_our_peer(struct sock *sk, struct sock *osk)
static inline int unix_may_send(struct sock *sk, struct sock *osk)
static inline int unix_recvq_full(struct sock const *sk)
static struct sock *unix_peer_get(struct sock *s)
static inline void unix_release_addr(struct unix_address *addr)
static int unix_mkname(struct sockaddr_un *sunaddr, int len, unsigned *hashp)
static void __unix_remove_socket(struct sock *sk)
static void __unix_insert_socket(struct hlist_head *list, struct sock *sk)
static inline void unix_remove_socket(struct sock *sk)
static inline void unix_insert_socket(struct hlist_head *list, struct sock *sk)
static struct sock *__unix_find_socket_byname(struct net *net,
struct sockaddr_un *sunname,
int len, int type, unsigned hash)
static inline struct sock *unix_find_socket_byname(struct net *net,
struct sockaddr_un *sunname,
int len, int type,
unsigned hash)
static struct sock *unix_find_socket_byinode(struct inode *i)
static inline int unix_writable(struct sock *sk)
static void unix_write_space(struct sock *sk)
static void unix_dgram_disconnected(struct sock *sk, struct sock *other)
static void unix_sock_destructor(struct sock *sk)
static int unix_release_sock(struct sock *sk, int embrion)
static void init_peercred(struct sock *sk)
static void copy_peercred(struct sock *sk, struct sock *peersk)
static int unix_listen(struct socket *sock, int backlog)
static int unix_release(struct socket *);
static int unix_bind(struct socket *, struct sockaddr *, int);
static int unix_stream_connect(struct socket *, struct sockaddr *,
int addr_len, int flags);
static int unix_socketpair(struct socket *, struct socket *);
static int unix_accept(struct socket *, struct socket *, int);
static int unix_getname(struct socket *, struct sockaddr *, int *, int);
static unsigned int unix_poll(struct file *, struct socket *, poll_table *);
static unsigned int unix_dgram_poll(struct file *, struct socket *,
poll_table *);
static int unix_ioctl(struct socket *, unsigned int, unsigned long);
static int unix_shutdown(struct socket *, int);
static int unix_stream_sendmsg(struct kiocb *, struct socket *,
struct msghdr *, size_t);
static int unix_stream_recvmsg(struct kiocb *, struct socket *,
struct msghdr *, size_t, int);
static int unix_dgram_sendmsg(struct kiocb *, struct socket *,
struct msghdr *, size_t);
static int unix_dgram_recvmsg(struct kiocb *, struct socket *,
struct msghdr *, size_t, int);
static int unix_dgram_connect(struct socket *, struct sockaddr *,
int, int);
static int unix_seqpacket_sendmsg(struct kiocb *, struct socket *,
struct msghdr *, size_t);
static int unix_seqpacket_recvmsg(struct kiocb *, struct socket *,
struct msghdr *, size_t, int);
static const struct proto_ops unix_stream_ops = ;
static const struct proto_ops unix_dgram_ops = ;
static const struct proto_ops unix_seqpacket_ops = ;
static struct proto unix_proto = ;
static struct lock_class_key af_unix_sk_receive_queue_lock_key;
static struct sock *unix_create1(struct net *net, struct socket *sock)
static int unix_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int unix_release(struct socket *sock)
static int unix_autobind(struct socket *sock)
static struct sock *unix_find_other(struct net *net,
struct sockaddr_un *sunname, int len,
int type, unsigned hash, int *error)
static int unix_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static void unix_state_double_lock(struct sock *sk1, struct sock *sk2)
static void unix_state_double_unlock(struct sock *sk1, struct sock *sk2)
static int unix_dgram_connect(struct socket *sock, struct sockaddr *addr,
int alen, int flags)
static long unix_wait_for_peer(struct sock *other, long timeo)
static int unix_stream_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
static int unix_socketpair(struct socket *socka, struct socket *sockb)
static int unix_accept(struct socket *sock, struct socket *newsock, int flags)
static int unix_getname(struct socket *sock, struct sockaddr *uaddr, int *uaddr_len, int peer)
static void unix_detach_fds(struct scm_cookie *scm, struct sk_buff *skb)
static void unix_destruct_scm(struct sk_buff *skb)
#define MAX_RECURSION_LEVEL 4
static int unix_attach_fds(struct scm_cookie *scm, struct sk_buff *skb)
static int unix_scm_to_skb(struct scm_cookie *scm, struct sk_buff *skb, bool send_fds)
static int unix_dgram_sendmsg(struct kiocb *kiocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int unix_stream_sendmsg(struct kiocb *kiocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int unix_seqpacket_sendmsg(struct kiocb *kiocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int unix_seqpacket_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size,
int flags)
static void unix_copy_addr(struct msghdr *msg, struct sock *sk)
static int unix_dgram_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size,
int flags)
static long unix_stream_data_wait(struct sock *sk, long timeo)
static int unix_stream_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size,
int flags)
static int unix_shutdown(struct socket *sock, int mode)
static int unix_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static unsigned int unix_poll(struct file *file, struct socket *sock, poll_table *wait)
static unsigned int unix_dgram_poll(struct file *file, struct socket *sock,
poll_table *wait)
static struct sock *first_unix_socket(int *i)
static struct sock *next_unix_socket(int *i, struct sock *s)
struct unix_iter_state ;
static struct sock *unix_seq_idx(struct seq_file *seq, loff_t pos)
static void *unix_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(unix_table_lock)
static void *unix_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void unix_seq_stop(struct seq_file *seq, void *v)
__releases(unix_table_lock)
static int unix_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations unix_seq_ops = ;
static int unix_seq_open(struct inode *inode, struct file *file)
static const struct file_operations unix_seq_fops = ;
static const struct net_proto_family unix_family_ops = ;
static int __net_init unix_net_init(struct net *net)
static void __net_exit unix_net_exit(struct net *net)
static struct pernet_operations unix_net_ops = ;
static int __init af_unix_init(void)
static void __exit af_unix_exit(void)
fs_initcall(af_unix_init);
module_exit(af_unix_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_UNIX);
