#define MAX_ETH_BEARERS		2
#define ETH_LINK_PRIORITY	TIPC_DEF_LINK_PRI
#define ETH_LINK_TOLERANCE	TIPC_DEF_LINK_TOL
#define ETH_LINK_WINDOW		TIPC_DEF_LINK_WIN
struct eth_bearer ;
static struct eth_bearer eth_bearers[MAX_ETH_BEARERS];
static int eth_started;
static struct notifier_block notifier;
static int send_msg(struct sk_buff *buf, struct tipc_bearer *tb_ptr,
struct tipc_media_addr *dest)
static int recv_msg(struct sk_buff *buf, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static int enable_bearer(struct tipc_bearer *tb_ptr)
static void disable_bearer(struct tipc_bearer *tb_ptr)
static int recv_notification(struct notifier_block *nb, unsigned long evt,
void *dv)
static char *eth_addr2str(struct tipc_media_addr *a, char *str_buf, int str_size)
int tipc_eth_media_start(void)
void tipc_eth_media_stop(void)
