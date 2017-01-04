int sysctl_dccp_sync_ratelimit	__read_mostly = HZ / 8;
static void dccp_enqueue_skb(struct sock *sk, struct sk_buff *skb)
static void dccp_fin(struct sock *sk, struct sk_buff *skb)
static int dccp_rcv_close(struct sock *sk, struct sk_buff *skb)
static int dccp_rcv_closereq(struct sock *sk, struct sk_buff *skb)
static u16 dccp_reset_code_convert(const u8 code)
static void dccp_rcv_reset(struct sock *sk, struct sk_buff *skb)
static void dccp_handle_ackvec_processing(struct sock *sk, struct sk_buff *skb)
static void dccp_deliver_input_to_ccids(struct sock *sk, struct sk_buff *skb)
static int dccp_check_seqno(struct sock *sk, struct sk_buff *skb)
static int __dccp_rcv_established(struct sock *sk, struct sk_buff *skb,
const struct dccp_hdr *dh, const unsigned len)
int dccp_rcv_established(struct sock *sk, struct sk_buff *skb,
const struct dccp_hdr *dh, const unsigned len)
EXPORT_SYMBOL_GPL(dccp_rcv_established);
static int dccp_rcv_request_sent_state_process(struct sock *sk,
struct sk_buff *skb,
const struct dccp_hdr *dh,
const unsigned len)
static int dccp_rcv_respond_partopen_state_process(struct sock *sk,
struct sk_buff *skb,
const struct dccp_hdr *dh,
const unsigned len)
int dccp_rcv_state_process(struct sock *sk, struct sk_buff *skb,
struct dccp_hdr *dh, unsigned len)
EXPORT_SYMBOL_GPL(dccp_rcv_state_process);
u32 dccp_sample_rtt(struct sock *sk, long delta)
