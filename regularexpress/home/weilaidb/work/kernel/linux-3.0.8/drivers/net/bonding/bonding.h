#define _LINUX_BONDING_H
#define DRV_VERSION	"3.7.1"
#define DRV_RELDATE	"April 27, 2011"
#define DRV_NAME	"bonding"
#define DRV_DESCRIPTION	"Ethernet Channel Bonding Driver"
#define bond_version DRV_DESCRIPTION ": v" DRV_VERSION " (" DRV_RELDATE ")\n"
#define BOND_MAX_ARP_TARGETS	16
#define IS_UP(dev)					   \
((((dev)->flags & IFF_UP) == IFF_UP)	&& \
netif_running(dev)			&& \
netif_carrier_ok(dev))
#define SLAVE_IS_OK(slave)			        \
(((slave)->dev->flags & IFF_UP)  && \
netif_running((slave)->dev)     && \
((slave)->link == BOND_LINK_UP) && \
bond_is_active_slave(slave))
#define USES_PRIMARY(mode)				\
(((mode) == BOND_MODE_ACTIVEBACKUP) ||	\
((mode) == BOND_MODE_TLB)          ||	\
((mode) == BOND_MODE_ALB))
#define TX_QUEUE_OVERRIDE(mode)				\
(((mode) == BOND_MODE_ACTIVEBACKUP) ||	\
((mode) == BOND_MODE_ROUNDROBIN))
#define IOCTL(dev, arg, cmd) ()
#define bond_for_each_slave_from(bond, pos, cnt, start)	\
for (cnt = 0, pos = start;				\
cnt < (bond)->slave_cnt;				\
cnt++, pos = (pos)->next)
#define bond_for_each_slave_from_to(bond, pos, cnt, start, stop)	\
for (cnt = 0, pos = start;					\
((cnt < (bond)->slave_cnt) && (pos != (stop)->next));	\
cnt++, pos = (pos)->next)
#define bond_for_each_slave(bond, pos, cnt)	\
bond_for_each_slave_from(bond, pos, cnt, (bond)->first_slave)
extern atomic_t netpoll_block_tx;
static inline void block_netpoll_tx(void)
static inline void unblock_netpoll_tx(void)
static inline int is_netpoll_tx_blocked(struct net_device *dev)
#define block_netpoll_tx()
#define unblock_netpoll_tx()
#define is_netpoll_tx_blocked(dev) (0)
struct bond_params ;
struct bond_parm_tbl ;
#define BOND_MAX_MODENAME_LEN 20
struct vlan_entry ;
struct slave ;
#define BOND_LINK_NOCHANGE -1
struct bonding ;
#define bond_slave_get_rcu(dev) \
((struct slave *) rcu_dereference(dev->rx_handler_data))
static inline struct slave *bond_get_slave_by_dev(struct bonding *bond,
struct net_device *slave_dev)
static inline struct bonding *bond_get_bond_by_slave(struct slave *slave)
static inline bool bond_is_lb(const struct bonding *bond)
static inline void bond_set_active_slave(struct slave *slave)
static inline void bond_set_backup_slave(struct slave *slave)
static inline int bond_slave_state(struct slave *slave)
static inline bool bond_is_active_slave(struct slave *slave)
#define BOND_PRI_RESELECT_ALWAYS	0
#define BOND_PRI_RESELECT_BETTER	1
#define BOND_PRI_RESELECT_FAILURE	2
#define BOND_FOM_NONE			0
#define BOND_FOM_ACTIVE			1
#define BOND_FOM_FOLLOW			2
#define BOND_ARP_VALIDATE_NONE		0
#define BOND_ARP_VALIDATE_ACTIVE	(1 << BOND_STATE_ACTIVE)
#define BOND_ARP_VALIDATE_BACKUP	(1 << BOND_STATE_BACKUP)
#define BOND_ARP_VALIDATE_ALL		(BOND_ARP_VALIDATE_ACTIVE | \
BOND_ARP_VALIDATE_BACKUP)
static inline int slave_do_arp_validate(struct bonding *bond,
struct slave *slave)
static inline unsigned long slave_last_rx(struct bonding *bond,
struct slave *slave)
static inline void bond_netpoll_send_skb(const struct slave *slave,
struct sk_buff *skb)
static inline void bond_netpoll_send_skb(const struct slave *slave,
struct sk_buff *skb)
static inline void bond_set_slave_inactive_flags(struct slave *slave)
static inline void bond_set_slave_active_flags(struct slave *slave)
static inline bool bond_is_slave_inactive(struct slave *slave)
struct vlan_entry *bond_next_vlan(struct bonding *bond, struct vlan_entry *curr);
int bond_dev_queue_xmit(struct bonding *bond, struct sk_buff *skb, struct net_device *slave_dev);
int bond_create(struct net *net, const char *name);
int bond_create_sysfs(void);
void bond_destroy_sysfs(void);
void bond_prepare_sysfs_group(struct bonding *bond);
int bond_create_slave_symlinks(struct net_device *master, struct net_device *slave);
void bond_destroy_slave_symlinks(struct net_device *master, struct net_device *slave);
int bond_enslave(struct net_device *bond_dev, struct net_device *slave_dev);
int bond_release(struct net_device *bond_dev, struct net_device *slave_dev);
void bond_mii_monitor(struct work_struct *);
void bond_loadbalance_arp_mon(struct work_struct *);
void bond_activebackup_arp_mon(struct work_struct *);
void bond_set_mode_ops(struct bonding *bond, int mode);
int bond_parse_parm(const char *mode_arg, const struct bond_parm_tbl *tbl);
void bond_select_active_slave(struct bonding *bond);
void bond_change_active_slave(struct bonding *bond, struct slave *new_active);
void bond_create_debugfs(void);
void bond_destroy_debugfs(void);
void bond_debug_register(struct bonding *bond);
void bond_debug_unregister(struct bonding *bond);
void bond_debug_reregister(struct bonding *bond);
const char *bond_mode_name(int mode);
struct bond_net ;
void bond_create_proc_entry(struct bonding *bond);
void bond_remove_proc_entry(struct bonding *bond);
void bond_create_proc_dir(struct bond_net *bn);
void bond_destroy_proc_dir(struct bond_net *bn);
static inline void bond_create_proc_entry(struct bonding *bond)
static inline void bond_remove_proc_entry(struct bonding *bond)
static inline void bond_create_proc_dir(struct bond_net *bn)
static inline void bond_destroy_proc_dir(struct bond_net *bn)
extern int bond_net_id;
extern const struct bond_parm_tbl bond_lacp_tbl[];
extern const struct bond_parm_tbl bond_mode_tbl[];
extern const struct bond_parm_tbl xmit_hashtype_tbl[];
extern const struct bond_parm_tbl arp_validate_tbl[];
extern const struct bond_parm_tbl fail_over_mac_tbl[];
extern const struct bond_parm_tbl pri_reselect_tbl[];
extern struct bond_parm_tbl ad_select_tbl[];
