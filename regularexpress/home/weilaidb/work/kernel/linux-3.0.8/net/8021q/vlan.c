#define DRV_VERSION "1.8"
int vlan_net_id __read_mostly;
const char vlan_fullname[] = "802.1Q VLAN Support";
const char vlan_version[] = DRV_VERSION;
static void vlan_group_free(struct vlan_group *grp)
static struct vlan_group *vlan_group_alloc(struct net_device *real_dev)
static int vlan_group_prealloc_vid(struct vlan_group *vg, u16 vlan_id)
static void vlan_rcu_free(struct rcu_head *rcu)
void unregister_vlan_dev(struct net_device *dev, struct list_head *head)
int vlan_check_real_dev(struct net_device *real_dev, u16 vlan_id)
int register_vlan_dev(struct net_device *dev)
static int register_vlan_device(struct net_device *real_dev, u16 vlan_id)
static void vlan_sync_address(struct net_device *dev,
struct net_device *vlandev)
static void vlan_transfer_features(struct net_device *dev,
struct net_device *vlandev)
static void __vlan_device_event(struct net_device *dev, unsigned long event)
static int vlan_device_event(struct notifier_block *unused, unsigned long event,
void *ptr)
static struct notifier_block vlan_notifier_block __read_mostly = ;
static int vlan_ioctl_handler(struct net *net, void __user *arg)
static int __net_init vlan_init_net(struct net *net)
static void __net_exit vlan_exit_net(struct net *net)
static struct pernet_operations vlan_net_ops = ;
static int __init vlan_proto_init(void)
static void __exit vlan_cleanup_module(void)
module_init(vlan_proto_init);
module_exit(vlan_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
