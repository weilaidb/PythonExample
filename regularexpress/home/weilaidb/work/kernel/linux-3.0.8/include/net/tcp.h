#define _TCP_H
#define TCP_DEBUG 1
#define FASTRETRANS_DEBUG 1
extern struct inet_hashinfo tcp_hashinfo;
extern struct percpu_counter tcp_orphan_count;
extern void tcp_time_wait(struct sock *sk, int state, int timeo);
#define MAX_TCP_HEADER	(128 + MAX_HEADER)
#define MAX_TCP_OPTION_SPACE 40
#define MAX_TCP_WINDOW		32767U
#define TCP_DEFAULT_INIT_RCVWND	10
#define TCP_MIN_MSS		88U
#define TCP_BASE_MSS		512
#define TCP_FASTRETRANS_THRESH 3
#define TCP_MAX_REORDERING	127
#define TCP_MAX_QUICKACKS	16U
#define TCP_URG_VALID	0x0100
#define TCP_URG_NOTYET	0x0200
#define TCP_URG_READ	0x0400
#define TCP_RETR1	3
#define TCP_RETR2	15
#define TCP_SYN_RETRIES	 5
#define TCP_SYNACK_RETRIES 5
#define TCP_TIMEWAIT_LEN (60*HZ)
#define TCP_FIN_TIMEOUT	TCP_TIMEWAIT_LEN
#define TCP_DELACK_MAX	((unsigned)(HZ/5))
#if HZ >= 100
#define TCP_DELACK_MIN	((unsigned)(HZ/25))
#define TCP_ATO_MIN	((unsigned)(HZ/25))
#define TCP_DELACK_MIN	4U
#define TCP_ATO_MIN	4U
#define TCP_RTO_MAX	((unsigned)(120*HZ))
#define TCP_RTO_MIN	((unsigned)(HZ/5))
#define TCP_TIMEOUT_INIT ((unsigned)(3*HZ))
#define TCP_RESOURCE_PROBE_INTERVAL ((unsigned)(HZ/2U))
#define TCP_KEEPALIVE_TIME	(120*60*HZ)
#define TCP_KEEPALIVE_PROBES	9
#define TCP_KEEPALIVE_INTVL	(75*HZ)
#define MAX_TCP_KEEPIDLE	32767
#define MAX_TCP_KEEPINTVL	32767
#define MAX_TCP_KEEPCNT		127
#define MAX_TCP_SYNCNT		127
#define TCP_SYNQ_INTERVAL	(HZ/5)
#define TCP_PAWS_24DAYS	(60 * 60 * 24 * 24)
#define TCP_PAWS_MSL	60
#define TCP_PAWS_WINDOW	1
#define TCPOPT_NOP		1
#define TCPOPT_EOL		0
#define TCPOPT_MSS		2
#define TCPOPT_WINDOW		3
#define TCPOPT_SACK_PERM        4
#define TCPOPT_SACK             5
#define TCPOPT_TIMESTAMP	8
#define TCPOPT_MD5SIG		19
#define TCPOPT_COOKIE		253
#define TCPOLEN_MSS            4
#define TCPOLEN_WINDOW         3
#define TCPOLEN_SACK_PERM      2
#define TCPOLEN_TIMESTAMP      10
#define TCPOLEN_MD5SIG         18
#define TCPOLEN_COOKIE_BASE    2
#define TCPOLEN_COOKIE_PAIR    3
#define TCPOLEN_COOKIE_MIN     (TCPOLEN_COOKIE_BASE+TCP_COOKIE_MIN)
#define TCPOLEN_COOKIE_MAX     (TCPOLEN_COOKIE_BASE+TCP_COOKIE_MAX)
#define TCPOLEN_TSTAMP_ALIGNED		12
#define TCPOLEN_WSCALE_ALIGNED		4
#define TCPOLEN_SACKPERM_ALIGNED	4
#define TCPOLEN_SACK_BASE		2
#define TCPOLEN_SACK_BASE_ALIGNED	4
#define TCPOLEN_SACK_PERBLOCK		8
#define TCPOLEN_MD5SIG_ALIGNED		20
#define TCPOLEN_MSS_ALIGNED		4
#define TCP_NAGLE_OFF		1
#define TCP_NAGLE_CORK		2
#define TCP_NAGLE_PUSH		4
#define TCP_THIN_LINEAR_RETRIES 6
#define TCP_INIT_CWND		10
extern struct inet_timewait_death_row tcp_death_row;
extern int sysctl_tcp_timestamps;
extern int sysctl_tcp_window_scaling;
extern int sysctl_tcp_sack;
extern int sysctl_tcp_fin_timeout;
extern int sysctl_tcp_keepalive_time;
extern int sysctl_tcp_keepalive_probes;
extern int sysctl_tcp_keepalive_intvl;
extern int sysctl_tcp_syn_retries;
extern int sysctl_tcp_synack_retries;
extern int sysctl_tcp_retries1;
extern int sysctl_tcp_retries2;
extern int sysctl_tcp_orphan_retries;
extern int sysctl_tcp_syncookies;
extern int sysctl_tcp_retrans_collapse;
extern int sysctl_tcp_stdurg;
extern int sysctl_tcp_rfc1337;
extern int sysctl_tcp_abort_on_overflow;
extern int sysctl_tcp_max_orphans;
extern int sysctl_tcp_fack;
extern int sysctl_tcp_reordering;
extern int sysctl_tcp_ecn;
extern int sysctl_tcp_dsack;
extern long sysctl_tcp_mem[3];
extern int sysctl_tcp_wmem[3];
extern int sysctl_tcp_rmem[3];
extern int sysctl_tcp_app_win;
extern int sysctl_tcp_adv_win_scale;
extern int sysctl_tcp_tw_reuse;
extern int sysctl_tcp_frto;
extern int sysctl_tcp_frto_response;
extern int sysctl_tcp_low_latency;
extern int sysctl_tcp_dma_copybreak;
extern int sysctl_tcp_nometrics_save;
extern int sysctl_tcp_moderate_rcvbuf;
extern int sysctl_tcp_tso_win_divisor;
extern int sysctl_tcp_abc;
extern int sysctl_tcp_mtu_probing;
extern int sysctl_tcp_base_mss;
extern int sysctl_tcp_workaround_signed_windows;
extern int sysctl_tcp_slow_start_after_idle;
extern int sysctl_tcp_max_ssthresh;
extern int sysctl_tcp_cookie_size;
extern int sysctl_tcp_thin_linear_timeouts;
extern int sysctl_tcp_thin_dupack;
extern atomic_long_t tcp_memory_allocated;
extern struct percpu_counter tcp_sockets_allocated;
extern int tcp_memory_pressure;
static inline int before(__u32 seq1, __u32 seq2)
#define after(seq2, seq1) 	before(seq1, seq2)
static inline int between(__u32 seq1, __u32 seq2, __u32 seq3)
static inline bool tcp_too_many_orphans(struct sock *sk, int shift)
static inline void tcp_synq_overflow(struct sock *sk)
static inline int tcp_synq_no_recent_overflow(const struct sock *sk)
extern struct proto tcp_prot;
#define TCP_INC_STATS(net, field)	SNMP_INC_STATS((net)->mib.tcp_statistics, field)
#define TCP_INC_STATS_BH(net, field)	SNMP_INC_STATS_BH((net)->mib.tcp_statistics, field)
#define TCP_DEC_STATS(net, field)	SNMP_DEC_STATS((net)->mib.tcp_statistics, field)
#define TCP_ADD_STATS_USER(net, field, val) SNMP_ADD_STATS_USER((net)->mib.tcp_statistics, field, val)
#define TCP_ADD_STATS(net, field, val)	SNMP_ADD_STATS((net)->mib.tcp_statistics, field, val)
extern void tcp_v4_err(struct sk_buff *skb, u32);
extern void tcp_shutdown (struct sock *sk, int how);
extern int tcp_v4_rcv(struct sk_buff *skb);
extern struct inet_peer *tcp_v4_get_peer(struct sock *sk, bool *release_it);
extern void *tcp_v4_tw_get_peer(struct sock *sk);
extern int tcp_v4_tw_remember_stamp(struct inet_timewait_sock *tw);
extern int tcp_sendmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t size);
extern int tcp_sendpage(struct sock *sk, struct page *page, int offset,
size_t size, int flags);
extern int tcp_ioctl(struct sock *sk, int cmd, unsigned long arg);
extern int tcp_rcv_state_process(struct sock *sk, struct sk_buff *skb,
struct tcphdr *th, unsigned len);
extern int tcp_rcv_established(struct sock *sk, struct sk_buff *skb,
struct tcphdr *th, unsigned len);
extern void tcp_rcv_space_adjust(struct sock *sk);
extern void tcp_cleanup_rbuf(struct sock *sk, int copied);
extern int tcp_twsk_unique(struct sock *sk, struct sock *sktw, void *twp);
extern void tcp_twsk_destructor(struct sock *sk);
extern ssize_t tcp_splice_read(struct socket *sk, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags);
static inline void tcp_dec_quickack_mode(struct sock *sk,
const unsigned int pkts)
#define	TCP_ECN_OK		1
#define	TCP_ECN_QUEUE_CWR	2
#define	TCP_ECN_DEMAND_CWR	4
static __inline__ void
TCP_ECN_create_request(struct request_sock *req, struct tcphdr *th)
enum tcp_tw_status ;
extern enum tcp_tw_status tcp_timewait_state_process(struct inet_timewait_sock *tw,
struct sk_buff *skb,
const struct tcphdr *th);
extern struct sock * tcp_check_req(struct sock *sk,struct sk_buff *skb,
struct request_sock *req,
struct request_sock **prev);
extern int tcp_child_process(struct sock *parent, struct sock *child,
struct sk_buff *skb);
extern int tcp_use_frto(struct sock *sk);
extern void tcp_enter_frto(struct sock *sk);
extern void tcp_enter_loss(struct sock *sk, int how);
extern void tcp_clear_retrans(struct tcp_sock *tp);
extern void tcp_update_metrics(struct sock *sk);
extern void tcp_close(struct sock *sk, long timeout);
extern unsigned int tcp_poll(struct file * file, struct socket *sock,
struct poll_table_struct *wait);
extern int tcp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen);
extern int tcp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen);
extern int compat_tcp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen);
extern int compat_tcp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen);
extern void tcp_set_keepalive(struct sock *sk, int val);
extern void tcp_syn_ack_timeout(struct sock *sk, struct request_sock *req);
extern int tcp_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len, int nonblock, int flags, int *addr_len);
extern void tcp_parse_options(struct sk_buff *skb,
struct tcp_options_received *opt_rx, u8 **hvpp,
int estab);
extern u8 *tcp_parse_md5sig_option(struct tcphdr *th);
extern void tcp_v4_send_check(struct sock *sk, struct sk_buff *skb);
extern int tcp_v4_conn_request(struct sock *sk, struct sk_buff *skb);
extern struct sock * tcp_create_openreq_child(struct sock *sk,
struct request_sock *req,
struct sk_buff *skb);
extern struct sock * tcp_v4_syn_recv_sock(struct sock *sk, struct sk_buff *skb,
struct request_sock *req,
struct dst_entry *dst);
extern int tcp_v4_do_rcv(struct sock *sk, struct sk_buff *skb);
extern int tcp_v4_connect(struct sock *sk, struct sockaddr *uaddr,
int addr_len);
extern int tcp_connect(struct sock *sk);
extern struct sk_buff * tcp_make_synack(struct sock *sk, struct dst_entry *dst,
struct request_sock *req,
struct request_values *rvp);
extern int tcp_disconnect(struct sock *sk, int flags);
extern __u32 syncookie_secret[2][16-4+SHA_DIGEST_WORDS];
extern struct sock *cookie_v4_check(struct sock *sk, struct sk_buff *skb,
struct ip_options *opt);
extern __u32 cookie_v4_init_sequence(struct sock *sk, struct sk_buff *skb,
__u16 *mss);
extern __u32 cookie_init_timestamp(struct request_sock *req);
extern bool cookie_check_timestamp(struct tcp_options_received *opt, bool *);
extern struct sock *cookie_v6_check(struct sock *sk, struct sk_buff *skb);
extern __u32 cookie_v6_init_sequence(struct sock *sk, struct sk_buff *skb,
__u16 *mss);
extern void __tcp_push_pending_frames(struct sock *sk, unsigned int cur_mss,
int nonagle);
extern int tcp_may_send_now(struct sock *sk);
extern int tcp_retransmit_skb(struct sock *, struct sk_buff *);
extern void tcp_retransmit_timer(struct sock *sk);
extern void tcp_xmit_retransmit_queue(struct sock *);
extern void tcp_simple_retransmit(struct sock *);
extern int tcp_trim_head(struct sock *, struct sk_buff *, u32);
extern int tcp_fragment(struct sock *, struct sk_buff *, u32, unsigned int);
extern void tcp_send_probe0(struct sock *);
extern void tcp_send_partial(struct sock *);
extern int tcp_write_wakeup(struct sock *);
extern void tcp_send_fin(struct sock *sk);
extern void tcp_send_active_reset(struct sock *sk, gfp_t priority);
extern int tcp_send_synack(struct sock *);
extern void tcp_push_one(struct sock *, unsigned int mss_now);
extern void tcp_send_ack(struct sock *sk);
extern void tcp_send_delayed_ack(struct sock *sk);
extern void tcp_cwnd_application_limited(struct sock *sk);
extern void tcp_init_xmit_timers(struct sock *);
static inline void tcp_clear_xmit_timers(struct sock *sk)
extern unsigned int tcp_sync_mss(struct sock *sk, u32 pmtu);
extern unsigned int tcp_current_mss(struct sock *sk);
static inline int tcp_bound_to_half_wnd(struct tcp_sock *tp, int pktsize)
extern void tcp_get_info(struct sock *, struct tcp_info *);
typedef int (*sk_read_actor_t)(read_descriptor_t *, struct sk_buff *,
unsigned int, size_t);
extern int tcp_read_sock(struct sock *sk, read_descriptor_t *desc,
sk_read_actor_t recv_actor);
extern void tcp_initialize_rcv_mss(struct sock *sk);
extern int tcp_mtu_to_mss(struct sock *sk, int pmtu);
extern int tcp_mss_to_mtu(struct sock *sk, int mss);
extern void tcp_mtup_init(struct sock *sk);
static inline void tcp_bound_rto(const struct sock *sk)
static inline u32 __tcp_set_rto(const struct tcp_sock *tp)
static inline void __tcp_fast_path_on(struct tcp_sock *tp, u32 snd_wnd)
static inline void tcp_fast_path_on(struct tcp_sock *tp)
static inline void tcp_fast_path_check(struct sock *sk)
static inline u32 tcp_rto_min(struct sock *sk)
static inline u32 tcp_receive_window(const struct tcp_sock *tp)
extern u32 __tcp_select_window(struct sock *sk);
#define tcp_time_stamp		((__u32)(jiffies))
#define tcp_flag_byte(th) (((u_int8_t *)th)[13])
#define TCPHDR_FIN 0x01
#define TCPHDR_SYN 0x02
#define TCPHDR_RST 0x04
#define TCPHDR_PSH 0x08
#define TCPHDR_ACK 0x10
#define TCPHDR_URG 0x20
#define TCPHDR_ECE 0x40
#define TCPHDR_CWR 0x80
struct tcp_skb_cb ;
#define TCP_SKB_CB(__skb)	((struct tcp_skb_cb *)&((__skb)->cb[0]))
static inline int tcp_skb_pcount(const struct sk_buff *skb)
static inline int tcp_skb_mss(const struct sk_buff *skb)
enum tcp_ca_event ;
#define TCP_CA_NAME_MAX	16
#define TCP_CA_MAX	128
#define TCP_CA_BUF_MAX	(TCP_CA_NAME_MAX*TCP_CA_MAX)
#define TCP_CONG_NON_RESTRICTED 0x1
#define TCP_CONG_RTT_STAMP	0x2
struct tcp_congestion_ops ;
extern int tcp_register_congestion_control(struct tcp_congestion_ops *type);
extern void tcp_unregister_congestion_control(struct tcp_congestion_ops *type);
extern void tcp_init_congestion_control(struct sock *sk);
extern void tcp_cleanup_congestion_control(struct sock *sk);
extern int tcp_set_default_congestion_control(const char *name);
extern void tcp_get_default_congestion_control(char *name);
extern void tcp_get_available_congestion_control(char *buf, size_t len);
extern void tcp_get_allowed_congestion_control(char *buf, size_t len);
extern int tcp_set_allowed_congestion_control(char *allowed);
extern int tcp_set_congestion_control(struct sock *sk, const char *name);
extern void tcp_slow_start(struct tcp_sock *tp);
extern void tcp_cong_avoid_ai(struct tcp_sock *tp, u32 w);
extern struct tcp_congestion_ops tcp_init_congestion_ops;
extern u32 tcp_reno_ssthresh(struct sock *sk);
extern void tcp_reno_cong_avoid(struct sock *sk, u32 ack, u32 in_flight);
extern u32 tcp_reno_min_cwnd(const struct sock *sk);
extern struct tcp_congestion_ops tcp_reno;
static inline void tcp_set_ca_state(struct sock *sk, const u8 ca_state)
static inline void tcp_ca_event(struct sock *sk, const enum tcp_ca_event event)
static inline int tcp_is_sack(const struct tcp_sock *tp)
static inline int tcp_is_reno(const struct tcp_sock *tp)
static inline int tcp_is_fack(const struct tcp_sock *tp)
static inline void tcp_enable_fack(struct tcp_sock *tp)
static inline unsigned int tcp_left_out(const struct tcp_sock *tp)
static inline unsigned int tcp_packets_in_flight(const struct tcp_sock *tp)
#define TCP_INFINITE_SSTHRESH	0x7fffffff
static inline bool tcp_in_initial_slowstart(const struct tcp_sock *tp)
static inline __u32 tcp_current_ssthresh(const struct sock *sk)
#define tcp_verify_left_out(tp)	WARN_ON(tcp_left_out(tp) > tp->packets_out)
extern void tcp_enter_cwr(struct sock *sk, const int set_ssthresh);
extern __u32 tcp_init_cwnd(struct tcp_sock *tp, struct dst_entry *dst);
static __inline__ __u32 tcp_max_burst(const struct tcp_sock *tp)
static inline u32 tcp_wnd_end(const struct tcp_sock *tp)
extern int tcp_is_cwnd_limited(const struct sock *sk, u32 in_flight);
static inline void tcp_minshall_update(struct tcp_sock *tp, unsigned int mss,
const struct sk_buff *skb)
static inline void tcp_check_probe_timer(struct sock *sk)
static inline void tcp_init_wl(struct tcp_sock *tp, u32 seq)
static inline void tcp_update_wl(struct tcp_sock *tp, u32 seq)
static inline __sum16 tcp_v4_check(int len, __be32 saddr,
__be32 daddr, __wsum base)
static inline __sum16 __tcp_checksum_complete(struct sk_buff *skb)
static inline int tcp_checksum_complete(struct sk_buff *skb)
static inline void tcp_prequeue_init(struct tcp_sock *tp)
static inline int tcp_prequeue(struct sock *sk, struct sk_buff *skb)
#undef STATE_TRACE
static const char *statename[]=;
extern void tcp_set_state(struct sock *sk, int state);
extern void tcp_done(struct sock *sk);
static inline void tcp_sack_reset(struct tcp_options_received *rx_opt)
extern void tcp_select_initial_window(int __space, __u32 mss,
__u32 *rcv_wnd, __u32 *window_clamp,
int wscale_ok, __u8 *rcv_wscale,
__u32 init_rcv_wnd);
static inline int tcp_win_from_space(int space)
static inline int tcp_space(const struct sock *sk)
static inline int tcp_full_space(const struct sock *sk)
static inline void tcp_openreq_init(struct request_sock *req,
struct tcp_options_received *rx_opt,
struct sk_buff *skb)
extern void tcp_enter_memory_pressure(struct sock *sk);
static inline int keepalive_intvl_when(const struct tcp_sock *tp)
static inline int keepalive_time_when(const struct tcp_sock *tp)
static inline int keepalive_probes(const struct tcp_sock *tp)
static inline u32 keepalive_time_elapsed(const struct tcp_sock *tp)
static inline int tcp_fin_time(const struct sock *sk)
static inline int tcp_paws_check(const struct tcp_options_received *rx_opt,
int paws_win)
static inline int tcp_paws_reject(const struct tcp_options_received *rx_opt,
int rst)
static inline void tcp_mib_init(struct net *net)
static inline void tcp_clear_retrans_hints_partial(struct tcp_sock *tp)
static inline void tcp_clear_all_retrans_hints(struct tcp_sock *tp)
struct crypto_hash;
struct tcp_md5sig_key ;
struct tcp4_md5sig_key ;
struct tcp6_md5sig_key ;
struct tcp_md5sig_info ;
struct tcp4_pseudohdr ;
struct tcp6_pseudohdr ;
union tcp_md5sum_block ;
struct tcp_md5sig_pool ;
extern int tcp_v4_md5_hash_skb(char *md5_hash, struct tcp_md5sig_key *key,
struct sock *sk, struct request_sock *req,
struct sk_buff *skb);
extern struct tcp_md5sig_key * tcp_v4_md5_lookup(struct sock *sk,
struct sock *addr_sk);
extern int tcp_v4_md5_do_add(struct sock *sk, __be32 addr, u8 *newkey,
u8 newkeylen);
extern int tcp_v4_md5_do_del(struct sock *sk, __be32 addr);
#define tcp_twsk_md5_key(twsk)	((twsk)->tw_md5_keylen ? 		 \
&(struct tcp_md5sig_key)  : NULL)
#define tcp_twsk_md5_key(twsk)	NULL
extern struct tcp_md5sig_pool * __percpu *tcp_alloc_md5sig_pool(struct sock *);
extern void tcp_free_md5sig_pool(void);
extern struct tcp_md5sig_pool	*tcp_get_md5sig_pool(void);
extern void tcp_put_md5sig_pool(void);
extern int tcp_md5_hash_header(struct tcp_md5sig_pool *, struct tcphdr *);
extern int tcp_md5_hash_skb_data(struct tcp_md5sig_pool *, struct sk_buff *,
unsigned header_len);
extern int tcp_md5_hash_key(struct tcp_md5sig_pool *hp,
struct tcp_md5sig_key *key);
static inline void tcp_write_queue_purge(struct sock *sk)
static inline struct sk_buff *tcp_write_queue_head(struct sock *sk)
static inline struct sk_buff *tcp_write_queue_tail(struct sock *sk)
static inline struct sk_buff *tcp_write_queue_next(struct sock *sk, struct sk_buff *skb)
static inline struct sk_buff *tcp_write_queue_prev(struct sock *sk, struct sk_buff *skb)
#define tcp_for_write_queue(skb, sk)					\
skb_queue_walk(&(sk)->sk_write_queue, skb)
#define tcp_for_write_queue_from(skb, sk)				\
skb_queue_walk_from(&(sk)->sk_write_queue, skb)
#define tcp_for_write_queue_from_safe(skb, tmp, sk)			\
skb_queue_walk_from_safe(&(sk)->sk_write_queue, skb, tmp)
static inline struct sk_buff *tcp_send_head(struct sock *sk)
static inline bool tcp_skb_is_last(const struct sock *sk,
const struct sk_buff *skb)
static inline void tcp_advance_send_head(struct sock *sk, struct sk_buff *skb)
static inline void tcp_check_send_head(struct sock *sk, struct sk_buff *skb_unlinked)
static inline void tcp_init_send_head(struct sock *sk)
static inline void __tcp_add_write_queue_tail(struct sock *sk, struct sk_buff *skb)
static inline void tcp_add_write_queue_tail(struct sock *sk, struct sk_buff *skb)
static inline void __tcp_add_write_queue_head(struct sock *sk, struct sk_buff *skb)
static inline void tcp_insert_write_queue_after(struct sk_buff *skb,
struct sk_buff *buff,
struct sock *sk)
static inline void tcp_insert_write_queue_before(struct sk_buff *new,
struct sk_buff *skb,
struct sock *sk)
static inline void tcp_unlink_write_queue(struct sk_buff *skb, struct sock *sk)
static inline int tcp_write_queue_empty(struct sock *sk)
static inline void tcp_push_pending_frames(struct sock *sk)
static inline u32 tcp_highest_sack_seq(struct tcp_sock *tp)
static inline void tcp_advance_highest_sack(struct sock *sk, struct sk_buff *skb)
static inline struct sk_buff *tcp_highest_sack(struct sock *sk)
static inline void tcp_highest_sack_reset(struct sock *sk)
static inline void tcp_highest_sack_combine(struct sock *sk,
struct sk_buff *old,
struct sk_buff *new)
static inline unsigned int tcp_stream_is_thin(struct tcp_sock *tp)
enum tcp_seq_states ;
struct tcp_seq_afinfo ;
struct tcp_iter_state ;
extern int tcp_proc_register(struct net *net, struct tcp_seq_afinfo *afinfo);
extern void tcp_proc_unregister(struct net *net, struct tcp_seq_afinfo *afinfo);
extern struct request_sock_ops tcp_request_sock_ops;
extern struct request_sock_ops tcp6_request_sock_ops;
extern void tcp_v4_destroy_sock(struct sock *sk);
extern int tcp_v4_gso_send_check(struct sk_buff *skb);
extern struct sk_buff *tcp_tso_segment(struct sk_buff *skb, u32 features);
extern struct sk_buff **tcp_gro_receive(struct sk_buff **head,
struct sk_buff *skb);
extern struct sk_buff **tcp4_gro_receive(struct sk_buff **head,
struct sk_buff *skb);
extern int tcp_gro_complete(struct sk_buff *skb);
extern int tcp4_gro_complete(struct sk_buff *skb);
extern int tcp4_proc_init(void);
extern void tcp4_proc_exit(void);
struct tcp_sock_af_ops ;
struct tcp_request_sock_ops ;
#define COOKIE_DIGEST_WORDS (SHA_DIGEST_WORDS)
#define COOKIE_MESSAGE_WORDS (SHA_MESSAGE_BYTES / 4)
#define COOKIE_WORKSPACE_WORDS (COOKIE_DIGEST_WORDS + COOKIE_MESSAGE_WORDS)
extern int tcp_cookie_generator(u32 *bakery);
struct tcp_cookie_values ;
static inline void tcp_cookie_values_release(struct kref *kref)
static inline int tcp_s_data_size(const struct tcp_sock *tp)
struct tcp_extend_values ;
static inline struct tcp_extend_values *tcp_xv(struct request_values *rvp)
extern void tcp_v4_init(void);
extern void tcp_init(void);
