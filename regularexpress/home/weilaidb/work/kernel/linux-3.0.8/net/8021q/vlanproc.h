#define __BEN_VLAN_PROC_INC__
struct net;
int vlan_proc_init(struct net *net);
int vlan_proc_rem_dev(struct net_device *vlandev);
int vlan_proc_add_dev(struct net_device *vlandev);
void vlan_proc_cleanup(struct net *net);
#define vlan_proc_init(net)	(0)
#define vlan_proc_cleanup(net)	do  while (0)
#define vlan_proc_add_dev(dev)	()
#define vlan_proc_rem_dev(dev)	()
