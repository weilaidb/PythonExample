static inline void dccp_event_ack_sent(struct sock *sk)
static void dccp_skb_entail(struct sock *sk, struct sk_buff *skb)
static int dccp_transmit_skb(struct sock *sk, struct sk_buff *skb)
static u32 dccp_determine_ccmps(const struct dccp_sock *dp)
unsigned int dccp_sync_mss(struct sock *sk, u32 pmtu)
EXPORT_SYMBOL_GPL(dccp_sync_mss);
void dccp_write_space(struct sock *sk)
static int dccp_wait_for_ccid(struct sock *sk, unsigned long delay)
static void dccp_xmit_packet(struct sock *sk)
void dccp_flush_write_queue(struct sock *sk, long *time_budget)
void dccp_write_xmit(struct sock *sk)
int dccp_retransmit_skb(struct sock *sk)
struct sk_buff *dccp_make_response(struct sock *sk, struct dst_entry *dst,
struct request_sock *req)
EXPORT_SYMBOL_GPL(dccp_make_response);
struct sk_buff *dccp_ctl_make_reset(struct sock *sk, struct sk_buff *rcv_skb)
EXPORT_SYMBOL_GPL(dccp_ctl_make_reset);
int dccp_send_reset(struct sock *sk, enum dccp_reset_codes code)
int dccp_connect(struct sock *sk)
EXPORT_SYMBOL_GPL(dccp_connect);
void dccp_send_ack(struct sock *sk)
EXPORT_SYMBOL_GPL(dccp_send_ack);
void dccp_send_sync(struct sock *sk, const u64 ackno,
const enum dccp_pkt_type pkt_type)
EXPORT_SYMBOL_GPL(dccp_send_sync);
void dccp_send_close(struct sock *sk, const int active)
