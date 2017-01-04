#define KMSG_COMPONENT "qeth"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static int qeth_l2_set_offline(struct ccwgroup_device *);
static int qeth_l2_stop(struct net_device *);
static int qeth_l2_send_delmac(struct qeth_card *, __u8 *);
static int qeth_l2_send_setdelmac(struct qeth_card *, __u8 *,
enum qeth_ipa_cmds,
int (*reply_cb) (struct qeth_card *,
struct qeth_reply*,
unsigned long));
static void qeth_l2_set_multicast_list(struct net_device *);
static int qeth_l2_recover(void *);
static int qeth_l2_do_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int qeth_l2_verify_dev(struct net_device *dev)
static struct net_device *qeth_l2_netdev_by_devno(unsigned char *read_dev_no)
static int qeth_l2_send_setgroupmac_cb(struct qeth_card *card,
struct qeth_reply *reply,
unsigned long data)
static int qeth_l2_send_setgroupmac(struct qeth_card *card, __u8 *mac)
static int qeth_l2_send_delgroupmac_cb(struct qeth_card *card,
struct qeth_reply *reply,
unsigned long data)
static int qeth_l2_send_delgroupmac(struct qeth_card *card, __u8 *mac)
static void qeth_l2_add_mc(struct qeth_card *card, __u8 *mac, int vmac)
static void qeth_l2_del_all_mc(struct qeth_card *card, int del)
static inline int qeth_l2_get_cast_type(struct qeth_card *card,
struct sk_buff *skb)
static void qeth_l2_fill_header(struct qeth_card *card, struct qeth_hdr *hdr,
struct sk_buff *skb, int ipv, int cast_type)
static int qeth_l2_send_setdelvlan_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
static int qeth_l2_send_setdelvlan(struct qeth_card *card, __u16 i,
enum qeth_ipa_cmds ipacmd)
static void qeth_l2_process_vlans(struct qeth_card *card)
static void qeth_l2_vlan_rx_add_vid(struct net_device *dev, unsigned short vid)
static void qeth_l2_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid)
static int qeth_l2_stop_card(struct qeth_card *card, int recovery_mode)
static int qeth_l2_process_inbound_buffer(struct qeth_card *card,
int budget, int *done)
static int qeth_l2_poll(struct napi_struct *napi, int budget)
static int qeth_l2_send_setdelmac(struct qeth_card *card, __u8 *mac,
enum qeth_ipa_cmds ipacmd,
int (*reply_cb) (struct qeth_card *,
struct qeth_reply*,
unsigned long))
static int qeth_l2_send_setmac_cb(struct qeth_card *card,
struct qeth_reply *reply,
unsigned long data)
static int qeth_l2_send_setmac(struct qeth_card *card, __u8 *mac)
static int qeth_l2_send_delmac_cb(struct qeth_card *card,
struct qeth_reply *reply,
unsigned long data)
static int qeth_l2_send_delmac(struct qeth_card *card, __u8 *mac)
static int qeth_l2_request_initial_mac(struct qeth_card *card)
static int qeth_l2_set_mac_address(struct net_device *dev, void *p)
static void qeth_l2_set_multicast_list(struct net_device *dev)
static int qeth_l2_hard_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int __qeth_l2_open(struct net_device *dev)
static int qeth_l2_open(struct net_device *dev)
static int qeth_l2_stop(struct net_device *dev)
static int qeth_l2_probe_device(struct ccwgroup_device *gdev)
static void qeth_l2_remove_device(struct ccwgroup_device *cgdev)
static const struct ethtool_ops qeth_l2_ethtool_ops = ;
static const struct ethtool_ops qeth_l2_osn_ops = ;
static const struct net_device_ops qeth_l2_netdev_ops = ;
static int qeth_l2_setup_netdev(struct qeth_card *card)
static int __qeth_l2_set_online(struct ccwgroup_device *gdev, int recovery_mode)
static int qeth_l2_set_online(struct ccwgroup_device *gdev)
static int __qeth_l2_set_offline(struct ccwgroup_device *cgdev,
int recovery_mode)
static int qeth_l2_set_offline(struct ccwgroup_device *cgdev)
static int qeth_l2_recover(void *ptr)
static int __init qeth_l2_init(void)
static void __exit qeth_l2_exit(void)
static void qeth_l2_shutdown(struct ccwgroup_device *gdev)
static int qeth_l2_pm_suspend(struct ccwgroup_device *gdev)
static int qeth_l2_pm_resume(struct ccwgroup_device *gdev)
struct ccwgroup_driver qeth_l2_ccwgroup_driver = ;
EXPORT_SYMBOL_GPL(qeth_l2_ccwgroup_driver);
static int qeth_osn_send_control_data(struct qeth_card *card, int len,
struct qeth_cmd_buffer *iob)
static int qeth_osn_send_ipa_cmd(struct qeth_card *card,
struct qeth_cmd_buffer *iob, int data_len)
int qeth_osn_assist(struct net_device *dev, void *data, int data_len)
EXPORT_SYMBOL(qeth_osn_assist);
int qeth_osn_register(unsigned char *read_dev_no, struct net_device **dev,
int (*assist_cb)(struct net_device *, void *),
int (*data_cb)(struct sk_buff *))
EXPORT_SYMBOL(qeth_osn_register);
void qeth_osn_deregister(struct net_device *dev)
EXPORT_SYMBOL(qeth_osn_deregister);
module_init(qeth_l2_init);
module_exit(qeth_l2_exit);
MODULE_AUTHOR("Frank Blaschka <frank.blaschka@de.ibm.com>");
MODULE_DESCRIPTION("qeth layer 2 discipline");
MODULE_LICENSE("GPL");
