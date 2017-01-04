#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
static void MPOA_trigger_rcvd(struct k_message *msg, struct mpoa_client *mpc);
static void MPOA_res_reply_rcvd(struct k_message *msg, struct mpoa_client *mpc);
static void ingress_purge_rcvd(struct k_message *msg, struct mpoa_client *mpc);
static void egress_purge_rcvd(struct k_message *msg, struct mpoa_client *mpc);
static void mps_death(struct k_message *msg, struct mpoa_client *mpc);
static void clean_up(struct k_message *msg, struct mpoa_client *mpc,
int action);
static void MPOA_cache_impos_rcvd(struct k_message *msg,
struct mpoa_client *mpc);
static void set_mpc_ctrl_addr_rcvd(struct k_message *mesg,
struct mpoa_client *mpc);
static void set_mps_mac_addr_rcvd(struct k_message *mesg,
struct mpoa_client *mpc);
static const uint8_t *copy_macs(struct mpoa_client *mpc,
const uint8_t *router_mac,
const uint8_t *tlvs, uint8_t mps_macs,
uint8_t device_type);
static void purge_egress_shortcut(struct atm_vcc *vcc, eg_cache_entry *entry);
static void send_set_mps_ctrl_addr(const char *addr, struct mpoa_client *mpc);
static void mpoad_close(struct atm_vcc *vcc);
static int msg_from_mpoad(struct atm_vcc *vcc, struct sk_buff *skb);
static void mpc_push(struct atm_vcc *vcc, struct sk_buff *skb);
static netdev_tx_t mpc_send_packet(struct sk_buff *skb,
struct net_device *dev);
static int mpoa_event_listener(struct notifier_block *mpoa_notifier,
unsigned long event, void *dev);
static void mpc_timer_refresh(void);
static void mpc_cache_check(unsigned long checking_time);
static struct llc_snap_hdr llc_snap_mpoa_ctrl = ;
static struct llc_snap_hdr llc_snap_mpoa_data = ;
static struct llc_snap_hdr llc_snap_mpoa_data_tagged = ;
static struct notifier_block mpoa_notifier = ;
struct mpoa_client *mpcs = NULL;
static struct atm_mpoa_qos *qos_head = NULL;
static DEFINE_TIMER(mpc_timer, NULL, 0, 0);
static struct mpoa_client *find_mpc_by_itfnum(int itf)
static struct mpoa_client *find_mpc_by_vcc(struct atm_vcc *vcc)
static struct mpoa_client *find_mpc_by_lec(struct net_device *dev)
struct atm_mpoa_qos *atm_mpoa_add_qos(__be32 dst_ip, struct atm_qos *qos)
struct atm_mpoa_qos *atm_mpoa_search_qos(__be32 dst_ip)
int atm_mpoa_delete_qos(struct atm_mpoa_qos *entry)
void atm_mpoa_disp_qos(struct seq_file *m)
static struct net_device *find_lec_by_itfnum(int itf)
static struct mpoa_client *alloc_mpc(void)
static void start_mpc(struct mpoa_client *mpc, struct net_device *dev)
static void stop_mpc(struct mpoa_client *mpc)
static const char *mpoa_device_type_string(char type) __attribute__ ((unused));
static const char *mpoa_device_type_string(char type)
static void lane2_assoc_ind(struct net_device *dev, const u8 *mac_addr,
const u8 *tlvs, u32 sizeoftlvs)
static const uint8_t *copy_macs(struct mpoa_client *mpc,
const uint8_t *router_mac,
const uint8_t *tlvs, uint8_t mps_macs,
uint8_t device_type)
static int send_via_shortcut(struct sk_buff *skb, struct mpoa_client *mpc)
static netdev_tx_t mpc_send_packet(struct sk_buff *skb,
struct net_device *dev)
static int atm_mpoa_vcc_attach(struct atm_vcc *vcc, void __user *arg)
static void mpc_vcc_close(struct atm_vcc *vcc, struct net_device *dev)
static void mpc_push(struct atm_vcc *vcc, struct sk_buff *skb)
static struct atmdev_ops mpc_ops = ;
static struct atm_dev mpc_dev = ;
static int atm_mpoa_mpoad_attach(struct atm_vcc *vcc, int arg)
static void send_set_mps_ctrl_addr(const char *addr, struct mpoa_client *mpc)
static void mpoad_close(struct atm_vcc *vcc)
static int msg_from_mpoad(struct atm_vcc *vcc, struct sk_buff *skb)
int msg_to_mpoad(struct k_message *mesg, struct mpoa_client *mpc)
static int mpoa_event_listener(struct notifier_block *mpoa_notifier,
unsigned long event, void *dev_ptr)
static void MPOA_trigger_rcvd(struct k_message *msg, struct mpoa_client *mpc)
static void check_qos_and_open_shortcut(struct k_message *msg,
struct mpoa_client *client,
in_cache_entry *entry)
static void MPOA_res_reply_rcvd(struct k_message *msg, struct mpoa_client *mpc)
static void ingress_purge_rcvd(struct k_message *msg, struct mpoa_client *mpc)
static void egress_purge_rcvd(struct k_message *msg, struct mpoa_client *mpc)
static void purge_egress_shortcut(struct atm_vcc *vcc, eg_cache_entry *entry)
static void mps_death(struct k_message *msg, struct mpoa_client *mpc)
static void MPOA_cache_impos_rcvd(struct k_message *msg,
struct mpoa_client *mpc)
static void set_mpc_ctrl_addr_rcvd(struct k_message *mesg,
struct mpoa_client *mpc)
static void set_mps_mac_addr_rcvd(struct k_message *msg,
struct mpoa_client *client)
static void clean_up(struct k_message *msg, struct mpoa_client *mpc, int action)
static void mpc_timer_refresh(void)
static void mpc_cache_check(unsigned long checking_time)
static int atm_mpoa_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static struct atm_ioctl atm_ioctl_ops = ;
static __init int atm_mpoa_init(void)
static void __exit atm_mpoa_cleanup(void)
module_init(atm_mpoa_init);
module_exit(atm_mpoa_cleanup);
MODULE_LICENSE("GPL");
