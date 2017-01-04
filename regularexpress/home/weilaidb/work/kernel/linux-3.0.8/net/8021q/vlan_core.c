bool vlan_do_receive(struct sk_buff **skbp)
struct net_device *vlan_dev_real_dev(const struct net_device *dev)
EXPORT_SYMBOL(vlan_dev_real_dev);
u16 vlan_dev_vlan_id(const struct net_device *dev)
EXPORT_SYMBOL(vlan_dev_vlan_id);
int __vlan_hwaccel_rx(struct sk_buff *skb, struct vlan_group *grp,
u16 vlan_tci, int polling)
EXPORT_SYMBOL(__vlan_hwaccel_rx);
gro_result_t vlan_gro_receive(struct napi_struct *napi, struct vlan_group *grp,
unsigned int vlan_tci, struct sk_buff *skb)
EXPORT_SYMBOL(vlan_gro_receive);
gro_result_t vlan_gro_frags(struct napi_struct *napi, struct vlan_group *grp,
unsigned int vlan_tci)
EXPORT_SYMBOL(vlan_gro_frags);
static struct sk_buff *vlan_reorder_header(struct sk_buff *skb)
static void vlan_set_encap_proto(struct sk_buff *skb, struct vlan_hdr *vhdr)
struct sk_buff *vlan_untag(struct sk_buff *skb)
