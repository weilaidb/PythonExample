#define _UDP_H
struct udp_skb_cb ;
#define UDP_SKB_CB(__skb)	((struct udp_skb_cb *)((__skb)->cb))
struct udp_hslot  __attribute__((aligned(2 * sizeof(long))));
struct udp_table ;
extern struct udp_table udp_table;
extern void udp_table_init(struct udp_table *, const char *);
static inline struct udp_hslot *udp_hashslot(struct udp_table *table,
struct net *net, unsigned num)
static inline struct udp_hslot *udp_hashslot2(struct udp_table *table,
unsigned int hash)
#define UDP_CSUM_NOXMIT		1
#define UDP_CSUM_NORCV		2
#define UDP_CSUM_DEFAULT	0
extern struct proto udp_prot;
extern atomic_long_t udp_memory_allocated;
extern long sysctl_udp_mem[3];
extern int sysctl_udp_rmem_min;
extern int sysctl_udp_wmem_min;
struct sk_buff;
static inline __sum16 __udp_lib_checksum_complete(struct sk_buff *skb)
static inline int udp_lib_checksum_complete(struct sk_buff *skb)
static inline __wsum udp_csum_outgoing(struct sock *sk, struct sk_buff *skb)
static inline __wsum udp_csum(struct sk_buff *skb)
static inline void udp_lib_hash(struct sock *sk)
extern void udp_lib_unhash(struct sock *sk);
extern void udp_lib_rehash(struct sock *sk, u16 new_hash);
static inline void udp_lib_close(struct sock *sk, long timeout)
extern int udp_lib_get_port(struct sock *sk, unsigned short snum,
int (*)(const struct sock *,const struct sock *),
unsigned int hash2_nulladdr);
extern int udp_get_port(struct sock *sk, unsigned short snum,
int (*saddr_cmp)(const struct sock *,
const struct sock *));
extern void udp_err(struct sk_buff *, u32);
extern int udp_sendmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len);
extern void udp_flush_pending_frames(struct sock *sk);
extern int udp_rcv(struct sk_buff *skb);
extern int udp_ioctl(struct sock *sk, int cmd, unsigned long arg);
extern int udp_disconnect(struct sock *sk, int flags);
extern unsigned int udp_poll(struct file *file, struct socket *sock,
poll_table *wait);
extern int udp_lib_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen);
extern int udp_lib_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen,
int (*push_pending_frames)(struct sock *));
extern struct sock *udp4_lib_lookup(struct net *net, __be32 saddr, __be16 sport,
__be32 daddr, __be16 dport,
int dif);
extern struct sock *udp6_lib_lookup(struct net *net, const struct in6_addr *saddr, __be16 sport,
const struct in6_addr *daddr, __be16 dport,
int dif);
#define UDP_INC_STATS_USER(net, field, is_udplite)	      do   while(0)
#define UDP_INC_STATS_BH(net, field, is_udplite) 	      do   while(0)
#define UDP6_INC_STATS_BH(net, field, is_udplite) 	    do  while(0)
#define UDP6_INC_STATS_USER(net, field, __lite)		    do  while(0)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
#define UDPX_INC_STATS_BH(sk, field) \
do  while (0);
#define UDPX_INC_STATS_BH(sk, field) UDP_INC_STATS_BH(sock_net(sk), field, 0)
struct udp_seq_afinfo ;
struct udp_iter_state ;
extern int udp_proc_register(struct net *net, struct udp_seq_afinfo *afinfo);
extern void udp_proc_unregister(struct net *net, struct udp_seq_afinfo *afinfo);
extern int udp4_proc_init(void);
extern void udp4_proc_exit(void);
extern void udp_init(void);
extern int udp4_ufo_send_check(struct sk_buff *skb);
extern struct sk_buff *udp4_ufo_fragment(struct sk_buff *skb, u32 features);
