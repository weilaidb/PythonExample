#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static void bond_glean_dev_ipv6(struct net_device *dev, struct in6_addr *addr)
static void bond_na_send(struct net_device *slave_dev,
struct in6_addr *daddr,
int router,
unsigned short vlan_id)
void bond_send_unsolicited_na(struct bonding *bond)
static int bond_inet6addr_event(struct notifier_block *this,
unsigned long event,
void *ptr)
static struct notifier_block bond_inet6addr_notifier = ;
void bond_register_ipv6_notifier(void)
void bond_unregister_ipv6_notifier(void)
