#define GARP_GVRP_ADDRESS
enum gvrp_attributes ;
#define GVRP_ATTR_MAX	(__GVRP_ATTR_MAX - 1)
static struct garp_application vlan_gvrp_app __read_mostly = ;
int vlan_gvrp_request_join(const struct net_device *dev)
void vlan_gvrp_request_leave(const struct net_device *dev)
int vlan_gvrp_init_applicant(struct net_device *dev)
void vlan_gvrp_uninit_applicant(struct net_device *dev)
int __init vlan_gvrp_init(void)
void vlan_gvrp_uninit(void)
