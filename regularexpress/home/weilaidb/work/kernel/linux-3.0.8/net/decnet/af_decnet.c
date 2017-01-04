struct dn_sock ;
static void dn_keepalive(struct sock *sk);
#define DN_SK_HASH_SHIFT 8
#define DN_SK_HASH_SIZE (1 << DN_SK_HASH_SHIFT)
#define DN_SK_HASH_MASK (DN_SK_HASH_SIZE - 1)
static const struct proto_ops dn_proto_ops;
static DEFINE_RWLOCK(dn_hash_lock);
static struct hlist_head dn_sk_hash[DN_SK_HASH_SIZE];
static struct hlist_head dn_wild_sk;
static atomic_long_t decnet_memory_allocated;
static int __dn_setsockopt(struct socket *sock, int level, int optname, char __user *optval, unsigned int optlen, int flags);
static int __dn_getsockopt(struct socket *sock, int level, int optname, char __user *optval, int __user *optlen, int flags);
static struct hlist_head *dn_find_list(struct sock *sk)
static int check_port(__le16 port)
static unsigned short port_alloc(struct sock *sk)
static int dn_hash_sock(struct sock *sk)
static void dn_unhash_sock(struct sock *sk)
static void dn_unhash_sock_bh(struct sock *sk)
static struct hlist_head *listen_hash(struct sockaddr_dn *addr)
static void dn_rehash_sock(struct sock *sk)
int dn_sockaddr2username(struct sockaddr_dn *sdn, unsigned char *buf, unsigned char type)
int dn_username2sockaddr(unsigned char *data, int len, struct sockaddr_dn *sdn, unsigned char *fmt)
struct sock *dn_sklist_find_listener(struct sockaddr_dn *addr)
struct sock *dn_find_by_skb(struct sk_buff *skb)
static void dn_destruct(struct sock *sk)
static int dn_memory_pressure;
static void dn_enter_memory_pressure(struct sock *sk)
static struct proto dn_proto = ;
static struct sock *dn_alloc_sock(struct net *net, struct socket *sock, gfp_t gfp)
static void dn_keepalive(struct sock *sk)
int dn_destroy_timer(struct sock *sk)
static void dn_destroy_sock(struct sock *sk)
char *dn_addr2asc(__u16 addr, char *buf)
static int dn_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int
dn_release(struct socket *sock)
static int dn_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static int dn_auto_bind(struct socket *sock)
static int dn_confirm_accept(struct sock *sk, long *timeo, gfp_t allocation)
static int dn_wait_run(struct sock *sk, long *timeo)
static int __dn_connect(struct sock *sk, struct sockaddr_dn *addr, int addrlen, long *timeo, int flags)
static int dn_connect(struct socket *sock, struct sockaddr *uaddr, int addrlen, int flags)
static inline int dn_check_state(struct sock *sk, struct sockaddr_dn *addr, int addrlen, long *timeo, int flags)
static void dn_access_copy(struct sk_buff *skb, struct accessdata_dn *acc)
static void dn_user_copy(struct sk_buff *skb, struct optdata_dn *opt)
static struct sk_buff *dn_wait_for_connect(struct sock *sk, long *timeo)
static int dn_accept(struct socket *sock, struct socket *newsock, int flags)
static int dn_getname(struct socket *sock, struct sockaddr *uaddr,int *uaddr_len,int peer)
static unsigned int dn_poll(struct file *file, struct socket *sock, poll_table  *wait)
static int dn_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int dn_listen(struct socket *sock, int backlog)
static int dn_shutdown(struct socket *sock, int how)
static int dn_setsockopt(struct socket *sock, int level, int optname, char __user *optval, unsigned int optlen)
static int __dn_setsockopt(struct socket *sock, int level,int optname, char __user *optval, unsigned int optlen, int flags)
static int dn_getsockopt(struct socket *sock, int level, int optname, char __user *optval, int __user *optlen)
static int __dn_getsockopt(struct socket *sock, int level,int optname, char __user *optval,int __user *optlen, int flags)
static int dn_data_ready(struct sock *sk, struct sk_buff_head *q, int flags, int target)
static int dn_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static inline int dn_queue_too_long(struct dn_scp *scp, struct sk_buff_head *queue, int flags)
unsigned dn_mss_from_pmtu(struct net_device *dev, int mtu)
static inline unsigned int dn_current_mss(struct sock *sk, int flags)
static inline struct sk_buff *dn_alloc_send_pskb(struct sock *sk,
unsigned long datalen, int noblock,
int *errcode)
static int dn_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size)
static int dn_device_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block dn_dev_notifier = ;
extern int dn_route_rcv(struct sk_buff *, struct net_device *, struct packet_type *, struct net_device *);
static struct packet_type dn_dix_packet_type __read_mostly = ;
struct dn_iter_state ;
static struct sock *dn_socket_get_first(struct seq_file *seq)
static struct sock *dn_socket_get_next(struct seq_file *seq,
struct sock *n)
static struct sock *socket_get_idx(struct seq_file *seq, loff_t *pos)
static void *dn_socket_get_idx(struct seq_file *seq, loff_t pos)
static void *dn_socket_seq_start(struct seq_file *seq, loff_t *pos)
static void *dn_socket_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void dn_socket_seq_stop(struct seq_file *seq, void *v)
#define IS_NOT_PRINTABLE(x) ((x) < 32 || (x) > 126)
static void dn_printable_object(struct sockaddr_dn *dn, unsigned char *buf)
static char *dn_state2asc(unsigned char state)
static inline void dn_socket_format_entry(struct seq_file *seq, struct sock *sk)
static int dn_socket_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations dn_socket_seq_ops = ;
static int dn_socket_seq_open(struct inode *inode, struct file *file)
static const struct file_operations dn_socket_seq_fops = ;
static const struct net_proto_family	dn_family_ops = ;
static const struct proto_ops dn_proto_ops = ;
void dn_register_sysctl(void);
void dn_unregister_sysctl(void);
MODULE_DESCRIPTION("The Linux DECnet Network Protocol");
MODULE_AUTHOR("Linux DECnet Project Team");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_DECnet);
static char banner[] __initdata = KERN_INFO "NET4: DECnet for Linux: V.2.5.68s (C) 1995-2003 Linux DECnet Project Team\n";
static int __init decnet_init(void)
module_init(decnet_init);
