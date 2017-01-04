#define _DCCP_CCID3_H_
#define TFRC_INITIAL_TIMEOUT	   (2 * USEC_PER_SEC)
#define TFRC_T_MBI		   64
#if (HZ >= 500)
# define TFRC_T_DELTA		   USEC_PER_MSEC
# define TFRC_T_DELTA		   (USEC_PER_SEC / (2 * HZ))
enum ccid3_options ;
enum ccid3_hc_tx_states ;
struct ccid3_hc_tx_sock ;
static inline struct ccid3_hc_tx_sock *ccid3_hc_tx_sk(const struct sock *sk)
enum ccid3_hc_rx_states ;
struct ccid3_hc_rx_sock ;
static inline struct ccid3_hc_rx_sock *ccid3_hc_rx_sk(const struct sock *sk)
