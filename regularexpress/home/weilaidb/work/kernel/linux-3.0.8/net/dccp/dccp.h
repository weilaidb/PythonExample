#define _DCCP_H
#define DCCP_WARN(fmt, a...) LIMIT_NETDEBUG(KERN_WARNING "%s: " fmt,       \
__func__, ##a)
#define DCCP_CRIT(fmt, a...) printk(KERN_CRIT fmt " at %s:%d/%s()\n", ##a, \
__FILE__, __LINE__, __func__)
#define DCCP_BUG(a...)       do  while(0)
#define DCCP_BUG_ON(cond)    do  while (0)
#define DCCP_PRINTK(enable, fmt, args...)	do  while(0)
#define DCCP_PR_DEBUG(enable, fmt, a...)	DCCP_PRINTK(enable, KERN_DEBUG \
"%s: " fmt, __func__, ##a)
extern int dccp_debug;
#define dccp_pr_debug(format, a...)	  DCCP_PR_DEBUG(dccp_debug, format, ##a)
#define dccp_pr_debug_cat(format, a...)   DCCP_PRINTK(dccp_debug, format, ##a)
#define dccp_debug(fmt, a...)		  dccp_pr_debug_cat(KERN_DEBUG fmt, ##a)
#define dccp_pr_debug(format, a...)
#define dccp_pr_debug_cat(format, a...)
#define dccp_debug(format, a...)
extern struct inet_hashinfo dccp_hashinfo;
extern struct percpu_counter dccp_orphan_count;
extern void dccp_time_wait(struct sock *sk, int state, int timeo);
#define MAX_DCCP_SPECIFIC_HEADER (255 * sizeof(uint32_t))
#define DCCP_MAX_PACKET_HDR 28
#define DCCP_MAX_OPT_LEN (MAX_DCCP_SPECIFIC_HEADER - DCCP_MAX_PACKET_HDR)
#define MAX_DCCP_HEADER (MAX_DCCP_SPECIFIC_HEADER + MAX_HEADER)
#define DCCP_FEATNEG_OVERHEAD	 (32 * sizeof(uint32_t))
#define DCCP_TIMEWAIT_LEN (60 * HZ)
#define DCCP_TIMEOUT_INIT ((unsigned)(3 * HZ))
#define DCCP_RTO_MAX ((unsigned)(64 * HZ))
#define DCCP_SANE_RTT_MIN	100
#define DCCP_FALLBACK_RTT	(USEC_PER_SEC / 5)
#define DCCP_SANE_RTT_MAX	(3 * USEC_PER_SEC)
extern int  sysctl_dccp_request_retries;
extern int  sysctl_dccp_retries1;
extern int  sysctl_dccp_retries2;
extern int  sysctl_dccp_tx_qlen;
extern int  sysctl_dccp_sync_ratelimit;
#define INT48_MIN	  0x800000000000LL
#define UINT48_MAX	  0xFFFFFFFFFFFFLL
#define COMPLEMENT48(x)	 (0x1000000000000LL - (x))
#define TO_SIGNED48(x)	 (((x) < INT48_MIN)? (x) : -COMPLEMENT48( (x)))
#define TO_UNSIGNED48(x) (((x) >= 0)?	     (x) :  COMPLEMENT48(-(x)))
#define ADD48(a, b)	 (((a) + (b)) & UINT48_MAX)
#define SUB48(a, b)	 ADD48((a), COMPLEMENT48(b))
static inline void dccp_set_seqno(u64 *seqno, u64 value)
static inline void dccp_inc_seqno(u64 *seqno)
static inline s64 dccp_delta_seqno(const u64 seqno1, const u64 seqno2)
static inline int before48(const u64 seq1, const u64 seq2)
#define after48(seq1, seq2)	before48(seq2, seq1)
static inline int between48(const u64 seq1, const u64 seq2, const u64 seq3)
static inline u64 max48(const u64 seq1, const u64 seq2)
static inline u64 dccp_loss_count(const u64 s1, const u64 s2, const u64 ndp)
static inline bool dccp_loss_free(const u64 s1, const u64 s2, const u64 ndp)
enum ;
#define DCCP_MIB_MAX	__DCCP_MIB_MAX
struct dccp_mib ;
DECLARE_SNMP_STAT(struct dccp_mib, dccp_statistics);
#define DCCP_INC_STATS(field)	    SNMP_INC_STATS(dccp_statistics, field)
#define DCCP_INC_STATS_BH(field)    SNMP_INC_STATS_BH(dccp_statistics, field)
#define DCCP_DEC_STATS(field)	    SNMP_DEC_STATS(dccp_statistics, field)
static inline unsigned int dccp_csum_coverage(const struct sk_buff *skb)
static inline void dccp_csum_outgoing(struct sk_buff *skb)
extern void dccp_v4_send_check(struct sock *sk, struct sk_buff *skb);
extern int  dccp_retransmit_skb(struct sock *sk);
extern void dccp_send_ack(struct sock *sk);
extern void dccp_reqsk_send_ack(struct sock *sk, struct sk_buff *skb,
struct request_sock *rsk);
extern void dccp_send_sync(struct sock *sk, const u64 seq,
const enum dccp_pkt_type pkt_type);
extern void		dccp_qpolicy_push(struct sock *sk, struct sk_buff *skb);
extern bool		dccp_qpolicy_full(struct sock *sk);
extern void		dccp_qpolicy_drop(struct sock *sk, struct sk_buff *skb);
extern struct sk_buff	*dccp_qpolicy_top(struct sock *sk);
extern struct sk_buff	*dccp_qpolicy_pop(struct sock *sk);
extern bool		dccp_qpolicy_param_ok(struct sock *sk, __be32 param);
extern void   dccp_write_xmit(struct sock *sk);
extern void   dccp_write_space(struct sock *sk);
extern void   dccp_flush_write_queue(struct sock *sk, long *time_budget);
extern void dccp_init_xmit_timers(struct sock *sk);
static inline void dccp_clear_xmit_timers(struct sock *sk)
extern unsigned int dccp_sync_mss(struct sock *sk, u32 pmtu);
extern const char *dccp_packet_name(const int type);
extern void dccp_set_state(struct sock *sk, const int state);
extern void dccp_done(struct sock *sk);
extern int  dccp_reqsk_init(struct request_sock *rq, struct dccp_sock const *dp,
struct sk_buff const *skb);
extern int dccp_v4_conn_request(struct sock *sk, struct sk_buff *skb);
extern struct sock *dccp_create_openreq_child(struct sock *sk,
const struct request_sock *req,
const struct sk_buff *skb);
extern int dccp_v4_do_rcv(struct sock *sk, struct sk_buff *skb);
extern struct sock *dccp_v4_request_recv_sock(struct sock *sk,
struct sk_buff *skb,
struct request_sock *req,
struct dst_entry *dst);
extern struct sock *dccp_check_req(struct sock *sk, struct sk_buff *skb,
struct request_sock *req,
struct request_sock **prev);
extern int dccp_child_process(struct sock *parent, struct sock *child,
struct sk_buff *skb);
extern int dccp_rcv_state_process(struct sock *sk, struct sk_buff *skb,
struct dccp_hdr *dh, unsigned len);
extern int dccp_rcv_established(struct sock *sk, struct sk_buff *skb,
const struct dccp_hdr *dh, const unsigned len);
extern int dccp_init_sock(struct sock *sk, const __u8 ctl_sock_initialized);
extern void dccp_destroy_sock(struct sock *sk);
extern void		dccp_close(struct sock *sk, long timeout);
extern struct sk_buff	*dccp_make_response(struct sock *sk,
struct dst_entry *dst,
struct request_sock *req);
extern int	   dccp_connect(struct sock *sk);
extern int	   dccp_disconnect(struct sock *sk, int flags);
extern int	   dccp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen);
extern int	   dccp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen);
extern int	   compat_dccp_getsockopt(struct sock *sk,
int level, int optname,
char __user *optval, int __user *optlen);
extern int	   compat_dccp_setsockopt(struct sock *sk,
int level, int optname,
char __user *optval, unsigned int optlen);
extern int	   dccp_ioctl(struct sock *sk, int cmd, unsigned long arg);
extern int	   dccp_sendmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t size);
extern int	   dccp_recvmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len, int nonblock,
int flags, int *addr_len);
extern void	   dccp_shutdown(struct sock *sk, int how);
extern int	   inet_dccp_listen(struct socket *sock, int backlog);
extern unsigned int dccp_poll(struct file *file, struct socket *sock,
poll_table *wait);
extern int	   dccp_v4_connect(struct sock *sk, struct sockaddr *uaddr,
int addr_len);
extern struct sk_buff *dccp_ctl_make_reset(struct sock *sk,
struct sk_buff *skb);
extern int	   dccp_send_reset(struct sock *sk, enum dccp_reset_codes code);
extern void	   dccp_send_close(struct sock *sk, const int active);
extern int	   dccp_invalid_packet(struct sk_buff *skb);
extern u32	   dccp_sample_rtt(struct sock *sk, long delta);
static inline int dccp_bad_service_code(const struct sock *sk,
const __be32 service)
struct dccp_skb_cb ;
#define DCCP_SKB_CB(__skb) ((struct dccp_skb_cb *)&((__skb)->cb[0]))
static inline int dccp_non_data_packet(const struct sk_buff *skb)
static inline int dccp_data_packet(const struct sk_buff *skb)
static inline int dccp_packet_without_ack(const struct sk_buff *skb)
#define DCCP_PKT_WITHOUT_ACK_SEQ (UINT48_MAX << 2)
static inline void dccp_hdr_set_seq(struct dccp_hdr *dh, const u64 gss)
static inline void dccp_hdr_set_ack(struct dccp_hdr_ack_bits *dhack,
const u64 gsr)
static inline void dccp_update_gsr(struct sock *sk, u64 seq)
static inline void dccp_update_gss(struct sock *sk, u64 seq)
static inline int dccp_ackvec_pending(const struct sock *sk)
static inline int dccp_ack_pending(const struct sock *sk)
extern int  dccp_feat_finalise_settings(struct dccp_sock *dp);
extern int  dccp_feat_server_ccid_dependencies(struct dccp_request_sock *dreq);
extern int  dccp_feat_insert_opts(struct dccp_sock*, struct dccp_request_sock*,
struct sk_buff *skb);
extern int  dccp_feat_activate_values(struct sock *sk, struct list_head *fn);
extern void dccp_feat_list_purge(struct list_head *fn_list);
extern int dccp_insert_options(struct sock *sk, struct sk_buff *skb);
extern int dccp_insert_options_rsk(struct dccp_request_sock*, struct sk_buff*);
extern int dccp_insert_option_elapsed_time(struct sk_buff *skb, u32 elapsed);
extern u32 dccp_timestamp(void);
extern void dccp_timestamping_init(void);
extern int dccp_insert_option(struct sk_buff *skb, unsigned char option,
const void *value, unsigned char len);
extern int dccp_sysctl_init(void);
extern void dccp_sysctl_exit(void);
static inline int dccp_sysctl_init(void)
static inline void dccp_sysctl_exit(void)
