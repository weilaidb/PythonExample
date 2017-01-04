#define MAX_UDP_CHUNK 1460
#define MAX_SKBS 32
static struct sk_buff_head skb_pool;
static atomic_t trapped;
#define USEC_PER_POLL	50
#define NETPOLL_RX_ENABLED  1
#define NETPOLL_RX_DROP     2
#define MAX_SKB_SIZE \
(MAX_UDP_CHUNK + sizeof(struct udphdr) + \
sizeof(struct iphdr) + sizeof(struct ethhdr))
static void zap_completion_queue(void);
static void arp_reply(struct sk_buff *skb);
static unsigned int carrier_timeout = 4;
module_param(carrier_timeout, uint, 0644);
static void queue_process(struct work_struct *work)
static __sum16 checksum_udp(struct sk_buff *skb, struct udphdr *uh,
unsigned short ulen, __be32 saddr, __be32 daddr)
static int poll_one_napi(struct netpoll_info *npinfo,
struct napi_struct *napi, int budget)
static void poll_napi(struct net_device *dev)
static void service_arp_queue(struct netpoll_info *npi)
void netpoll_poll_dev(struct net_device *dev)
EXPORT_SYMBOL(netpoll_poll_dev);
void netpoll_poll(struct netpoll *np)
EXPORT_SYMBOL(netpoll_poll);
static void refill_skbs(void)
static void zap_completion_queue(void)
static struct sk_buff *find_skb(struct netpoll *np, int len, int reserve)
static int netpoll_owner_active(struct net_device *dev)
void netpoll_send_skb_on_dev(struct netpoll *np, struct sk_buff *skb,
struct net_device *dev)
EXPORT_SYMBOL(netpoll_send_skb_on_dev);
void netpoll_send_udp(struct netpoll *np, const char *msg, int len)
EXPORT_SYMBOL(netpoll_send_udp);
static void arp_reply(struct sk_buff *skb)
int __netpoll_rx(struct sk_buff *skb)
void netpoll_print_options(struct netpoll *np)
EXPORT_SYMBOL(netpoll_print_options);
int netpoll_parse_options(struct netpoll *np, char *opt)
EXPORT_SYMBOL(netpoll_parse_options);
int __netpoll_setup(struct netpoll *np)
EXPORT_SYMBOL_GPL(__netpoll_setup);
int netpoll_setup(struct netpoll *np)
EXPORT_SYMBOL(netpoll_setup);
static int __init netpoll_init(void)
core_initcall(netpoll_init);
void __netpoll_cleanup(struct netpoll *np)
EXPORT_SYMBOL_GPL(__netpoll_cleanup);
void netpoll_cleanup(struct netpoll *np)
EXPORT_SYMBOL(netpoll_cleanup);
int netpoll_trap(void)
EXPORT_SYMBOL(netpoll_trap);
void netpoll_set_trap(int trap)
EXPORT_SYMBOL(netpoll_set_trap);
