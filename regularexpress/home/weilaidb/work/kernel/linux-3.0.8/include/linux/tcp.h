#define _LINUX_TCP_H
struct tcphdr ;
union tcp_word_hdr ;
#define tcp_flag_word(tp) ( ((union tcp_word_hdr *)(tp))->words [3])
enum ;
#define TCP_MSS_DEFAULT		 536U
#define TCP_MSS_DESIRED		1220U
#define TCP_NODELAY		1
#define TCP_MAXSEG		2
#define TCP_CORK		3
#define TCP_KEEPIDLE		4
#define TCP_KEEPINTVL		5
#define TCP_KEEPCNT		6
#define TCP_SYNCNT		7
#define TCP_LINGER2		8
#define TCP_DEFER_ACCEPT	9
#define TCP_WINDOW_CLAMP	10
#define TCP_INFO		11
#define TCP_QUICKACK		12
#define TCP_CONGESTION		13
#define TCP_MD5SIG		14
#define TCP_COOKIE_TRANSACTIONS	15
#define TCP_THIN_LINEAR_TIMEOUTS 16
#define TCP_THIN_DUPACK         17
#define TCP_USER_TIMEOUT	18
#define TCPI_OPT_TIMESTAMPS	1
#define TCPI_OPT_SACK		2
#define TCPI_OPT_WSCALE		4
#define TCPI_OPT_ECN		8
enum tcp_ca_state ;
struct tcp_info ;
#define TCP_MD5SIG_MAXKEYLEN	80
struct tcp_md5sig ;
#define TCP_COOKIE_MIN		 8
#define TCP_COOKIE_MAX		16
#define TCP_COOKIE_PAIR_SIZE	(2*TCP_COOKIE_MAX)
#define TCP_COOKIE_IN_ALWAYS	(1 << 0)
#define TCP_COOKIE_OUT_NEVER	(1 << 1)
#define TCP_S_DATA_IN		(1 << 2)
#define TCP_S_DATA_OUT		(1 << 3)
struct tcp_cookie_transactions ;
static inline struct tcphdr *tcp_hdr(const struct sk_buff *skb)
static inline unsigned int tcp_hdrlen(const struct sk_buff *skb)
static inline unsigned int tcp_optlen(const struct sk_buff *skb)
struct tcp_sack_block_wire ;
struct tcp_sack_block ;
struct tcp_options_received ;
static inline void tcp_clear_options(struct tcp_options_received *rx_opt)
#define TCP_NUM_SACKS 4
struct tcp_cookie_values;
struct tcp_request_sock_ops;
struct tcp_request_sock ;
static inline struct tcp_request_sock *tcp_rsk(const struct request_sock *req)
struct tcp_sock ;
static inline struct tcp_sock *tcp_sk(const struct sock *sk)
struct tcp_timewait_sock ;
static inline struct tcp_timewait_sock *tcp_twsk(const struct sock *sk)
