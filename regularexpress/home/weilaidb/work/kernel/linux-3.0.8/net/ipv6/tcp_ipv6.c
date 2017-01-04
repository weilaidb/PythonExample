static void	tcp_v6_send_reset(struct sock *sk, struct sk_buff *skb);
static void	tcp_v6_reqsk_send_ack(struct sock *sk, struct sk_buff *skb,
struct request_sock *req);
static int	tcp_v6_do_rcv(struct sock *sk, struct sk_buff *skb);
static void	__tcp_v6_send_check(struct sk_buff *skb,
const struct in6_addr *saddr,
const struct in6_addr *daddr);
static const struct inet_connection_sock_af_ops ipv6_mapped;
static const struct inet_connection_sock_af_ops ipv6_specific;
static const struct tcp_sock_af_ops tcp_sock_ipv6_specific;
static const struct tcp_sock_af_ops tcp_sock_ipv6_mapped_specific;
static struct tcp_md5sig_key *tcp_v6_md5_do_lookup(struct sock *sk,
const struct in6_addr *addr)
static void tcp_v6_hash(struct sock *sk)
static __inline__ __sum16 tcp_v6_check(int len,
const struct in6_addr *saddr,
const struct in6_addr *daddr,
__wsum base)
static __u32 tcp_v6_init_sequence(struct sk_buff *skb)
static int tcp_v6_connect(struct sock *sk, struct sockaddr *uaddr,
int addr_len)
static void tcp_v6_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static int tcp_v6_send_synack(struct sock *sk, struct request_sock *req,
struct request_values *rvp)
static int tcp_v6_rtx_synack(struct sock *sk, struct request_sock *req,
struct request_values *rvp)
static inline void syn_flood_warning(struct sk_buff *skb)
static void tcp_v6_reqsk_destructor(struct request_sock *req)
static struct tcp_md5sig_key *tcp_v6_md5_do_lookup(struct sock *sk,
const struct in6_addr *addr)
static struct tcp_md5sig_key *tcp_v6_md5_lookup(struct sock *sk,
struct sock *addr_sk)
static struct tcp_md5sig_key *tcp_v6_reqsk_md5_lookup(struct sock *sk,
struct request_sock *req)
static int tcp_v6_md5_do_add(struct sock *sk, const struct in6_addr *peer,
char *newkey, u8 newkeylen)
static int tcp_v6_md5_add_func(struct sock *sk, struct sock *addr_sk,
u8 *newkey, __u8 newkeylen)
static int tcp_v6_md5_do_del(struct sock *sk, const struct in6_addr *peer)
static void tcp_v6_clear_md5_list (struct sock *sk)
static int tcp_v6_parse_md5_keys (struct sock *sk, char __user *optval,
int optlen)
static int tcp_v6_md5_hash_pseudoheader(struct tcp_md5sig_pool *hp,
const struct in6_addr *daddr,
const struct in6_addr *saddr, int nbytes)
static int tcp_v6_md5_hash_hdr(char *md5_hash, struct tcp_md5sig_key *key,
const struct in6_addr *daddr, struct in6_addr *saddr,
struct tcphdr *th)
static int tcp_v6_md5_hash_skb(char *md5_hash, struct tcp_md5sig_key *key,
struct sock *sk, struct request_sock *req,
struct sk_buff *skb)
static int tcp_v6_inbound_md5_hash (struct sock *sk, struct sk_buff *skb)
struct request_sock_ops tcp6_request_sock_ops __read_mostly = ;
static const struct tcp_request_sock_ops tcp_request_sock_ipv6_ops = ;
static void __tcp_v6_send_check(struct sk_buff *skb,
const struct in6_addr *saddr, const struct in6_addr *daddr)
static void tcp_v6_send_check(struct sock *sk, struct sk_buff *skb)
static int tcp_v6_gso_send_check(struct sk_buff *skb)
static struct sk_buff **tcp6_gro_receive(struct sk_buff **head,
struct sk_buff *skb)
static int tcp6_gro_complete(struct sk_buff *skb)
static void tcp_v6_send_response(struct sk_buff *skb, u32 seq, u32 ack, u32 win,
u32 ts, struct tcp_md5sig_key *key, int rst)
static void tcp_v6_send_reset(struct sock *sk, struct sk_buff *skb)
static void tcp_v6_send_ack(struct sk_buff *skb, u32 seq, u32 ack, u32 win, u32 ts,
struct tcp_md5sig_key *key)
static void tcp_v6_timewait_ack(struct sock *sk, struct sk_buff *skb)
static void tcp_v6_reqsk_send_ack(struct sock *sk, struct sk_buff *skb,
struct request_sock *req)
static struct sock *tcp_v6_hnd_req(struct sock *sk,struct sk_buff *skb)
static int tcp_v6_conn_request(struct sock *sk, struct sk_buff *skb)
static struct sock * tcp_v6_syn_recv_sock(struct sock *sk, struct sk_buff *skb,
struct request_sock *req,
struct dst_entry *dst)
static __sum16 tcp_v6_checksum_init(struct sk_buff *skb)
static int tcp_v6_do_rcv(struct sock *sk, struct sk_buff *skb)
static int tcp_v6_rcv(struct sk_buff *skb)
static struct inet_peer *tcp_v6_get_peer(struct sock *sk, bool *release_it)
static void *tcp_v6_tw_get_peer(struct sock *sk)
static struct timewait_sock_ops tcp6_timewait_sock_ops = ;
static const struct inet_connection_sock_af_ops ipv6_specific = ;
static const struct tcp_sock_af_ops tcp_sock_ipv6_specific = ;
static const struct inet_connection_sock_af_ops ipv6_mapped = ;
static const struct tcp_sock_af_ops tcp_sock_ipv6_mapped_specific = ;
static int tcp_v6_init_sock(struct sock *sk)
static void tcp_v6_destroy_sock(struct sock *sk)
static void get_openreq6(struct seq_file *seq,
struct sock *sk, struct request_sock *req, int i, int uid)
static void get_tcp6_sock(struct seq_file *seq, struct sock *sp, int i)
static void get_timewait6_sock(struct seq_file *seq,
struct inet_timewait_sock *tw, int i)
static int tcp6_seq_show(struct seq_file *seq, void *v)
static struct tcp_seq_afinfo tcp6_seq_afinfo = ;
int __net_init tcp6_proc_init(struct net *net)
void tcp6_proc_exit(struct net *net)
struct proto tcpv6_prot = ;
static const struct inet6_protocol tcpv6_protocol = ;
static struct inet_protosw tcpv6_protosw = ;
static int __net_init tcpv6_net_init(struct net *net)
static void __net_exit tcpv6_net_exit(struct net *net)
static void __net_exit tcpv6_net_exit_batch(struct list_head *net_exit_list)
static struct pernet_operations tcpv6_net_ops = ;
int __init tcpv6_init(void)
void tcpv6_exit(void)
