struct udp_table udp_table __read_mostly;
EXPORT_SYMBOL(udp_table);
long sysctl_udp_mem[3] __read_mostly;
EXPORT_SYMBOL(sysctl_udp_mem);
int sysctl_udp_rmem_min __read_mostly;
EXPORT_SYMBOL(sysctl_udp_rmem_min);
int sysctl_udp_wmem_min __read_mostly;
EXPORT_SYMBOL(sysctl_udp_wmem_min);
atomic_long_t udp_memory_allocated;
EXPORT_SYMBOL(udp_memory_allocated);
#define MAX_UDP_PORTS 65536
#define PORTS_PER_CHAIN (MAX_UDP_PORTS / UDP_HTABLE_SIZE_MIN)
static int udp_lib_lport_inuse(struct net *net, __u16 num,
const struct udp_hslot *hslot,
unsigned long *bitmap,
struct sock *sk,
int (*saddr_comp)(const struct sock *sk1,
const struct sock *sk2),
unsigned int log)
static int udp_lib_lport_inuse2(struct net *net, __u16 num,
struct udp_hslot *hslot2,
struct sock *sk,
int (*saddr_comp)(const struct sock *sk1,
const struct sock *sk2))
int udp_lib_get_port(struct sock *sk, unsigned short snum,
int (*saddr_comp)(const struct sock *sk1,
const struct sock *sk2),
unsigned int hash2_nulladdr)
EXPORT_SYMBOL(udp_lib_get_port);
static int ipv4_rcv_saddr_equal(const struct sock *sk1, const struct sock *sk2)
static unsigned int udp4_portaddr_hash(struct net *net, __be32 saddr,
unsigned int port)
int udp_v4_get_port(struct sock *sk, unsigned short snum)
static inline int compute_score(struct sock *sk, struct net *net, __be32 saddr,
unsigned short hnum,
__be16 sport, __be32 daddr, __be16 dport, int dif)
#define SCORE2_MAX (1 + 2 + 2 + 2)
static inline int compute_score2(struct sock *sk, struct net *net,
__be32 saddr, __be16 sport,
__be32 daddr, unsigned int hnum, int dif)
static struct sock *udp4_lib_lookup2(struct net *net,
__be32 saddr, __be16 sport,
__be32 daddr, unsigned int hnum, int dif,
struct udp_hslot *hslot2, unsigned int slot2)
static struct sock *__udp4_lib_lookup(struct net *net, __be32 saddr,
__be16 sport, __be32 daddr, __be16 dport,
int dif, struct udp_table *udptable)
static inline struct sock *__udp4_lib_lookup_skb(struct sk_buff *skb,
__be16 sport, __be16 dport,
struct udp_table *udptable)
struct sock *udp4_lib_lookup(struct net *net, __be32 saddr, __be16 sport,
__be32 daddr, __be16 dport, int dif)
EXPORT_SYMBOL_GPL(udp4_lib_lookup);
static inline struct sock *udp_v4_mcast_next(struct net *net, struct sock *sk,
__be16 loc_port, __be32 loc_addr,
__be16 rmt_port, __be32 rmt_addr,
int dif)
void __udp4_lib_err(struct sk_buff *skb, u32 info, struct udp_table *udptable)
void udp_err(struct sk_buff *skb, u32 info)
void udp_flush_pending_frames(struct sock *sk)
EXPORT_SYMBOL(udp_flush_pending_frames);
static void udp4_hwcsum(struct sk_buff *skb, __be32 src, __be32 dst)
static int udp_send_skb(struct sk_buff *skb, struct flowi4 *fl4)
static int udp_push_pending_frames(struct sock *sk)
int udp_sendmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len)
EXPORT_SYMBOL(udp_sendmsg);
int udp_sendpage(struct sock *sk, struct page *page, int offset,
size_t size, int flags)
static unsigned int first_packet_length(struct sock *sk)
int udp_ioctl(struct sock *sk, int cmd, unsigned long arg)
EXPORT_SYMBOL(udp_ioctl);
int udp_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len, int noblock, int flags, int *addr_len)
int udp_disconnect(struct sock *sk, int flags)
EXPORT_SYMBOL(udp_disconnect);
void udp_lib_unhash(struct sock *sk)
EXPORT_SYMBOL(udp_lib_unhash);
void udp_lib_rehash(struct sock *sk, u16 newhash)
EXPORT_SYMBOL(udp_lib_rehash);
static void udp_v4_rehash(struct sock *sk)
static int __udp_queue_rcv_skb(struct sock *sk, struct sk_buff *skb)
int udp_queue_rcv_skb(struct sock *sk, struct sk_buff *skb)
static void flush_stack(struct sock **stack, unsigned int count,
struct sk_buff *skb, unsigned int final)
static int __udp4_lib_mcast_deliver(struct net *net, struct sk_buff *skb,
struct udphdr  *uh,
__be32 saddr, __be32 daddr,
struct udp_table *udptable)
static inline int udp4_csum_init(struct sk_buff *skb, struct udphdr *uh,
int proto)
int __udp4_lib_rcv(struct sk_buff *skb, struct udp_table *udptable,
int proto)
int udp_rcv(struct sk_buff *skb)
void udp_destroy_sock(struct sock *sk)
int udp_lib_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen,
int (*push_pending_frames)(struct sock *))
EXPORT_SYMBOL(udp_lib_setsockopt);
int udp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
int compat_udp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
int udp_lib_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL(udp_lib_getsockopt);
int udp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
int compat_udp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
unsigned int udp_poll(struct file *file, struct socket *sock, poll_table *wait)
EXPORT_SYMBOL(udp_poll);
struct proto udp_prot = ;
EXPORT_SYMBOL(udp_prot);
static struct sock *udp_get_first(struct seq_file *seq, int start)
static struct sock *udp_get_next(struct seq_file *seq, struct sock *sk)
static struct sock *udp_get_idx(struct seq_file *seq, loff_t pos)
static void *udp_seq_start(struct seq_file *seq, loff_t *pos)
static void *udp_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void udp_seq_stop(struct seq_file *seq, void *v)
static int udp_seq_open(struct inode *inode, struct file *file)
int udp_proc_register(struct net *net, struct udp_seq_afinfo *afinfo)
EXPORT_SYMBOL(udp_proc_register);
void udp_proc_unregister(struct net *net, struct udp_seq_afinfo *afinfo)
EXPORT_SYMBOL(udp_proc_unregister);
static void udp4_format_sock(struct sock *sp, struct seq_file *f,
int bucket, int *len)
int udp4_seq_show(struct seq_file *seq, void *v)
static struct udp_seq_afinfo udp4_seq_afinfo = ;
static int __net_init udp4_proc_init_net(struct net *net)
static void __net_exit udp4_proc_exit_net(struct net *net)
static struct pernet_operations udp4_net_ops = ;
int __init udp4_proc_init(void)
void udp4_proc_exit(void)
static __initdata unsigned long uhash_entries;
static int __init set_uhash_entries(char *str)
__setup("uhash_entries=", set_uhash_entries);
void __init udp_table_init(struct udp_table *table, const char *name)
void __init udp_init(void)
int udp4_ufo_send_check(struct sk_buff *skb)
struct sk_buff *udp4_ufo_fragment(struct sk_buff *skb, u32 features)
