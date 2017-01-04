#define _LINUX_NETPOLL_H
struct netpoll ;
struct netpoll_info ;
void netpoll_poll_dev(struct net_device *dev);
void netpoll_poll(struct netpoll *np);
void netpoll_send_udp(struct netpoll *np, const char *msg, int len);
void netpoll_print_options(struct netpoll *np);
int netpoll_parse_options(struct netpoll *np, char *opt);
int __netpoll_setup(struct netpoll *np);
int netpoll_setup(struct netpoll *np);
int netpoll_trap(void);
void netpoll_set_trap(int trap);
void __netpoll_cleanup(struct netpoll *np);
void netpoll_cleanup(struct netpoll *np);
int __netpoll_rx(struct sk_buff *skb);
void netpoll_send_skb_on_dev(struct netpoll *np, struct sk_buff *skb,
struct net_device *dev);
static inline void netpoll_send_skb(struct netpoll *np, struct sk_buff *skb)
static inline bool netpoll_rx(struct sk_buff *skb)
static inline int netpoll_rx_on(struct sk_buff *skb)
static inline int netpoll_receive_skb(struct sk_buff *skb)
static inline void *netpoll_poll_lock(struct napi_struct *napi)
static inline void netpoll_poll_unlock(void *have)
static inline int netpoll_tx_running(struct net_device *dev)
static inline bool netpoll_rx(struct sk_buff *skb)
static inline int netpoll_rx_on(struct sk_buff *skb)
static inline int netpoll_receive_skb(struct sk_buff *skb)
static inline void *netpoll_poll_lock(struct napi_struct *napi)
static inline void netpoll_poll_unlock(void *have)
static inline void netpoll_netdev_init(struct net_device *dev)
static inline int netpoll_tx_running(struct net_device *dev)
