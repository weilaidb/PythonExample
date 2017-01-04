#define _LINUX_DCCP_H
struct dccp_hdr ;
struct dccp_hdr_ext ;
struct dccp_hdr_request ;
struct dccp_hdr_ack_bits ;
struct dccp_hdr_response ;
struct dccp_hdr_reset ;
enum dccp_pkt_type ;
#define DCCP_NR_PKT_TYPES DCCP_PKT_INVALID
static inline unsigned int dccp_packet_hdr_len(const __u8 type)
enum dccp_reset_codes ;
enum ;
#define DCCP_SINGLE_OPT_MAXLEN	253
enum ;
enum dccp_feature_numbers ;
enum dccp_cmsg_type ;
enum dccp_packet_dequeueing_policy ;
#define DCCP_SOCKOPT_PACKET_SIZE	1
#define DCCP_SOCKOPT_SERVICE		2
#define DCCP_SOCKOPT_CHANGE_L		3
#define DCCP_SOCKOPT_CHANGE_R		4
#define DCCP_SOCKOPT_GET_CUR_MPS	5
#define DCCP_SOCKOPT_SERVER_TIMEWAIT	6
#define DCCP_SOCKOPT_SEND_CSCOV		10
#define DCCP_SOCKOPT_RECV_CSCOV		11
#define DCCP_SOCKOPT_AVAILABLE_CCIDS	12
#define DCCP_SOCKOPT_CCID		13
#define DCCP_SOCKOPT_TX_CCID		14
#define DCCP_SOCKOPT_RX_CCID		15
#define DCCP_SOCKOPT_QPOLICY_ID		16
#define DCCP_SOCKOPT_QPOLICY_TXQLEN	17
#define DCCP_SOCKOPT_CCID_RX_INFO	128
#define DCCP_SOCKOPT_CCID_TX_INFO	192
#define DCCP_SERVICE_LIST_MAX_LEN      32
enum dccp_state ;
enum ;
static inline struct dccp_hdr *dccp_hdr(const struct sk_buff *skb)
static inline struct dccp_hdr *dccp_zeroed_hdr(struct sk_buff *skb, int headlen)
static inline struct dccp_hdr_ext *dccp_hdrx(const struct dccp_hdr *dh)
static inline unsigned int __dccp_basic_hdr_len(const struct dccp_hdr *dh)
static inline unsigned int dccp_basic_hdr_len(const struct sk_buff *skb)
static inline __u64 dccp_hdr_seq(const struct dccp_hdr *dh)
static inline struct dccp_hdr_request *dccp_hdr_request(struct sk_buff *skb)
static inline struct dccp_hdr_ack_bits *dccp_hdr_ack_bits(const struct sk_buff *skb)
static inline u64 dccp_hdr_ack_seq(const struct sk_buff *skb)
static inline struct dccp_hdr_response *dccp_hdr_response(struct sk_buff *skb)
static inline struct dccp_hdr_reset *dccp_hdr_reset(struct sk_buff *skb)
static inline unsigned int __dccp_hdr_len(const struct dccp_hdr *dh)
static inline unsigned int dccp_hdr_len(const struct sk_buff *skb)
struct dccp_request_sock ;
static inline struct dccp_request_sock *dccp_rsk(const struct request_sock *req)
extern struct inet_timewait_death_row dccp_death_row;
extern int dccp_parse_options(struct sock *sk, struct dccp_request_sock *dreq,
struct sk_buff *skb);
struct dccp_options_received ;
struct ccid;
enum dccp_role ;
struct dccp_service_list ;
#define DCCP_SERVICE_INVALID_VALUE htonl((__u32)-1)
#define DCCP_SERVICE_CODE_IS_ABSENT		0
static inline int dccp_list_has_service(const struct dccp_service_list *sl,
const __be32 service)
struct dccp_ackvec;
struct dccp_sock ;
static inline struct dccp_sock *dccp_sk(const struct sock *sk)
static inline const char *dccp_role(const struct sock *sk)
