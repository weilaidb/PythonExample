#define __DSA_PRIV_H
struct dsa_switch ;
struct dsa_switch_tree ;
static inline bool dsa_is_cpu_port(struct dsa_switch *ds, int p)
static inline u8 dsa_upstream_port(struct dsa_switch *ds)
struct dsa_slave_priv ;
struct dsa_switch_driver ;
extern char dsa_driver_version[];
void register_switch_driver(struct dsa_switch_driver *type);
void unregister_switch_driver(struct dsa_switch_driver *type);
void dsa_slave_mii_bus_init(struct dsa_switch *ds);
struct net_device *dsa_slave_create(struct dsa_switch *ds,
struct device *parent,
int port, char *name);
netdev_tx_t dsa_xmit(struct sk_buff *skb, struct net_device *dev);
netdev_tx_t edsa_xmit(struct sk_buff *skb, struct net_device *dev);
netdev_tx_t trailer_xmit(struct sk_buff *skb, struct net_device *dev);
