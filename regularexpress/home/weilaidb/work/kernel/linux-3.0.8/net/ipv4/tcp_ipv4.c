int sysctl_tcp_tw_reuse __read_mostly;
int sysctl_tcp_low_latency __read_mostly;
EXPORT_SYMBOL(sysctl_tcp_low_latency);
static struct tcp_md5sig_key *tcp_v4_md5_do_lookup(struct sock *sk,
__be32 addr);
static int tcp_v4_md5_hash_hdr(char *md5_hash, struct tcp_md5sig_key *key,
__be32 daddr, __be32 saddr, struct tcphdr *th);
static inline
struct tcp_md5sig_key *tcp_v4_md5_do_lookup(struct sock *sk, __be32 addr)
struct inet_hashinfo tcp_hashinfo;
EXPORT_SYMBOL(tcp_hashinfo);
static inline __u32 tcp_v4_init_sequence(struct sk_buff *skb)
int tcp_twsk_unique(struct sock *sk, struct sock *sktw, void *twp)
EXPORT_SYMBOL_GPL(tcp_twsk_unique);
int tcp_v4_connect(struct sock *sk, struct sockaddr *uaddr, int addr_len)
EXPORT_SYMBOL(tcp_v4_connect);
static void do_pmtu_discovery(struct sock *sk, const struct iphdr *iph, u32 mtu)
void tcp_v4_err(struct sk_buff *icmp_skb, u32 info)
static void __tcp_v4_send_check(struct sk_buff *skb,
__be32 saddr, __be32 daddr)
void tcp_v4_send_check(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL(tcp_v4_send_check);
int tcp_v4_gso_send_check(struct sk_buff *skb)
static void tcp_v4_send_reset(struct sock *sk, struct sk_buff *skb)
static void tcp_v4_send_ack(struct sk_buff *skb, u32 seq, u32 ack,
u32 win, u32 ts, int oif,
struct tcp_md5sig_key *key,
int reply_flags)
static void tcp_v4_timewait_ack(struct sock *sk, struct sk_buff *skb)
static void tcp_v4_reqsk_send_ack(struct sock *sk, struct sk_buff *skb,
struct request_sock *req)
static int tcp_v4_send_synack(struct sock *sk, struct dst_entry *dst,
struct request_sock *req,
struct request_values *rvp)
static int tcp_v4_rtx_synack(struct sock *sk, struct request_sock *req,
struct request_values *rvp)
static void tcp_v4_reqsk_destructor(struct request_sock *req)
static void syn_flood_warning(const struct sk_buff *skb)
static struct ip_options_rcu *tcp_v4_save_options(struct sock *sk,
struct sk_buff *skb)
static struct tcp_md5sig_key *
tcp_v4_md5_do_lookup(struct sock *sk, __be32 addr)
struct tcp_md5sig_key *tcp_v4_md5_lookup(struct sock *sk,
struct sock *addr_sk)
EXPORT_SYMBOL(tcp_v4_md5_lookup);
static struct tcp_md5sig_key *tcp_v4_reqsk_md5_lookup(struct sock *sk,
struct request_sock *req)
int tcp_v4_md5_do_add(struct sock *sk, __be32 addr,
u8 *newkey, u8 newkeylen)
EXPORT_SYMBOL(tcp_v4_md5_do_add);
static int tcp_v4_md5_add_func(struct sock *sk, struct sock *addr_sk,
u8 *newkey, u8 newkeylen)
int tcp_v4_md5_do_del(struct sock *sk, __be32 addr)
EXPORT_SYMBOL(tcp_v4_md5_do_del);
static void tcp_v4_clear_md5_list(struct sock *sk)
static int tcp_v4_parse_md5_keys(struct sock *sk, char __user *optval,
int optlen)
static int tcp_v4_md5_hash_pseudoheader(struct tcp_md5sig_pool *hp,
__be32 daddr, __be32 saddr, int nbytes)
static int tcp_v4_md5_hash_hdr(char *md5_hash, struct tcp_md5sig_key *key,
__be32 daddr, __be32 saddr, struct tcphdr *th)
int tcp_v4_md5_hash_skb(char *md5_hash, struct tcp_md5sig_key *key,
struct sock *sk, struct request_sock *req,
struct sk_buff *skb)
EXPORT_SYMBOL(tcp_v4_md5_hash_skb);
static int tcp_v4_inbound_md5_hash(struct sock *sk, struct sk_buff *skb)
struct request_sock_ops tcp_request_sock_ops __read_mostly = ;
static const struct tcp_request_sock_ops tcp_request_sock_ipv4_ops = ;
int tcp_v4_conn_request(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL(tcp_v4_conn_request);
struct sock *tcp_v4_syn_recv_sock(struct sock *sk, struct sk_buff *skb,
struct request_sock *req,
struct dst_entry *dst)
EXPORT_SYMBOL(tcp_v4_syn_recv_sock);
static struct sock *tcp_v4_hnd_req(struct sock *sk, struct sk_buff *skb)
static __sum16 tcp_v4_checksum_init(struct sk_buff *skb)
int tcp_v4_do_rcv(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL(tcp_v4_do_rcv);
int tcp_v4_rcv(struct sk_buff *skb)
struct inet_peer *tcp_v4_get_peer(struct sock *sk, bool *release_it)
EXPORT_SYMBOL(tcp_v4_get_peer);
void *tcp_v4_tw_get_peer(struct sock *sk)
EXPORT_SYMBOL(tcp_v4_tw_get_peer);
static struct timewait_sock_ops tcp_timewait_sock_ops = ;
const struct inet_connection_sock_af_ops ipv4_specific = ;
EXPORT_SYMBOL(ipv4_specific);
static const struct tcp_sock_af_ops tcp_sock_ipv4_specific = ;
static int tcp_v4_init_sock(struct sock *sk)
void tcp_v4_destroy_sock(struct sock *sk)
EXPORT_SYMBOL(tcp_v4_destroy_sock);
static inline struct inet_timewait_sock *tw_head(struct hlist_nulls_head *head)
static inline struct inet_timewait_sock *tw_next(struct inet_timewait_sock *tw)
static void *listening_get_next(struct seq_file *seq, void *cur)
static void *listening_get_idx(struct seq_file *seq, loff_t *pos)
static inline int empty_bucket(struct tcp_iter_state *st)
static void *established_get_first(struct seq_file *seq)
static void *established_get_next(struct seq_file *seq, void *cur)
static void *established_get_idx(struct seq_file *seq, loff_t pos)
static void *tcp_get_idx(struct seq_file *seq, loff_t pos)
static void *tcp_seek_last_pos(struct seq_file *seq)
static void *tcp_seq_start(struct seq_file *seq, loff_t *pos)
static void *tcp_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void tcp_seq_stop(struct seq_file *seq, void *v)
static int tcp_seq_open(struct inode *inode, struct file *file)
int tcp_proc_register(struct net *net, struct tcp_seq_afinfo *afinfo)
EXPORT_SYMBOL(tcp_proc_register);
void tcp_proc_unregister(struct net *net, struct tcp_seq_afinfo *afinfo)
EXPORT_SYMBOL(tcp_proc_unregister);
static void get_openreq4(struct sock *sk, struct request_sock *req,
struct seq_file *f, int i, int uid, int *len)
static void get_tcp4_sock(struct sock *sk, struct seq_file *f, int i, int *len)
static void get_timewait4_sock(struct inet_timewait_sock *tw,
struct seq_file *f, int i, int *len)
#define TMPSZ 150
static int tcp4_seq_show(struct seq_file *seq, void *v)
static struct tcp_seq_afinfo tcp4_seq_afinfo = ;
static int __net_init tcp4_proc_init_net(struct net *net)
static void __net_exit tcp4_proc_exit_net(struct net *net)
static struct pernet_operations tcp4_net_ops = ;
int __init tcp4_proc_init(void)
void tcp4_proc_exit(void)
struct sk_buff **tcp4_gro_receive(struct sk_buff **head, struct sk_buff *skb)
int tcp4_gro_complete(struct sk_buff *skb)
struct proto tcp_prot = ;
EXPORT_SYMBOL(tcp_prot);
static int __net_init tcp_sk_init(struct net *net)
static void __net_exit tcp_sk_exit(struct net *net)
static void __net_exit tcp_sk_exit_batch(struct list_head *net_exit_list)
static struct pernet_operations __net_initdata tcp_sk_ops = ;
void __init tcp_v4_init(void)
