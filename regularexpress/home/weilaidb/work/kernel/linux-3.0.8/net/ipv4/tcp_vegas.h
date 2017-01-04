#define __TCP_VEGAS_H 1
struct vegas ;
extern void tcp_vegas_init(struct sock *sk);
extern void tcp_vegas_state(struct sock *sk, u8 ca_state);
extern void tcp_vegas_pkts_acked(struct sock *sk, u32 cnt, s32 rtt_us);
extern void tcp_vegas_cwnd_event(struct sock *sk, enum tcp_ca_event event);
extern void tcp_vegas_get_info(struct sock *sk, u32 ext, struct sk_buff *skb);
