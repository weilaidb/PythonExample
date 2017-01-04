MODULE_AUTHOR("Jouni Malinen");
MODULE_DESCRIPTION("Host AP common routines");
MODULE_LICENSE("GPL");
#define TX_TIMEOUT (2 * HZ)
#define PRISM2_MAX_FRAME_SIZE 2304
#define PRISM2_MIN_MTU 256
#define PRISM2_MAX_MTU (PRISM2_MAX_FRAME_SIZE - (6 + 8))
struct net_device * hostap_add_interface(struct local_info *local,
int type, int rtnl_locked,
const char *prefix,
const char *name)
void hostap_remove_interface(struct net_device *dev, int rtnl_locked,
int remove_from_list)
static inline int prism2_wds_special_addr(u8 *addr)
int prism2_wds_add(local_info_t *local, u8 *remote_addr,
int rtnl_locked)
int prism2_wds_del(local_info_t *local, u8 *remote_addr,
int rtnl_locked, int do_not_remove)
u16 hostap_tx_callback_register(local_info_t *local,
void (*func)(struct sk_buff *, int ok, void *),
void *data)
int hostap_tx_callback_unregister(local_info_t *local, u16 idx)
int hostap_set_word(struct net_device *dev, int rid, u16 val)
int hostap_set_string(struct net_device *dev, int rid, const char *val)
u16 hostap_get_porttype(local_info_t *local)
int hostap_set_encryption(local_info_t *local)
int hostap_set_antsel(local_info_t *local)
int hostap_set_roaming(local_info_t *local)
int hostap_set_auth_algs(local_info_t *local)
void hostap_dump_rx_header(const char *name, const struct hfa384x_rx_frame *rx)
void hostap_dump_tx_header(const char *name, const struct hfa384x_tx_frame *tx)
static int hostap_80211_header_parse(const struct sk_buff *skb,
unsigned char *haddr)
int hostap_80211_get_hdrlen(__le16 fc)
static int prism2_close(struct net_device *dev)
static int prism2_open(struct net_device *dev)
static int prism2_set_mac_address(struct net_device *dev, void *p)
void hostap_set_multicast_list_queue(struct work_struct *work)
static void hostap_set_multicast_list(struct net_device *dev)
static int prism2_change_mtu(struct net_device *dev, int new_mtu)
static void prism2_tx_timeout(struct net_device *dev)
const struct header_ops hostap_80211_ops = ;
EXPORT_SYMBOL(hostap_80211_ops);
static const struct net_device_ops hostap_netdev_ops = ;
static const struct net_device_ops hostap_mgmt_netdev_ops = ;
static const struct net_device_ops hostap_master_ops = ;
void hostap_setup_dev(struct net_device *dev, local_info_t *local,
int type)
static int hostap_enable_hostapd(local_info_t *local, int rtnl_locked)
static int hostap_disable_hostapd(local_info_t *local, int rtnl_locked)
static int hostap_enable_hostapd_sta(local_info_t *local, int rtnl_locked)
static int hostap_disable_hostapd_sta(local_info_t *local, int rtnl_locked)
int hostap_set_hostapd(local_info_t *local, int val, int rtnl_locked)
int hostap_set_hostapd_sta(local_info_t *local, int val, int rtnl_locked)
int prism2_update_comms_qual(struct net_device *dev)
int prism2_sta_send_mgmt(local_info_t *local, u8 *dst, u16 stype,
u8 *body, size_t bodylen)
int prism2_sta_deauth(local_info_t *local, u16 reason)
struct proc_dir_entry *hostap_proc;
static int __init hostap_init(void)
static void __exit hostap_exit(void)
EXPORT_SYMBOL(hostap_set_word);
EXPORT_SYMBOL(hostap_set_string);
EXPORT_SYMBOL(hostap_get_porttype);
EXPORT_SYMBOL(hostap_set_encryption);
EXPORT_SYMBOL(hostap_set_antsel);
EXPORT_SYMBOL(hostap_set_roaming);
EXPORT_SYMBOL(hostap_set_auth_algs);
EXPORT_SYMBOL(hostap_dump_rx_header);
EXPORT_SYMBOL(hostap_dump_tx_header);
EXPORT_SYMBOL(hostap_80211_get_hdrlen);
EXPORT_SYMBOL(hostap_setup_dev);
EXPORT_SYMBOL(hostap_set_multicast_list_queue);
EXPORT_SYMBOL(hostap_set_hostapd);
EXPORT_SYMBOL(hostap_set_hostapd_sta);
EXPORT_SYMBOL(hostap_add_interface);
EXPORT_SYMBOL(hostap_remove_interface);
EXPORT_SYMBOL(prism2_update_comms_qual);
module_init(hostap_init);
module_exit(hostap_exit);
