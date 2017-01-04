#define NECODES 5
static char *aoe_errlist[] =
;
enum ;
static char aoe_iflist[IFLISTSZ];
module_param_string(aoe_iflist, aoe_iflist, IFLISTSZ, 0600);
MODULE_PARM_DESC(aoe_iflist, "aoe_iflist=\"dev1 [dev2 ...]\"");
static int __init aoe_iflist_setup(char *str)
__setup("aoe_iflist=", aoe_iflist_setup);
int
is_aoe_netif(struct net_device *ifp)
int
set_aoe_iflist(const char __user *user_str, size_t size)
void
aoenet_xmit(struct sk_buff_head *queue)
static int
aoenet_rcv(struct sk_buff *skb, struct net_device *ifp, struct packet_type *pt, struct net_device *orig_dev)
static struct packet_type aoe_pt __read_mostly = ;
int __init
aoenet_init(void)
void
aoenet_exit(void)
