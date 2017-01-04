u32 ethtool_op_get_link(struct net_device *dev)
EXPORT_SYMBOL(ethtool_op_get_link);
u32 ethtool_op_get_tx_csum(struct net_device *dev)
EXPORT_SYMBOL(ethtool_op_get_tx_csum);
int ethtool_op_set_tx_csum(struct net_device *dev, u32 data)
EXPORT_SYMBOL(ethtool_op_set_tx_csum);
int ethtool_op_set_tx_hw_csum(struct net_device *dev, u32 data)
EXPORT_SYMBOL(ethtool_op_set_tx_hw_csum);
int ethtool_op_set_tx_ipv6_csum(struct net_device *dev, u32 data)
EXPORT_SYMBOL(ethtool_op_set_tx_ipv6_csum);
u32 ethtool_op_get_sg(struct net_device *dev)
EXPORT_SYMBOL(ethtool_op_get_sg);
int ethtool_op_set_sg(struct net_device *dev, u32 data)
EXPORT_SYMBOL(ethtool_op_set_sg);
u32 ethtool_op_get_tso(struct net_device *dev)
EXPORT_SYMBOL(ethtool_op_get_tso);
int ethtool_op_set_tso(struct net_device *dev, u32 data)
EXPORT_SYMBOL(ethtool_op_set_tso);
u32 ethtool_op_get_ufo(struct net_device *dev)
EXPORT_SYMBOL(ethtool_op_get_ufo);
int ethtool_op_set_ufo(struct net_device *dev, u32 data)
EXPORT_SYMBOL(ethtool_op_set_ufo);
static const u32 flags_dup_features =
(ETH_FLAG_LRO | ETH_FLAG_RXVLAN | ETH_FLAG_TXVLAN | ETH_FLAG_NTUPLE |
ETH_FLAG_RXHASH);
u32 ethtool_op_get_flags(struct net_device *dev)
EXPORT_SYMBOL(ethtool_op_get_flags);
bool ethtool_invalid_flags(struct net_device *dev, u32 data, u32 supported)
EXPORT_SYMBOL(ethtool_invalid_flags);
int ethtool_op_set_flags(struct net_device *dev, u32 data, u32 supported)
EXPORT_SYMBOL(ethtool_op_set_flags);
void ethtool_ntuple_flush(struct net_device *dev)
EXPORT_SYMBOL(ethtool_ntuple_flush);
#define ETHTOOL_DEV_FEATURE_WORDS	1
static void ethtool_get_features_compat(struct net_device *dev,
struct ethtool_get_features_block *features)
static int ethtool_set_feature_compat(struct net_device *dev,
int (*legacy_set)(struct net_device *, u32),
struct ethtool_set_features_block *features, u32 mask)
static int ethtool_set_flags_compat(struct net_device *dev,
int (*legacy_set)(struct net_device *, u32),
struct ethtool_set_features_block *features, u32 mask)
static int ethtool_set_features_compat(struct net_device *dev,
struct ethtool_set_features_block *features)
static int ethtool_get_features(struct net_device *dev, void __user *useraddr)
static int ethtool_set_features(struct net_device *dev, void __user *useraddr)
static const char netdev_features_strings[ETHTOOL_DEV_FEATURE_WORDS * 32][ETH_GSTRING_LEN] = ;
static int __ethtool_get_sset_count(struct net_device *dev, int sset)
static void __ethtool_get_strings(struct net_device *dev,
u32 stringset, u8 *data)
static u32 ethtool_get_feature_mask(u32 eth_cmd)
static void *__ethtool_get_one_feature_actor(struct net_device *dev, u32 ethcmd)
static u32 __ethtool_get_rx_csum_oldbug(struct net_device *dev)
static int ethtool_get_one_feature(struct net_device *dev,
char __user *useraddr, u32 ethcmd)
static int __ethtool_set_tx_csum(struct net_device *dev, u32 data);
static int __ethtool_set_rx_csum(struct net_device *dev, u32 data);
static int __ethtool_set_sg(struct net_device *dev, u32 data);
static int __ethtool_set_tso(struct net_device *dev, u32 data);
static int __ethtool_set_ufo(struct net_device *dev, u32 data);
static int ethtool_set_one_feature(struct net_device *dev,
void __user *useraddr, u32 ethcmd)
int __ethtool_set_flags(struct net_device *dev, u32 data)
static int ethtool_get_settings(struct net_device *dev, void __user *useraddr)
static int ethtool_set_settings(struct net_device *dev, void __user *useraddr)
static noinline_for_stack int ethtool_get_drvinfo(struct net_device *dev,
void __user *useraddr)
static noinline_for_stack int ethtool_get_sset_info(struct net_device *dev,
void __user *useraddr)
static noinline_for_stack int ethtool_set_rxnfc(struct net_device *dev,
u32 cmd, void __user *useraddr)
static noinline_for_stack int ethtool_get_rxnfc(struct net_device *dev,
u32 cmd, void __user *useraddr)
static noinline_for_stack int ethtool_get_rxfh_indir(struct net_device *dev,
void __user *useraddr)
static noinline_for_stack int ethtool_set_rxfh_indir(struct net_device *dev,
void __user *useraddr)
static void __rx_ntuple_filter_add(struct ethtool_rx_ntuple_list *list,
struct ethtool_rx_ntuple_flow_spec *spec,
struct ethtool_rx_ntuple_flow_spec_container *fsc)
static void rx_ntuple_fix_masks(struct ethtool_rx_ntuple_flow_spec *fs)
static noinline_for_stack int ethtool_set_rx_ntuple(struct net_device *dev,
void __user *useraddr)
static int ethtool_get_rx_ntuple(struct net_device *dev, void __user *useraddr)
static int ethtool_get_regs(struct net_device *dev, char __user *useraddr)
static int ethtool_reset(struct net_device *dev, char __user *useraddr)
static int ethtool_get_wol(struct net_device *dev, char __user *useraddr)
static int ethtool_set_wol(struct net_device *dev, char __user *useraddr)
static int ethtool_nway_reset(struct net_device *dev)
static int ethtool_get_link(struct net_device *dev, char __user *useraddr)
static int ethtool_get_eeprom(struct net_device *dev, void __user *useraddr)
static int ethtool_set_eeprom(struct net_device *dev, void __user *useraddr)
static noinline_for_stack int ethtool_get_coalesce(struct net_device *dev,
void __user *useraddr)
static noinline_for_stack int ethtool_set_coalesce(struct net_device *dev,
void __user *useraddr)
static int ethtool_get_ringparam(struct net_device *dev, void __user *useraddr)
static int ethtool_set_ringparam(struct net_device *dev, void __user *useraddr)
static noinline_for_stack int ethtool_get_channels(struct net_device *dev,
void __user *useraddr)
static noinline_for_stack int ethtool_set_channels(struct net_device *dev,
void __user *useraddr)
static int ethtool_get_pauseparam(struct net_device *dev, void __user *useraddr)
static int ethtool_set_pauseparam(struct net_device *dev, void __user *useraddr)
static int __ethtool_set_sg(struct net_device *dev, u32 data)
static int __ethtool_set_tx_csum(struct net_device *dev, u32 data)
static int __ethtool_set_rx_csum(struct net_device *dev, u32 data)
static int __ethtool_set_tso(struct net_device *dev, u32 data)
static int __ethtool_set_ufo(struct net_device *dev, u32 data)
static int ethtool_self_test(struct net_device *dev, char __user *useraddr)
static int ethtool_get_strings(struct net_device *dev, void __user *useraddr)
static int ethtool_phys_id(struct net_device *dev, void __user *useraddr)
static int ethtool_get_stats(struct net_device *dev, void __user *useraddr)
static int ethtool_get_perm_addr(struct net_device *dev, void __user *useraddr)
static int ethtool_get_value(struct net_device *dev, char __user *useraddr,
u32 cmd, u32 (*actor)(struct net_device *))
static int ethtool_set_value_void(struct net_device *dev, char __user *useraddr,
void (*actor)(struct net_device *, u32))
static int ethtool_set_value(struct net_device *dev, char __user *useraddr,
int (*actor)(struct net_device *, u32))
static noinline_for_stack int ethtool_flash_device(struct net_device *dev,
char __user *useraddr)
static int ethtool_set_dump(struct net_device *dev,
void __user *useraddr)
static int ethtool_get_dump_flag(struct net_device *dev,
void __user *useraddr)
static int ethtool_get_dump_data(struct net_device *dev,
void __user *useraddr)
int dev_ethtool(struct net *net, struct ifreq *ifr)
