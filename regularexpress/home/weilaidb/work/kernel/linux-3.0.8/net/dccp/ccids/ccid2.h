#define _DCCP_CCID2_H_
#define ccid2_time_stamp	tcp_time_stamp
#define NUMDUPACK	3
struct ccid2_seq ;
#define CCID2_SEQBUF_LEN 1024
#define CCID2_SEQBUF_MAX 128
struct ccid2_hc_tx_sock ;
static inline bool ccid2_cwnd_network_limited(struct ccid2_hc_tx_sock *hc)
struct ccid2_hc_rx_sock ;
static inline struct ccid2_hc_tx_sock *ccid2_hc_tx_sk(const struct sock *sk)
static inline struct ccid2_hc_rx_sock *ccid2_hc_rx_sk(const struct sock *sk)
