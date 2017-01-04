#define _LINUX_IF_VLAN_H_
#define VLAN_HLEN	4
#define VLAN_ETH_ALEN	6
#define VLAN_ETH_HLEN	18
#define VLAN_ETH_ZLEN	64
#define VLAN_ETH_DATA_LEN	1500
#define VLAN_ETH_FRAME_LEN	1518
struct vlan_hdr ;
struct vlan_ethhdr ;
static inline struct vlan_ethhdr *vlan_eth_hdr(const struct sk_buff *skb)
#define VLAN_PRIO_MASK		0xe000
#define VLAN_PRIO_SHIFT		13
#define VLAN_CFI_MASK		0x1000
#define VLAN_TAG_PRESENT	VLAN_CFI_MASK
#define VLAN_VID_MASK		0x0fff
#define VLAN_N_VID		4096
extern void vlan_ioctl_set(int (*hook)(struct net *, void __user *));
#define VLAN_GROUP_ARRAY_SPLIT_PARTS  8
#define VLAN_GROUP_ARRAY_PART_LEN     (VLAN_N_VID/VLAN_GROUP_ARRAY_SPLIT_PARTS)
struct vlan_group ;
static inline struct net_device *vlan_group_get_device(struct vlan_group *vg,
u16 vlan_id)
static inline void vlan_group_set_device(struct vlan_group *vg,
u16 vlan_id,
struct net_device *dev)
static inline int is_vlan_dev(struct net_device *dev)
#define vlan_tx_tag_present(__skb)	((__skb)->vlan_tci & VLAN_TAG_PRESENT)
#define vlan_tx_tag_get(__skb)		((__skb)->vlan_tci & ~VLAN_TAG_PRESENT)
#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
static inline struct net_device *vlan_find_dev(struct net_device *real_dev,
u16 vlan_id)
extern struct net_device *vlan_dev_real_dev(const struct net_device *dev);
extern u16 vlan_dev_vlan_id(const struct net_device *dev);
extern int __vlan_hwaccel_rx(struct sk_buff *skb, struct vlan_group *grp,
u16 vlan_tci, int polling);
extern bool vlan_do_receive(struct sk_buff **skb);
extern struct sk_buff *vlan_untag(struct sk_buff *skb);
extern gro_result_t
vlan_gro_receive(struct napi_struct *napi, struct vlan_group *grp,
unsigned int vlan_tci, struct sk_buff *skb);
extern gro_result_t
vlan_gro_frags(struct napi_struct *napi, struct vlan_group *grp,
unsigned int vlan_tci);
static inline struct net_device *vlan_find_dev(struct net_device *real_dev,
u16 vlan_id)
static inline struct net_device *vlan_dev_real_dev(const struct net_device *dev)
static inline u16 vlan_dev_vlan_id(const struct net_device *dev)
static inline int __vlan_hwaccel_rx(struct sk_buff *skb, struct vlan_group *grp,
u16 vlan_tci, int polling)
static inline bool vlan_do_receive(struct sk_buff **skb)
static inline struct sk_buff *vlan_untag(struct sk_buff *skb)
static inline gro_result_t
vlan_gro_receive(struct napi_struct *napi, struct vlan_group *grp,
unsigned int vlan_tci, struct sk_buff *skb)
static inline gro_result_t
vlan_gro_frags(struct napi_struct *napi, struct vlan_group *grp,
unsigned int vlan_tci)
static inline int vlan_hwaccel_rx(struct sk_buff *skb,
struct vlan_group *grp,
u16 vlan_tci)
static inline int vlan_hwaccel_receive_skb(struct sk_buff *skb,
struct vlan_group *grp,
u16 vlan_tci)
static inline struct sk_buff *vlan_insert_tag(struct sk_buff *skb, u16 vlan_tci)
static inline struct sk_buff *__vlan_put_tag(struct sk_buff *skb, u16 vlan_tci)
static inline struct sk_buff *__vlan_hwaccel_put_tag(struct sk_buff *skb,
u16 vlan_tci)
#define HAVE_VLAN_PUT_TAG
static inline struct sk_buff *vlan_put_tag(struct sk_buff *skb, u16 vlan_tci)
static inline int __vlan_get_tag(const struct sk_buff *skb, u16 *vlan_tci)
static inline int __vlan_hwaccel_get_tag(const struct sk_buff *skb,
u16 *vlan_tci)
#define HAVE_VLAN_GET_TAG
static inline int vlan_get_tag(const struct sk_buff *skb, u16 *vlan_tci)
static inline __be16 vlan_get_protocol(const struct sk_buff *skb)
enum vlan_ioctl_cmds ;
enum vlan_flags ;
enum vlan_name_types ;
struct vlan_ioctl_args ;
