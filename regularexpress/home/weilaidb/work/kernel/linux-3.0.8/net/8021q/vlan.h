#define __BEN_VLAN_802_1Q_INC__
struct vlan_priority_tci_mapping ;
struct vlan_pcpu_stats ;
struct vlan_dev_info ;
static inline struct vlan_dev_info *vlan_dev_info(const struct net_device *dev)
void vlan_dev_set_ingress_priority(const struct net_device *dev,
u32 skb_prio, u16 vlan_prio);
int vlan_dev_set_egress_priority(const struct net_device *dev,
u32 skb_prio, u16 vlan_prio);
int vlan_dev_change_flags(const struct net_device *dev, u32 flag, u32 mask);
void vlan_dev_get_realdev_name(const struct net_device *dev, char *result);
int vlan_check_real_dev(struct net_device *real_dev, u16 vlan_id);
void vlan_setup(struct net_device *dev);
int register_vlan_dev(struct net_device *dev);
void unregister_vlan_dev(struct net_device *dev, struct list_head *head);
static inline u32 vlan_get_ingress_priority(struct net_device *dev,
u16 vlan_tci)
extern int vlan_gvrp_request_join(const struct net_device *dev);
extern void vlan_gvrp_request_leave(const struct net_device *dev);
extern int vlan_gvrp_init_applicant(struct net_device *dev);
extern void vlan_gvrp_uninit_applicant(struct net_device *dev);
extern int vlan_gvrp_init(void);
extern void vlan_gvrp_uninit(void);
static inline int vlan_gvrp_request_join(const struct net_device *dev)
static inline void vlan_gvrp_request_leave(const struct net_device *dev)
static inline int vlan_gvrp_init_applicant(struct net_device *dev)
static inline void vlan_gvrp_uninit_applicant(struct net_device *dev)
static inline int vlan_gvrp_init(void)
static inline void vlan_gvrp_uninit(void)
extern const char vlan_fullname[];
extern const char vlan_version[];
extern int vlan_netlink_init(void);
extern void vlan_netlink_fini(void);
extern struct rtnl_link_ops vlan_link_ops;
extern int vlan_net_id;
struct proc_dir_entry;
struct vlan_net ;
