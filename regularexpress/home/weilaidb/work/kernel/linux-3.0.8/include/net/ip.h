#define _IP_H
struct sock;
struct inet_skb_parm ;
static inline unsigned int ip_hdrlen(const struct sk_buff *skb)
struct ipcm_cookie ;
#define IPCB(skb) ((struct inet_skb_parm*)((skb)->cb))
struct ip_ra_chain ;
extern struct ip_ra_chain __rcu *ip_ra_chain;
#define IP_CE		0x8000
#define IP_DF		0x4000
#define IP_MF		0x2000
#define IP_OFFSET	0x1FFF
#define IP_FRAG_TIME	(30 * HZ)
struct msghdr;
struct net_device;
struct packet_type;
struct rtable;
struct sockaddr;
extern int		igmp_mc_proc_init(void);
extern int		ip_build_and_send_pkt(struct sk_buff *skb, struct sock *sk,
__be32 saddr, __be32 daddr,
struct ip_options_rcu *opt);
extern int		ip_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev);
extern int		ip_local_deliver(struct sk_buff *skb);
extern int		ip_mr_input(struct sk_buff *skb);
extern int		ip_output(struct sk_buff *skb);
extern int		ip_mc_output(struct sk_buff *skb);
extern int		ip_fragment(struct sk_buff *skb, int (*output)(struct sk_buff *));
extern int		ip_do_nat(struct sk_buff *skb);
extern void		ip_send_check(struct iphdr *ip);
extern int		__ip_local_out(struct sk_buff *skb);
extern int		ip_local_out(struct sk_buff *skb);
extern int		ip_queue_xmit(struct sk_buff *skb, struct flowi *fl);
extern void		ip_init(void);
extern int		ip_append_data(struct sock *sk, struct flowi4 *fl4,
int getfrag(void *from, char *to, int offset, int len,
int odd, struct sk_buff *skb),
void *from, int len, int protolen,
struct ipcm_cookie *ipc,
struct rtable **rt,
unsigned int flags);
extern int		ip_generic_getfrag(void *from, char *to, int offset, int len, int odd, struct sk_buff *skb);
extern ssize_t		ip_append_page(struct sock *sk, struct flowi4 *fl4, struct page *page,
int offset, size_t size, int flags);
extern struct sk_buff  *__ip_make_skb(struct sock *sk,
struct flowi4 *fl4,
struct sk_buff_head *queue,
struct inet_cork *cork);
extern int		ip_send_skb(struct sk_buff *skb);
extern int		ip_push_pending_frames(struct sock *sk, struct flowi4 *fl4);
extern void		ip_flush_pending_frames(struct sock *sk);
extern struct sk_buff  *ip_make_skb(struct sock *sk,
struct flowi4 *fl4,
int getfrag(void *from, char *to, int offset, int len,
int odd, struct sk_buff *skb),
void *from, int length, int transhdrlen,
struct ipcm_cookie *ipc,
struct rtable **rtp,
unsigned int flags);
static inline struct sk_buff *ip_finish_skb(struct sock *sk, struct flowi4 *fl4)
extern int		ip4_datagram_connect(struct sock *sk,
struct sockaddr *uaddr, int addr_len);
static inline void ip_tr_mc_map(__be32 addr, char *buf)
struct ip_reply_arg ;
#define IP_REPLY_ARG_NOSRCCHECK 1
static inline __u8 ip_reply_arg_flowi_flags(const struct ip_reply_arg *arg)
void ip_send_reply(struct sock *sk, struct sk_buff *skb, __be32 daddr,
struct ip_reply_arg *arg, unsigned int len);
struct ipv4_config ;
extern struct ipv4_config ipv4_config;
#define IP_INC_STATS(net, field)	SNMP_INC_STATS64((net)->mib.ip_statistics, field)
#define IP_INC_STATS_BH(net, field)	SNMP_INC_STATS64_BH((net)->mib.ip_statistics, field)
#define IP_ADD_STATS(net, field, val)	SNMP_ADD_STATS64((net)->mib.ip_statistics, field, val)
#define IP_ADD_STATS_BH(net, field, val) SNMP_ADD_STATS64_BH((net)->mib.ip_statistics, field, val)
#define IP_UPD_PO_STATS(net, field, val) SNMP_UPD_PO_STATS64((net)->mib.ip_statistics, field, val)
#define IP_UPD_PO_STATS_BH(net, field, val) SNMP_UPD_PO_STATS64_BH((net)->mib.ip_statistics, field, val)
#define NET_INC_STATS(net, field)	SNMP_INC_STATS((net)->mib.net_statistics, field)
#define NET_INC_STATS_BH(net, field)	SNMP_INC_STATS_BH((net)->mib.net_statistics, field)
#define NET_INC_STATS_USER(net, field) 	SNMP_INC_STATS_USER((net)->mib.net_statistics, field)
#define NET_ADD_STATS_BH(net, field, adnd) SNMP_ADD_STATS_BH((net)->mib.net_statistics, field, adnd)
#define NET_ADD_STATS_USER(net, field, adnd) SNMP_ADD_STATS_USER((net)->mib.net_statistics, field, adnd)
extern unsigned long snmp_fold_field(void __percpu *mib[], int offt);
#if BITS_PER_LONG==32
extern u64 snmp_fold_field64(void __percpu *mib[], int offt, size_t sync_off);
static inline u64 snmp_fold_field64(void __percpu *mib[], int offt, size_t syncp_off)
extern int snmp_mib_init(void __percpu *ptr[2], size_t mibsize, size_t align);
extern void snmp_mib_free(void __percpu *ptr[2]);
extern struct local_ports  sysctl_local_ports;
extern void inet_get_local_port_range(int *low, int *high);
extern unsigned long *sysctl_local_reserved_ports;
static inline int inet_is_reserved_local_port(int port)
extern int sysctl_ip_nonlocal_bind;
extern struct ctl_path net_core_path[];
extern struct ctl_path net_ipv4_ctl_path[];
extern int inet_peer_threshold;
extern int inet_peer_minttl;
extern int inet_peer_maxttl;
extern int inet_peer_gc_mintime;
extern int inet_peer_gc_maxtime;
extern int sysctl_ip_dynaddr;
extern void ipfrag_init(void);
extern void ip_static_sysctl_init(void);
static inline
int ip_decrease_ttl(struct iphdr *iph)
static inline
int ip_dont_fragment(struct sock *sk, struct dst_entry *dst)
extern void __ip_select_ident(struct iphdr *iph, struct dst_entry *dst, int more);
static inline void ip_select_ident(struct iphdr *iph, struct dst_entry *dst, struct sock *sk)
static inline void ip_select_ident_more(struct iphdr *iph, struct dst_entry *dst, struct sock *sk, int more)
static inline void ip_eth_mc_map(__be32 naddr, char *buf)
static inline void ip_ib_mc_map(__be32 naddr, const unsigned char *broadcast, char *buf)
static inline void ip_ipgre_mc_map(__be32 naddr, const unsigned char *broadcast, char *buf)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static __inline__ void inet_reset_saddr(struct sock *sk)
static inline int sk_mc_loop(struct sock *sk)
extern int	ip_call_ra_chain(struct sk_buff *skb);
enum ip_defrag_users ;
int ip_defrag(struct sk_buff *skb, u32 user);
int ip_frag_mem(struct net *net);
int ip_frag_nqueues(struct net *net);
extern int ip_forward(struct sk_buff *skb);
extern void ip_options_build(struct sk_buff *skb, struct ip_options *opt,
__be32 daddr, struct rtable *rt, int is_frag);
extern int ip_options_echo(struct ip_options *dopt, struct sk_buff *skb);
extern void ip_options_fragment(struct sk_buff *skb);
extern int ip_options_compile(struct net *net,
struct ip_options *opt, struct sk_buff *skb);
extern int ip_options_get(struct net *net, struct ip_options_rcu **optp,
unsigned char *data, int optlen);
extern int ip_options_get_from_user(struct net *net, struct ip_options_rcu **optp,
unsigned char __user *data, int optlen);
extern void ip_options_undo(struct ip_options * opt);
extern void ip_forward_options(struct sk_buff *skb);
extern int ip_options_rcv_srr(struct sk_buff *skb);
extern int	ip_queue_rcv_skb(struct sock *sk, struct sk_buff *skb);
extern void	ip_cmsg_recv(struct msghdr *msg, struct sk_buff *skb);
extern int	ip_cmsg_send(struct net *net,
struct msghdr *msg, struct ipcm_cookie *ipc);
extern int	ip_setsockopt(struct sock *sk, int level, int optname, char __user *optval, unsigned int optlen);
extern int	ip_getsockopt(struct sock *sk, int level, int optname, char __user *optval, int __user *optlen);
extern int	compat_ip_setsockopt(struct sock *sk, int level,
int optname, char __user *optval, unsigned int optlen);
extern int	compat_ip_getsockopt(struct sock *sk, int level,
int optname, char __user *optval, int __user *optlen);
extern int	ip_ra_control(struct sock *sk, unsigned char on, void (*destructor)(struct sock *));
extern int 	ip_recv_error(struct sock *sk, struct msghdr *msg, int len);
extern void	ip_icmp_error(struct sock *sk, struct sk_buff *skb, int err,
__be16 port, u32 info, u8 *payload);
extern void	ip_local_error(struct sock *sk, int err, __be32 daddr, __be16 dport,
u32 info);
extern int ip_misc_proc_init(void);
