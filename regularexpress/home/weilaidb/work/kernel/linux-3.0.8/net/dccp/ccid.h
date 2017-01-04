#define _CCID_H
#define CCID_MAX		255
#define CCID_SLAB_NAME_LENGTH	32
struct tcp_info;
struct ccid_operations ;
extern struct ccid_operations ccid2_ops;
extern struct ccid_operations ccid3_ops;
extern int  ccid_initialize_builtins(void);
extern void ccid_cleanup_builtins(void);
struct ccid ;
static inline void *ccid_priv(const struct ccid *ccid)
extern bool ccid_support_check(u8 const *ccid_array, u8 array_len);
extern int  ccid_get_builtin_ccids(u8 **ccid_array, u8 *array_len);
extern int  ccid_getsockopt_builtin_ccids(struct sock *sk, int len,
char __user *, int __user *);
extern struct ccid *ccid_new(const u8 id, struct sock *sk, bool rx);
static inline int ccid_get_current_rx_ccid(struct dccp_sock *dp)
static inline int ccid_get_current_tx_ccid(struct dccp_sock *dp)
extern void ccid_hc_rx_delete(struct ccid *ccid, struct sock *sk);
extern void ccid_hc_tx_delete(struct ccid *ccid, struct sock *sk);
enum ccid_dequeueing_decision ;
static inline int ccid_packet_dequeue_eval(const int return_code)
static inline int ccid_hc_tx_send_packet(struct ccid *ccid, struct sock *sk,
struct sk_buff *skb)
static inline void ccid_hc_tx_packet_sent(struct ccid *ccid, struct sock *sk,
unsigned int len)
static inline void ccid_hc_rx_packet_recv(struct ccid *ccid, struct sock *sk,
struct sk_buff *skb)
static inline void ccid_hc_tx_packet_recv(struct ccid *ccid, struct sock *sk,
struct sk_buff *skb)
static inline int ccid_hc_tx_parse_options(struct ccid *ccid, struct sock *sk,
u8 pkt, u8 opt, u8 *val, u8 len)
static inline int ccid_hc_rx_parse_options(struct ccid *ccid, struct sock *sk,
u8 pkt, u8 opt, u8 *val, u8 len)
static inline int ccid_hc_rx_insert_options(struct ccid *ccid, struct sock *sk,
struct sk_buff *skb)
static inline void ccid_hc_rx_get_info(struct ccid *ccid, struct sock *sk,
struct tcp_info *info)
static inline void ccid_hc_tx_get_info(struct ccid *ccid, struct sock *sk,
struct tcp_info *info)
static inline int ccid_hc_rx_getsockopt(struct ccid *ccid, struct sock *sk,
const int optname, int len,
u32 __user *optval, int __user *optlen)
static inline int ccid_hc_tx_getsockopt(struct ccid *ccid, struct sock *sk,
const int optname, int len,
u32 __user *optval, int __user *optlen)
