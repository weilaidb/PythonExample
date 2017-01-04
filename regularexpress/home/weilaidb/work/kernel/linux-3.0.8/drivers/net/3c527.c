#define DRV_NAME		"3c527"
#define DRV_VERSION		"0.7-SMP"
#define DRV_RELDATE		"2003/09/21"
static const char *version =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE " Richard Procter <rnp@paradise.net.nz>\n";
MODULE_LICENSE("GPL");
static const char* cardname = DRV_NAME;
#define NET_DEBUG 2
static unsigned int mc32_debug = NET_DEBUG;
#define MC32_IO_EXTENT	8
#define TX_RING_LEN     32
#define RX_RING_LEN     8
#define RX_COPYBREAK    200
static const int WORKAROUND_82586=1;
struct mc32_ring_desc
;
struct mc32_local
;
#define SA_ADDR0 0x02
#define SA_ADDR1 0x60
#define SA_ADDR2 0xAC
struct mca_adapters_t ;
static const struct mca_adapters_t mc32_adapters[] = ;
static inline u16 next_rx(u16 rx) ;
static inline u16 prev_rx(u16 rx) ;
static inline u16 next_tx(u16 tx) ;
static int	mc32_probe1(struct net_device *dev, int ioaddr);
static int      mc32_command(struct net_device *dev, u16 cmd, void *data, int len);
static int	mc32_open(struct net_device *dev);
static void	mc32_timeout(struct net_device *dev);
static netdev_tx_t mc32_send_packet(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t mc32_interrupt(int irq, void *dev_id);
static int	mc32_close(struct net_device *dev);
static struct	net_device_stats *mc32_get_stats(struct net_device *dev);
static void	mc32_set_multicast_list(struct net_device *dev);
static void	mc32_reset_multicast_list(struct net_device *dev);
static const struct ethtool_ops netdev_ethtool_ops;
static void cleanup_card(struct net_device *dev)
struct net_device *__init mc32_probe(int unit)
static const struct net_device_ops netdev_ops = ;
static int __init mc32_probe1(struct net_device *dev, int slot)
static inline void mc32_ready_poll(struct net_device *dev)
static int mc32_command_nowait(struct net_device *dev, u16 cmd, void *data, int len)
static int mc32_command(struct net_device *dev, u16 cmd, void *data, int len)
static void mc32_start_transceiver(struct net_device *dev)
static void mc32_halt_transceiver(struct net_device *dev)
static int mc32_load_rx_ring(struct net_device *dev)
static void mc32_flush_rx_ring(struct net_device *dev)
static void mc32_load_tx_ring(struct net_device *dev)
static void mc32_flush_tx_ring(struct net_device *dev)
static int mc32_open(struct net_device *dev)
static void mc32_timeout(struct net_device *dev)
static netdev_tx_t mc32_send_packet(struct sk_buff *skb,
struct net_device *dev)
static void mc32_update_stats(struct net_device *dev)
static void mc32_rx_ring(struct net_device *dev)
static void mc32_tx_ring(struct net_device *dev)
static irqreturn_t mc32_interrupt(int irq, void *dev_id)
static int mc32_close(struct net_device *dev)
static struct net_device_stats *mc32_get_stats(struct net_device *dev)
static void do_mc32_set_multicast_list(struct net_device *dev, int retry)
static void mc32_set_multicast_list(struct net_device *dev)
static void mc32_reset_multicast_list(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 level)
static const struct ethtool_ops netdev_ethtool_ops = ;
static struct net_device *this_device;
int __init init_module(void)
void __exit cleanup_module(void)
