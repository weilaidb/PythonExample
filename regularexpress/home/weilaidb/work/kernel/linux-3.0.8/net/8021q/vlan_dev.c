static int vlan_dev_rebuild_header(struct sk_buff *skb)
static inline u16
vlan_dev_get_egress_qos_mask(struct net_device *dev, struct sk_buff *skb)
static int vlan_dev_hard_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr,
unsigned int len)
static netdev_tx_t vlan_dev_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int vlan_dev_change_mtu(struct net_device *dev, int new_mtu)
void vlan_dev_set_ingress_priority(const struct net_device *dev,
u32 skb_prio, u16 vlan_prio)
int vlan_dev_set_egress_priority(const struct net_device *dev,
u32 skb_prio, u16 vlan_prio)
int vlan_dev_change_flags(const struct net_device *dev, u32 flags, u32 mask)
void vlan_dev_get_realdev_name(const struct net_device *dev, char *result)
static int vlan_dev_open(struct net_device *dev)
static int vlan_dev_stop(struct net_device *dev)
static int vlan_dev_set_mac_address(struct net_device *dev, void *p)
static int vlan_dev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int vlan_dev_neigh_setup(struct net_device *dev, struct neigh_parms *pa)
#if defined(CONFIG_FCOE) || defined(CONFIG_FCOE_MODULE)
static int vlan_dev_fcoe_ddp_setup(struct net_device *dev, u16 xid,
struct scatterlist *sgl, unsigned int sgc)
static int vlan_dev_fcoe_ddp_done(struct net_device *dev, u16 xid)
static int vlan_dev_fcoe_enable(struct net_device *dev)
static int vlan_dev_fcoe_disable(struct net_device *dev)
static int vlan_dev_fcoe_get_wwn(struct net_device *dev, u64 *wwn, int type)
static int vlan_dev_fcoe_ddp_target(struct net_device *dev, u16 xid,
struct scatterlist *sgl, unsigned int sgc)
static void vlan_dev_change_rx_flags(struct net_device *dev, int change)
static void vlan_dev_set_rx_mode(struct net_device *vlan_dev)
static struct lock_class_key vlan_netdev_xmit_lock_key;
static struct lock_class_key vlan_netdev_addr_lock_key;
static void vlan_dev_set_lockdep_one(struct net_device *dev,
struct netdev_queue *txq,
void *_subclass)
static void vlan_dev_set_lockdep_class(struct net_device *dev, int subclass)
static const struct header_ops vlan_header_ops = ;
static const struct net_device_ops vlan_netdev_ops;
static int vlan_dev_init(struct net_device *dev)
static void vlan_dev_uninit(struct net_device *dev)
static u32 vlan_dev_fix_features(struct net_device *dev, u32 features)
static int vlan_ethtool_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static void vlan_ethtool_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static struct rtnl_link_stats64 *vlan_dev_get_stats64(struct net_device *dev, struct rtnl_link_stats64 *stats)
static const struct ethtool_ops vlan_ethtool_ops = ;
static const struct net_device_ops vlan_netdev_ops = ;
void vlan_setup(struct net_device *dev)
