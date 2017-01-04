#define TILE_NET_MTU 1500
#define TILE_NET_TX_QUEUE_LEN 0
#define TILE_NET_TIMEOUT (5 * HZ)
#define TILE_NET_RETRY_INTERVAL (5 * HZ)
#define TILE_NET_DEVS 4
#if NET_IP_ALIGN != LIPP_PACKET_PADDING
#error "NET_IP_ALIGN must match LIPP_PACKET_PADDING."
#define PDEBUG(fmt, args...) net_printk(fmt, ## args)
#define PDEBUG(fmt, args...)
MODULE_AUTHOR("Tilera");
MODULE_LICENSE("GPL");
struct tile_netio_queue ;
struct tile_net_stats_t ;
struct tile_net_cpu ;
struct tile_net_priv ;
#define EQ_ORDER  get_order(sizeof(lepp_queue_t))
#define EQ_SIZE   (1 << (PAGE_SHIFT + EQ_ORDER))
static struct net_device *tile_net_devs[TILE_NET_DEVS];
static DEFINE_PER_CPU(struct tile_net_cpu, hv_xgbe0);
static DEFINE_PER_CPU(struct tile_net_cpu, hv_xgbe1);
static DEFINE_PER_CPU(struct tile_net_cpu, hv_gbe0);
static DEFINE_PER_CPU(struct tile_net_cpu, hv_gbe1);
static bool network_cpus_used;
static struct cpumask network_cpus_map;
static void net_printk(char *fmt, ...)
static void dump_packet(unsigned char *data, unsigned long length, char *s)
inline int __netio_fastio1(u32 fastio_index, u32 arg0)
static void tile_net_provide_linux_buffer(struct tile_net_cpu *info,
void *va, bool small)
static bool tile_net_provide_needed_buffer(struct tile_net_cpu *info,
bool small)
static void tile_net_provide_needed_buffers(struct tile_net_cpu *info)
static unsigned int tile_net_lepp_grab_comps(lepp_queue_t *eq,
struct sk_buff *comps[],
unsigned int comps_size,
unsigned int min_size)
static bool tile_net_lepp_free_comps(struct net_device *dev, bool all)
static void tile_net_schedule_egress_timer(struct tile_net_cpu *info)
static void tile_net_handle_egress_timer(unsigned long arg)
static bool is_dup_ack(char *s1, char *s2, unsigned int len)
static void tile_net_discard_aux(struct tile_net_cpu *info, int index)
static void tile_net_discard_packets(struct net_device *dev)
static bool tile_net_poll_aux(struct tile_net_cpu *info, int index)
static int tile_net_poll(struct napi_struct *napi, int budget)
static irqreturn_t tile_net_handle_ingress_interrupt(int irq, void *dev_ptr)
static int tile_net_open_aux(struct net_device *dev)
static void tile_net_register(void *dev_ptr)
static void tile_net_deregister(void *dev_ptr)
static void tile_net_unregister(void *dev_ptr)
static void tile_net_stop_aux(struct net_device *dev)
static void tile_net_stop_disable(void *dev_ptr)
static void tile_net_open_enable(void *dev_ptr)
static int tile_net_open_inner(struct net_device *dev)
static void tile_net_open_retry(struct work_struct *w)
static int tile_net_open(struct net_device *dev)
static int tile_net_drain_lipp_buffers(struct tile_net_priv *priv)
static int tile_net_stop(struct net_device *dev)
static unsigned int tile_net_tx_frags(lepp_frag_t *frags,
struct sk_buff *skb,
void *b_data, unsigned int b_len)
static int tile_net_tx_tso(struct sk_buff *skb, struct net_device *dev)
static int tile_net_tx(struct sk_buff *skb, struct net_device *dev)
static void tile_net_tx_timeout(struct net_device *dev)
static int tile_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static struct net_device_stats *tile_net_get_stats(struct net_device *dev)
static int tile_net_change_mtu(struct net_device *dev, int new_mtu)
static int tile_net_set_mac_address(struct net_device *dev, void *p)
static int tile_net_get_mac(struct net_device *dev)
static struct net_device_ops tile_net_ops = ;
static void tile_net_setup(struct net_device *dev)
static struct net_device *tile_net_dev_init(const char *name)
static void tile_net_cleanup(void)
static int tile_net_init_module(void)
module_init(tile_net_init_module);
module_exit(tile_net_cleanup);
static int __init network_cpus_setup(char *str)
__setup("network_cpus=", network_cpus_setup);
