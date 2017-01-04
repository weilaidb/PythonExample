#define KMSG_COMPONENT "qeth"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static int qeth_l3_set_offline(struct ccwgroup_device *);
static int qeth_l3_recover(void *);
static int qeth_l3_stop(struct net_device *);
static void qeth_l3_set_multicast_list(struct net_device *);
static int qeth_l3_neigh_setup(struct net_device *, struct neigh_parms *);
static int qeth_l3_register_addr_entry(struct qeth_card *,
struct qeth_ipaddr *);
static int qeth_l3_deregister_addr_entry(struct qeth_card *,
struct qeth_ipaddr *);
static int __qeth_l3_set_online(struct ccwgroup_device *, int);
static int __qeth_l3_set_offline(struct ccwgroup_device *, int);
static int qeth_l3_isxdigit(char *buf)
void qeth_l3_ipaddr4_to_string(const __u8 *addr, char *buf)
int qeth_l3_string_to_ipaddr4(const char *buf, __u8 *addr)
void qeth_l3_ipaddr6_to_string(const __u8 *addr, char *buf)
int qeth_l3_string_to_ipaddr6(const char *buf, __u8 *addr)
void qeth_l3_ipaddr_to_string(enum qeth_prot_versions proto, const __u8 *addr,
char *buf)
int qeth_l3_string_to_ipaddr(const char *buf, enum qeth_prot_versions proto,
__u8 *addr)
static void qeth_l3_convert_addr_to_bits(u8 *addr, u8 *bits, int len)
int qeth_l3_is_addr_covered_by_ipato(struct qeth_card *card,
struct qeth_ipaddr *addr)
static int __qeth_l3_insert_ip_todo(struct qeth_card *card,
struct qeth_ipaddr *addr, int add)
static int qeth_l3_delete_ip(struct qeth_card *card, struct qeth_ipaddr *addr)
static int qeth_l3_add_ip(struct qeth_card *card, struct qeth_ipaddr *addr)
static struct qeth_ipaddr *qeth_l3_get_addr_buffer(
enum qeth_prot_versions prot)
static void qeth_l3_delete_mc_addresses(struct qeth_card *card)
static int __qeth_l3_ref_ip_on_card(struct qeth_card *card,
struct qeth_ipaddr *todo, struct qeth_ipaddr **__addr)
static void __qeth_l3_delete_all_mc(struct qeth_card *card,
unsigned long *flags)
static void qeth_l3_set_ip_addr_list(struct qeth_card *card)
static void qeth_l3_clear_ip_list(struct qeth_card *card, int recover)
static int qeth_l3_address_exists_in_list(struct list_head *list,
struct qeth_ipaddr *addr, int same_type)
static int qeth_l3_send_setdelmc(struct qeth_card *card,
struct qeth_ipaddr *addr, int ipacmd)
static void qeth_l3_fill_netmask(u8 *netmask, unsigned int len)
static int qeth_l3_send_setdelip(struct qeth_card *card,
struct qeth_ipaddr *addr, int ipacmd, unsigned int flags)
static int qeth_l3_send_setrouting(struct qeth_card *card,
enum qeth_routing_types type, enum qeth_prot_versions prot)
static void qeth_l3_correct_routing_type(struct qeth_card *card,
enum qeth_routing_types *type, enum qeth_prot_versions prot)
int qeth_l3_setrouting_v4(struct qeth_card *card)
int qeth_l3_setrouting_v6(struct qeth_card *card)
static void qeth_l3_clear_ipato_list(struct qeth_card *card)
int qeth_l3_add_ipato_entry(struct qeth_card *card,
struct qeth_ipato_entry *new)
void qeth_l3_del_ipato_entry(struct qeth_card *card,
enum qeth_prot_versions proto, u8 *addr, int mask_bits)
int qeth_l3_add_vipa(struct qeth_card *card, enum qeth_prot_versions proto,
const u8 *addr)
void qeth_l3_del_vipa(struct qeth_card *card, enum qeth_prot_versions proto,
const u8 *addr)
int qeth_l3_add_rxip(struct qeth_card *card, enum qeth_prot_versions proto,
const u8 *addr)
void qeth_l3_del_rxip(struct qeth_card *card, enum qeth_prot_versions proto,
const u8 *addr)
static int qeth_l3_register_addr_entry(struct qeth_card *card,
struct qeth_ipaddr *addr)
static int qeth_l3_deregister_addr_entry(struct qeth_card *card,
struct qeth_ipaddr *addr)
static inline u8 qeth_l3_get_qeth_hdr_flags4(int cast_type)
static inline u8 qeth_l3_get_qeth_hdr_flags6(int cast_type)
static int qeth_l3_send_setadp_mode(struct qeth_card *card, __u32 command,
__u32 mode)
static int qeth_l3_setadapter_hstr(struct qeth_card *card)
static int qeth_l3_setadapter_parms(struct qeth_card *card)
static int qeth_l3_default_setassparms_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
static struct qeth_cmd_buffer *qeth_l3_get_setassparms_cmd(
struct qeth_card *card, enum qeth_ipa_funcs ipa_func, __u16 cmd_code,
__u16 len, enum qeth_prot_versions prot)
static int qeth_l3_send_setassparms(struct qeth_card *card,
struct qeth_cmd_buffer *iob, __u16 len, long data,
int (*reply_cb)(struct qeth_card *, struct qeth_reply *,
unsigned long),
void *reply_param)
static int qeth_l3_send_simple_setassparms_ipv6(struct qeth_card *card,
enum qeth_ipa_funcs ipa_func, __u16 cmd_code)
static int qeth_l3_send_simple_setassparms(struct qeth_card *card,
enum qeth_ipa_funcs ipa_func, __u16 cmd_code, long data)
static int qeth_l3_start_ipa_arp_processing(struct qeth_card *card)
static int qeth_l3_start_ipa_ip_fragmentation(struct qeth_card *card)
static int qeth_l3_start_ipa_source_mac(struct qeth_card *card)
static int qeth_l3_start_ipa_vlan(struct qeth_card *card)
static int qeth_l3_start_ipa_multicast(struct qeth_card *card)
static int qeth_l3_softsetup_ipv6(struct qeth_card *card)
static int qeth_l3_start_ipa_ipv6(struct qeth_card *card)
static int qeth_l3_start_ipa_broadcast(struct qeth_card *card)
static int qeth_l3_send_checksum_command(struct qeth_card *card)
int qeth_l3_set_rx_csum(struct qeth_card *card, int on)
static int qeth_l3_start_ipa_checksum(struct qeth_card *card)
static int qeth_l3_start_ipa_tx_checksum(struct qeth_card *card)
static int qeth_l3_start_ipa_tso(struct qeth_card *card)
static int qeth_l3_start_ipassists(struct qeth_card *card)
static int qeth_l3_iqd_read_initial_mac_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
static int qeth_l3_iqd_read_initial_mac(struct qeth_card *card)
static int qeth_l3_get_unique_id_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
static int qeth_l3_get_unique_id(struct qeth_card *card)
static int
qeth_diags_trace_cb(struct qeth_card *card, struct qeth_reply *reply,
unsigned long data)
static int
qeth_diags_trace(struct qeth_card *card, enum qeth_diags_trace_cmds diags_cmd)
static void qeth_l3_get_mac_for_ipm(__u32 ipm, char *mac,
struct net_device *dev)
static void qeth_l3_add_mc(struct qeth_card *card, struct in_device *in4_dev)
static void qeth_l3_add_vlan_mc(struct qeth_card *card)
static void qeth_l3_add_multicast_ipv4(struct qeth_card *card)
static void qeth_l3_add_mc6(struct qeth_card *card, struct inet6_dev *in6_dev)
static void qeth_l3_add_vlan_mc6(struct qeth_card *card)
static void qeth_l3_add_multicast_ipv6(struct qeth_card *card)
static void qeth_l3_free_vlan_addresses4(struct qeth_card *card,
unsigned short vid)
static void qeth_l3_free_vlan_addresses6(struct qeth_card *card,
unsigned short vid)
static void qeth_l3_free_vlan_addresses(struct qeth_card *card,
unsigned short vid)
static void qeth_l3_vlan_rx_register(struct net_device *dev,
struct vlan_group *grp)
static void qeth_l3_vlan_rx_add_vid(struct net_device *dev, unsigned short vid)
static void qeth_l3_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid)
static inline int qeth_l3_rebuild_skb(struct qeth_card *card,
struct sk_buff *skb, struct qeth_hdr *hdr,
unsigned short *vlan_id)
static int qeth_l3_process_inbound_buffer(struct qeth_card *card,
int budget, int *done)
static int qeth_l3_poll(struct napi_struct *napi, int budget)
static int qeth_l3_verify_vlan_dev(struct net_device *dev,
struct qeth_card *card)
static int qeth_l3_verify_dev(struct net_device *dev)
static struct qeth_card *qeth_l3_get_card_from_dev(struct net_device *dev)
static int qeth_l3_stop_card(struct qeth_card *card, int recovery_mode)
static void
qeth_l3_handle_promisc_mode(struct qeth_card *card)
static void qeth_l3_set_multicast_list(struct net_device *dev)
static const char *qeth_l3_arp_get_error_cause(int *rc)
static int qeth_l3_arp_set_no_entries(struct qeth_card *card, int no_entries)
static __u32 get_arp_entry_size(struct qeth_card *card,
struct qeth_arp_query_data *qdata,
struct qeth_arp_entrytype *type, __u8 strip_entries)
static int arpentry_matches_prot(struct qeth_arp_entrytype *type, __u16 prot)
static int qeth_l3_arp_query_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
static int qeth_l3_send_ipa_arp_cmd(struct qeth_card *card,
struct qeth_cmd_buffer *iob, int len,
int (*reply_cb)(struct qeth_card *, struct qeth_reply *,
unsigned long),
void *reply_param)
static int qeth_l3_query_arp_cache_info(struct qeth_card *card,
enum qeth_prot_versions prot,
struct qeth_arp_query_info *qinfo)
static int qeth_l3_arp_query(struct qeth_card *card, char __user *udata)
static int qeth_l3_arp_add_entry(struct qeth_card *card,
struct qeth_arp_cache_entry *entry)
static int qeth_l3_arp_remove_entry(struct qeth_card *card,
struct qeth_arp_cache_entry *entry)
static int qeth_l3_arp_flush_cache(struct qeth_card *card)
static int qeth_l3_do_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
int inline qeth_l3_get_cast_type(struct qeth_card *card, struct sk_buff *skb)
static void qeth_l3_fill_header(struct qeth_card *card, struct qeth_hdr *hdr,
struct sk_buff *skb, int ipv, int cast_type)
static inline void qeth_l3_hdr_csum(struct qeth_card *card,
struct qeth_hdr *hdr, struct sk_buff *skb)
static void qeth_tso_fill_header(struct qeth_card *card,
struct qeth_hdr *qhdr, struct sk_buff *skb)
static inline int qeth_l3_tso_elements(struct sk_buff *skb)
static int qeth_l3_hard_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int __qeth_l3_open(struct net_device *dev)
static int qeth_l3_open(struct net_device *dev)
static int qeth_l3_stop(struct net_device *dev)
static u32 qeth_l3_fix_features(struct net_device *dev, u32 features)
static int qeth_l3_set_features(struct net_device *dev, u32 features)
static const struct ethtool_ops qeth_l3_ethtool_ops = ;
static int qeth_l3_neigh_setup_noarp(struct neighbour *n)
static int
qeth_l3_neigh_setup(struct net_device *dev, struct neigh_parms *np)
static const struct net_device_ops qeth_l3_netdev_ops = ;
static const struct net_device_ops qeth_l3_osa_netdev_ops = ;
static int qeth_l3_setup_netdev(struct qeth_card *card)
static int qeth_l3_probe_device(struct ccwgroup_device *gdev)
static void qeth_l3_remove_device(struct ccwgroup_device *cgdev)
static int __qeth_l3_set_online(struct ccwgroup_device *gdev, int recovery_mode)
static int qeth_l3_set_online(struct ccwgroup_device *gdev)
static int __qeth_l3_set_offline(struct ccwgroup_device *cgdev,
int recovery_mode)
static int qeth_l3_set_offline(struct ccwgroup_device *cgdev)
static int qeth_l3_recover(void *ptr)
static void qeth_l3_shutdown(struct ccwgroup_device *gdev)
static int qeth_l3_pm_suspend(struct ccwgroup_device *gdev)
static int qeth_l3_pm_resume(struct ccwgroup_device *gdev)
struct ccwgroup_driver qeth_l3_ccwgroup_driver = ;
EXPORT_SYMBOL_GPL(qeth_l3_ccwgroup_driver);
static int qeth_l3_ip_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block qeth_l3_ip_notifier = ;
static int qeth_l3_ip6_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block qeth_l3_ip6_notifier = ;
static int qeth_l3_register_notifiers(void)
static void qeth_l3_unregister_notifiers(void)
static int __init qeth_l3_init(void)
static void __exit qeth_l3_exit(void)
module_init(qeth_l3_init);
module_exit(qeth_l3_exit);
MODULE_AUTHOR("Frank Blaschka <frank.blaschka@de.ibm.com>");
MODULE_DESCRIPTION("qeth layer 3 discipline");
MODULE_LICENSE("GPL");
