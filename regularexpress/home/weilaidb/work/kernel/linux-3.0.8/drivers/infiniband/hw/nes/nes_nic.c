static struct nic_qp_map nic_qp_mapping_0[] = ;
static struct nic_qp_map nic_qp_mapping_1[] = ;
static struct nic_qp_map nic_qp_mapping_2[] = ;
static struct nic_qp_map nic_qp_mapping_3[] = ;
static struct nic_qp_map nic_qp_mapping_4[] = ;
static struct nic_qp_map nic_qp_mapping_5[] = ;
static struct nic_qp_map nic_qp_mapping_6[] = ;
static struct nic_qp_map nic_qp_mapping_7[] = ;
static struct nic_qp_map *nic_qp_mapping_per_function[] = ;
static const u32 default_msg = NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK
| NETIF_MSG_IFUP | NETIF_MSG_IFDOWN;
static int debug = -1;
static int nics_per_function = 1;
static int nes_netdev_poll(struct napi_struct *napi, int budget)
static int nes_netdev_open(struct net_device *netdev)
static int nes_netdev_stop(struct net_device *netdev)
static int nes_nic_send(struct sk_buff *skb, struct net_device *netdev)
static int nes_netdev_start_xmit(struct sk_buff *skb, struct net_device *netdev)
static struct net_device_stats *nes_netdev_get_stats(struct net_device *netdev)
static void nes_netdev_tx_timeout(struct net_device *netdev)
static int nes_netdev_set_mac_address(struct net_device *netdev, void *p)
static void set_allmulti(struct nes_device *nesdev, u32 nic_active_bit)
#define get_addr(addrs, index) ((addrs) + (index) * ETH_ALEN)
static void nes_netdev_set_multicast_list(struct net_device *netdev)
static int nes_netdev_change_mtu(struct net_device *netdev, int new_mtu)
static const char nes_ethtool_stringset[][ETH_GSTRING_LEN] = ;
#define NES_ETHTOOL_STAT_COUNT  ARRAY_SIZE(nes_ethtool_stringset)
static int nes_netdev_get_sset_count(struct net_device *netdev, int stringset)
static void nes_netdev_get_strings(struct net_device *netdev, u32 stringset,
u8 *ethtool_strings)
static void nes_netdev_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *target_ethtool_stats, u64 *target_stat_values)
static void nes_netdev_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static int nes_netdev_set_coalesce(struct net_device *netdev,
struct ethtool_coalesce	*et_coalesce)
static int nes_netdev_get_coalesce(struct net_device *netdev,
struct ethtool_coalesce	*et_coalesce)
static void nes_netdev_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *et_pauseparam)
static int nes_netdev_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *et_pauseparam)
static int nes_netdev_get_settings(struct net_device *netdev, struct ethtool_cmd *et_cmd)
static int nes_netdev_set_settings(struct net_device *netdev, struct ethtool_cmd *et_cmd)
static const struct ethtool_ops nes_ethtool_ops = ;
static void nes_netdev_vlan_rx_register(struct net_device *netdev, struct vlan_group *grp)
static const struct net_device_ops nes_netdev_ops = ;
struct net_device *nes_netdev_init(struct nes_device *nesdev,
void __iomem *mmio_addr)
void nes_netdev_destroy(struct net_device *netdev)
int nes_nic_cm_xmit(struct sk_buff *skb, struct net_device *netdev)
