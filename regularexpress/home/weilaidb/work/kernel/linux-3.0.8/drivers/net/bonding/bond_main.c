#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define BOND_LINK_MON_INTERV	0
#define BOND_LINK_ARP_INTERV	0
static int max_bonds	= BOND_DEFAULT_MAX_BONDS;
static int tx_queues	= BOND_DEFAULT_TX_QUEUES;
static int num_peer_notif = 1;
static int miimon	= BOND_LINK_MON_INTERV;
static int updelay;
static int downdelay;
static int use_carrier	= 1;
static char *mode;
static char *primary;
static char *primary_reselect;
static char *lacp_rate;
static char *ad_select;
static char *xmit_hash_policy;
static int arp_interval = BOND_LINK_ARP_INTERV;
static char *arp_ip_target[BOND_MAX_ARP_TARGETS];
static char *arp_validate;
static char *fail_over_mac;
static int all_slaves_active = 0;
static struct bond_params bonding_defaults;
static int resend_igmp = BOND_DEFAULT_RESEND_IGMP;
module_param(max_bonds, int, 0);
MODULE_PARM_DESC(max_bonds, "Max number of bonded devices");
module_param(tx_queues, int, 0);
MODULE_PARM_DESC(tx_queues, "Max number of transmit queues (default = 16)");
module_param_named(num_grat_arp, num_peer_notif, int, 0644);
MODULE_PARM_DESC(num_grat_arp, "Number of peer notifications to send on "
"failover event (alias of num_unsol_na)");
module_param_named(num_unsol_na, num_peer_notif, int, 0644);
MODULE_PARM_DESC(num_unsol_na, "Number of peer notifications to send on "
"failover event (alias of num_grat_arp)");
module_param(miimon, int, 0);
MODULE_PARM_DESC(miimon, "Link check interval in milliseconds");
module_param(updelay, int, 0);
MODULE_PARM_DESC(updelay, "Delay before considering link up, in milliseconds");
module_param(downdelay, int, 0);
MODULE_PARM_DESC(downdelay, "Delay before considering link down, "
"in milliseconds");
module_param(use_carrier, int, 0);
MODULE_PARM_DESC(use_carrier, "Use netif_carrier_ok (vs MII ioctls) in miimon; "
"0 for off, 1 for on (default)");
module_param(mode, charp, 0);
MODULE_PARM_DESC(mode, "Mode of operation; 0 for balance-rr, "
"1 for active-backup, 2 for balance-xor, "
"3 for broadcast, 4 for 802.3ad, 5 for balance-tlb, "
"6 for balance-alb");
module_param(primary, charp, 0);
MODULE_PARM_DESC(primary, "Primary network device to use");
module_param(primary_reselect, charp, 0);
MODULE_PARM_DESC(primary_reselect, "Reselect primary slave "
"once it comes up; "
"0 for always (default), "
"1 for only if speed of primary is "
"better, "
"2 for only on active slave "
"failure");
module_param(lacp_rate, charp, 0);
MODULE_PARM_DESC(lacp_rate, "LACPDU tx rate to request from 802.3ad partner; "
"0 for slow, 1 for fast");
module_param(ad_select, charp, 0);
MODULE_PARM_DESC(ad_select, "803.ad aggregation selection logic; "
"0 for stable (default), 1 for bandwidth, "
"2 for count");
module_param(xmit_hash_policy, charp, 0);
MODULE_PARM_DESC(xmit_hash_policy, "balance-xor and 802.3ad hashing method; "
"0 for layer 2 (default), 1 for layer 3+4, "
"2 for layer 2+3");
module_param(arp_interval, int, 0);
MODULE_PARM_DESC(arp_interval, "arp interval in milliseconds");
module_param_array(arp_ip_target, charp, NULL, 0);
MODULE_PARM_DESC(arp_ip_target, "arp targets in n.n.n.n form");
module_param(arp_validate, charp, 0);
MODULE_PARM_DESC(arp_validate, "validate src/dst of ARP probes; "
"0 for none (default), 1 for active, "
"2 for backup, 3 for all");
module_param(fail_over_mac, charp, 0);
MODULE_PARM_DESC(fail_over_mac, "For active-backup, do not set all slaves to "
"the same MAC; 0 for none (default), "
"1 for active, 2 for follow");
module_param(all_slaves_active, int, 0);
MODULE_PARM_DESC(all_slaves_active, "Keep all frames received on an interface"
"by setting active flag for all slaves; "
"0 for never (default), 1 for always.");
module_param(resend_igmp, int, 0);
MODULE_PARM_DESC(resend_igmp, "Number of IGMP membership reports to send on "
"link failure");
atomic_t netpoll_block_tx = ATOMIC_INIT(0);
int bond_net_id __read_mostly;
static __be32 arp_target[BOND_MAX_ARP_TARGETS];
static int arp_ip_count;
static int bond_mode	= BOND_MODE_ROUNDROBIN;
static int xmit_hashtype = BOND_XMIT_POLICY_LAYER2;
static int lacp_fast;
const struct bond_parm_tbl bond_lacp_tbl[] = ;
const struct bond_parm_tbl bond_mode_tbl[] = ;
const struct bond_parm_tbl xmit_hashtype_tbl[] = ;
const struct bond_parm_tbl arp_validate_tbl[] = ;
const struct bond_parm_tbl fail_over_mac_tbl[] = ;
const struct bond_parm_tbl pri_reselect_tbl[] = ;
struct bond_parm_tbl ad_select_tbl[] = ;
static int bond_init(struct net_device *bond_dev);
static void bond_uninit(struct net_device *bond_dev);
const char *bond_mode_name(int mode)
static int bond_add_vlan(struct bonding *bond, unsigned short vlan_id)
static int bond_del_vlan(struct bonding *bond, unsigned short vlan_id)
struct vlan_entry *bond_next_vlan(struct bonding *bond, struct vlan_entry *curr)
#define bond_queue_mapping(skb) (*(u16 *)((skb)->cb))
int bond_dev_queue_xmit(struct bonding *bond, struct sk_buff *skb,
struct net_device *slave_dev)
static void bond_vlan_rx_register(struct net_device *bond_dev,
struct vlan_group *grp)
static void bond_vlan_rx_add_vid(struct net_device *bond_dev, uint16_t vid)
static void bond_vlan_rx_kill_vid(struct net_device *bond_dev, uint16_t vid)
static void bond_add_vlans_on_slave(struct bonding *bond, struct net_device *slave_dev)
static void bond_del_vlans_from_slave(struct bonding *bond,
struct net_device *slave_dev)
static int bond_set_carrier(struct bonding *bond)
static int bond_update_speed_duplex(struct slave *slave)
static int bond_check_dev_link(struct bonding *bond,
struct net_device *slave_dev, int reporting)
static int bond_set_promiscuity(struct bonding *bond, int inc)
static int bond_set_allmulti(struct bonding *bond, int inc)
static void bond_mc_add(struct bonding *bond, void *addr)
static void bond_mc_del(struct bonding *bond, void *addr)
static void __bond_resend_igmp_join_requests(struct net_device *dev)
static void bond_resend_igmp_join_requests(struct bonding *bond)
static void bond_resend_igmp_join_requests_delayed(struct work_struct *work)
static void bond_mc_list_flush(struct net_device *bond_dev,
struct net_device *slave_dev)
static void bond_mc_swap(struct bonding *bond, struct slave *new_active,
struct slave *old_active)
static void bond_do_fail_over_mac(struct bonding *bond,
struct slave *new_active,
struct slave *old_active)
__releases(&bond->curr_slave_lock)
__releases(&bond->lock)
__acquires(&bond->lock)
__acquires(&bond->curr_slave_lock)
static bool bond_should_change_active(struct bonding *bond)
static struct slave *bond_find_best_slave(struct bonding *bond)
static bool bond_should_notify_peers(struct bonding *bond)
void bond_change_active_slave(struct bonding *bond, struct slave *new_active)
void bond_select_active_slave(struct bonding *bond)
static void bond_attach_slave(struct bonding *bond, struct slave *new_slave)
static void bond_detach_slave(struct bonding *bond, struct slave *slave)
static inline int slave_enable_netpoll(struct slave *slave)
static inline void slave_disable_netpoll(struct slave *slave)
static inline bool slave_dev_support_netpoll(struct net_device *slave_dev)
static void bond_poll_controller(struct net_device *bond_dev)
static void __bond_netpoll_cleanup(struct bonding *bond)
static void bond_netpoll_cleanup(struct net_device *bond_dev)
static int bond_netpoll_setup(struct net_device *dev, struct netpoll_info *ni)
static struct netpoll_info *bond_netpoll_info(struct bonding *bond)
static inline int slave_enable_netpoll(struct slave *slave)
static inline void slave_disable_netpoll(struct slave *slave)
static void bond_netpoll_cleanup(struct net_device *bond_dev)
static int bond_sethwaddr(struct net_device *bond_dev,
struct net_device *slave_dev)
static u32 bond_fix_features(struct net_device *dev, u32 features)
#define BOND_VLAN_FEATURES	(NETIF_F_ALL_CSUM | NETIF_F_SG | \
NETIF_F_FRAGLIST | NETIF_F_ALL_TSO | \
NETIF_F_HIGHDMA | NETIF_F_LRO)
static void bond_compute_features(struct bonding *bond)
static void bond_setup_by_slave(struct net_device *bond_dev,
struct net_device *slave_dev)
static bool bond_should_deliver_exact_match(struct sk_buff *skb,
struct slave *slave,
struct bonding *bond)
static rx_handler_result_t bond_handle_frame(struct sk_buff **pskb)
int bond_enslave(struct net_device *bond_dev, struct net_device *slave_dev)
int bond_release(struct net_device *bond_dev, struct net_device *slave_dev)
static int  bond_release_and_destroy(struct net_device *bond_dev,
struct net_device *slave_dev)
static int bond_release_all(struct net_device *bond_dev)
static int bond_ioctl_change_active(struct net_device *bond_dev, struct net_device *slave_dev)
static int bond_info_query(struct net_device *bond_dev, struct ifbond *info)
static int bond_slave_info_query(struct net_device *bond_dev, struct ifslave *info)
static int bond_miimon_inspect(struct bonding *bond)
static void bond_miimon_commit(struct bonding *bond)
void bond_mii_monitor(struct work_struct *work)
static __be32 bond_glean_dev_ip(struct net_device *dev)
static int bond_has_this_ip(struct bonding *bond, __be32 ip)
static void bond_arp_send(struct net_device *slave_dev, int arp_op, __be32 dest_ip, __be32 src_ip, unsigned short vlan_id)
static void bond_arp_send_all(struct bonding *bond, struct slave *slave)
static void bond_validate_arp(struct bonding *bond, struct slave *slave, __be32 sip, __be32 tip)
static void bond_arp_rcv(struct sk_buff *skb, struct bonding *bond,
struct slave *slave)
void bond_loadbalance_arp_mon(struct work_struct *work)
static int bond_ab_arp_inspect(struct bonding *bond, int delta_in_ticks)
static void bond_ab_arp_commit(struct bonding *bond, int delta_in_ticks)
static void bond_ab_arp_probe(struct bonding *bond)
void bond_activebackup_arp_mon(struct work_struct *work)
static int bond_event_changename(struct bonding *bond)
static int bond_master_netdev_event(unsigned long event,
struct net_device *bond_dev)
static int bond_slave_netdev_event(unsigned long event,
struct net_device *slave_dev)
static int bond_netdev_event(struct notifier_block *this,
unsigned long event, void *ptr)
static int bond_inetaddr_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block bond_netdev_notifier = ;
static struct notifier_block bond_inetaddr_notifier = ;
static int bond_xmit_hash_policy_l23(struct sk_buff *skb, int count)
static int bond_xmit_hash_policy_l34(struct sk_buff *skb, int count)
static int bond_xmit_hash_policy_l2(struct sk_buff *skb, int count)
static int bond_open(struct net_device *bond_dev)
static int bond_close(struct net_device *bond_dev)
static struct rtnl_link_stats64 *bond_get_stats(struct net_device *bond_dev,
struct rtnl_link_stats64 *stats)
static int bond_do_ioctl(struct net_device *bond_dev, struct ifreq *ifr, int cmd)
static bool bond_addr_in_mc_list(unsigned char *addr,
struct netdev_hw_addr_list *list,
int addrlen)
static void bond_set_multicast_list(struct net_device *bond_dev)
static int bond_neigh_setup(struct net_device *dev, struct neigh_parms *parms)
static int bond_change_mtu(struct net_device *bond_dev, int new_mtu)
static int bond_set_mac_address(struct net_device *bond_dev, void *addr)
static int bond_xmit_roundrobin(struct sk_buff *skb, struct net_device *bond_dev)
static int bond_xmit_activebackup(struct sk_buff *skb, struct net_device *bond_dev)
static int bond_xmit_xor(struct sk_buff *skb, struct net_device *bond_dev)
static int bond_xmit_broadcast(struct sk_buff *skb, struct net_device *bond_dev)
static void bond_set_xmit_hash_policy(struct bonding *bond)
static inline int bond_slave_override(struct bonding *bond,
struct sk_buff *skb)
static u16 bond_select_queue(struct net_device *dev, struct sk_buff *skb)
static netdev_tx_t __bond_start_xmit(struct sk_buff *skb, struct net_device *dev)
static netdev_tx_t bond_start_xmit(struct sk_buff *skb, struct net_device *dev)
void bond_set_mode_ops(struct bonding *bond, int mode)
static void bond_ethtool_get_drvinfo(struct net_device *bond_dev,
struct ethtool_drvinfo *drvinfo)
static const struct ethtool_ops bond_ethtool_ops = ;
static const struct net_device_ops bond_netdev_ops = ;
static void bond_destructor(struct net_device *bond_dev)
static void bond_setup(struct net_device *bond_dev)
static void bond_work_cancel_all(struct bonding *bond)
static void bond_uninit(struct net_device *bond_dev)
int bond_parse_parm(const char *buf, const struct bond_parm_tbl *tbl)
static int bond_check_params(struct bond_params *params)
static struct lock_class_key bonding_netdev_xmit_lock_key;
static struct lock_class_key bonding_netdev_addr_lock_key;
static void bond_set_lockdep_class_one(struct net_device *dev,
struct netdev_queue *txq,
void *_unused)
static void bond_set_lockdep_class(struct net_device *dev)
static int bond_init(struct net_device *bond_dev)
static int bond_validate(struct nlattr *tb[], struct nlattr *data[])
static struct rtnl_link_ops bond_link_ops __read_mostly = ;
int bond_create(struct net *net, const char *name)
static int __net_init bond_net_init(struct net *net)
static void __net_exit bond_net_exit(struct net *net)
static struct pernet_operations bond_net_ops = ;
static int __init bonding_init(void)
static void __exit bonding_exit(void)
module_init(bonding_init);
module_exit(bonding_exit);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION(DRV_DESCRIPTION ", v" DRV_VERSION);
MODULE_AUTHOR("Thomas Davis, tadavis@lbl.gov and many others");
MODULE_ALIAS_RTNL_LINK("bond");
