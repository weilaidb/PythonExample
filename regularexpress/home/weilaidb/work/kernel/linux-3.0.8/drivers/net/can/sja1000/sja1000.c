#define DRV_NAME "sja1000"
MODULE_AUTHOR("Oliver Hartkopp <oliver.hartkopp@volkswagen.de>");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION(DRV_NAME "CAN netdevice driver");
static struct can_bittiming_const sja1000_bittiming_const = ;
static void sja1000_write_cmdreg(struct sja1000_priv *priv, u8 val)
static int sja1000_probe_chip(struct net_device *dev)
static void set_reset_mode(struct net_device *dev)
static void set_normal_mode(struct net_device *dev)
static void sja1000_start(struct net_device *dev)
static int sja1000_set_mode(struct net_device *dev, enum can_mode mode)
static int sja1000_set_bittiming(struct net_device *dev)
static int sja1000_get_berr_counter(const struct net_device *dev,
struct can_berr_counter *bec)
static void chipset_init(struct net_device *dev)
static netdev_tx_t sja1000_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void sja1000_rx(struct net_device *dev)
static int sja1000_err(struct net_device *dev, uint8_t isrc, uint8_t status)
irqreturn_t sja1000_interrupt(int irq, void *dev_id)
EXPORT_SYMBOL_GPL(sja1000_interrupt);
static int sja1000_open(struct net_device *dev)
static int sja1000_close(struct net_device *dev)
struct net_device *alloc_sja1000dev(int sizeof_priv)
EXPORT_SYMBOL_GPL(alloc_sja1000dev);
void free_sja1000dev(struct net_device *dev)
EXPORT_SYMBOL_GPL(free_sja1000dev);
static const struct net_device_ops sja1000_netdev_ops = ;
int register_sja1000dev(struct net_device *dev)
EXPORT_SYMBOL_GPL(register_sja1000dev);
void unregister_sja1000dev(struct net_device *dev)
EXPORT_SYMBOL_GPL(unregister_sja1000dev);
static __init int sja1000_init(void)
module_init(sja1000_init);
static __exit void sja1000_exit(void)
module_exit(sja1000_exit);
