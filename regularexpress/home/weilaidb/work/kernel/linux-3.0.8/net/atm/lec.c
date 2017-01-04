#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
#if defined(CONFIG_BRIDGE) || defined(CONFIG_BRIDGE_MODULE)
static unsigned char bridge_ula_lec[] = ;
#define DUMP_PACKETS 0
#define LEC_UNRES_QUE_LEN 8
static int lec_open(struct net_device *dev);
static netdev_tx_t lec_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int lec_close(struct net_device *dev);
static struct lec_arp_table *lec_arp_find(struct lec_priv *priv,
const unsigned char *mac_addr);
static int lec_arp_remove(struct lec_priv *priv,
struct lec_arp_table *to_remove);
static void lane2_associate_ind(struct net_device *dev, const u8 *mac_address,
const u8 *tlvs, u32 sizeoftlvs);
static int lane2_resolve(struct net_device *dev, const u8 *dst_mac, int force,
u8 **tlvs, u32 *sizeoftlvs);
static int lane2_associate_req(struct net_device *dev, const u8 *lan_dst,
const u8 *tlvs, u32 sizeoftlvs);
static int lec_addr_delete(struct lec_priv *priv, const unsigned char *atm_addr,
unsigned long permanent);
static void lec_arp_check_empties(struct lec_priv *priv,
struct atm_vcc *vcc, struct sk_buff *skb);
static void lec_arp_destroy(struct lec_priv *priv);
static void lec_arp_init(struct lec_priv *priv);
static struct atm_vcc *lec_arp_resolve(struct lec_priv *priv,
const unsigned char *mac_to_find,
int is_rdesc,
struct lec_arp_table **ret_entry);
static void lec_arp_update(struct lec_priv *priv, const unsigned char *mac_addr,
const unsigned char *atm_addr,
unsigned long remoteflag,
unsigned int targetless_le_arp);
static void lec_flush_complete(struct lec_priv *priv, unsigned long tran_id);
static int lec_mcast_make(struct lec_priv *priv, struct atm_vcc *vcc);
static void lec_set_flush_tran_id(struct lec_priv *priv,
const unsigned char *atm_addr,
unsigned long tran_id);
static void lec_vcc_added(struct lec_priv *priv,
const struct atmlec_ioc *ioc_data,
struct atm_vcc *vcc,
void (*old_push)(struct atm_vcc *vcc,
struct sk_buff *skb));
static void lec_vcc_close(struct lec_priv *priv, struct atm_vcc *vcc);
static inline void lec_arp_hold(struct lec_arp_table *entry)
static inline void lec_arp_put(struct lec_arp_table *entry)
static struct lane2_ops lane2_ops = ;
static unsigned char bus_mac[ETH_ALEN] = ;
static struct net_device *dev_lec[MAX_LEC_ITF];
#if defined(CONFIG_BRIDGE) || defined(CONFIG_BRIDGE_MODULE)
static void lec_handle_bridge(struct sk_buff *skb, struct net_device *dev)
static unsigned char *get_tr_dst(unsigned char *packet, unsigned char *rdesc)
static int lec_open(struct net_device *dev)
static void
lec_send(struct atm_vcc *vcc, struct sk_buff *skb)
static void lec_tx_timeout(struct net_device *dev)
static netdev_tx_t lec_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int lec_close(struct net_device *dev)
static int lec_atm_send(struct atm_vcc *vcc, struct sk_buff *skb)
static void lec_atm_close(struct atm_vcc *vcc)
static struct atmdev_ops lecdev_ops = ;
static struct atm_dev lecatm_dev = ;
static int
send_to_lecd(struct lec_priv *priv, atmlec_msg_type type,
const unsigned char *mac_addr, const unsigned char *atm_addr,
struct sk_buff *data)
static int lec_change_mtu(struct net_device *dev, int new_mtu)
static void lec_set_multicast_list(struct net_device *dev)
static const struct net_device_ops lec_netdev_ops = ;
static const unsigned char lec_ctrl_magic[] = ;
#define LEC_DATA_DIRECT_8023  2
#define LEC_DATA_DIRECT_8025  3
static int lec_is_data_direct(struct atm_vcc *vcc)
static void lec_push(struct atm_vcc *vcc, struct sk_buff *skb)
static void lec_pop(struct atm_vcc *vcc, struct sk_buff *skb)
static int lec_vcc_attach(struct atm_vcc *vcc, void __user *arg)
static int lec_mcast_attach(struct atm_vcc *vcc, int arg)
static int lecd_attach(struct atm_vcc *vcc, int arg)
static const char *lec_arp_get_status_string(unsigned char status)
static void lec_info(struct seq_file *seq, struct lec_arp_table *entry)
struct lec_state ;
static void *lec_tbl_walk(struct lec_state *state, struct hlist_head *tbl,
loff_t *l)
static void *lec_arp_walk(struct lec_state *state, loff_t *l,
struct lec_priv *priv)
static void *lec_misc_walk(struct lec_state *state, loff_t *l,
struct lec_priv *priv)
static void *lec_priv_walk(struct lec_state *state, loff_t *l,
struct lec_priv *priv)
static void *lec_itf_walk(struct lec_state *state, loff_t *l)
static void *lec_get_idx(struct lec_state *state, loff_t l)
static void *lec_seq_start(struct seq_file *seq, loff_t *pos)
static void lec_seq_stop(struct seq_file *seq, void *v)
static void *lec_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static int lec_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations lec_seq_ops = ;
static int lec_seq_open(struct inode *inode, struct file *file)
static const struct file_operations lec_seq_fops = ;
static int lane_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static struct atm_ioctl lane_ioctl_ops = ;
static int __init lane_module_init(void)
static void __exit lane_module_cleanup(void)
module_init(lane_module_init);
module_exit(lane_module_cleanup);
static int lane2_resolve(struct net_device *dev, const u8 *dst_mac, int force,
u8 **tlvs, u32 *sizeoftlvs)
static int lane2_associate_req(struct net_device *dev, const u8 *lan_dst,
const u8 *tlvs, u32 sizeoftlvs)
static void lane2_associate_ind(struct net_device *dev, const u8 *mac_addr,
const u8 *tlvs, u32 sizeoftlvs)
#define DEBUG_ARP_TABLE 0
#define LEC_ARP_REFRESH_INTERVAL (3*HZ)
static void lec_arp_check_expire(struct work_struct *work);
static void lec_arp_expire_arp(unsigned long data);
#define HASH(ch) (ch & (LEC_ARP_TABLE_SIZE - 1))
static void lec_arp_init(struct lec_priv *priv)
static void lec_arp_clear_vccs(struct lec_arp_table *entry)
static inline void
lec_arp_add(struct lec_priv *priv, struct lec_arp_table *entry)
static int
lec_arp_remove(struct lec_priv *priv, struct lec_arp_table *to_remove)
#if DEBUG_ARP_TABLE
static const char *get_status_string(unsigned char st)
static void dump_arp_table(struct lec_priv *priv)
#define dump_arp_table(priv) do  while (0)
static void lec_arp_destroy(struct lec_priv *priv)
static struct lec_arp_table *lec_arp_find(struct lec_priv *priv,
const unsigned char *mac_addr)
static struct lec_arp_table *make_entry(struct lec_priv *priv,
const unsigned char *mac_addr)
static void lec_arp_expire_arp(unsigned long data)
static void lec_arp_expire_vcc(unsigned long data)
static bool __lec_arp_check_expire(struct lec_arp_table *entry,
unsigned long now,
struct lec_priv *priv)
static void lec_arp_check_expire(struct work_struct *work)
static struct atm_vcc *lec_arp_resolve(struct lec_priv *priv,
const unsigned char *mac_to_find,
int is_rdesc,
struct lec_arp_table **ret_entry)
static int
lec_addr_delete(struct lec_priv *priv, const unsigned char *atm_addr,
unsigned long permanent)
static void
lec_arp_update(struct lec_priv *priv, const unsigned char *mac_addr,
const unsigned char *atm_addr, unsigned long remoteflag,
unsigned int targetless_le_arp)
static void
lec_vcc_added(struct lec_priv *priv, const struct atmlec_ioc *ioc_data,
struct atm_vcc *vcc,
void (*old_push) (struct atm_vcc *vcc, struct sk_buff *skb))
static void lec_flush_complete(struct lec_priv *priv, unsigned long tran_id)
static void
lec_set_flush_tran_id(struct lec_priv *priv,
const unsigned char *atm_addr, unsigned long tran_id)
static int lec_mcast_make(struct lec_priv *priv, struct atm_vcc *vcc)
static void lec_vcc_close(struct lec_priv *priv, struct atm_vcc *vcc)
static void
lec_arp_check_empties(struct lec_priv *priv,
struct atm_vcc *vcc, struct sk_buff *skb)
MODULE_LICENSE("GPL");
