struct packet_mclist ;
struct packet_mreq_max ;
static int packet_set_ring(struct sock *sk, struct tpacket_req *req,
int closing, int tx_ring);
struct pgv ;
struct packet_ring_buffer ;
struct packet_sock;
static int tpacket_snd(struct packet_sock *po, struct msghdr *msg);
static void packet_flush_mclist(struct sock *sk);
struct packet_sock ;
struct packet_skb_cb ;
#define PACKET_SKB_CB(__skb)	((struct packet_skb_cb *)((__skb)->cb))
static inline __pure struct page *pgv_to_page(void *addr)
static void __packet_set_status(struct packet_sock *po, void *frame, int status)
static int __packet_get_status(struct packet_sock *po, void *frame)
static void *packet_lookup_frame(struct packet_sock *po,
struct packet_ring_buffer *rb,
unsigned int position,
int status)
static inline void *packet_current_frame(struct packet_sock *po,
struct packet_ring_buffer *rb,
int status)
static inline void *packet_previous_frame(struct packet_sock *po,
struct packet_ring_buffer *rb,
int status)
static inline void packet_increment_head(struct packet_ring_buffer *buff)
static inline struct packet_sock *pkt_sk(struct sock *sk)
static void packet_sock_destruct(struct sock *sk)
static const struct proto_ops packet_ops;
static const struct proto_ops packet_ops_spkt;
static int packet_rcv_spkt(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static int packet_sendmsg_spkt(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static inline unsigned int run_filter(const struct sk_buff *skb,
const struct sock *sk,
unsigned int res)
static int packet_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static int tpacket_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static void tpacket_destruct_skb(struct sk_buff *skb)
static int tpacket_fill_skb(struct packet_sock *po, struct sk_buff *skb,
void *frame, struct net_device *dev, int size_max,
__be16 proto, unsigned char *addr)
static int tpacket_snd(struct packet_sock *po, struct msghdr *msg)
static inline struct sk_buff *packet_alloc_skb(struct sock *sk, size_t prepad,
size_t reserve, size_t len,
size_t linear, int noblock,
int *err)
static int packet_snd(struct socket *sock,
struct msghdr *msg, size_t len)
static int packet_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int packet_release(struct socket *sock)
static int packet_do_bind(struct sock *sk, struct net_device *dev, __be16 protocol)
static int packet_bind_spkt(struct socket *sock, struct sockaddr *uaddr,
int addr_len)
static int packet_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static struct proto packet_proto = ;
static int packet_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int packet_recv_error(struct sock *sk, struct msghdr *msg, int len)
static int packet_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len, int flags)
static int packet_getname_spkt(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
static int packet_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
static int packet_dev_mc(struct net_device *dev, struct packet_mclist *i,
int what)
static void packet_dev_mclist(struct net_device *dev, struct packet_mclist *i, int what)
static int packet_mc_add(struct sock *sk, struct packet_mreq_max *mreq)
static int packet_mc_drop(struct sock *sk, struct packet_mreq_max *mreq)
static void packet_flush_mclist(struct sock *sk)
static int
packet_setsockopt(struct socket *sock, int level, int optname, char __user *optval, unsigned int optlen)
static int packet_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int packet_notifier(struct notifier_block *this, unsigned long msg, void *data)
static int packet_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static unsigned int packet_poll(struct file *file, struct socket *sock,
poll_table *wait)
static void packet_mm_open(struct vm_area_struct *vma)
static void packet_mm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct packet_mmap_ops = ;
static void free_pg_vec(struct pgv *pg_vec, unsigned int order,
unsigned int len)
static inline char *alloc_one_pg_vec_page(unsigned long order)
static struct pgv *alloc_pg_vec(struct tpacket_req *req, int order)
static int packet_set_ring(struct sock *sk, struct tpacket_req *req,
int closing, int tx_ring)
static int packet_mmap(struct file *file, struct socket *sock,
struct vm_area_struct *vma)
static const struct proto_ops packet_ops_spkt = ;
static const struct proto_ops packet_ops = ;
static const struct net_proto_family packet_family_ops = ;
static struct notifier_block packet_netdev_notifier = ;
static void *packet_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *packet_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void packet_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static int packet_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations packet_seq_ops = ;
static int packet_seq_open(struct inode *inode, struct file *file)
static const struct file_operations packet_seq_fops = ;
static int __net_init packet_net_init(struct net *net)
static void __net_exit packet_net_exit(struct net *net)
static struct pernet_operations packet_net_ops = ;
static void __exit packet_exit(void)
static int __init packet_init(void)
module_init(packet_init);
module_exit(packet_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_PACKET);
