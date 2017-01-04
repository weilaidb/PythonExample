int sysctl_tcp_timestamps __read_mostly = 1;
int sysctl_tcp_window_scaling __read_mostly = 1;
int sysctl_tcp_sack __read_mostly = 1;
int sysctl_tcp_fack __read_mostly = 1;
int sysctl_tcp_reordering __read_mostly = TCP_FASTRETRANS_THRESH;
EXPORT_SYMBOL(sysctl_tcp_reordering);
int sysctl_tcp_ecn __read_mostly = 2;
EXPORT_SYMBOL(sysctl_tcp_ecn);
int sysctl_tcp_dsack __read_mostly = 1;
int sysctl_tcp_app_win __read_mostly = 31;
int sysctl_tcp_adv_win_scale __read_mostly = 2;
EXPORT_SYMBOL(sysctl_tcp_adv_win_scale);
int sysctl_tcp_stdurg __read_mostly;
int sysctl_tcp_rfc1337 __read_mostly;
int sysctl_tcp_max_orphans __read_mostly = NR_FILE;
int sysctl_tcp_frto __read_mostly = 2;
int sysctl_tcp_frto_response __read_mostly;
int sysctl_tcp_nometrics_save __read_mostly;
int sysctl_tcp_thin_dupack __read_mostly;
int sysctl_tcp_moderate_rcvbuf __read_mostly = 1;
int sysctl_tcp_abc __read_mostly;
#define FLAG_DATA		0x01
#define FLAG_WIN_UPDATE		0x02
#define FLAG_DATA_ACKED		0x04
#define FLAG_RETRANS_DATA_ACKED	0x08
#define FLAG_SYN_ACKED		0x10
#define FLAG_DATA_SACKED	0x20
#define FLAG_ECE		0x40
#define FLAG_DATA_LOST		0x80
#define FLAG_SLOWPATH		0x100
#define FLAG_ONLY_ORIG_SACKED	0x200
#define FLAG_SND_UNA_ADVANCED	0x400
#define FLAG_DSACKING_ACK	0x800
#define FLAG_NONHEAD_RETRANS_ACKED	0x1000
#define FLAG_SACK_RENEGING	0x2000
#define FLAG_ACKED		(FLAG_DATA_ACKED|FLAG_SYN_ACKED)
#define FLAG_NOT_DUP		(FLAG_DATA|FLAG_WIN_UPDATE|FLAG_ACKED)
#define FLAG_CA_ALERT		(FLAG_DATA_SACKED|FLAG_ECE)
#define FLAG_FORWARD_PROGRESS	(FLAG_ACKED|FLAG_DATA_SACKED)
#define FLAG_ANY_PROGRESS	(FLAG_FORWARD_PROGRESS|FLAG_SND_UNA_ADVANCED)
#define TCP_REMNANT (TCP_FLAG_FIN|TCP_FLAG_URG|TCP_FLAG_SYN|TCP_FLAG_PSH)
#define TCP_HP_BITS (~(TCP_RESERVED_BITS|TCP_FLAG_PSH))
static void tcp_measure_rcv_mss(struct sock *sk, const struct sk_buff *skb)
static void tcp_incr_quickack(struct sock *sk)
static void tcp_enter_quickack_mode(struct sock *sk)
static inline int tcp_in_quickack_mode(const struct sock *sk)
static inline void TCP_ECN_queue_cwr(struct tcp_sock *tp)
static inline void TCP_ECN_accept_cwr(struct tcp_sock *tp, struct sk_buff *skb)
static inline void TCP_ECN_withdraw_cwr(struct tcp_sock *tp)
static inline void TCP_ECN_check_ce(struct tcp_sock *tp, struct sk_buff *skb)
static inline void TCP_ECN_rcv_synack(struct tcp_sock *tp, struct tcphdr *th)
static inline void TCP_ECN_rcv_syn(struct tcp_sock *tp, struct tcphdr *th)
static inline int TCP_ECN_rcv_ecn_echo(struct tcp_sock *tp, struct tcphdr *th)
static void tcp_fixup_sndbuf(struct sock *sk)
static int __tcp_grow_window(const struct sock *sk, const struct sk_buff *skb)
static void tcp_grow_window(struct sock *sk, struct sk_buff *skb)
static void tcp_fixup_rcvbuf(struct sock *sk)
static void tcp_init_buffer_space(struct sock *sk)
static void tcp_clamp_window(struct sock *sk)
void tcp_initialize_rcv_mss(struct sock *sk)
EXPORT_SYMBOL(tcp_initialize_rcv_mss);
static void tcp_rcv_rtt_update(struct tcp_sock *tp, u32 sample, int win_dep)
static inline void tcp_rcv_rtt_measure(struct tcp_sock *tp)
static inline void tcp_rcv_rtt_measure_ts(struct sock *sk,
const struct sk_buff *skb)
void tcp_rcv_space_adjust(struct sock *sk)
static void tcp_event_data_recv(struct sock *sk, struct sk_buff *skb)
static void tcp_rtt_estimator(struct sock *sk, const __u32 mrtt)
static inline void tcp_set_rto(struct sock *sk)
void tcp_update_metrics(struct sock *sk)
__u32 tcp_init_cwnd(struct tcp_sock *tp, struct dst_entry *dst)
void tcp_enter_cwr(struct sock *sk, const int set_ssthresh)
static void tcp_disable_fack(struct tcp_sock *tp)
static void tcp_dsack_seen(struct tcp_sock *tp)
static void tcp_init_metrics(struct sock *sk)
static void tcp_update_reordering(struct sock *sk, const int metric,
const int ts)
static void tcp_verify_retransmit_hint(struct tcp_sock *tp, struct sk_buff *skb)
static void tcp_skb_mark_lost(struct tcp_sock *tp, struct sk_buff *skb)
static void tcp_skb_mark_lost_uncond_verify(struct tcp_sock *tp,
struct sk_buff *skb)
static int tcp_is_sackblock_valid(struct tcp_sock *tp, int is_dsack,
u32 start_seq, u32 end_seq)
static void tcp_mark_lost_retrans(struct sock *sk)
static int tcp_check_dsack(struct sock *sk, struct sk_buff *ack_skb,
struct tcp_sack_block_wire *sp, int num_sacks,
u32 prior_snd_una)
struct tcp_sacktag_state ;
static int tcp_match_skb_to_sack(struct sock *sk, struct sk_buff *skb,
u32 start_seq, u32 end_seq)
static u8 tcp_sacktag_one(struct sk_buff *skb, struct sock *sk,
struct tcp_sacktag_state *state,
int dup_sack, int pcount)
static int tcp_shifted_skb(struct sock *sk, struct sk_buff *skb,
struct tcp_sacktag_state *state,
unsigned int pcount, int shifted, int mss,
int dup_sack)
static int tcp_skb_seglen(struct sk_buff *skb)
static int skb_can_shift(struct sk_buff *skb)
static struct sk_buff *tcp_shift_skb_data(struct sock *sk, struct sk_buff *skb,
struct tcp_sacktag_state *state,
u32 start_seq, u32 end_seq,
int dup_sack)
static struct sk_buff *tcp_sacktag_walk(struct sk_buff *skb, struct sock *sk,
struct tcp_sack_block *next_dup,
struct tcp_sacktag_state *state,
u32 start_seq, u32 end_seq,
int dup_sack_in)
static struct sk_buff *tcp_sacktag_skip(struct sk_buff *skb, struct sock *sk,
struct tcp_sacktag_state *state,
u32 skip_to_seq)
static struct sk_buff *tcp_maybe_skipping_dsack(struct sk_buff *skb,
struct sock *sk,
struct tcp_sack_block *next_dup,
struct tcp_sacktag_state *state,
u32 skip_to_seq)
static int tcp_sack_cache_ok(struct tcp_sock *tp, struct tcp_sack_block *cache)
static int
tcp_sacktag_write_queue(struct sock *sk, struct sk_buff *ack_skb,
u32 prior_snd_una)
static int tcp_limit_reno_sacked(struct tcp_sock *tp)
static void tcp_check_reno_reordering(struct sock *sk, const int addend)
static void tcp_add_reno_sack(struct sock *sk)
static void tcp_remove_reno_sacks(struct sock *sk, int acked)
static inline void tcp_reset_reno_sack(struct tcp_sock *tp)
static int tcp_is_sackfrto(const struct tcp_sock *tp)
int tcp_use_frto(struct sock *sk)
void tcp_enter_frto(struct sock *sk)
static void tcp_enter_frto_loss(struct sock *sk, int allowed_segments, int flag)
static void tcp_clear_retrans_partial(struct tcp_sock *tp)
void tcp_clear_retrans(struct tcp_sock *tp)
void tcp_enter_loss(struct sock *sk, int how)
static int tcp_check_sack_reneging(struct sock *sk, int flag)
static inline int tcp_fackets_out(struct tcp_sock *tp)
static inline int tcp_dupack_heuristics(struct tcp_sock *tp)
static inline int tcp_skb_timedout(struct sock *sk, struct sk_buff *skb)
static inline int tcp_head_timedout(struct sock *sk)
static int tcp_time_to_recover(struct sock *sk)
static void tcp_timeout_skbs(struct sock *sk)
static void tcp_mark_head_lost(struct sock *sk, int packets, int mark_head)
static void tcp_update_scoreboard(struct sock *sk, int fast_rexmit)
static inline void tcp_moderate_cwnd(struct tcp_sock *tp)
static inline u32 tcp_cwnd_min(const struct sock *sk)
static void tcp_cwnd_down(struct sock *sk, int flag)
static inline int tcp_packet_delayed(struct tcp_sock *tp)
#if FASTRETRANS_DEBUG > 1
static void DBGUNDO(struct sock *sk, const char *msg)
#define DBGUNDO(x...) do  while (0)
static void tcp_undo_cwr(struct sock *sk, const bool undo_ssthresh)
static inline int tcp_may_undo(struct tcp_sock *tp)
static int tcp_try_undo_recovery(struct sock *sk)
static void tcp_try_undo_dsack(struct sock *sk)
static int tcp_any_retrans_done(struct sock *sk)
static int tcp_try_undo_partial(struct sock *sk, int acked)
static int tcp_try_undo_loss(struct sock *sk)
static inline void tcp_complete_cwr(struct sock *sk)
static void tcp_try_keep_open(struct sock *sk)
static void tcp_try_to_open(struct sock *sk, int flag)
static void tcp_mtup_probe_failed(struct sock *sk)
static void tcp_mtup_probe_success(struct sock *sk)
void tcp_simple_retransmit(struct sock *sk)
EXPORT_SYMBOL(tcp_simple_retransmit);
static void tcp_fastretrans_alert(struct sock *sk, int pkts_acked, int flag)
static void tcp_valid_rtt_meas(struct sock *sk, u32 seq_rtt)
static void tcp_ack_saw_tstamp(struct sock *sk, int flag)
static void tcp_ack_no_tstamp(struct sock *sk, u32 seq_rtt, int flag)
static inline void tcp_ack_update_rtt(struct sock *sk, const int flag,
const s32 seq_rtt)
static void tcp_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static void tcp_rearm_rto(struct sock *sk)
static u32 tcp_tso_acked(struct sock *sk, struct sk_buff *skb)
static int tcp_clean_rtx_queue(struct sock *sk, int prior_fackets,
u32 prior_snd_una)
static void tcp_ack_probe(struct sock *sk)
static inline int tcp_ack_is_dubious(const struct sock *sk, const int flag)
static inline int tcp_may_raise_cwnd(const struct sock *sk, const int flag)
static inline int tcp_may_update_window(const struct tcp_sock *tp,
const u32 ack, const u32 ack_seq,
const u32 nwin)
static int tcp_ack_update_window(struct sock *sk, struct sk_buff *skb, u32 ack,
u32 ack_seq)
static void tcp_conservative_spur_to_response(struct tcp_sock *tp)
static void tcp_ratehalving_spur_to_response(struct sock *sk)
static void tcp_undo_spur_to_response(struct sock *sk, int flag)
static int tcp_process_frto(struct sock *sk, int flag)
static int tcp_ack(struct sock *sk, struct sk_buff *skb, int flag)
void tcp_parse_options(struct sk_buff *skb, struct tcp_options_received *opt_rx,
u8 **hvpp, int estab)
EXPORT_SYMBOL(tcp_parse_options);
static int tcp_parse_aligned_timestamp(struct tcp_sock *tp, struct tcphdr *th)
static int tcp_fast_parse_options(struct sk_buff *skb, struct tcphdr *th,
struct tcp_sock *tp, u8 **hvpp)
u8 *tcp_parse_md5sig_option(struct tcphdr *th)
EXPORT_SYMBOL(tcp_parse_md5sig_option);
static inline void tcp_store_ts_recent(struct tcp_sock *tp)
static inline void tcp_replace_ts_recent(struct tcp_sock *tp, u32 seq)
static int tcp_disordered_ack(const struct sock *sk, const struct sk_buff *skb)
static inline int tcp_paws_discard(const struct sock *sk,
const struct sk_buff *skb)
static inline int tcp_sequence(struct tcp_sock *tp, u32 seq, u32 end_seq)
static void tcp_reset(struct sock *sk)
static void tcp_fin(struct sk_buff *skb, struct sock *sk, struct tcphdr *th)
static inline int tcp_sack_extend(struct tcp_sack_block *sp, u32 seq,
u32 end_seq)
static void tcp_dsack_set(struct sock *sk, u32 seq, u32 end_seq)
static void tcp_dsack_extend(struct sock *sk, u32 seq, u32 end_seq)
static void tcp_send_dupack(struct sock *sk, struct sk_buff *skb)
static void tcp_sack_maybe_coalesce(struct tcp_sock *tp)
static void tcp_sack_new_ofo_skb(struct sock *sk, u32 seq, u32 end_seq)
static void tcp_sack_remove(struct tcp_sock *tp)
static void tcp_ofo_queue(struct sock *sk)
static int tcp_prune_ofo_queue(struct sock *sk);
static int tcp_prune_queue(struct sock *sk);
static inline int tcp_try_rmem_schedule(struct sock *sk, unsigned int size)
static void tcp_data_queue(struct sock *sk, struct sk_buff *skb)
static struct sk_buff *tcp_collapse_one(struct sock *sk, struct sk_buff *skb,
struct sk_buff_head *list)
static void
tcp_collapse(struct sock *sk, struct sk_buff_head *list,
struct sk_buff *head, struct sk_buff *tail,
u32 start, u32 end)
static void tcp_collapse_ofo_queue(struct sock *sk)
static int tcp_prune_ofo_queue(struct sock *sk)
static int tcp_prune_queue(struct sock *sk)
void tcp_cwnd_application_limited(struct sock *sk)
static int tcp_should_expand_sndbuf(struct sock *sk)
static void tcp_new_space(struct sock *sk)
static void tcp_check_space(struct sock *sk)
static inline void tcp_data_snd_check(struct sock *sk)
static void __tcp_ack_snd_check(struct sock *sk, int ofo_possible)
static inline void tcp_ack_snd_check(struct sock *sk)
static void tcp_check_urg(struct sock *sk, struct tcphdr *th)
static void tcp_urg(struct sock *sk, struct sk_buff *skb, struct tcphdr *th)
static int tcp_copy_to_iovec(struct sock *sk, struct sk_buff *skb, int hlen)
static __sum16 __tcp_checksum_complete_user(struct sock *sk,
struct sk_buff *skb)
static inline int tcp_checksum_complete_user(struct sock *sk,
struct sk_buff *skb)
static int tcp_dma_try_early_copy(struct sock *sk, struct sk_buff *skb,
int hlen)
static int tcp_validate_incoming(struct sock *sk, struct sk_buff *skb,
struct tcphdr *th, int syn_inerr)
int tcp_rcv_established(struct sock *sk, struct sk_buff *skb,
struct tcphdr *th, unsigned len)
EXPORT_SYMBOL(tcp_rcv_established);
static int tcp_rcv_synsent_state_process(struct sock *sk, struct sk_buff *skb,
struct tcphdr *th, unsigned len)
int tcp_rcv_state_process(struct sock *sk, struct sk_buff *skb,
struct tcphdr *th, unsigned len)
EXPORT_SYMBOL(tcp_rcv_state_process);
